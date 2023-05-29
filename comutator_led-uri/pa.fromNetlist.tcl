
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name comutator_led-uri -dir "D:/Andrei/Anul_3/Semestrul_I/Structura_Sistemelor_de_Calcul/Proiect-Interfata_pentru_un_comutator_rotativ/comutator_led-uri/planAhead_run_1" -part xc3s500efg320-4
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "D:/Andrei/Anul_3/Semestrul_I/Structura_Sistemelor_de_Calcul/Proiect-Interfata_pentru_un_comutator_rotativ/comutator_led-uri/demo_leduri.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {D:/Andrei/Anul_3/Semestrul_I/Structura_Sistemelor_de_Calcul/Proiect-Interfata_pentru_un_comutator_rotativ/comutator_led-uri} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "demo_leduri.ucf" [current_fileset -constrset]
add_files [list {demo_leduri.ucf}] -fileset [get_property constrset [current_run]]
open_netlist_design
