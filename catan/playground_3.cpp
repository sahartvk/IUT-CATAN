#include "playground_3.h"
#include "ui_playground_3.h"
#include<QPushButton>
#include<fstream>

playground_3::playground_3(QWidget *parent,QTcpSocket* _clientSocket) :
    QMainWindow(parent),
    ui(new Ui::playground_3)
{
    clientSocket=_clientSocket;

    ui->setupUi(this);

    //make vector of push buttons
    initialPushButton();

    p=new Player();
    m=new Map();

    ui->building->addItem(QIcon(":/prefix1/image/3154665.png"),"Road");
    ui->building->addItem(QIcon(":/prefix1/image/3916977.png"),"City");
    ui->building->addItem(QIcon(":/prefix1/image/3609777.png"),"Settelment");
    ui->building->addItem(QIcon(":/prefix1/image/4827397.png"),"Bridge");

    connect(clientSocket,SIGNAL(readyRead()),this,SLOT(readingData()));
    connect(clientSocket,SIGNAL(disconnected()),this,SLOT(disconnectFromServer()));

    connect(ui->developmentcard,SIGNAL(clicked()),this,SLOT(developmentcardClicked()));
    connect(ui->dice,SIGNAL(clicked()),this,SLOT(diceClicked()));
    connect(ui->end,SIGNAL(clicked()),this,SLOT(finishTurnClicked()));
    connect(ui->trade,SIGNAL(clicked()),this,SLOT(tradeClicked()));
    //connect(ui->ok,SIGNAL(clicked(bool)),this,SLOT(onOk()));
    //connect(ui->robber,SIGNAL(clicked(bool)),this,SLOT(onRobber()));
}


playground_3::~playground_3()
{
    delete ui;
}

