#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>

void banner();
int main(void)
{
      	int ch,days,H,M,num,passin,fun;
      	char user[999];
      	char pass[999];
      	char pas[999];
      	char exp[999];
      	char del[255];
      	char domain[50];
      	char zone[250];
      	char front[100];
      	char opt;
      	float ip,ipx,ipa,ipb;
      	int count = 1;
	      char buffers[999];
	    char line[256]; 
    banner();
    choice:
    printf("\033[1;34m\n[?]:\033[0m");
    
    scanf("%d",&ch);
    
      scanf("%*[^\n]");
    
    switch(ch)
    {
    	case 1:
    	
      printf("\033[1;36mEnter username: \033[0m");
      scanf("%s",user);
      printf("\033[1;36mEnter password: \033[0m");
    scanf("%s",pass);
    
      scanf("%*[^\n]");
    
    exp:
      printf("\033[1;36m\nEnter expiry in days: \033[0m");
     num= scanf("%d",&days);
     if(!num){
		
		  printf("\033[1;31m\nThat's not a number\033[0m");
		scanf("%*[^\n]");
		goto exp;
	}
	
     
    
      
    char add[999];
    snprintf(add,999,"useradd -M %s -s /bin/false",user);
    system(add);
    
 
    snprintf(pas,999," printf \"%s\\n%s\" | sudo passwd %s  > /dev/null 2>&1",pass,pass,user);
    system(pas);
    
    snprintf(exp,999,"chage -M %d %s",days,user);
   system(exp);
   banner();
   printf("\033[1;36m\nUser %s was added successfully\033[0m",user);
   
    fflush(stdin);
    goto choice;
    	
    break;
    	
    	case 2:
    	
    	
system("awk '$3>1000 && $1!=\"nobody\" { print $1 }' FS=':' /etc/passwd >me");
    		printf("\033[1;36mSSH WS USERS\033[0m\n", count, buffers);
    		FILE *fpm;
    		fpm= fopen("me", "r");
	while (fgets(buffers, 9999, fpm) != NULL)
	{
		printf("\033[1;32m[%d] %s\033[0m", count, buffers);
count++ ;
	}
	count =1;
    	   printf("\033[1;36m\nEnter user number to delete: \033[0m");
      scanf("%d",&fun);
      
      
      FILE* files;
    files = fopen("me", "r"); 

    int i;
    i=0;
    while (fgets(line, sizeof(line), files)) { 
        i++; 
        if(i == fun ) 
        { 
        snprintf(del,999,"deluser %s",line);
        system(del);
        printf("\033[1;32muser %sdeleted successfully\033[0m\n",line);
        goto choice;
            printf("%s", line);    
        } 
    } 
 
    fclose(files); 
 
    
      
      
      
      
      
    
 //  snprintf(del,999,"deluser %s",user);
//    banner();
//    printf("\n");
//    	system("del");
    	
    //	goto choice;
    
    	break;
    	
    	case 3:
    	
    	system("cd /etc");
    	banner();
    	system("./.in.sh");
    	system("cd $HOME");
    	
    	goto choice;
    	
    	
    	break;
    	
    	case 4:
       printf("\033[1;36m\nEnter the cloudfont domain of this vps: \033[0m");
    	scanf("%s",front);
    
    	FILE *fp;
fp  = fopen ("cords", "a");
fprintf(fp,"%s\n",front);
system("mv cords .cords");
      printf("\033[1;34m\nEnhancing performance... \033[0m\n");
    	system("python .cords.py");
    	printf("\033[1;32m\nSuccess ✓\033[0m\n");
    	goto choice;
    	break;
    	case 5:
    	banner();
 printf("\n");
   system("printf \"\\033[1;32mActive users $(ps -ef | grep -c dropbear | awk '{print $1-2}')\\033[0m\\n\"");
    	
    		goto choice;
    break;
    case 6:
    
    
domain:
	printf("\033[1;32mEnter domain name pointing to your vps: \033[0m");
	scanf("%s",domain);
	system("curl -4 icanhazip.com >ips");
	system(" sed -i \"s/[^0-9]//g\" ips");
		FILE *pfw;
pfw=fopen("ips","r");
		fscanf(pfw,"%f",&ip);
		
		 char buf[250];        

	snprintf(buf,250,"dig +short %s >ipr",domain);
	system(buf);
	
	system(" sed -i \"s/[^0-9]//g\" ipr");
		FILE *dm;
dm=fopen("ipr","r");
		fscanf(dm,"%f",&ipx);
	
		printf("\033[1;33m\n[Cheking if your domain points to this vps]\033[0m\n");
		sleep(1);

  if(ip==ipx)
  
{
    			printf("\033[1;32msuccess[✓]\033[0m\n");
}
	else{
		   					printf("\033[1;31mYour domain doesn't resolve to this vps ip address\033[0m\n");
		   		goto domain;
		   		}	   
    
    
    
 system("systemctl stop nodews1");
	char ssl[999];
snprintf(ssl,999,"sudo certbot certonly --standalone -d %s --non-interactive --agree-tos -m jamalisaac2000y@gmail.com",domain);		   		
	system(ssl);
	
	system("systemctl start nodews1");
	
	char st[999];
	
		system("mkdir -p /etc/stunnel");
		chdir("/etc/stunnel");
	
	snprintf(st,999,"sudo cp /etc/letsencrypt/live/%s/*.pem /etc/stunnel && openssl rsa -in privkey.pem -out private.key && cat cert.pem fullchain.pem > certificate.crt && cat chain.pem > ca_bundle.crt && cat private.key certificate.crt ca_bundle.crt >stunnel.pem ; wget https://raw.githubusercontent.com/pirozas/stunl/main/stunnel.conf && cd $HOME",domain);
	
	system(st);

		     fflush(stdin);
  system("systemctl start badvpn > /dev/null 2>&1 && systemctl start stunnel4  > /dev/null 2>&1 && systemctl start nodews1  > /dev/null 2>&1 && systemctl enable badvpn > /dev/null 2>&1 && systemctl enable nodews1  > /dev/null 2>&1 && systemctl restart stunnel4 && service dropbear restart > /dev/null 2>&1");
  banner();
   
	 printf("\033[1;32m\nDomain %s was successfully updated\033[0m\n",domain);       
  
     
      	goto choice;
      break;
      
      case 7:
    system("nano /etc/banner.html");
    system("service dropbear restart");
        fflush(stdin);
    banner();
    	 printf("\033[1;32m\nBanner changed successfully\033[0m\n",domain);   
    
    	goto choice;
     break;
    
    case 8:
    
    system("timedatectl list-timezones >tmz");
      printf("\033[1;36mSelect correct time zone of your country from the list below and copy:\033[0m\n");
      system("cat tmz");
      
       printf("\033[1;36mEnter your time zone,eg (Africa/Nairobi):\033[0m");
   scanf("%s",zone);
   char zn[250];
   
    snprintf(zn,250,"sudo timedatectl set-timezone %s",zone);
    system(zn);
    banner();
    printf("\033[1;32m\nTime zone updated successfully!\033[0m\n");
    goto choice;
    break;
    case 9:
      printf("\033[1;34mEnter auto reboot time in 24 hours clock system\033[0m\n");
      
      hours:
    printf("\033[1;34m\nHours: \033[0m");
    num=scanf("%d",&H);
    if(!num){
		
			
		  printf("\033[1;31m\nThat's not a number\033[0m");
		scanf("%*[^\n]");
		goto hours;
	}
	min:
   printf("\033[1;34m\nMinutes: \033[0m");
      num=scanf("%d",&M);
      if(!num){
      		
		  printf("\033[1;31m\nThat's not a number\033[0m");
	
		scanf("%*[^\n]");
		goto min;
	}
      
      char bot[50];
      snprintf(bot,50,"sed -i -e '$a%d %d * * * root reboot'  /etc/crontab",M,H);
      system(bot);
      
     
    system("sudo service cron reload > /dev/null 2>&1");
    banner();
        printf("\033[1;32m\nAuto reboot set successfully \033[0m\n");
        
      goto choice;
    
    break;
    
    case 10:
    restart:
    system("systemctl start badvpn > /dev/null 2>&1 && systemctl start stunnel4  > /dev/null 2>&1 && systemctl start nodews1  > /dev/null 2>&1 && systemctl enable badvpn > /dev/null 2>&1 && systemctl enable nodews1  > /dev/null 2>&1 && systemctl enable stunnel4 && service dropbear restart > /dev/null 2>&1");
   banner();
  
    printf("\033[1;34m\nRestarting\033[0m ");
     printf("\033[1;35mbadvpn\033[0m\n");
     sleep(1);
       printf("\033[1;32m[✓]\033[0m\n");
       
         printf("\033[1;34mRestarting\033[0m ");
     printf("\033[1;35mstunnel\033[0m\n");
     sleep(1);
       printf("\033[1;32m[✓]\033[0m\n");
 	
 	  printf("\033[1;34mRestarting\033[0m ");
     printf("\033[1;35mnodews\033[0m\n");
     sleep(1);
       printf("\033[1;32m[✓]\033[0m\n");
 	
 	  printf("\033[1;34mRestarting\033[0m ");
     printf("\033[1;35mdropbear\033[0m\n");
     sleep(1);
       printf("\033[1;32m[✓]\033[0m\n");
 	
 	  printf("\033[1;32m\n[All services restarted successfully ✓]\033[0m\n");
 	
 	
 
 	
    	goto choice;
    break;
    
    case 11:
    banner();
    printf("\n");
    system("speedtest progress=no");
    	goto choice;
    break;
    
    case 12:
      
     
   	  printf("\033[1;31m\nAre you sure [y/n]: \033[0m");
   scanf(" %c",&opt);
    
   if(opt=='y' || opt =='Y')
   {
   
      system("systemctl stop stunnel4 nodews1 badvpn");
    system("cd  /usr/bin && rm -rf menu");
    system("cd $HOME");
    system("cat /dev/null > ~/.bash_history && history -c");
     

    printf("\033[1;36mScript removed successfully\033[0m\n");
    return 0;
   }
   banner();
    	goto choice;
   
    break;
    
    case 13:
    banner();
       printf("\033[1;32m\nAlhamdulillah,praise be to Allah the Almighty of God the most Gracious and the most Merciful.I couldn't complete this script on my own.\n\nThis script installs:\nSSH WS NON TLS port 80\nSSH WS TLS port 443\nSSH SSL port 443\n\nMy telegram username is @piroza1\033[0m\n");
    
    	goto choice;
    break;
    
    case 14:
  system("cat /dev/null > ~/.bash_history && history -c > /dev/null 2>&1");
    system("clear");
    return 0;
     break;
    
    default:
    printf("\033[1;34mInvalid selection\033[0m\n");
    goto choice;
    
    
    
    }
      return 0;
}

