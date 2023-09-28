

void Table::drawtable(){
    for(int i = 3; i <= 20; i++){
        for(int j = 3; j <= 20; j++){
            stroke("┳━┳");
            point(i, j);
            j+=4;
        }
        i+=4;
    }
}
void Table::drawOpponents(){

}
void Table::runRound(){

}