void playground_3::initialPushButton()
{
    //initial pushbutton of vertice
    v.push_back(ui->v1);
    v.push_back(ui->v2);
    v.push_back(ui->v3);
    v.push_back(ui->v4);
    v.push_back(ui->v5);
    v.push_back(ui->v6);
    v.push_back(ui->v7);
    v.push_back(ui->v8);
    v.push_back(ui->v9);
    v.push_back(ui->v10);
    v.push_back(ui->v11);
    v.push_back(ui->v12);
    v.push_back(ui->v13);
    v.push_back(ui->v14);
    v.push_back(ui->v15);
    v.push_back(ui->v16);
    v.push_back(ui->v17);
    v.push_back(ui->v18);
    v.push_back(ui->v19);
    v.push_back(ui->v20);
    v.push_back(ui->v21);
    v.push_back(ui->v22);
    v.push_back(ui->v23);
    v.push_back(ui->v24);
    v.push_back(ui->v25);
    v.push_back(ui->v26);
    v.push_back(ui->v27);
    v.push_back(ui->v28);
    v.push_back(ui->v29);
    v.push_back(ui->v30);
    v.push_back(ui->v31);
    v.push_back(ui->v32);
    v.push_back(ui->v33);
    v.push_back(ui->v34);
    v.push_back(ui->v35);
    v.push_back(ui->v36);
    v.push_back(ui->v37);
    v.push_back(ui->v38);
    v.push_back(ui->v39);
    v.push_back(ui->v40);
    v.push_back(ui->v41);
    v.push_back(ui->v42);
    v.push_back(ui->v43);
    v.push_back(ui->v44);
    v.push_back(ui->v45);
    v.push_back(ui->v46);
    v.push_back(ui->v47);
    v.push_back(ui->v48);
    v.push_back(ui->v49);
    v.push_back(ui->v50);
    v.push_back(ui->v51);
    v.push_back(ui->v52);
    v.push_back(ui->v53);
    v.push_back(ui->v54);
    v.push_back(ui->v55);
    v.push_back(ui->v56);
    v.push_back(ui->v57);
    v.push_back(ui->v58);
    v.push_back(ui->v59);
    v.push_back(ui->v60);
    v.push_back(ui->v61);
    v.push_back(ui->v62);
    v.push_back(ui->v63);
    v.push_back(ui->v64);
    v.push_back(ui->v65);
    v.push_back(ui->v66);
    v.push_back(ui->v67);
    v.push_back(ui->v68);
    v.push_back(ui->v69);
    v.push_back(ui->v70);
    v.push_back(ui->v71);
    v.push_back(ui->v72);
    v.push_back(ui->v73);
    v.push_back(ui->v74);
    v.push_back(ui->v75);
    v.push_back(ui->v76);
    v.push_back(ui->v77);
    v.push_back(ui->v78);
    v.push_back(ui->v79);
    v.push_back(ui->v80);
    v.push_back(ui->v81);
    v.push_back(ui->v82);
    v.push_back(ui->v83);
    v.push_back(ui->v84);
    v.push_back(ui->v85);
    v.push_back(ui->v86);
    v.push_back(ui->v87);
    v.push_back(ui->v88);
    v.push_back(ui->v89);
    v.push_back(ui->v90);
    v.push_back(ui->v91);
    v.push_back(ui->v92);

    //initial vector of edge
    e.push_back(ui->e1);
    e.push_back(ui->e2);
    e.push_back(ui->e3);
    e.push_back(ui->e4);
    e.push_back(ui->e5);
    e.push_back(ui->e6);
    e.push_back(ui->e7);
    e.push_back(ui->e8);
    e.push_back(ui->e9);
    e.push_back(ui->e10);
    e.push_back(ui->e11);
    e.push_back(ui->e12);
    e.push_back(ui->e13);
    e.push_back(ui->e14);
    e.push_back(ui->e15);
    e.push_back(ui->e16);
    e.push_back(ui->e17);
    e.push_back(ui->e18);
    e.push_back(ui->e19);
    e.push_back(ui->e20);
    e.push_back(ui->e21);
    e.push_back(ui->e22);
    e.push_back(ui->e23);
    e.push_back(ui->e24);
    e.push_back(ui->e25);
    e.push_back(ui->e26);
    e.push_back(ui->e27);
    e.push_back(ui->e28);
    e.push_back(ui->e29);
    e.push_back(ui->e30);
    e.push_back(ui->e31);
    e.push_back(ui->e32);
    e.push_back(ui->e33);
    e.push_back(ui->e34);
    e.push_back(ui->e35);
    e.push_back(ui->e36);
    e.push_back(ui->e37);
    e.push_back(ui->e38);
    e.push_back(ui->e39);
    e.push_back(ui->e40);
    e.push_back(ui->e41);
    e.push_back(ui->e42);
    e.push_back(ui->e43);
    e.push_back(ui->e44);
    e.push_back(ui->e45);
    e.push_back(ui->e46);
    e.push_back(ui->e47);
    e.push_back(ui->e48);
    e.push_back(ui->e49);
    e.push_back(ui->e50);
    e.push_back(ui->e51);
    e.push_back(ui->e52);
    e.push_back(ui->e53);
    e.push_back(ui->e54);
    e.push_back(ui->e55);
    e.push_back(ui->e56);
    e.push_back(ui->e57);
    e.push_back(ui->e58);
    e.push_back(ui->e59);
    e.push_back(ui->e60);
    e.push_back(ui->e61);
    e.push_back(ui->e62);
    e.push_back(ui->e63);
    e.push_back(ui->e64);
    e.push_back(ui->e65);
    e.push_back(ui->e66);
    e.push_back(ui->e67);
    e.push_back(ui->e68);
    e.push_back(ui->e69);
    e.push_back(ui->e70);
    e.push_back(ui->e71);
    e.push_back(ui->e72);
    e.push_back(ui->e73);
    e.push_back(ui->e74);
    e.push_back(ui->e75);
    e.push_back(ui->e76);
    e.push_back(ui->e77);
    e.push_back(ui->e78);
    e.push_back(ui->e79);
    e.push_back(ui->e80);
    e.push_back(ui->e81);
    e.push_back(ui->e82);
    e.push_back(ui->e83);
    e.push_back(ui->e84);
    e.push_back(ui->e85);
    e.push_back(ui->e86);
    e.push_back(ui->e87);
    e.push_back(ui->e88);
    e.push_back(ui->e89);
    e.push_back(ui->e90);
    e.push_back(ui->e91);
    e.push_back(ui->e92);
    e.push_back(ui->e93);
    e.push_back(ui->e94);
    e.push_back(ui->e95);
    e.push_back(ui->e96);
    e.push_back(ui->e97);
    e.push_back(ui->e98);
    e.push_back(ui->e99);
    e.push_back(ui->e100);
    e.push_back(ui->e101);
    e.push_back(ui->e102);
    e.push_back(ui->e103);
    e.push_back(ui->e104);
    e.push_back(ui->e105);
    e.push_back(ui->e106);
    e.push_back(ui->e107);
    e.push_back(ui->e108);
    e.push_back(ui->e109);
    e.push_back(ui->e110);
    e.push_back(ui->e111);
    e.push_back(ui->e112);
    e.push_back(ui->e113);
    e.push_back(ui->e114);
    e.push_back(ui->e115);
    e.push_back(ui->e116);
    e.push_back(ui->e117);

    //initial pushbutton of bridge
    b.push_back(ui->b1);
    b.push_back(ui->b2);
    b.push_back(ui->b3);
    b.push_back(ui->b4);
    b.push_back(ui->b5);
    b.push_back(ui->b6);
    b.push_back(ui->b7);
    b.push_back(ui->b8);
    b.push_back(ui->b9);
    b.push_back(ui->b10);
    b.push_back(ui->b11);
    b.push_back(ui->b12);
    b.push_back(ui->b13);

    //initial pushbutton of tile
    t.push_back(ui->t1);
    t.push_back(ui->t2);
    t.push_back(ui->t3);
    t.push_back(ui->t4);
    t.push_back(ui->t5);
    t.push_back(ui->t6);
    t.push_back(ui->t7);
    t.push_back(ui->t8);
    t.push_back(ui->t9);
    t.push_back(ui->t10);
    t.push_back(ui->t11);
    t.push_back(ui->t12);
    t.push_back(ui->t13);
    t.push_back(ui->t14);
    t.push_back(ui->t15);
    t.push_back(ui->t16);
    t.push_back(ui->t17);
    t.push_back(ui->t18);
    t.push_back(ui->t19);
    t.push_back(ui->t20);
    t.push_back(ui->t21);
    t.push_back(ui->t22);
    t.push_back(ui->t23);
    t.push_back(ui->t24);
    t.push_back(ui->t25);
    t.push_back(ui->t26);
    t.push_back(ui->t27);
    t.push_back(ui->t28);
}

