using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace CarParkingManager
{
    public class DataManager
    {
        private DataManager()
        {
            Load();
        }
        public List<ParkingCar> parkingAreas = new List<ParkingCar>();
        private static DataManager instance;
        public static DataManager Instance
        {
            get
            {
                if (instance == null)
                    instance = new DataManager();
                return instance;
            }
        }

        const string PARKINGSPOT = "parkingSpot";
        const string CARNUMBER = "carNumber";
        const string DRIVERNAME = "driverName";
        const string PHONENUMBER = "phoneNumber";
        const string PARKINGTIME = "parkingTime";

        const string PFILE = "./Parkings.xml";

        string makeTag(string tag, string contents)
        {
            return $"<{tag}>{contents}</{tag}>\n";
        }
        public void Load()
        {

            try
            {
                string pOutput = File.ReadAllText(PFILE); //using System.IO;
                XElement parkingCarX = XElement.Parse(pOutput);
                parkingAreas.Clear(); //books 초기화
                foreach (var item in parkingCarX.Descendants("parkingCar"))
                {
                    ParkingCar p = new ParkingCar();
                    p.parkingSpot = int.Parse(item.Element(PARKINGSPOT).Value);
                    p.carNumber = item.Element(CARNUMBER).Value;
                    p.driverName = item.Element(DRIVERNAME).Value;
                    p.phoneNumber = item.Element(PHONENUMBER).Value;
                    p.parkingTime = DateTime.Parse(item.Element(PARKINGTIME).Value);
                    parkingAreas.Add(p);
                }
            }
            catch (Exception e)
            {
                Save();
                Load();
            }
        }
        public void printLog(string v) //기록을 남기는 용도
        {
            DirectoryInfo di = new DirectoryInfo("parkingHistory");
            if (di.Exists == false)
                di.Create(); //해당 경로 없으면 새로 만듦
            //@"parkingHistory\parkingHistory.txt"
            //"parkingHistory\\parkingHistory.txt"
            //끝에 true가 붙어서 새로운 내용이 parkingHistory.txt에 계속 append(이어붙여짐)
            using (StreamWriter w = new StreamWriter(@"parkingHistory\parkingHistory.txt", true))
            {
                w.WriteLine(v);
            }

        }
        public void Save() //파일 갱신, 새로 만들기
        {
            string parkingCarsOutput = "";
            parkingCarsOutput += "<parkingAreas>\n";
            foreach (var item in parkingAreas)
            {
                parkingCarsOutput += "\t<parkingCar>" + Environment.NewLine; //Environment.NewLine=\n
                parkingCarsOutput += "\t\t" + makeTag(PARKINGSPOT, item.parkingSpot + "");
                parkingCarsOutput += "\t\t" + makeTag(CARNUMBER, item.carNumber);
                parkingCarsOutput += "\t\t" + makeTag(DRIVERNAME, item.driverName);
                parkingCarsOutput += "\t\t" + makeTag(PHONENUMBER, item.phoneNumber);
                parkingCarsOutput += "\t\t" + makeTag(PARKINGTIME, item.parkingTime.ToString());
                parkingCarsOutput += "\t</parkingCar>" + Environment.NewLine;
            }
            parkingCarsOutput += "</parkingAreas>\n";
            File.WriteAllText(PFILE, parkingCarsOutput); //기존 내용 다 지우고 새로운 내용으로 다 채워넣음
        }
        //주차 출차용 Save
        //Save(new ParkingCar(), true) -> isRemove 값은 true
        //Save(new ParkingCar()) -> isRemove 값은 기본 값으로 지정해 둔 false
        public void Save(ParkingCar parkingArea, bool isRemove = false)
        {
            for (int i = 0; i < parkingAreas.Count; i++)
            {
                if (parkingAreas[i].parkingSpot == parkingArea.parkingSpot)
                {

                    if (isRemove)
                    {
                        parkingAreas[i].carNumber = "";
                        parkingAreas[i].driverName = "";
                        parkingAreas[i].phoneNumber = "";
                        parkingAreas[i].parkingTime = new DateTime();
                    }
                    else
                    {
                        parkingAreas[i].carNumber = parkingArea.carNumber;
                        parkingAreas[i].driverName = parkingArea.driverName;
                        parkingAreas[i].phoneNumber = parkingArea.phoneNumber;
                        parkingAreas[i].parkingTime = DateTime.Now;
                    }
                    break;
                }

            }

        }
        //주차공간을 추가/삭제하는 Save
        public bool Save(string cmd, int parkingSpot, out string contents)
        {
            contents = "";
            bool isExist = parkingAreas.Exists(item=>item.parkingSpot== parkingSpot);
            if (cmd.Equals("insert"))
            {
                if(!isExist)
                {
                    parkingAreas.Add(new ParkingCar() { parkingSpot = parkingSpot });
                    contents = $"주차공간 {parkingSpot} 추가 완료";
                    return true;
                }
                else
                {
                    contents = "해당 주차 공간 이미 존재함";
                    return false;
                }
            }
            else
            {
                if(!isExist)
                {
                    contents = "해당 주차 공간 아직 없으니 삭제 불가능";
                    return false;
                }
                else
                {
                    ParkingCar parkingCar = parkingAreas.Single(item=>item.parkingSpot == parkingSpot);
                    parkingAreas.Remove(parkingCar);
                    contents = $"주차 공간 {parkingSpot} 삭제됨";
                    return true;
                }
            }
        }
    }
}
