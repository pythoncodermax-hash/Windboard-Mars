# Windboard-Mars
Here is my custom Hackpad for windows shortcuts

This is my first time working with Ki Cad but overall i found it good.

It is a 9 button keyboard with macros assigned to each key and also an oled which will display some moving pixels.

The macros on the buttons are:
1. Alt F4
2. Quick Link, Win + X
3. Opens Chrome
4. Win + D, minimises applications
5. Undo delete Tab
6. Open Github
7. Open VS Code
8. Lock Screen
9. Opens Steam

For the oled so far i have just made some dots which slowly disapear out of frame until their is none.

Experience:

I had never used Ki cad before making a Hackpad but i found it easy to use after watching a video and following the turorial.
Fusion 360 was a bigger challenge as i had to remake the case a few times to adjust dimensions but because i had some previous experience it was fun to do. I used KMK for the firmware and i found it pretty straight forward to use however i will have to test it out once i build the board as i am unsure how to test it. I will update this repository once i am finished building the physical Windboard.

Overall i like the project and i can definitely see it being useful in future projects such as potentially building a fully custom keyboard as my current one is getting old.

Navigating the Repository:
The Cad, Firmware and PCB folder are just overviews of the project and are ways to view what it looks like.
The production folder contains everything that needs to be 3D printed, Manufactured and the firmware which is the same as in the Firmware folder.

Tip:
When making the PCB watch the video linked to the Hackpad tutorial on Matrix wiring, it is really good and showed me how to do it.

Latest Update:
I have decided to switch to QMK as it has better documentation for OLEDS. So today i switched all my code from KMK to QMK and it honestly wasnt that bad. I will not that when i first tried on mac i found it hard to install but windows seemed like a better option. The documentation is good but i will also shoutout 
theseagulldevs as he had a similar setup to me and looking at his code as well as the documentation helped me understand how the whole thing worked. Hopefully the code works now so we will see when the Windboard is assembled.




<img width="700" height="477" alt="Screenshot 2026-06-20 at 4 39 20 pm" src="https://github.com/user-attachments/assets/9065fa8a-b059-4cc1-bc7a-98a0267bacaf" />

Here is the CAD design made in Fusion 360 to show what the Windboard would look like.

<img width="700" height="477" alt="Screenshot 2026-06-20 at 4 39 30 pm" src="https://github.com/user-attachments/assets/b44d0b65-0f27-473b-a02a-8dfdd5f315b7" />

Here is a side on view.

<img width="771" height="598" alt="Screenshot 2026-06-20 at 4 41 31 pm" src="https://github.com/user-attachments/assets/367437d6-c357-404b-b8bf-7e9d052a5c8e" />

Here is the PCB i designed showing the back.

<img width="771" height="598" alt="Screenshot 2026-06-20 at 4 41 24 pm" src="https://github.com/user-attachments/assets/4ce27429-b65e-4dbe-8249-c1fd9e9d4d03" />

Here is the front of the PCB where the key switches and oled screen will go.

<img width="771" height="598" alt="Screenshot 2026-06-20 at 4 41 06 pm" src="https://github.com/user-attachments/assets/7cc2f50d-35be-48a7-be6c-370f5f93a68d" />

Here is the PCB design.

<img width="758" height="294" alt="Screenshot 2026-06-20 at 4 40 25 pm" src="https://github.com/user-attachments/assets/fddc7686-f8f9-4123-9c04-c3f006adad3b" />

This is the schematic that was used to design the PCB.

<img width="1418" height="1035" alt="Screenshot 2026-06-23 202651" src="https://github.com/user-attachments/assets/c0adf91e-5ae5-47ae-9f22-bfdffb431987" />
This is the full design in fusion 360 with the colour blue for the case as that is the colour it will be 3D printed.

Bill Of Materials:
1. 9x Cherry MX switches
2. 9x DSA keycaps
3. 1x 0.91" 128x32 OLED Display
4. 9x 1N4148 DO-35 Diodes
5. XIAO RP2040
6. 1x case (2 3d printed parts