void playground_3::myWrite(QByteArray& data){

    clientSocket->write(data);
    clientSocket->waitForBytesWritten(-1);
}

void playground_3::myWrite(const char* data){

    clientSocket->write(data);
    clientSocket->waitForBytesWritten(-1);
}

void playground_3::myWrite(QString& data){

    clientSocket->write(data.toUtf8());
    clientSocket->waitForBytesWritten(-1);
}

void playground_3::myRead(QByteArray& data){

    while(!clientSocket->waitForReadyRead(-1));
    data=clientSocket->readAll();
}


//starts from here

void playground_3::readingData(){

//    QByteArray data;
//    myRead(data);

    QByteArray data=clientSocket->readAll();
    //????? what do we do with the data???????

    QString sdata=data;

       if(sdata.contains("color")){

           string s=sdata.toUtf8().constData();
           string color=s.substr(s.find(":")+1);
           p->setColor(color);

           if(color=="blue")
               p->setTurn(1);
           else if(color=="green")
               p->setTurn(2);
           else if(color=="yellow")
               p->setTurn(3);
           else if(color=="red")
               p->setTurn(4);
       }
       else if(sdata.contains("build:S")){

           int n=ui->building->count();
           for(int i=0;i<n;i++)
           {
               ui->building->removeItem(i);
           }
           ui->building->addItem(QIcon(":/prefix1/image/3609777.png"),"Settlement");

           buildingType="settlement";

           //enable and show vertices to put a settlement
           for(int i=0;i<v.size();i++)
           {
               v[i]->setEnabled(true);
               v[i]->setFlat(false);
           }

       }
       else if(sdata.contains("build:R")){

           int n=ui->building->count();
           for(int i=0;i<n;i++)
           {
               ui->building->removeItem(i);
           }
           ui->building->addItem(QIcon(":/prefix1/image/3154665.png"),"Road");
           buildingType="road";

           //show and enable edges to put a road
           for(int i=0;i<e.size();i++)
           {
               e[i]->setEnabled(true);
               e[i]->setFlat(false);
           }
       }
       else if(sdata.contains("stop")){
           //disable all buttons
           for(int i=0;i<e.size();i++)
           {
               e[i]->setEnabled(false);
               e[i]->setFlat(true);
           }
           for(int i=0;i<v.size();i++)
           {
               v[i]->setEnabled(false);
               v[i]->setFlat(true);
           }
           for(int i=0;i<b.size();i++)
           {
               b[i]->setEnabled(false);
               b[i]->setFlat(true);
           }
           for(int i=0;i<t.size();i++)
           {
               t[i]->setEnabled(false);
               t[i]->setFlat(true);
           }
           
           ui->trade->setEnabled(false);
           ui->developmentcard->setEnabled(false);
           ui->ok->setEnabled(false);
           ui->trade->setEnabled(false);
           ui->end->setEnabled(false);
           
       }
       else if(sdata.contains("stopDice")){
           //disable dice button
           ui->dice->setEnabled(false);
       }
       else if(sdata.contains("rollDice")){
           //activate dice pushbutton
           ui->dice->setEnabled(true);
           
       }
       else if(sdata.contains("go")){

           //buildings
           std::vector<std::string> temp;
           temp=p->can_Buy_Building();

           //remove combo elements
           int n=ui->building->count();
           for(int i=0;i<n;i++){
               ui->building->removeItem(i);
           }

           //add elements that can buy to combo box
           for(int i=0;i<temp.size();i++){

               if(temp[i]=="Settelment")
                   ui->building->addItem(QIcon(":/prefix1/image/3609777.png"),"Settelment");
               else if(temp[i]=="Road")
                   ui->building->addItem(QIcon(":/prefix1/image/3154665.png"),"Road");
               else if(temp[i]=="City")
                   ui->building->addItem(QIcon(":/prefix1/image/3916977.png"),"City");
               else if(temp[i]=="Bridge")
                   ui->building->addItem(QIcon(":/prefix1/image/4827397.png"),"Bridge");

           }

           if(p->can_buy_Dev_card()){
               //activate buy dev_cards pushbuttons
               ui->developmentcard->setDisabled(false);

           }

           //activate several pushbuttons
           ui->trade->setEnabled(true);
           ui->end->setEnabled(true);
           ui->ok->setEnabled(true);


       }
       else if(sdata.contains("diceNum")){

           std::string str=sdata.toUtf8().constData();
           int num=std::stoi(str.substr(str.find(":")+1));

           vector<std::string> temp=m->getCards(num,p->getColor());
           p->update_resource(temp);

           //update gui card numbers

           updateNumofCards();

       }
       else if(sdata.contains("robber")){

           //robber page   ??????????
            if(p->getNumOfResourceCard()>7){
                QString temp="Yesrobber";
                //open robber page and choose cards
                QString data;
                //intialize data like (2wood,3 sheap)
                temp+=data;
                myWrite(temp);

            }
            else{
                QString temp="Norobber";
                myWrite(temp);
            }
       }
       else if(sdata.contains("moveRobber")){

           //show and enable push buttons on tile to choose one of them
           for(int i=0;i<28;i++)
           {
               t[i]->setEnabled(true);
               t[i]->setFlat(false);
           }
       }
       else if(sdata.contains("robberToTile")){

           //robberToTile:n
           std::string str=sdata.toUtf8().constData();
           int n=std::stoi(str.substr(str.find(":")+1));
           m->moveRobberToTile(n,p->getColor());

           //update screen
           t[n-1]->setIcon(QIcon(":/prefix1/image/robber.png"));
           t[n-1]->setIconSize(QSize(30,30));

       }
       else if(sdata.contains("s")){
           //s 1:10,9,8-color

           std::string str=sdata.toUtf8().constData();
           m->addBuildingToTile(str);

           //1
           int n=std::stoi(str.substr(str.find(" "),str.find(":")));
           //update gui and put a settelment in n position

       }
       else if(sdata.contains("c")){
           //c 1:10,9,8-color
           std::string str=sdata.toUtf8().constData();
           m->addBuildingToTile(str);

           //1
           int n=std::stoi(str.substr(str.find(" "),str.find(":")));
           //update gui and put a city in n position


       }
       else if(sdata.contains("e")){
           //e 1:color  ????

       }
       else if(sdata.contains("b")){
           //b 1:color  ????


       }
       else if(sdata.contains("development")){

           //development:name

           std::string str=sdata.toUtf8().constData();
           string type=str.substr(str.find(":")+1);
           p->update_Developmentcard(type);

           //how to show develpmwnt cards in gui??????
           //->>> maybe using a combobox and add name of cards to combo
           //show development card in gui

       }
       else{

       }
}