void banner()
{
	
	  system("clear");
  
      	
      	printf("\033[1;32m\n**********************************\033[0m");
      printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[1]\033[0m");
     printf("\033[1;35mAdd users\033[0m");
 	printf("\033[1;32m                    *\033[0m");

     printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[2]\033[0m");
     printf("\033[1;35mDelete users\033[0m");
     printf("\033[1;32m                 *\033[0m");
     
     printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[3]\033[0m");
     printf("\033[1;35mUsers informations\033[0m");
     printf("\033[1;32m           *\033[0m");
     
      printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[4]\033[0m");
     printf("\033[1;35mAdd cloudfront domain\033[0m");
     printf("\033[1;32m        *\033[0m");

    printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[5]\033[0m");
     printf("\033[1;35mCheck connected users\033[0m");
     printf("\033[1;32m        *\033[0m");
     
    


printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[6]\033[0m");
     printf("\033[1;35mUpdate vps domain\033[0m");
     printf("\033[1;32m            *\033[0m");


     printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[7]\033[0m");
     printf("\033[1;35mChange banner\033[0m");
     printf("\033[1;32m                *\033[0m");

   printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[8]\033[0m");
     printf("\033[1;35mChange timezone\033[0m");
     printf("\033[1;32m              *\033[0m");

    printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[9]\033[0m");
     printf("\033[1;35mSet auto reboot\033[0m");
     printf("\033[1;32m              *\033[0m");

   printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[10]\033[0m");
     printf("\033[1;35mRestart all services\033[0m");
     printf("\033[1;32m        *\033[0m");
     
     printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[11]\033[0m");
     printf("\033[1;35mSpeed test\033[0m");
     printf("\033[1;32m                  *\033[0m");
     
     printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[12]\033[0m");
     printf("\033[1;35mRemove this script\033[0m");
     printf("\033[1;32m          *\033[0m");
     
        printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[13]\033[0m");
     printf("\033[1;35mReadme\033[0m");
       printf("\033[1;32m                      *\033[0m");
     
  
     printf("\033[1;32m\n*\033[0m");
     printf("\033[1;34m[14]\033[0m");
     printf("\033[1;35mExit\033[0m");
     printf("\033[1;32m                        *\033[0m");
     
    
      for(int count = 1 ; count <= 1 ; ++count)
         
        printf("\033[1;32m\n*                                *\033[0m");
printf("\033[1;32m\n**********************************\033[0m");


	
	printf("\033[1;36m\n**********************************\033[0m");
	
  printf("\033[1;36m\n*\033[0m");
   printf("\033[1;37m\tCoded by Piroz\033[0m");
  printf("\033[1;36m           *\033[0m");
     
      printf("\033[1;36m\n*\033[0m");
      printf("\033[1;36m*********************************\033[0m");
}
