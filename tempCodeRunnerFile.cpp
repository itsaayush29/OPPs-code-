            }

        else cout<<"incorrect pin";
         getch();
        system("CLS");
         
        break;  
             
case 3:
         cout<<"Enter the pin ";
               cin>>pin;
               system("CLS");
        if(pin==1234){
        
            cout<<"\n1. Cash transfer ";
            cout<<"\n2. Atm/ Debit card block";
             cin>>num;
             system("CLS");
            switch(num){
    case 1:
                 cout<<"Enter the account number : \n";
                 cin>>account;
                 system("CLS");
                 cout<<"Enter the amount \n";
                 cin>>amount;
                 system("CLS");
                 cout<<"Enter pin \n";
                 cin>>pin;
                 system("CLS");
        if(pin==1234){
          if(amount>balance){
                         cout<<"Insufficent balance\n";
                         getch();
                         system("CLS");
                 }
          else if(amount<=balance)  {
                     cout<<"Please wait while your transaction is processed\n";
                     getch();
                     system("CLS");
                     cout<<"Completed"<<endl;
                     getch();
                     system("CLS");
                     cout<<"Remaining amount : "<<balance-amount<<endl;
                 }
                }
        else cout<<"incorrect pin ";
        break;
    case 2:
                 cout<<"Please enter your 12 digit card number \n";
                 cin>>card;
                 system("CLS");
                 cout<<"Type 1 for confirmation and 2 for cancellation \n";
                 cin>>n;
                 system("CLS");
        if(n==1){
                     cout<<"Please enter your pin\n";
                 cin>>pin;
                 system("CLS");
          if(pin==1234){
                     cout<<"Card blocked sucessfully\n";
                     
                 }
          else cout<<"incorrect pin\n";
                 getch();
                     system("CLS");
                 }
        else{
                     cout<<"Thank you";
                 }                
             }
            }
        else cout<<"incorrect pin"<<endl;
            getch();
            system("CLS");
case 4:
        exit(0);
             }
         cout<<"Thank you";
         }       
   };
int main(){
    int num;
    cout<<"W E L C O M E  T O  A P N A  A T M\n"<<endl;
    
    cout<<"Please choose your account"<<endl;
    cout<<"1. Current acount"<<endl;
    cout<<"2. Saving account"<<endl;
     ATM obj(1234,5000);
     ATM obj1(4567,10000);
    switch(num){
        case 1:
     cout<<ATM obj1();
      break;
      case 2:
        cout<<ATM obj();