void playground_3::updateNumofCards(){

    if(p->getTurn()==1){
        ui->sheep1->setText(QString::number(p->getSheep_cnt()));
        ui->wheat1->setText(QString::number(p->getWheat_cnt()));
        ui->stone1->setText(QString::number(p->getStone_cnt()));
        ui->wood1->setText(QString::number(p->getWood_cnt()));
        ui->brick1->setText(QString::number(p->getBrick_cnt()));
    }
    else if(p->getTurn()==2){
        ui->sheep2->setText(QString::number(p->getSheep_cnt()));
        ui->wheat2->setText(QString::number(p->getWheat_cnt()));
        ui->stone2->setText(QString::number(p->getStone_cnt()));
        ui->wood2->setText(QString::number(p->getWood_cnt()));
        ui->brick2->setText(QString::number(p->getBrick_cnt()));
    }
    else if(p->getTurn()==3){
        ui->sheep3->setText(QString::number(p->getSheep_cnt()));
        ui->wheat3->setText(QString::number(p->getWheat_cnt()));
        ui->stone3->setText(QString::number(p->getStone_cnt()));
        ui->wood3->setText(QString::number(p->getWood_cnt()));
        ui->brick3->setText(QString::number(p->getBrick_cnt()));
    }
//           else if(p->getTurn()==4){
//               ui->sheep4->setText(p->getSheep_cnt());
//               ui->wheat4->setText(p->getWheat_cnt());
//               ui->stone4->setText(p->getStone_cnt());
//               ui->wood14->setText(p->getWood_cnt());
//               ui->brick14->setText(p->getBrick_cnt());
//           }
}

