void debug_println(int size, char* formato, int number){
  char buffer[size]="";
  sprintf(buffer, formato, number);
  Serial.println(buffer);
}
void debug_print(int size, char* formato, int number){
  char buffer[size]="";
  sprintf(buffer, formato, number);
  Serial.print(buffer);
}


 
