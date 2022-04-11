#include<iostream>
using namespace std;

int main() {

    int quant;
    int choice;

    // total quantity
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qrolls = 0;

    // sold quantity
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Srolls = 0;

    // total price
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_rolls = 0;

    cout<<"\n\t Quantity of items we have\n";

    cout<<"\n\t Rooms Available: \n";
    cin>>Qrooms;

    cout<<"\n\t Quantity Of Pasta Available: \n";
    cin>>Qpasta;

    cout<<"\n\t Quantity Of Burger Available: \n";
    cin>>Qburger;

    cout<<"\n\t Quantity Of Noodles Available: \n";
    cin>>Qnoodles;

    cout<<"\n\t Quantity Of Shake Available: \n";
    cin>>Qshake;

    cout<<"\n\t Quantity Of Rolls Available: \n";
    cin>>Qrolls;
    
    m:

    cout<<"\n\t Please select from given menu options: \n";
    cout<<"\n\n";
    cout<<"1) Rooms \n 2) Pasta \n 3) Burger \n 4) Noddles \n 5) Shake \n 6) Rolls \n 7) Information of Sales and collection\n 8) Exit \n";
    
    cout<<"\n\t Please enter choice: \n";
    cin>>choice;

    switch(choice) {
        case 1:
            cout<<"\n\t Enter number of rooms you want: ";
            cin>>quant;

            if(Qrooms-Srooms>=quant) {
                Srooms = Srooms+quant;

                Total_rooms = Total_rooms+quant*1200;
                cout<<"\n\t "<<quant<<" this many rooms have been booked for you\n";

            }
            else {
                cout<<"\n\t Only"<<Qrooms-Srooms<<" rooms are remaining in hotel\n";
            }
            break;
        
        case 2:
            cout<<"\n\t Enter quantity of pasta: ";
            cin>>quant;

            if(Qpasta-Spasta>=quant) {
                Spasta = Spasta+quant;

                Total_pasta = Total_pasta+quant*250;
                cout<<"\n\t "<<quant<<" this many pastas have been ordered for you\n";

            }
            else {
                cout<<"\n\t Only"<<Qpasta-Spasta<<" pastas are remaining in hotel\n";
            }
            break;

        case 3:
            cout<<"\n\t Enter quantity of burger: ";
            cin>>quant;

            if(Qburger-Sburger>=quant) {
                Sburger = Sburger+quant;

                Total_burger = Total_burger+quant*120;
                cout<<"\n\t "<<quant<<" this many burgers have been ordered for you\n";

            }
            else {
                cout<<"\n\t Only"<<Qburger-Sburger<<" burgers are remaining in hotel\n";
            }
            break;

        
        case 4:
            cout<<"\n\t Enter quantity of noddles: ";
            cin>>quant;

            if(Qnoodles-Snoodles>=quant) {
                Snoodles = Snoodles+quant;

                Total_noodles = Total_noodles+quant*150;
                cout<<"\n\t "<<quant<<" this many noddles have been ordered for you\n";

            }
            else {
                cout<<"\n\t Only"<<Qnoodles-Snoodles<<" burgers are remaining in hotel\n";
            }
            break;

        
        case 5:
            cout<<"\n\t Enter quantity of shakes: ";
            cin>>quant;

            if(Qshake-Sshake>=quant) {
                Sshake = Sshake+quant;

                Total_shake = Total_shake+quant*10;
                cout<<"\n\t "<<quant<<" this many shakes have been ordered for you\n";

            }
            else {
                cout<<"\n\t Only"<<Qshake-Sshake<<" shakes are remaining in hotel\n";
            }
            break;

        
        case 6:
            cout<<"\n\t Enter quantity of rolls: ";
            cin>>quant;

            if(Qrolls-Srolls>=quant) {
                Srolls = Srolls+quant;

                Total_rolls = Total_rolls+quant*70;
                cout<<"\n\t "<<quant<<" this many rolls have been ordered for you\n";

            }
            else {
                cout<<"\n\t Only"<<Qrolls-Srolls<<" rolls are remaining in hotel\n";
            }
            break;

        
        case 7:
            cout<<"\n\t Details of sales and collection\n";
            
            cout<<"\n\t No. rooms available: "<<Qrooms;
            cout<<"\n\t No. rooms gave for rent: "<<Srooms;
            cout<<"\n\t Remaining rooms: "<<Qrooms-Srooms;
            cout<<"\n\t Total rooms collection for day: "<<Total_rooms;

            cout<<"\n\t No. pastas available: "<<Qpasta;
            cout<<"\n\t No. pastas sold: "<<Spasta;
            cout<<"\n\t Remaining pastas: "<<Qpasta-Spasta;
            cout<<"\n\t Total pastas collection: "<<Total_pasta;

            cout<<"\n\t No. burger available: "<<Qburger;
            cout<<"\n\t No. burger sold: "<<Sburger;
            cout<<"\n\t Remaining burger: "<<Qburger-Sburger;
            cout<<"\n\t Total burger collection: "<<Total_burger;

            cout<<"\n\t No. noodles available: "<<Qnoodles;
            cout<<"\n\t No. noodles sold: "<<Snoodles;
            cout<<"\n\t Remaining noodles: "<<Qnoodles-Snoodles;
            cout<<"\n\t Total noodles collection: "<<Total_noodles;

            cout<<"\n\t No. shakes available: "<<Qshake;
            cout<<"\n\t No. shakes sold: "<<Sshake;
            cout<<"\n\t Remaining shakes: "<<Qshake-Sshake;
            cout<<"\n\t Total shakes collection: "<<Total_shake;

            cout<<"\n\t No. rolls available: "<<Qrolls;
            cout<<"\n\t No. rolls sold: "<<Srolls;
            cout<<"\n\t Remaining rolls: "<<Qrolls-Srolls;
            cout<<"\n\t Total rolls collection: "<<Total_rolls;

            cout<<"\n\t Overall collection: "<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_rolls;
        
            break;

        case 8:
            exit(0);
            break;

        default:
            cout<<"\n\t Please select proper option\n";
    }

    goto m;

    return 0;
    
}