void playground_3::verticeClicked(){

    QPushButton *button = (QPushButton *)sender();
    QString name = button->objectName();
    string temp =name.toUtf8().constData();
    int i = stoi(temp.substr(temp.find("v")+1));

    if(p->getColor()=="blue")
    {
        if(buildingType=="settlement")
        {
            //gui->put a settlement picture in that button
            v[i-1]->setIcon(QIcon(":/prefix1/image/blue home.png"));
            v[i-1]->setIconSize(QSize(30,30));
        }
        if(buildingType=="city")
        {
            //gui->put a city picture in that button
            v[i-1]->setIcon(QIcon(":/prefix1/image/blue city.png"));
            v[i-1]->setIconSize(QSize(30,30));
        }
    }
    else if(p->getColor()=="yellow")
    {

        if(buildingType=="settlement")
        {
            //gui->put a settlement picture in that button
            v[i-1]->setIcon(QIcon(":/prefix1/image/yellow home.png"));
            v[i-1]->setIconSize(QSize(30,30));
        }
        if(buildingType=="city")
        {
            //gui->put a city picture in that button
            v[i-1]->setIcon(QIcon(":/prefix1/image/yellow city.png"));
            v[i-1]->setIconSize(QSize(30,30));
        }
    }
    else if(p->getColor()=="red")
    {

        if(buildingType=="settlement")
        {
            //gui->put a settlement picture in that button
            v[i-1]->setIcon(QIcon(":/prefix1/image/red home.png"));
            v[i-1]->setIconSize(QSize(30,30));
        }
        if(buildingType=="city")
        {
            //gui->put a city picture in that button
            v[i-1]->setIcon(QIcon(":/prefix1/image/red city.png"));
            v[i-1]->setIconSize(QSize(30,30));
        }
    }
    else if(p->getColor()=="green")
    {

        if(buildingType=="settlement")
        {
            //gui->put a settlement picture in that button
            v[i-1]->setIcon(QIcon(":/prefix1/image/green home.png"));
            v[i-1]->setIconSize(QSize(30,30));
        }
        if(buildingType=="city")
        {
            //gui->put a city picture in that button
            v[i-1]->setIcon(QIcon(":/prefix1/image/green city.png"));
            v[i-1]->setIconSize(QSize(30,30));
        }
    }


    //reduce and update cards
    if(buildingType=="settlement")
        p->buySettlement();
    else if(buildingType=="city")
        p->buyCity();

    updateNumofCards();


    std::ifstream fin;
    fin.open("catan_file.txt");
    string line;

    int lineNum = 0;
    while (lineNum != i && getline(fin, line)) {
        ++lineNum;
    }
    fin.close();

    //seaport adjacent
    if(line.find("#")>=0){

        Seaport sp("anything",1,3);
        p->addseaport(sp);
    }
    else if(line.find("*")>=0){

        string resource=line.substr(line.find("(")+1);
        resource=resource.substr(0,resource.find(")"));

        Seaport sp(resource,1,2);
        p->addseaport(sp);
    }

    string info;
    if(lineNum==i){

        if(buildingType=="settlement")
            info="s ";
        else if(buildingType=="city")
            info="c ";

        info+=to_string(i);

        if(line.find("#")>=0){

            line=line.substr(line.find(":"),line.find("#")-1);
        }
        else if(line.find("*")>=0){

           line=line.substr(line.find(":"),line.find("*")-1);
        }
        else
            line=line.substr(line.find(":"));

        info+=line;

    }

    m->addBuildingToTile(info);

    QString Qinfo=QString::fromStdString(info);

    myWrite(Qinfo);
}

void playground_3::edgeClicked(){
    
    QPushButton *button = (QPushButton *)sender();
    QString name = button->objectName();
    string temp =name.toUtf8().constData();
    int i = stoi(temp.substr(temp.find("v")+1));

    if(p->getColor()=="blue")
    {

        if(buildingType=="road")
        {
            //gui->put a settlement picture in that button
            v[i-1]->setIcon(QIcon(":/prefix1/image/blue road.png"));
            v[i-1]->setIconSize(QSize(30,30));
        }
    }
    else if(p->getColor()=="yellow")
    {

        if(buildingType=="road")
        {
            //gui->put a settlement picture in that button
            v[i-1]->setIcon(QIcon(":/prefix1/image/yellow road.png"));
            v[i-1]->setIconSize(QSize(30,30));
        }
    }
    else if(p->getColor()=="red")
    {

        if(buildingType=="road")
        {
            //gui->put a settlement picture in that button
            v[i-1]->setIcon(QIcon(":/prefix1/image/red road.png"));
            v[i-1]->setIconSize(QSize(30,30));
        }
    }
    else if(p->getColor()=="green")
    {

        if(buildingType=="road")
        {
            //gui->put a settlement picture in that button
            v[i-1]->setIcon(QIcon(":/prefix1/image/green road.png"));
            v[i-1]->setIconSize(QSize(30,30));
        }
    }

    p->buyRoad();
    updateNumofCards();

   //write edge name to server
    name+="-";
    name+=QString::fromStdString(p->getColor());
    myWrite(name);
}


void playground_3::finishTurnClicked(){

    QString sdata="finish";
    myWrite(sdata);
}

void playground_3::diceClicked(){

    int num=p->roll_dice();
    QString info=QString::number(num);

    QString sdata="diceNum:";
    sdata+=info;

    myWrite(sdata);

}

void playground_3::developmentcardClicked(){

    p->buyDevelopment();

    myWrite("buyDevelopment");

}

void playground_3::tradeClicked(){

    trade* t;
    t=new trade();
    t->show();

}

void playground_3::okClicked(){

    //read from combo box
    buildingType=(ui->building->currentText()).toUtf8().constData();

    if( buildingType=="settlement" ||  buildingType=="city"){

        //enable and show vertices to put a settlement
        for(int i=0;i<v.size();i++)
        {
            v[i]->setEnabled(true);
            v[i]->setFlat(false);
        }
    }
    else if(buildingType=="road"){

        //enable and show edges to put a settlement
        for(int i=0;i<e.size();i++)
        {
            e[i]->setEnabled(true);
            e[i]->setFlat(false);
        }
    }

    else if( buildingType=="bridge" ){

        //enable and show edges in the sea to put a settlement
        for(int i=0;i<b.size();i++)
        {
            b[i]->setEnabled(true);
            b[i]->setFlat(false);
        }
    }

}

void playground_3::tileClicked(){

    QPushButton *button = (QPushButton *)sender();
    QString name=button->objectName();

    string temp=name.toUtf8().constData();
    int i=stoi(temp.substr(temp.find("t")+1));

    //set robber picture in the tile
    button->setIcon(QIcon(":/prefix1/image/robber.png"));
    button->setIconSize(QSize(30,30));

    string robberInfo="robberToTile:";
    robberInfo+=to_string(i);

    QString Qstr=QString::fromStdString(robberInfo);
    myWrite(Qstr);

}

void playground_3::bridgeClicked(){

    QPushButton *button = (QPushButton *)sender();

    string color=p->getColor();
    if(color=="red"){
       button->setIcon(QIcon(":/prefix1/image/redbridge.png"));
       button->setIconSize(QSize(30,30));
    }
    if(color=="blue"){
       button->setIcon(QIcon(":/prefix1/image/bluebridge .png"));
       button->setIconSize(QSize(30,30));
    }
    if(color=="green"){
       button->setIcon(QIcon(":/prefix1/image/greenbridge .png"));
       button->setIconSize(QSize(30,30));
    }
    if(color=="yellow"){
       button->setIcon(QIcon(":/prefix1/image/yellowbridge.png"));
       button->setIconSize(QSize(30,30));
    }

    p->buyBridge();
    updateNumofCards();

    QString name=button->objectName();

    name+="-";
    name+=QString::fromStdString(p->getColor());
    myWrite(name);
}
