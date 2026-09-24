/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/BoardInventory.txt
 * Cpp2IL method: System.Collections.Generic.Dictionary`2<System.Int32, System.Int32> GetItemTypesAndAmountsOfItems()
 * Ghidra function entry: 0362dd10
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x0362de54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x026ebe80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x026e9da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x026ea3f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x026ea430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x026ea900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x026eaa38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x026eaf94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x026eafcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x026eb290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x026eb670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x026eabe8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x026eb674) */
/* WARNING: Removing unreachable block (ram,0x04731c80) */
/* WARNING: Removing unreachable block (ram,0x04731ca0) */
/* WARNING: Removing unreachable block (ram,0x04731cd8) */
/* WARNING: Removing unreachable block (ram,0x04731ce0) */
/* WARNING: Removing unreachable block (ram,0x04731cf8) */
/* WARNING: Removing unreachable block (ram,0x04731d00) */
/* WARNING: Removing unreachable block (ram,0x04731d28) */
/* WARNING: Removing unreachable block (ram,0x04731d0c) */
/* WARNING: Removing unreachable block (ram,0x04731d18) */
/* WARNING: Removing unreachable block (ram,0x04731d34) */
/* WARNING: Removing unreachable block (ram,0x04731d50) */
/* WARNING: Removing unreachable block (ram,0x04731d68) */
/* WARNING: Removing unreachable block (ram,0x04731d78) */
/* WARNING: Removing unreachable block (ram,0x04731d80) */
/* WARNING: Removing unreachable block (ram,0x04731da8) */
/* WARNING: Removing unreachable block (ram,0x04731d8c) */
/* WARNING: Removing unreachable block (ram,0x04731d98) */
/* WARNING: Removing unreachable block (ram,0x04731db4) */
/* WARNING: Removing unreachable block (ram,0x04731dc4) */
/* WARNING: Removing unreachable block (ram,0x04731ec0) */
/* WARNING: Removing unreachable block (ram,0x04731ec4) */
/* WARNING: Removing unreachable block (ram,0x04731ef0) */
/* WARNING: Removing unreachable block (ram,0x04731dcc) */
/* WARNING: Removing unreachable block (ram,0x04731ddc) */
/* WARNING: Removing unreachable block (ram,0x04731de4) */
/* WARNING: Removing unreachable block (ram,0x04731e0c) */
/* WARNING: Removing unreachable block (ram,0x04731df0) */
/* WARNING: Removing unreachable block (ram,0x04731dfc) */
/* WARNING: Removing unreachable block (ram,0x04731e18) */
/* WARNING: Removing unreachable block (ram,0x04731e30) */
/* WARNING: Removing unreachable block (ram,0x04731e34) */
/* WARNING: Removing unreachable block (ram,0x04731e3c) */
/* WARNING: Removing unreachable block (ram,0x04731e44) */
/* WARNING: Removing unreachable block (ram,0x04731e5c) */
/* WARNING: Removing unreachable block (ram,0x04731e64) */
/* WARNING: Removing unreachable block (ram,0x04731e8c) */
/* WARNING: Removing unreachable block (ram,0x04731e70) */
/* WARNING: Removing unreachable block (ram,0x04731e7c) */
/* WARNING: Removing unreachable block (ram,0x04731e98) */
/* WARNING: Removing unreachable block (ram,0x04731ea4) */
/* WARNING: Removing unreachable block (ram,0x04731ef8) */
/* WARNING: Removing unreachable block (ram,0x04731f0c) */
/* WARNING: Removing unreachable block (ram,0x04731f38) */
/* WARNING: Removing unreachable block (ram,0x04731f70) */
/* WARNING: Removing unreachable block (ram,0x04731fa8) */
/* WARNING: Removing unreachable block (ram,0x04731fb0) */
/* WARNING: Removing unreachable block (ram,0x04731fc8) */
/* WARNING: Removing unreachable block (ram,0x04731fd0) */
/* WARNING: Removing unreachable block (ram,0x04731ff8) */
/* WARNING: Removing unreachable block (ram,0x04731fdc) */
/* WARNING: Removing unreachable block (ram,0x04731fe8) */
/* WARNING: Removing unreachable block (ram,0x04732004) */
/* WARNING: Removing unreachable block (ram,0x047321cc) */
/* WARNING: Removing unreachable block (ram,0x04732028) */
/* WARNING: Removing unreachable block (ram,0x04732044) */
/* WARNING: Removing unreachable block (ram,0x04732054) */
/* WARNING: Removing unreachable block (ram,0x0473205c) */
/* WARNING: Removing unreachable block (ram,0x04732084) */
/* WARNING: Removing unreachable block (ram,0x04732068) */
/* WARNING: Removing unreachable block (ram,0x04732074) */
/* WARNING: Removing unreachable block (ram,0x04732090) */
/* WARNING: Removing unreachable block (ram,0x047320a0) */
/* WARNING: Removing unreachable block (ram,0x047321b4) */
/* WARNING: Removing unreachable block (ram,0x047321b8) */
/* WARNING: Removing unreachable block (ram,0x047320a8) */
/* WARNING: Removing unreachable block (ram,0x047320b8) */
/* WARNING: Removing unreachable block (ram,0x047320c0) */
/* WARNING: Removing unreachable block (ram,0x047320e8) */
/* WARNING: Removing unreachable block (ram,0x047320cc) */
/* WARNING: Removing unreachable block (ram,0x047320d8) */
/* WARNING: Removing unreachable block (ram,0x047320f4) */
/* WARNING: Removing unreachable block (ram,0x04732108) */
/* WARNING: Removing unreachable block (ram,0x04732114) */
/* WARNING: Removing unreachable block (ram,0x0473211c) */
/* WARNING: Removing unreachable block (ram,0x04732120) */
/* WARNING: Removing unreachable block (ram,0x04732128) */
/* WARNING: Removing unreachable block (ram,0x04732130) */
/* WARNING: Removing unreachable block (ram,0x04732148) */
/* WARNING: Removing unreachable block (ram,0x04732150) */
/* WARNING: Removing unreachable block (ram,0x04732178) */
/* WARNING: Removing unreachable block (ram,0x0473215c) */
/* WARNING: Removing unreachable block (ram,0x04732168) */
/* WARNING: Removing unreachable block (ram,0x04732184) */
/* WARNING: Removing unreachable block (ram,0x04732190) */
/* WARNING: Removing unreachable block (ram,0x047321d4) */
/* WARNING: Removing unreachable block (ram,0x04732194) */
/* WARNING: Removing unreachable block (ram,0x047321dc) */
/* WARNING: Removing unreachable block (ram,0x047321e0) */
/* WARNING: Removing unreachable block (ram,0x04732210) */
/* WARNING: Removing unreachable block (ram,0x0473223c) */
/* WARNING: Removing unreachable block (ram,0x04732274) */
/* WARNING: Removing unreachable block (ram,0x047322ac) */
/* WARNING: Removing unreachable block (ram,0x047322b4) */
/* WARNING: Removing unreachable block (ram,0x047322cc) */
/* WARNING: Removing unreachable block (ram,0x047322d4) */
/* WARNING: Removing unreachable block (ram,0x047322fc) */
/* WARNING: Removing unreachable block (ram,0x047322e0) */
/* WARNING: Removing unreachable block (ram,0x047322ec) */
/* WARNING: Removing unreachable block (ram,0x04732308) */
/* WARNING: Removing unreachable block (ram,0x047324d0) */
/* WARNING: Removing unreachable block (ram,0x0473232c) */
/* WARNING: Removing unreachable block (ram,0x04732348) */
/* WARNING: Removing unreachable block (ram,0x04732358) */
/* WARNING: Removing unreachable block (ram,0x04732360) */
/* WARNING: Removing unreachable block (ram,0x04732388) */
/* WARNING: Removing unreachable block (ram,0x0473236c) */
/* WARNING: Removing unreachable block (ram,0x04732378) */
/* WARNING: Removing unreachable block (ram,0x04732394) */
/* WARNING: Removing unreachable block (ram,0x047323a4) */
/* WARNING: Removing unreachable block (ram,0x047324b8) */
/* WARNING: Removing unreachable block (ram,0x047324bc) */
/* WARNING: Removing unreachable block (ram,0x047323ac) */
/* WARNING: Removing unreachable block (ram,0x047323bc) */
/* WARNING: Removing unreachable block (ram,0x047323c4) */
/* WARNING: Removing unreachable block (ram,0x047323ec) */
/* WARNING: Removing unreachable block (ram,0x047323d0) */
/* WARNING: Removing unreachable block (ram,0x047323dc) */
/* WARNING: Removing unreachable block (ram,0x047323f8) */
/* WARNING: Removing unreachable block (ram,0x0473240c) */
/* WARNING: Removing unreachable block (ram,0x04732418) */
/* WARNING: Removing unreachable block (ram,0x04732420) */
/* WARNING: Removing unreachable block (ram,0x04732424) */
/* WARNING: Removing unreachable block (ram,0x0473242c) */
/* WARNING: Removing unreachable block (ram,0x04732434) */
/* WARNING: Removing unreachable block (ram,0x0473244c) */
/* WARNING: Removing unreachable block (ram,0x04732454) */
/* WARNING: Removing unreachable block (ram,0x0473247c) */
/* WARNING: Removing unreachable block (ram,0x04732460) */
/* WARNING: Removing unreachable block (ram,0x0473246c) */
/* WARNING: Removing unreachable block (ram,0x04732488) */
/* WARNING: Removing unreachable block (ram,0x04732494) */
/* WARNING: Removing unreachable block (ram,0x047324d8) */
/* WARNING: Removing unreachable block (ram,0x04732498) */
/* WARNING: Removing unreachable block (ram,0x047324e0) */
/* WARNING: Removing unreachable block (ram,0x047324e4) */
/* WARNING: Removing unreachable block (ram,0x04732514) */
/* WARNING: Removing unreachable block (ram,0x04732540) */
/* WARNING: Removing unreachable block (ram,0x0473257c) */
/* WARNING: Removing unreachable block (ram,0x047325b4) */
/* WARNING: Removing unreachable block (ram,0x047325bc) */
/* WARNING: Removing unreachable block (ram,0x047325d4) */
/* WARNING: Removing unreachable block (ram,0x047325dc) */
/* WARNING: Removing unreachable block (ram,0x04732604) */
/* WARNING: Removing unreachable block (ram,0x047325e8) */
/* WARNING: Removing unreachable block (ram,0x047325f4) */
/* WARNING: Removing unreachable block (ram,0x04732610) */
/* WARNING: Removing unreachable block (ram,0x0473264c) */
/* WARNING: Removing unreachable block (ram,0x0473265c) */
/* WARNING: Removing unreachable block (ram,0x047327dc) */
/* WARNING: Removing unreachable block (ram,0x04732664) */
/* WARNING: Removing unreachable block (ram,0x04732674) */
/* WARNING: Removing unreachable block (ram,0x0473267c) */
/* WARNING: Removing unreachable block (ram,0x047326a4) */
/* WARNING: Removing unreachable block (ram,0x04732688) */
/* WARNING: Removing unreachable block (ram,0x04732694) */
/* WARNING: Removing unreachable block (ram,0x047326b0) */
/* WARNING: Removing unreachable block (ram,0x0473273c) */
/* WARNING: Removing unreachable block (ram,0x047326c0) */
/* WARNING: Removing unreachable block (ram,0x047327e0) */
/* WARNING: Removing unreachable block (ram,0x047327e4) */
/* WARNING: Removing unreachable block (ram,0x04732804) */
/* WARNING: Removing unreachable block (ram,0x0473282c) */
/* WARNING: Removing unreachable block (ram,0x0473285c) */
/* WARNING: Removing unreachable block (ram,0x04732838) */
/* WARNING: Removing unreachable block (ram,0x04732748) */
/* WARNING: Removing unreachable block (ram,0x04732750) */
/* WARNING: Removing unreachable block (ram,0x04732760) */
/* WARNING: Removing unreachable block (ram,0x04732768) */
/* WARNING: Removing unreachable block (ram,0x04732790) */
/* WARNING: Removing unreachable block (ram,0x04732774) */
/* WARNING: Removing unreachable block (ram,0x04732780) */
/* WARNING: Removing unreachable block (ram,0x0473279c) */
/* WARNING: Removing unreachable block (ram,0x047327a8) */
/* WARNING: Removing unreachable block (ram,0x047327f8) */
/* WARNING: Removing unreachable block (ram,0x047327ac) */
/* WARNING: Removing unreachable block (ram,0x047327b4) */
/* WARNING: Removing unreachable block (ram,0x047327b8) */
/* WARNING: Removing unreachable block (ram,0x04732800) */
/* WARNING: Removing unreachable block (ram,0x047327bc) */
/* WARNING: Removing unreachable block (ram,0x047326c8) */
/* WARNING: Removing unreachable block (ram,0x047326d8) */
/* WARNING: Removing unreachable block (ram,0x047326e0) */
/* WARNING: Removing unreachable block (ram,0x04732708) */
/* WARNING: Removing unreachable block (ram,0x047326ec) */
/* WARNING: Removing unreachable block (ram,0x047326f8) */
/* WARNING: Removing unreachable block (ram,0x04732714) */
/* WARNING: Removing unreachable block (ram,0x04732720) */
/* WARNING: Removing unreachable block (ram,0x04732724) */
/* WARNING: Removing unreachable block (ram,0x0473272c) */
/* WARNING: Removing unreachable block (ram,0x04732730) */
/* WARNING: Removing unreachable block (ram,0x04732734) */
/* WARNING: Removing unreachable block (ram,0x04732738) */
/* WARNING: Removing unreachable block (ram,0x04732520) */
/* WARNING: Removing unreachable block (ram,0x0473249c) */
/* WARNING: Removing unreachable block (ram,0x0473221c) */
/* WARNING: Removing unreachable block (ram,0x04732198) */
/* WARNING: Removing unreachable block (ram,0x04731f18) */
/* WARNING: Removing unreachable block (ram,0x04731ea8) */
/* WARNING: Removing unreachable block (ram,0x026eb294) */
/* WARNING: Removing unreachable block (ram,0x026eafd0) */
/* WARNING: Removing unreachable block (ram,0x026eafe0) */
/* WARNING: Removing unreachable block (ram,0x026eafec) */
/* WARNING: Removing unreachable block (ram,0x026eaff8) */
/* WARNING: Removing unreachable block (ram,0x026eb000) */
/* WARNING: Removing unreachable block (ram,0x026eb028) */
/* WARNING: Removing unreachable block (ram,0x026eb00c) */
/* WARNING: Removing unreachable block (ram,0x026eb018) */
/* WARNING: Removing unreachable block (ram,0x026eb034) */
/* WARNING: Removing unreachable block (ram,0x026eb058) */
/* WARNING: Removing unreachable block (ram,0x026eb2d8) */
/* WARNING: Removing unreachable block (ram,0x026eb2ec) */
/* WARNING: Removing unreachable block (ram,0x026eb060) */
/* WARNING: Removing unreachable block (ram,0x026eb070) */
/* WARNING: Removing unreachable block (ram,0x026eb078) */
/* WARNING: Removing unreachable block (ram,0x026eb0a0) */
/* WARNING: Removing unreachable block (ram,0x026eb084) */
/* WARNING: Removing unreachable block (ram,0x026eb090) */
/* WARNING: Removing unreachable block (ram,0x026eb0ac) */
/* WARNING: Removing unreachable block (ram,0x026eb1d0) */
/* WARNING: Removing unreachable block (ram,0x026eb0bc) */
/* WARNING: Removing unreachable block (ram,0x026eb2f0) */
/* WARNING: Removing unreachable block (ram,0x026eb304) */
/* WARNING: Removing unreachable block (ram,0x026eb0c4) */
/* WARNING: Removing unreachable block (ram,0x026eb0d8) */
/* WARNING: Removing unreachable block (ram,0x026eb0e4) */
/* WARNING: Removing unreachable block (ram,0x026eb0f0) */
/* WARNING: Removing unreachable block (ram,0x026eb0f8) */
/* WARNING: Removing unreachable block (ram,0x026eb120) */
/* WARNING: Removing unreachable block (ram,0x026eb104) */
/* WARNING: Removing unreachable block (ram,0x026eb110) */
/* WARNING: Removing unreachable block (ram,0x026eb12c) */
/* WARNING: Removing unreachable block (ram,0x026eb17c) */
/* WARNING: Removing unreachable block (ram,0x026eb180) */
/* WARNING: Removing unreachable block (ram,0x026eb19c) */
/* WARNING: Removing unreachable block (ram,0x026eb1c8) */
/* WARNING: Removing unreachable block (ram,0x026eaf98) */
/* WARNING: Removing unreachable block (ram,0x026eb308) */
/* WARNING: Removing unreachable block (ram,0x026eafbc) */
/* WARNING: Removing unreachable block (ram,0x026eb314) */
/* WARNING: Removing unreachable block (ram,0x026eb31c) */
/* WARNING: Removing unreachable block (ram,0x026eb334) */
/* WARNING: Removing unreachable block (ram,0x026eb33c) */
/* WARNING: Removing unreachable block (ram,0x026eb344) */
/* WARNING: Removing unreachable block (ram,0x026eb358) */
/* WARNING: Removing unreachable block (ram,0x026eb360) */
/* WARNING: Removing unreachable block (ram,0x026eb378) */
/* WARNING: Removing unreachable block (ram,0x026eb380) */
/* WARNING: Removing unreachable block (ram,0x026eb39c) */
/* WARNING: Removing unreachable block (ram,0x026eb3c0) */
/* WARNING: Removing unreachable block (ram,0x026eb3ec) */
/* WARNING: Removing unreachable block (ram,0x026eb408) */
/* WARNING: Removing unreachable block (ram,0x026eb430) */
/* WARNING: Removing unreachable block (ram,0x026eb438) */
/* WARNING: Removing unreachable block (ram,0x026eb458) */
/* WARNING: Removing unreachable block (ram,0x026eb43c) */
/* WARNING: Removing unreachable block (ram,0x026eb474) */
/* WARNING: Removing unreachable block (ram,0x026eb494) */
/* WARNING: Removing unreachable block (ram,0x026eb4a0) */
/* WARNING: Removing unreachable block (ram,0x026eb4b0) */
/* WARNING: Removing unreachable block (ram,0x026eb4b4) */
/* WARNING: Removing unreachable block (ram,0x026eb51c) */
/* WARNING: Removing unreachable block (ram,0x026eb53c) */
/* WARNING: Removing unreachable block (ram,0x026eb544) */
/* WARNING: Removing unreachable block (ram,0x026eb568) */
/* WARNING: Removing unreachable block (ram,0x026eb548) */
/* WARNING: Removing unreachable block (ram,0x026eb574) */
/* WARNING: Removing unreachable block (ram,0x026eb57c) */
/* WARNING: Removing unreachable block (ram,0x026eb54c) */
/* WARNING: Removing unreachable block (ram,0x026eb590) */
/* WARNING: Removing unreachable block (ram,0x026eb5b0) */
/* WARNING: Removing unreachable block (ram,0x026eb5bc) */
/* WARNING: Removing unreachable block (ram,0x026eb5cc) */
/* WARNING: Removing unreachable block (ram,0x026eb5d0) */
/* WARNING: Removing unreachable block (ram,0x026eb638) */
/* WARNING: Removing unreachable block (ram,0x026eb654) */
/* WARNING: Removing unreachable block (ram,0x026eb664) */
/* WARNING: Removing unreachable block (ram,0x026eb5ec) */
/* WARNING: Removing unreachable block (ram,0x026eb4d0) */
/* WARNING: Removing unreachable block (ram,0x026eb3c8) */
/* WARNING: Removing unreachable block (ram,0x026eb1dc) */
/* WARNING: Removing unreachable block (ram,0x026eb1e4) */
/* WARNING: Removing unreachable block (ram,0x026eb1fc) */
/* WARNING: Removing unreachable block (ram,0x026eb204) */
/* WARNING: Removing unreachable block (ram,0x026eb22c) */
/* WARNING: Removing unreachable block (ram,0x026eb210) */
/* WARNING: Removing unreachable block (ram,0x026eb21c) */
/* WARNING: Removing unreachable block (ram,0x026eb238) */
/* WARNING: Removing unreachable block (ram,0x026eb244) */
/* WARNING: Removing unreachable block (ram,0x026eb248) */
/* WARNING: Removing unreachable block (ram,0x026eb250) */
/* WARNING: Removing unreachable block (ram,0x026eb254) */
/* WARNING: Removing unreachable block (ram,0x026eb284) */
/* WARNING: Removing unreachable block (ram,0x026eb258) */
/* WARNING: Removing unreachable block (ram,0x026eb260) */
/* WARNING: Removing unreachable block (ram,0x026eb2a4) */
/* WARNING: Removing unreachable block (ram,0x026eb2b8) */
/* WARNING: Removing unreachable block (ram,0x026eafc0) */
/* WARNING: Removing unreachable block (ram,0x026eaa3c) */
/* WARNING: Removing unreachable block (ram,0x026eaa5c) */
/* WARNING: Removing unreachable block (ram,0x026ea904) */
/* WARNING: Removing unreachable block (ram,0x026eadfc) */
/* WARNING: Removing unreachable block (ram,0x026eae18) */
/* WARNING: Removing unreachable block (ram,0x026ea928) */
/* WARNING: Removing unreachable block (ram,0x026ea938) */
/* WARNING: Removing unreachable block (ram,0x026ea944) */
/* WARNING: Removing unreachable block (ram,0x026ea9b0) */
/* WARNING: Removing unreachable block (ram,0x026ea9c0) */
/* WARNING: Removing unreachable block (ram,0x026ea9cc) */
/* WARNING: Removing unreachable block (ram,0x026ea9d8) */
/* WARNING: Removing unreachable block (ram,0x026ea9e0) */
/* WARNING: Removing unreachable block (ram,0x026eaae8) */
/* WARNING: Removing unreachable block (ram,0x026ea9ec) */
/* WARNING: Removing unreachable block (ram,0x026ea9f8) */
/* WARNING: Removing unreachable block (ram,0x026eaaf4) */
/* WARNING: Removing unreachable block (ram,0x026eab10) */
/* WARNING: Removing unreachable block (ram,0x026eab2c) */
/* WARNING: Removing unreachable block (ram,0x026eab34) */
/* WARNING: Removing unreachable block (ram,0x026eab5c) */
/* WARNING: Removing unreachable block (ram,0x026eab40) */
/* WARNING: Removing unreachable block (ram,0x026eab4c) */
/* WARNING: Removing unreachable block (ram,0x026eab68) */
/* WARNING: Removing unreachable block (ram,0x026eabdc) */
/* WARNING: Removing unreachable block (ram,0x026eab78) */
/* WARNING: Removing unreachable block (ram,0x026eab80) */
/* WARNING: Removing unreachable block (ram,0x026eab94) */
/* WARNING: Removing unreachable block (ram,0x026eaba0) */
/* WARNING: Removing unreachable block (ram,0x026eabac) */
/* WARNING: Removing unreachable block (ram,0x026eabb4) */
/* WARNING: Removing unreachable block (ram,0x026eac3c) */
/* WARNING: Removing unreachable block (ram,0x026eabc0) */
/* WARNING: Removing unreachable block (ram,0x026eabcc) */
/* WARNING: Removing unreachable block (ram,0x026eac48) */
/* WARNING: Removing unreachable block (ram,0x026eac7c) */
/* WARNING: Removing unreachable block (ram,0x026eac8c) */
/* WARNING: Removing unreachable block (ram,0x026eac94) */
/* WARNING: Removing unreachable block (ram,0x026eacbc) */
/* WARNING: Removing unreachable block (ram,0x026eaca0) */
/* WARNING: Removing unreachable block (ram,0x026eacac) */
/* WARNING: Removing unreachable block (ram,0x026eacc8) */
/* WARNING: Removing unreachable block (ram,0x026eace4) */
/* WARNING: Removing unreachable block (ram,0x026eacd8) */
/* WARNING: Removing unreachable block (ram,0x026ea954) */
/* WARNING: Removing unreachable block (ram,0x026ea968) */
/* WARNING: Removing unreachable block (ram,0x026ea974) */
/* WARNING: Removing unreachable block (ram,0x026ea980) */
/* WARNING: Removing unreachable block (ram,0x026ea988) */
/* WARNING: Removing unreachable block (ram,0x026eaa08) */
/* WARNING: Removing unreachable block (ram,0x026ea994) */
/* WARNING: Removing unreachable block (ram,0x026ea9a0) */
/* WARNING: Removing unreachable block (ram,0x026eaa14) */
/* WARNING: Removing unreachable block (ram,0x026eaa88) */
/* WARNING: Removing unreachable block (ram,0x026eaa9c) */
/* WARNING: Removing unreachable block (ram,0x026eaaa8) */
/* WARNING: Removing unreachable block (ram,0x026eaab8) */
/* WARNING: Removing unreachable block (ram,0x026eaac0) */
/* WARNING: Removing unreachable block (ram,0x026eac00) */
/* WARNING: Removing unreachable block (ram,0x026eaacc) */
/* WARNING: Removing unreachable block (ram,0x026eaad8) */
/* WARNING: Removing unreachable block (ram,0x026eac0c) */
/* WARNING: Removing unreachable block (ram,0x026eaa28) */
/* WARNING: Removing unreachable block (ram,0x026eaa2c) */
/* WARNING: Removing unreachable block (ram,0x026ea434) */
/* WARNING: Removing unreachable block (ram,0x026ea444) */
/* WARNING: Removing unreachable block (ram,0x026ea450) */
/* WARNING: Removing unreachable block (ram,0x026ea45c) */
/* WARNING: Removing unreachable block (ram,0x026ea464) */
/* WARNING: Removing unreachable block (ram,0x026ea48c) */
/* WARNING: Removing unreachable block (ram,0x026ea470) */
/* WARNING: Removing unreachable block (ram,0x026ea47c) */
/* WARNING: Removing unreachable block (ram,0x026ea498) */
/* WARNING: Removing unreachable block (ram,0x026ea4bc) */
/* WARNING: Removing unreachable block (ram,0x026ea714) */
/* WARNING: Removing unreachable block (ram,0x026ea728) */
/* WARNING: Removing unreachable block (ram,0x026ea4c4) */
/* WARNING: Removing unreachable block (ram,0x026ea4d4) */
/* WARNING: Removing unreachable block (ram,0x026ea4dc) */
/* WARNING: Removing unreachable block (ram,0x026ea504) */
/* WARNING: Removing unreachable block (ram,0x026ea4e8) */
/* WARNING: Removing unreachable block (ram,0x026ea4f4) */
/* WARNING: Removing unreachable block (ram,0x026ea510) */
/* WARNING: Removing unreachable block (ram,0x026ea634) */
/* WARNING: Removing unreachable block (ram,0x026ea520) */
/* WARNING: Removing unreachable block (ram,0x026ea72c) */
/* WARNING: Removing unreachable block (ram,0x026ea740) */
/* WARNING: Removing unreachable block (ram,0x026ea528) */
/* WARNING: Removing unreachable block (ram,0x026ea53c) */
/* WARNING: Removing unreachable block (ram,0x026ea548) */
/* WARNING: Removing unreachable block (ram,0x026ea554) */
/* WARNING: Removing unreachable block (ram,0x026ea55c) */
/* WARNING: Removing unreachable block (ram,0x026ea584) */
/* WARNING: Removing unreachable block (ram,0x026ea568) */
/* WARNING: Removing unreachable block (ram,0x026ea574) */
/* WARNING: Removing unreachable block (ram,0x026ea590) */
/* WARNING: Removing unreachable block (ram,0x026ea5e0) */
/* WARNING: Removing unreachable block (ram,0x026ea5e4) */
/* WARNING: Removing unreachable block (ram,0x026ea600) */
/* WARNING: Removing unreachable block (ram,0x026ea62c) */
/* WARNING: Removing unreachable block (ram,0x026ea3fc) */
/* WARNING: Removing unreachable block (ram,0x026ea754) */
/* WARNING: Removing unreachable block (ram,0x026ea420) */
/* WARNING: Removing unreachable block (ram,0x026ea760) */
/* WARNING: Removing unreachable block (ram,0x026ea768) */
/* WARNING: Removing unreachable block (ram,0x026ea780) */
/* WARNING: Removing unreachable block (ram,0x026ea7e0) */
/* WARNING: Removing unreachable block (ram,0x026ea808) */
/* WARNING: Removing unreachable block (ram,0x026ea834) */
/* WARNING: Removing unreachable block (ram,0x026ea850) */
/* WARNING: Removing unreachable block (ram,0x026ea810) */
/* WARNING: Removing unreachable block (ram,0x026ea640) */
/* WARNING: Removing unreachable block (ram,0x026ea648) */
/* WARNING: Removing unreachable block (ram,0x026ea660) */
/* WARNING: Removing unreachable block (ram,0x026ea668) */
/* WARNING: Removing unreachable block (ram,0x026ea690) */
/* WARNING: Removing unreachable block (ram,0x026ea674) */
/* WARNING: Removing unreachable block (ram,0x026ea680) */
/* WARNING: Removing unreachable block (ram,0x026ea69c) */
/* WARNING: Removing unreachable block (ram,0x026ea6a8) */
/* WARNING: Removing unreachable block (ram,0x026ea78c) */
/* WARNING: Removing unreachable block (ram,0x026ea7a0) */
/* WARNING: Removing unreachable block (ram,0x026ea7a8) */
/* WARNING: Removing unreachable block (ram,0x026ea7c0) */
/* WARNING: Removing unreachable block (ram,0x026ea6ac) */
/* WARNING: Removing unreachable block (ram,0x026ea6b4) */
/* WARNING: Removing unreachable block (ram,0x026ea6b8) */
/* WARNING: Removing unreachable block (ram,0x026ea744) */
/* WARNING: Removing unreachable block (ram,0x026ea7c8) */
/* WARNING: Removing unreachable block (ram,0x026ea74c) */
/* WARNING: Removing unreachable block (ram,0x026ea7cc) */
/* WARNING: Removing unreachable block (ram,0x026ea6c0) */
/* WARNING: Removing unreachable block (ram,0x026ea6e0) */
/* WARNING: Removing unreachable block (ram,0x026ea858) */
/* WARNING: Removing unreachable block (ram,0x026ea8a0) */
/* WARNING: Removing unreachable block (ram,0x026ea8c0) */
/* WARNING: Removing unreachable block (ram,0x026ea8cc) */
/* WARNING: Removing unreachable block (ram,0x026ea6f4) */
/* WARNING: Removing unreachable block (ram,0x026ea424) */
/* WARNING: Removing unreachable block (ram,0x026e9dac) */
/* WARNING: Removing unreachable block (ram,0x026ea220) */
/* WARNING: Removing unreachable block (ram,0x026ea23c) */
/* WARNING: Removing unreachable block (ram,0x026e9dcc) */
/* WARNING: Removing unreachable block (ram,0x026e9ddc) */
/* WARNING: Removing unreachable block (ram,0x026e9de8) */
/* WARNING: Removing unreachable block (ram,0x026e9e54) */
/* WARNING: Removing unreachable block (ram,0x026e9e64) */
/* WARNING: Removing unreachable block (ram,0x026e9e70) */
/* WARNING: Removing unreachable block (ram,0x026e9e7c) */
/* WARNING: Removing unreachable block (ram,0x026e9e84) */
/* WARNING: Removing unreachable block (ram,0x026e9f60) */
/* WARNING: Removing unreachable block (ram,0x026e9e90) */
/* WARNING: Removing unreachable block (ram,0x026e9e9c) */
/* WARNING: Removing unreachable block (ram,0x026e9f6c) */
/* WARNING: Removing unreachable block (ram,0x026e9f88) */
/* WARNING: Removing unreachable block (ram,0x026e9fa4) */
/* WARNING: Removing unreachable block (ram,0x026e9fac) */
/* WARNING: Removing unreachable block (ram,0x026e9fd4) */
/* WARNING: Removing unreachable block (ram,0x026e9fb8) */
/* WARNING: Removing unreachable block (ram,0x026e9fc4) */
/* WARNING: Removing unreachable block (ram,0x026e9fe0) */
/* WARNING: Removing unreachable block (ram,0x026e9ff0) */
/* WARNING: Removing unreachable block (ram,0x026e9ff8) */
/* WARNING: Removing unreachable block (ram,0x026ea00c) */
/* WARNING: Removing unreachable block (ram,0x026ea018) */
/* WARNING: Removing unreachable block (ram,0x026ea024) */
/* WARNING: Removing unreachable block (ram,0x026ea02c) */
/* WARNING: Removing unreachable block (ram,0x026ea054) */
/* WARNING: Removing unreachable block (ram,0x026ea038) */
/* WARNING: Removing unreachable block (ram,0x026ea044) */
/* WARNING: Removing unreachable block (ram,0x026ea060) */
/* WARNING: Removing unreachable block (ram,0x026ea094) */
/* WARNING: Removing unreachable block (ram,0x026ea0a4) */
/* WARNING: Removing unreachable block (ram,0x026ea0ac) */
/* WARNING: Removing unreachable block (ram,0x026ea0d4) */
/* WARNING: Removing unreachable block (ram,0x026ea0b8) */
/* WARNING: Removing unreachable block (ram,0x026ea0c4) */
/* WARNING: Removing unreachable block (ram,0x026ea0e0) */
/* WARNING: Removing unreachable block (ram,0x026ea0fc) */
/* WARNING: Removing unreachable block (ram,0x026ea0f0) */
/* WARNING: Removing unreachable block (ram,0x026ea124) */
/* WARNING: Removing unreachable block (ram,0x026e9df8) */
/* WARNING: Removing unreachable block (ram,0x026e9e0c) */
/* WARNING: Removing unreachable block (ram,0x026e9e18) */
/* WARNING: Removing unreachable block (ram,0x026e9e24) */
/* WARNING: Removing unreachable block (ram,0x026e9e2c) */
/* WARNING: Removing unreachable block (ram,0x026e9eac) */
/* WARNING: Removing unreachable block (ram,0x026e9e38) */
/* WARNING: Removing unreachable block (ram,0x026e9e44) */
/* WARNING: Removing unreachable block (ram,0x026e9eb8) */
/* WARNING: Removing unreachable block (ram,0x026ea200) */
/* WARNING: Removing unreachable block (ram,0x026ea204) */
/* WARNING: Removing unreachable block (ram,0x026ea214) */
/* WARNING: Removing unreachable block (ram,0x026ea260) */
/* WARNING: Removing unreachable block (ram,0x026ea268) */
/* WARNING: Removing unreachable block (ram,0x026ea278) */
/* WARNING: Removing unreachable block (ram,0x026ea27c) */
/* WARNING: Removing unreachable block (ram,0x026ea28c) */
/* WARNING: Removing unreachable block (ram,0x026ea294) */
/* WARNING: Removing unreachable block (ram,0x026ea2ac) */
/* WARNING: Removing unreachable block (ram,0x026ea2b4) */
/* WARNING: Removing unreachable block (ram,0x026ea2c4) */
/* WARNING: Removing unreachable block (ram,0x026ea2c8) */
/* WARNING: Removing unreachable block (ram,0x026ea2d8) */
/* WARNING: Removing unreachable block (ram,0x026ea2f0) */
/* WARNING: Removing unreachable block (ram,0x026ea320) */
/* WARNING: Removing unreachable block (ram,0x026ea338) */
/* WARNING: Removing unreachable block (ram,0x026ea2fc) */
/* WARNING: Removing unreachable block (ram,0x026ea128) */
/* WARNING: Removing unreachable block (ram,0x026ea130) */
/* WARNING: Removing unreachable block (ram,0x026ea148) */
/* WARNING: Removing unreachable block (ram,0x026ea150) */
/* WARNING: Removing unreachable block (ram,0x026ea178) */
/* WARNING: Removing unreachable block (ram,0x026ea15c) */
/* WARNING: Removing unreachable block (ram,0x026ea168) */
/* WARNING: Removing unreachable block (ram,0x026ea184) */
/* WARNING: Removing unreachable block (ram,0x026ea190) */
/* WARNING: Removing unreachable block (ram,0x026ea194) */
/* WARNING: Removing unreachable block (ram,0x026ea1ac) */
/* WARNING: Removing unreachable block (ram,0x026ea19c) */
/* WARNING: Removing unreachable block (ram,0x026ea1a4) */
/* WARNING: Removing unreachable block (ram,0x026ea1a8) */
/* WARNING: Removing unreachable block (ram,0x026ea248) */
/* WARNING: Removing unreachable block (ram,0x026e9ecc) */
/* WARNING: Removing unreachable block (ram,0x026e9ee0) */
/* WARNING: Removing unreachable block (ram,0x026e9eec) */
/* WARNING: Removing unreachable block (ram,0x026e9efc) */
/* WARNING: Removing unreachable block (ram,0x026e9f04) */
/* WARNING: Removing unreachable block (ram,0x026e9f2c) */
/* WARNING: Removing unreachable block (ram,0x026e9f10) */
/* WARNING: Removing unreachable block (ram,0x026e9f1c) */
/* WARNING: Removing unreachable block (ram,0x026e9f38) */
/* WARNING: Removing unreachable block (ram,0x026ea1c0) */
/* WARNING: Removing unreachable block (ram,0x026ea1d0) */
/* WARNING: Removing unreachable block (ram,0x026ea340) */
/* WARNING: Removing unreachable block (ram,0x026ea38c) */
/* WARNING: Removing unreachable block (ram,0x026ea3ac) */
/* WARNING: Removing unreachable block (ram,0x026ea3b8) */
/* WARNING: Removing unreachable block (ram,0x026ea1e0) */
/* WARNING: Removing unreachable block (ram,0x026ebe84) */
/* WARNING: Removing unreachable block (ram,0x026ebe8c) */
/* WARNING: Removing unreachable block (ram,0x026ec208) */
/* WARNING: Removing unreachable block (ram,0x026ebe90) */
/* WARNING: Removing unreachable block (ram,0x026ec214) */
/* WARNING: Removing unreachable block (ram,0x026ebe94) */
/* WARNING: Removing unreachable block (ram,0x026ebea4) */
/* WARNING: Removing unreachable block (ram,0x026ebea8) */
/* WARNING: Removing unreachable block (ram,0x026ebed8) */
/* WARNING: Removing unreachable block (ram,0x026ebee4) */
/* WARNING: Removing unreachable block (ram,0x026ebef0) */
/* WARNING: Removing unreachable block (ram,0x026ebef8) */
/* WARNING: Removing unreachable block (ram,0x026ebf20) */
/* WARNING: Removing unreachable block (ram,0x026ebf04) */
/* WARNING: Removing unreachable block (ram,0x026ebf10) */
/* WARNING: Removing unreachable block (ram,0x026ebf2c) */
/* WARNING: Removing unreachable block (ram,0x026ebf44) */
/* WARNING: Removing unreachable block (ram,0x026ec1b4) */
/* WARNING: Removing unreachable block (ram,0x026ec1c8) */
/* WARNING: Removing unreachable block (ram,0x026ebf4c) */
/* WARNING: Removing unreachable block (ram,0x026ebf64) */
/* WARNING: Removing unreachable block (ram,0x026ebf6c) */
/* WARNING: Removing unreachable block (ram,0x026ebf94) */
/* WARNING: Removing unreachable block (ram,0x026ebf78) */
/* WARNING: Removing unreachable block (ram,0x026ebf84) */
/* WARNING: Removing unreachable block (ram,0x026ebfa0) */
/* WARNING: Removing unreachable block (ram,0x026ec108) */
/* WARNING: Removing unreachable block (ram,0x026ebfb0) */
/* WARNING: Removing unreachable block (ram,0x026ec1cc) */
/* WARNING: Removing unreachable block (ram,0x026ec1e0) */
/* WARNING: Removing unreachable block (ram,0x026ebfb8) */
/* WARNING: Removing unreachable block (ram,0x026ebfcc) */
/* WARNING: Removing unreachable block (ram,0x026ebfd8) */
/* WARNING: Removing unreachable block (ram,0x026ebfe4) */
/* WARNING: Removing unreachable block (ram,0x026ebfec) */
/* WARNING: Removing unreachable block (ram,0x026ec014) */
/* WARNING: Removing unreachable block (ram,0x026ebff8) */
/* WARNING: Removing unreachable block (ram,0x026ec004) */
/* WARNING: Removing unreachable block (ram,0x026ec020) */
/* WARNING: Removing unreachable block (ram,0x026ec070) */
/* WARNING: Removing unreachable block (ram,0x026ec074) */
/* WARNING: Removing unreachable block (ram,0x026ec0ac) */
/* WARNING: Removing unreachable block (ram,0x026ec0b0) */
/* WARNING: Removing unreachable block (ram,0x026ec1e4) */
/* WARNING: Removing unreachable block (ram,0x026ec1f8) */
/* WARNING: Removing unreachable block (ram,0x026ec1fc) */
/* WARNING: Removing unreachable block (ram,0x026ec21c) */
/* WARNING: Removing unreachable block (ram,0x026ec234) */
/* WARNING: Removing unreachable block (ram,0x026ec244) */
/* WARNING: Removing unreachable block (ram,0x026ec258) */
/* WARNING: Removing unreachable block (ram,0x026ec278) */
/* WARNING: Removing unreachable block (ram,0x026ec2a4) */
/* WARNING: Removing unreachable block (ram,0x026ec2c0) */
/* WARNING: Removing unreachable block (ram,0x026ec284) */
/* WARNING: Removing unreachable block (ram,0x026ec110) */
/* WARNING: Removing unreachable block (ram,0x026ec118) */
/* WARNING: Removing unreachable block (ram,0x026ec130) */
/* WARNING: Removing unreachable block (ram,0x026ec138) */
/* WARNING: Removing unreachable block (ram,0x026ec160) */
/* WARNING: Removing unreachable block (ram,0x026ec144) */
/* WARNING: Removing unreachable block (ram,0x026ec150) */
/* WARNING: Removing unreachable block (ram,0x026ec16c) */
/* WARNING: Removing unreachable block (ram,0x026ec178) */
/* WARNING: Removing unreachable block (ram,0x026ec17c) */
/* WARNING: Removing unreachable block (ram,0x026ec2c8) */
/* WARNING: Removing unreachable block (ram,0x026ec2e4) */
/* WARNING: Removing unreachable block (ram,0x026ec2f4) */
/* WARNING: Removing unreachable block (ram,0x026ec30c) */
/* WARNING: Removing unreachable block (ram,0x026ec328) */
/* WARNING: Removing unreachable block (ram,0x026ec330) */
/* WARNING: Removing unreachable block (ram,0x026ec378) */
/* WARNING: Removing unreachable block (ram,0x026ec3ac) */
/* WARNING: Removing unreachable block (ram,0x026ec3b4) */
/* WARNING: Removing unreachable block (ram,0x026ec3f8) */
/* WARNING: Removing unreachable block (ram,0x026ec430) */
/* WARNING: Removing unreachable block (ram,0x026ec438) */
/* WARNING: Removing unreachable block (ram,0x026ec460) */
/* WARNING: Removing unreachable block (ram,0x026ec43c) */
/* WARNING: Removing unreachable block (ram,0x026ec46c) */
/* WARNING: Removing unreachable block (ram,0x026ec474) */
/* WARNING: Removing unreachable block (ram,0x026ec440) */
/* WARNING: Removing unreachable block (ram,0x026ec488) */
/* WARNING: Removing unreachable block (ram,0x026ec4ac) */
/* WARNING: Removing unreachable block (ram,0x026ec4b8) */
/* WARNING: Removing unreachable block (ram,0x026ec4c8) */
/* WARNING: Removing unreachable block (ram,0x026ec4cc) */
/* WARNING: Removing unreachable block (ram,0x026ec550) */
/* WARNING: Removing unreachable block (ram,0x026ec574) */
/* WARNING: Removing unreachable block (ram,0x026ec57c) */
/* WARNING: Removing unreachable block (ram,0x026ec81c) */
/* WARNING: Removing unreachable block (ram,0x026ec580) */
/* WARNING: Removing unreachable block (ram,0x026ec828) */
/* WARNING: Removing unreachable block (ram,0x026ec830) */
/* WARNING: Removing unreachable block (ram,0x026ec584) */
/* WARNING: Removing unreachable block (ram,0x026ec598) */
/* WARNING: Removing unreachable block (ram,0x026ec59c) */
/* WARNING: Removing unreachable block (ram,0x026ec5b8) */
/* WARNING: Removing unreachable block (ram,0x026ec694) */
/* WARNING: Removing unreachable block (ram,0x026ec6a4) */
/* WARNING: Removing unreachable block (ram,0x026ec6b8) */
/* WARNING: Removing unreachable block (ram,0x026ec6c4) */
/* WARNING: Removing unreachable block (ram,0x026ec6d8) */
/* WARNING: Removing unreachable block (ram,0x026ec6ec) */
/* WARNING: Removing unreachable block (ram,0x026ec700) */
/* WARNING: Removing unreachable block (ram,0x026ec70c) */
/* WARNING: Removing unreachable block (ram,0x026ec720) */
/* WARNING: Removing unreachable block (ram,0x026ec5b0) */
/* WARNING: Removing unreachable block (ram,0x026ec5d0) */
/* WARNING: Removing unreachable block (ram,0x026ec5e0) */
/* WARNING: Removing unreachable block (ram,0x026ec5ec) */
/* WARNING: Removing unreachable block (ram,0x026ec664) */
/* WARNING: Removing unreachable block (ram,0x026ec674) */
/* WARNING: Removing unreachable block (ram,0x026ec678) */
/* WARNING: Removing unreachable block (ram,0x026ec740) */
/* WARNING: Removing unreachable block (ram,0x026ec79c) */
/* WARNING: Removing unreachable block (ram,0x026ec7ac) */
/* WARNING: Removing unreachable block (ram,0x026ec7b0) */
/* WARNING: Removing unreachable block (ram,0x026ec7cc) */
/* WARNING: Removing unreachable block (ram,0x026ec7d8) */
/* WARNING: Removing unreachable block (ram,0x026ec7ec) */
/* WARNING: Removing unreachable block (ram,0x026ec844) */
/* WARNING: Removing unreachable block (ram,0x026ec800) */
/* WARNING: Removing unreachable block (ram,0x026ec68c) */
/* WARNING: Removing unreachable block (ram,0x026ec758) */
/* WARNING: Removing unreachable block (ram,0x026ec768) */
/* WARNING: Removing unreachable block (ram,0x026ec76c) */
/* WARNING: Removing unreachable block (ram,0x026ec5fc) */
/* WARNING: Removing unreachable block (ram,0x026ec60c) */
/* WARNING: Removing unreachable block (ram,0x026ec610) */
/* WARNING: Removing unreachable block (ram,0x026ec62c) */
/* WARNING: Removing unreachable block (ram,0x026ec638) */
/* WARNING: Removing unreachable block (ram,0x026ec84c) */
/* WARNING: Removing unreachable block (ram,0x026ec874) */
/* WARNING: Removing unreachable block (ram,0x026ec87c) */
/* WARNING: Removing unreachable block (ram,0x026ec8a0) */
/* WARNING: Removing unreachable block (ram,0x026ec880) */
/* WARNING: Removing unreachable block (ram,0x026ec8ac) */
/* WARNING: Removing unreachable block (ram,0x026ec8b4) */
/* WARNING: Removing unreachable block (ram,0x026ec884) */
/* WARNING: Removing unreachable block (ram,0x026ec8c8) */
/* WARNING: Removing unreachable block (ram,0x026ec8e8) */
/* WARNING: Removing unreachable block (ram,0x026ec8f4) */
/* WARNING: Removing unreachable block (ram,0x026ec904) */
/* WARNING: Removing unreachable block (ram,0x026ec908) */
/* WARNING: Removing unreachable block (ram,0x026ec970) */
/* WARNING: Removing unreachable block (ram,0x026ec998) */
/* WARNING: Removing unreachable block (ram,0x026ec9a0) */
/* WARNING: Removing unreachable block (ram,0x026ec9d0) */
/* WARNING: Removing unreachable block (ram,0x026ec9a4) */
/* WARNING: Removing unreachable block (ram,0x026ec9dc) */
/* WARNING: Removing unreachable block (ram,0x026ec9a8) */
/* WARNING: Removing unreachable block (ram,0x026ec9e8) */
/* WARNING: Removing unreachable block (ram,0x026ec9f0) */
/* WARNING: Removing unreachable block (ram,0x026ec9ac) */
/* WARNING: Removing unreachable block (ram,0x026eca04) */
/* WARNING: Removing unreachable block (ram,0x026eca28) */
/* WARNING: Removing unreachable block (ram,0x026eca34) */
/* WARNING: Removing unreachable block (ram,0x026eca44) */
/* WARNING: Removing unreachable block (ram,0x026eca48) */
/* WARNING: Removing unreachable block (ram,0x026ecacc) */
/* WARNING: Removing unreachable block (ram,0x026ecae8) */
/* WARNING: Removing unreachable block (ram,0x026ecaf8) */
/* WARNING: Removing unreachable block (ram,0x026eca64) */
/* WARNING: Removing unreachable block (ram,0x026ec924) */
/* WARNING: Removing unreachable block (ram,0x026ec648) */
/* WARNING: Removing unreachable block (ram,0x026ec788) */
/* WARNING: Removing unreachable block (ram,0x026ec4e8) */
/* WARNING: Removing unreachable block (ram,0x026ec3b8) */
/* WARNING: Removing unreachable block (ram,0x026ec3cc) */
/* WARNING: Removing unreachable block (ram,0x026ec3d0) */
/* WARNING: Removing unreachable block (ram,0x026ec334) */
/* WARNING: Removing unreachable block (ram,0x026ec348) */
/* WARNING: Removing unreachable block (ram,0x026ec34c) */
/* WARNING: Removing unreachable block (ram,0x026ec190) */
/* WARNING: Removing unreachable block (ram,0x026ec0cc) */
/* WARNING: Removing unreachable block (ram,0x026ec0e0) */
/* WARNING: Removing unreachable block (ram,0x026ec0e4) */
/* WARNING: Removing unreachable block (ram,0x026ec0f4) */
/* WARNING: Removing unreachable block (ram,0x026ec0f8) */
/* WARNING: Removing unreachable block (ram,0x0362de58) */
/* WARNING: Removing unreachable block (ram,0x0362de68) */
/* WARNING: Removing unreachable block (ram,0x0362de74) */
/* WARNING: Removing unreachable block (ram,0x0362de88) */
/* WARNING: Removing unreachable block (ram,0x0362de90) */
/* WARNING: Removing unreachable block (ram,0x0362dea0) */
/* WARNING: Removing unreachable block (ram,0x0362dee4) */
/* WARNING: Removing unreachable block (ram,0x0362df04) */
/* WARNING: Removing unreachable block (ram,0x0362df10) */
/* WARNING: Removing unreachable block (ram,0x0362df1c) */
/* WARNING: Removing unreachable block (ram,0x0362df24) */
/* WARNING: Removing unreachable block (ram,0x0362df34) */
/* WARNING: Removing unreachable block (ram,0x0362df7c) */
/* WARNING: Removing unreachable block (ram,0x0362df84) */
/* WARNING: Removing unreachable block (ram,0x0362df90) */
/* WARNING: Removing unreachable block (ram,0x0362dfa4) */
/* WARNING: Removing unreachable block (ram,0x0362dfac) */
/* WARNING: Removing unreachable block (ram,0x0362dfbc) */
/* WARNING: Removing unreachable block (ram,0x0362e000) */
/* WARNING: Removing unreachable block (ram,0x026ebd30) */
/* WARNING: Removing unreachable block (ram,0x026ebd50) */
/* WARNING: Removing unreachable block (ram,0x026ebd60) */
/* WARNING: Removing unreachable block (ram,0x026ebd84) */
/* WARNING: Removing unreachable block (ram,0x026ebdcc) */
/* WARNING: Removing unreachable block (ram,0x026ebdec) */
/* WARNING: Removing unreachable block (ram,0x026ebdf8) */
/* WARNING: Removing unreachable block (ram,0x026eabec) */
/* WARNING: Removing unreachable block (ram,0x026ead04) */
/* WARNING: Removing unreachable block (ram,0x026ead0c) */
/* WARNING: Removing unreachable block (ram,0x026ead10) */
/* WARNING: Removing unreachable block (ram,0x026ead18) */
/* WARNING: Removing unreachable block (ram,0x026ead30) */
/* WARNING: Removing unreachable block (ram,0x026ead38) */
/* WARNING: Removing unreachable block (ram,0x026ead60) */
/* WARNING: Removing unreachable block (ram,0x026ead44) */
/* WARNING: Removing unreachable block (ram,0x026ead50) */
/* WARNING: Removing unreachable block (ram,0x026ead6c) */
/* WARNING: Removing unreachable block (ram,0x026ead78) */
/* WARNING: Removing unreachable block (ram,0x026ead7c) */
/* WARNING: Removing unreachable block (ram,0x026eadac) */
/* WARNING: Removing unreachable block (ram,0x026eadc4) */
/* WARNING: Removing unreachable block (ram,0x026ead84) */
/* WARNING: Removing unreachable block (ram,0x026ead8c) */
/* WARNING: Removing unreachable block (ram,0x026eadcc) */
/* WARNING: Removing unreachable block (ram,0x026eaddc) */
/* WARNING: Removing unreachable block (ram,0x026ead90) */
/* WARNING: Removing unreachable block (ram,0x026eae20) */
/* WARNING: Removing unreachable block (ram,0x026eae28) */
/* WARNING: Removing unreachable block (ram,0x026eae38) */
/* WARNING: Removing unreachable block (ram,0x026eae3c) */
/* WARNING: Removing unreachable block (ram,0x026eae4c) */
/* WARNING: Removing unreachable block (ram,0x026eae54) */
/* WARNING: Removing unreachable block (ram,0x026eae64) */
/* WARNING: Removing unreachable block (ram,0x026eae68) */
/* WARNING: Removing unreachable block (ram,0x026eae78) */
/* WARNING: Removing unreachable block (ram,0x026eae8c) */
/* WARNING: Removing unreachable block (ram,0x026eaebc) */
/* WARNING: Removing unreachable block (ram,0x026eaed4) */
/* WARNING: Removing unreachable block (ram,0x026eae98) */
/* WARNING: Removing unreachable block (ram,0x026eada8) */
/* WARNING: Removing unreachable block (ram,0x026eaedc) */
/* WARNING: Removing unreachable block (ram,0x026eaf28) */
/* WARNING: Removing unreachable block (ram,0x026eaf48) */
/* WARNING: Removing unreachable block (ram,0x026eaf54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0362dd10(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined *puVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long lVar25;
  int *piVar26;
  long *plVar27;
  long lVar28;
  long *plVar29;
  undefined8 unaff_x21;
  long *plVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined *unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x29;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  char acStack_1dc [332];
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long *plStack_48;
  
  puVar32 = &DAT_059eb190;
  if ((bRam0000000005e2d4dd & 1) == 0) {
    func_0x0249f8e4(&DAT_05a42610);
    func_0x0249f8e4(&DAT_05a43558);
    func_0x0249f8e4(&DAT_05a43e10);
    func_0x0249f8e4(&DAT_059c68a8);
    func_0x0249f8e4(&DAT_059c73b0);
    func_0x0249f8e4(&DAT_059c5550);
    func_0x0249f8e4(&DAT_05a5fb80);
    func_0x0249f8e4(&DAT_05a5fb88);
    func_0x0249f8e4(&DAT_05a5fb90);
    func_0x0249f8e4(&DAT_05a5fb98);
    func_0x0249f8e4(&DAT_059eb190);
    bRam0000000005e2d4dd = 1;
  }
  plVar27 = *(long **)(param_1 + 0x18);
  if (*(int *)(_DAT_059eb190 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  puVar23 = *(undefined8 **)(_DAT_059eb190 + 0xb8);
  lVar28 = puVar23[2];
  puVar31 = &DAT_05a43558;
  if (lVar28 == 0) {
    if (*(int *)(_DAT_059eb190 + 0xe4) == 0) {
      func_0x0249fa64();
      puVar23 = *(undefined8 **)(_DAT_059eb190 + 0xb8);
    }
    unaff_x21 = *puVar23;
    lVar28 = func_0x0249fb80(_DAT_059c73b0);
    param_4 = 0;
    func_0x02a9aa34(lVar28,unaff_x21,_DAT_05a5fb80);
    plVar15 = (long *)(*(long *)(_DAT_059eb190 + 0xb8) + 0x10);
    *plVar15 = lVar28;
    func_0x0249f888(plVar15,lVar28);
  }
  lVar16 = _DAT_05a43558;
  uStack_70 = 0x362de58;
  puStack_68 = &DAT_059eb190;
  puStack_60 = &DAT_05a43558;
  lVar22 = _DAT_05a43558;
  uStack_58 = unaff_x21;
  lStack_50 = lVar28;
  plStack_48 = plVar27;
  if (*(long *)(_DAT_05a43558 + 0x38) == 0) {
    func_0x024d8f9c(_DAT_05a43558);
  }
  if (plVar27 == (long *)0x0) {
    puVar12 = &DAT_05ab6ae0;
LAB_026e9198:
    uVar14 = func_0x0249f8f8(puVar12);
    uVar14 = func_0x04730fcc(uVar14,0);
    func_0x0249fa54(uVar14,lVar16);
LAB_026e91ac:
    func_0x0249ff10(plVar27);
  }
  else {
    if (lVar28 == 0) {
      puVar12 = &DAT_05ab5d58;
      goto LAB_026e9198;
    }
    lVar11 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x024d8f40();
    }
    lVar21 = *plVar27;
    bVar1 = *(byte *)(lVar21 + 0x130);
    if (*(byte *)(lVar11 + 0x130) <= bVar1) {
      lVar25 = *(long *)(lVar16 + 0x38);
      if (*(long *)(*(long *)(lVar21 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) != lVar11)
      goto LAB_026e8f18;
      lVar11 = *(long *)(lVar25 + 0x10);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x024d8f40(lVar11);
        lVar21 = *plVar27;
        bVar1 = *(byte *)(lVar21 + 0x130);
      }
      if ((*(byte *)(lVar11 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar21 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11))
      {
        lVar11 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
        lVar16 = *(long *)(*(long *)(lVar16 + 0x38) + 0x18);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = func_0x024d8f40(lVar11);
          lVar21 = *plVar27;
          bVar1 = *(byte *)(lVar21 + 0x130);
        }
        if ((*(byte *)(lVar11 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar21 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11
           )) {
          lVar16 = func_0x0249fa60(*(undefined8 *)
                                    (lVar21 + (ulong)*(ushort *)(lVar16 + 0x50) * 0x10 + 0x140),
                                   lVar16);
                    /* WARNING: Could not recover jumptable at 0x026e909c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar32 = (undefined *)(**(code **)(lVar16 + 8))(plVar27,lVar28,lVar16);
          return puVar32;
        }
      }
      goto LAB_026e91ac;
    }
    lVar25 = *(long *)(lVar16 + 0x38);
LAB_026e8f18:
    lVar11 = *(long *)(lVar25 + 0x28);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x024d8f40(lVar11);
    }
    lVar11 = func_0x0249fa68(plVar27,lVar11);
    if (lVar11 == 0) {
      lVar11 = *(long *)(*(long *)(lVar16 + 0x38) + 0x48);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x024d8f40();
      }
      if (*(byte *)(*plVar27 + 0x130) < *(byte *)(lVar11 + 0x130)) {
        lVar21 = *(long *)(lVar16 + 0x38);
LAB_026e90b8:
        if ((*(ushort *)(*(long *)(lVar21 + 0x60) + 0x135) & 1) == 0) {
          func_0x024d8f40();
        }
        puVar32 = (undefined *)func_0x0249fb80();
        func_0x029a85c0(puVar32,plVar27,0,lVar28,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x68));
        return puVar32;
      }
      lVar21 = *(long *)(lVar16 + 0x38);
      if (*(long *)(*(long *)(*plVar27 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) != lVar11
         ) goto LAB_026e90b8;
      if ((*(ushort *)(*(long *)(lVar21 + 0x50) + 0x135) & 1) == 0) {
        func_0x024d8f40();
      }
      puVar31 = (undefined *)func_0x0249fb80();
      lVar11 = *(long *)(*(long *)(lVar16 + 0x38) + 0x48);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x024d8f40(lVar11);
      }
      if ((*(byte *)(lVar11 + 0x130) <= *(byte *)(*plVar27 + 0x130)) &&
         (*(long *)(*(long *)(*plVar27 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11
         )) {
        func_0x029a8d1c(puVar31,plVar27,0,lVar28,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x58));
        return puVar31;
      }
      goto LAB_026e91ac;
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar16 + 0x38) + 0x30) + 0x135) & 1) == 0) {
      func_0x024d8f40();
    }
    puVar31 = (undefined *)func_0x0249fb80();
    puVar32 = *(undefined **)(*(long *)(lVar16 + 0x38) + 0x28);
    if ((*(ushort *)(puVar32 + 0x135) & 1) == 0) {
      puVar32 = (undefined *)func_0x024d8f40(puVar32);
    }
    lVar11 = func_0x0249fa68(plVar27,puVar32);
    if (lVar11 != 0) {
      func_0x029a80a8(puVar31,lVar11,0,lVar28,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x38));
      return puVar31;
    }
  }
  auVar34 = func_0x0249ff10(plVar27,puVar32);
  puVar8 = &uStack_90;
  uStack_90 = 0x26e91c0;
  lVar11 = lVar22;
  lStack_88 = lVar16;
  plStack_80 = plVar27;
  lStack_78 = lVar28;
  if (*(long *)(lVar22 + 0x38) == 0) {
    func_0x024d8f9c(lVar22);
  }
  auVar7._8_8_ = plStack_80;
  auVar7._0_8_ = lStack_88;
  if (auVar34._0_8_ == 0) {
    puVar12 = &DAT_05ab6ae0;
LAB_026e921c:
    uVar14 = func_0x0249f8f8(puVar12);
    uVar33 = func_0x04730fcc(uVar14,0);
    uVar14 = 0x26e9230;
    auVar35 = func_0x0249fa54(uVar33,lVar22);
  }
  else {
    if (auVar34._8_8_ == 0) {
      puVar12 = &DAT_05ab5d58;
      goto LAB_026e921c;
    }
    lVar11 = *(long *)(*(long *)(lVar22 + 0x38) + 0x10);
    puVar8 = &uStack_70;
    lVar22 = lStack_78;
    uVar14 = uStack_90;
    auVar35 = auVar34;
    auVar34 = auVar7;
  }
  *(undefined8 *)((long)puVar8 + -0x30) = uVar14;
  *(undefined **)((long)puVar8 + -0x20) = puVar31;
  *(undefined1 (*) [16])((long)puVar8 + -0x18) = auVar34;
  *(long *)((long)puVar8 + -8) = lVar22;
  plVar27 = *(long **)(lVar11 + 0x38);
  if (plVar27 == (long *)0x0) {
    func_0x024d8f9c(lVar11);
    plVar27 = *(long **)(lVar11 + 0x38);
  }
  if ((*(ushort *)(*plVar27 + 0x135) & 1) == 0) {
    func_0x024d8f40();
  }
  puVar31 = (undefined *)func_0x0249fb80();
  lVar28 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
  func_0x02806980(puVar31,0xfffffffe);
  if (puVar31 != (undefined *)0x0) {
    func_0x022be0d8(puVar31,*(long *)(**(long **)(lVar11 + 0x38) + 0x80) + 0x80,auVar35._0_8_);
    func_0x022be0d8(puVar31,*(long *)(**(long **)(lVar11 + 0x38) + 0x80) + 0xc0,auVar35._8_8_);
    return puVar31;
  }
  auVar34 = func_0x0249fb90();
  *(undefined8 *)((long)puVar8 + -0x50) = 0x26e92dc;
  *(long *)((long)puVar8 + -0x48) = auVar35._0_8_;
  *(long *)((long)puVar8 + -0x40) = lVar11;
  *(long *)((long)puVar8 + -0x38) = auVar35._8_8_;
  lVar16 = lVar28;
  if (*(long *)(lVar28 + 0x38) == 0) {
    func_0x024d8f9c(lVar28);
  }
  if (auVar34._0_8_ == 0) {
    puVar31 = &DAT_05ab6ae0;
LAB_026e9338:
    uVar14 = func_0x0249f8f8(puVar31);
    uVar14 = func_0x04730fcc(uVar14,0);
    auVar35 = func_0x0249fa54(uVar14,lVar28);
    puVar9 = (undefined1 *)((long)puVar8 + -0x80);
    *(undefined8 *)((long)puVar8 + -0x80) = 0x26e934c;
    *(undefined8 *)((long)puVar8 + -0x70) = 0;
    *(undefined1 (*) [16])((long)puVar8 + -0x68) = auVar34;
    *(long *)((long)puVar8 + -0x58) = lVar28;
    lVar28 = lVar16;
    lVar22 = param_4;
    if (*(long *)(param_4 + 0x38) == 0) {
      func_0x024d8f9c(param_4);
    }
    if (auVar35._0_8_ == 0) {
      puVar31 = &DAT_05ab6ae0;
LAB_026e93c8:
      uVar14 = func_0x0249f8f8(puVar31);
      uVar33 = func_0x04730fcc(uVar14,0);
      uVar14 = 0x26e93dc;
      auVar34 = func_0x0249fa54(uVar33,param_4);
      goto LAB_026e93dc;
    }
    if (auVar35._8_8_ == 0) {
      puVar31 = &DAT_05aacdf8;
      goto LAB_026e93c8;
    }
    if (lVar16 == 0) {
      puVar31 = &DAT_05ab5510;
      goto LAB_026e93c8;
    }
    lVar28 = *(long *)((long)puVar8 + -0x60);
    uVar14 = *(undefined8 *)((long)puVar8 + -0x70);
    auVar34._8_8_ = *(undefined8 *)((long)puVar8 + -0x58);
    auVar34._0_8_ = *(undefined8 *)((long)puVar8 + -0x68);
    lVar22 = *(long *)(*(long *)(param_4 + 0x38) + 0x18);
    puVar10 = (undefined1 *)((long)puVar8 + -0x50);
    uVar33 = *(undefined8 *)((long)puVar8 + -0x80);
  }
  else {
    if (auVar34._8_8_ == 0) {
      puVar31 = &DAT_05ab5d58;
      goto LAB_026e9338;
    }
    lVar16 = *(long *)((long)puVar8 + -0x40);
    lVar28 = *(long *)(*(long *)(lVar28 + 0x38) + 0x10);
    puVar9 = (undefined1 *)((long)puVar8 + -0x30);
    uVar14 = *(undefined8 *)((long)puVar8 + -0x50);
    auVar35._8_8_ = 0;
    auVar35._0_8_ = *(ulong *)((long)puVar8 + -0x48);
    auVar35 = auVar35 << 0x40;
    lVar22 = param_4;
    param_4 = *(long *)((long)puVar8 + -0x38);
LAB_026e93dc:
    puVar10 = puVar9 + -0x30;
    *(undefined8 *)(puVar9 + -0x30) = uVar14;
    *(undefined1 (*) [16])(puVar9 + -0x20) = auVar35;
    *(long *)(puVar9 + -0x10) = lVar16;
    *(long *)(puVar9 + -8) = param_4;
    plVar27 = *(long **)(lVar28 + 0x38);
    if (plVar27 == (long *)0x0) {
      func_0x024d8f9c(lVar28);
      plVar27 = *(long **)(lVar28 + 0x38);
    }
    if ((*(ushort *)(*plVar27 + 0x135) & 1) == 0) {
      func_0x024d8f40();
    }
    puVar31 = (undefined *)func_0x0249fb80();
    lVar16 = *(long *)(*(long *)(lVar28 + 0x38) + 8);
    func_0x028073c8(puVar31,0xfffffffe);
    if (puVar31 != (undefined *)0x0) {
      func_0x022be0d8(puVar31,*(long *)(**(long **)(lVar28 + 0x38) + 0x80) + 0x80,auVar34._0_8_);
      func_0x022be0d8(puVar31,*(long *)(**(long **)(lVar28 + 0x38) + 0x80) + 0xc0,auVar34._8_8_);
      return puVar31;
    }
    uVar33 = 0x26e9488;
    auVar35 = func_0x0249fb90();
    uVar14 = 0;
  }
  *(undefined8 *)(puVar10 + -0x30) = uVar33;
  *(undefined **)(puVar10 + -0x28) = puVar32;
  *(undefined8 *)(puVar10 + -0x20) = uVar14;
  *(long *)(puVar10 + -0x18) = auVar34._0_8_;
  *(long *)(puVar10 + -0x10) = lVar28;
  *(long *)(puVar10 + -8) = auVar34._8_8_;
  plVar27 = *(long **)(lVar22 + 0x38);
  if (plVar27 == (long *)0x0) {
    func_0x024d8f9c(lVar22);
    plVar27 = *(long **)(lVar22 + 0x38);
  }
  if ((*(ushort *)(*plVar27 + 0x135) & 1) == 0) {
    func_0x024d8f40();
  }
  puVar32 = (undefined *)func_0x0249fb80();
  lVar28 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
  func_0x028081a0(puVar32,0xfffffffe);
  if (puVar32 != (undefined *)0x0) {
    func_0x022be0d8(puVar32,*(long *)(**(long **)(lVar22 + 0x38) + 0x80) + 0x80,auVar35._0_8_);
    func_0x022be0d8(puVar32,*(long *)(**(long **)(lVar22 + 0x38) + 0x80) + 0xc0,auVar35._8_8_);
    func_0x022be0d8(puVar32,*(long *)(**(long **)(lVar22 + 0x38) + 0x80) + 0x100,lVar16);
    return puVar32;
  }
  auVar36 = func_0x0249fb90();
  plVar15 = auVar36._8_8_;
  plVar27 = auVar36._0_8_;
  *(undefined8 *)(puVar10 + -0x50) = 0x26e9554;
  *(long *)(puVar10 + -0x48) = auVar35._8_8_;
  *(long *)(puVar10 + -0x40) = lVar22;
  *(long *)(puVar10 + -0x38) = lVar16;
  lVar16 = *(long *)(lVar28 + 0x38);
  if (lVar16 == 0) {
    func_0x024d8f9c(lVar28);
    lVar16 = *(long *)(lVar28 + 0x38);
  }
  plVar19 = *(long **)(lVar16 + 8);
  plVar17 = (long *)0x0;
  *(undefined8 *)(puVar10 + -0x90) = unaff_x29;
  *(undefined8 *)(puVar10 + -0x88) = *(undefined8 *)(puVar10 + -0x50);
  *(long **)(puVar10 + -0x80) = unaff_x27;
  *(undefined **)(puVar10 + -0x70) = unaff_x26;
  *(undefined8 *)(puVar10 + -0x68) = unaff_x25;
  *(undefined8 *)(puVar10 + -0x60) = unaff_x24;
  *(undefined8 *)(puVar10 + -0x58) = 0;
  *(long *)(puVar10 + -0x50) = auVar35._0_8_;
  *(undefined8 *)(puVar10 + -0x48) = *(undefined8 *)(puVar10 + -0x48);
  *(undefined8 *)(puVar10 + -0x40) = *(undefined8 *)(puVar10 + -0x40);
  *(undefined8 *)(puVar10 + -0x38) = *(undefined8 *)(puVar10 + -0x38);
  lVar28 = tpidr_el0;
  *(undefined8 *)(puVar10 + -0x98) = *(undefined8 *)(lVar28 + 0x28);
  lVar16 = plVar19[7];
  if (lVar16 == 0) {
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059df6e0);
    lVar16 = plVar19[7];
    if (lVar16 == 0) {
      func_0x024d8f9c(plVar19);
      lVar16 = plVar19[7];
    }
  }
  uVar24 = (ulong)*(uint *)(*(long *)(lVar16 + 0x40) + 0xfc) + 0xf & 0x1fffffff0;
  plVar29 = (long *)(puVar10 + (-0xe0 - uVar24));
  plVar30 = (long *)((long)plVar29 - uVar24);
  *(undefined8 *)(puVar10 + -0xc0) = 0;
  *(undefined8 *)(puVar10 + -0xb8) = 0;
  plVar13 = (long *)func_0x026ad0ac(*(undefined8 *)(lVar16 + 8));
  auVar6._8_8_ = plVar13;
  auVar6._0_8_ = plVar19;
  auVar5._8_8_ = plVar13;
  auVar5._0_8_ = plVar19;
  auVar4._8_8_ = plVar13;
  auVar4._0_8_ = plVar19;
  auVar3._8_8_ = plVar13;
  auVar3._0_8_ = plVar19;
  auVar37._8_8_ = plVar13;
  auVar37._0_8_ = plVar19;
  if (plVar27 == (long *)0x0) {
LAB_026e9bc8:
    puVar32 = &DAT_05aaf700;
  }
  else {
    if (plVar15 != (long *)0x0) {
      lVar16 = *(long *)(plVar19[7] + 0x20);
      plVar18 = plVar17;
      if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = func_0x024d8f40(lVar16);
        plVar18 = plVar17;
      }
      lVar22 = *plVar27;
      uVar24 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar24 != 0) {
        piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == lVar16) {
            puVar23 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_026e96b4;
          }
          uVar24 = uVar24 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar24 != 0);
      }
      plVar18 = (long *)0x0;
      puVar23 = (undefined8 *)func_0x024d927c(plVar27);
LAB_026e96b4:
      uVar14 = (*(code *)*puVar23)(plVar27,puVar23[1]);
      lVar16 = plVar19[7];
      *(undefined8 *)(puVar10 + -0xb8) = uVar14;
      lVar16 = *(long *)(lVar16 + 0x20);
      bVar1 = *(byte *)(lVar16 + 0x135);
      *(undefined8 *)(puVar10 + -0xd0) = 0;
      *(undefined1 **)(puVar10 + -200) = puVar10 + -0xb8;
      if ((bVar1 & 1) == 0) {
        lVar16 = func_0x024d8f40(lVar16);
      }
      lVar22 = *plVar15;
      uVar24 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar24 != 0) {
        piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == lVar16) {
            puVar23 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_026e9738;
          }
          uVar24 = uVar24 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar24 != 0);
      }
      plVar18 = (long *)0x0;
      puVar23 = (undefined8 *)func_0x024d927c(plVar15);
LAB_026e9738:
      puVar32 = (undefined *)(*(code *)*puVar23)(plVar15,puVar23[1]);
      *(undefined **)(puVar10 + -0xc0) = puVar32;
      unaff_x26 = &DAT_059df6e0;
      *(undefined8 *)(puVar10 + -0xe0) = 0;
      *(undefined1 **)(puVar10 + -0xd8) = puVar10 + -0xc0;
      do {
        plVar15 = *(long **)(puVar10 + -0xb8);
        plVar27 = (long *)0x0;
        plVar17 = plVar18;
        if (plVar15 == (long *)0x0) {
LAB_026e9b8c:
          auVar2._8_8_ = plVar27;
          auVar2._0_8_ = &DAT_059df598;
          auVar37 = auVar3;
          if (*(long *)(lVar28 + 0x28) != *(long *)(puVar10 + -0x98)) goto LAB_026e9cfc;
          puVar32 = (undefined *)func_0x0249fb90();
LAB_026e9ba0:
          auVar2._8_8_ = plVar27;
          auVar2._0_8_ = &DAT_059df598;
          auVar37 = auVar4;
          if (*(long *)(lVar28 + 0x28) != *(long *)(puVar10 + -0x98)) goto LAB_026e9cfc;
          puVar32 = (undefined *)func_0x0249fb90();
          plVar18 = plVar17;
LAB_026e9bb4:
          plVar17 = plVar18;
          auVar2._8_8_ = plVar27;
          auVar2._0_8_ = &DAT_059df598;
          auVar36._8_8_ = plVar27;
          auVar36._0_8_ = &DAT_059df598;
          auVar37 = auVar5;
          if (*(long *)(lVar28 + 0x28) != *(long *)(puVar10 + -0x98)) goto LAB_026e9cfc;
          func_0x0249fb90();
          goto LAB_026e9bc8;
        }
        lVar16 = *plVar15;
        uVar24 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar24 != 0) {
          piVar26 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == _DAT_059df6e0) {
              puVar23 = (undefined8 *)(lVar16 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_026e97ac;
            }
            uVar24 = uVar24 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar24 != 0);
        }
        plVar18 = (long *)0x0;
        puVar23 = (undefined8 *)func_0x024d927c(plVar15);
LAB_026e97ac:
        puVar32 = (undefined *)(*(code *)*puVar23)(plVar15,puVar23[1]);
        plVar15 = *(long **)(puVar10 + -0xc0);
        auVar36._8_8_ = plVar15;
        auVar36._0_8_ = &DAT_059df598;
        plVar17 = plVar18;
        if (((ulong)puVar32 & 1) == 0) {
          if (plVar15 == (long *)0x0) goto LAB_026e9c2c;
          lVar16 = *plVar15;
          uVar24 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar24 == 0) goto LAB_026e9a28;
          piVar26 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          goto LAB_026e9a10;
        }
        plVar27 = (long *)0x0;
        if (plVar15 == (long *)0x0) goto LAB_026e9ba0;
        lVar16 = *plVar15;
        uVar24 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar24 != 0) {
          piVar26 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == _DAT_059df6e0) {
              puVar23 = (undefined8 *)(lVar16 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_026e9810;
            }
            uVar24 = uVar24 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar24 != 0);
        }
        plVar18 = (long *)0x0;
        puVar23 = (undefined8 *)func_0x024d927c(plVar15);
LAB_026e9810:
        puVar32 = (undefined *)(*(code *)*puVar23)(plVar15,puVar23[1]);
        if (((ulong)puVar32 & 1) == 0) break;
        plVar17 = *(long **)(puVar10 + -0xb8);
        plVar27 = (long *)0x0;
        if (plVar17 == (long *)0x0) goto LAB_026e9bb4;
        lVar16 = *(long *)(plVar19[7] + 0x30);
        if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = func_0x024d8f40(lVar16);
        }
        lVar22 = *plVar17;
        uVar24 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar24 != 0) {
          piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == lVar16) {
              lVar16 = lVar22 + (long)*piVar26 * 0x10 + 0x138;
              goto LAB_026e9890;
            }
            uVar24 = uVar24 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar24 != 0);
        }
        lVar16 = func_0x024d927c(plVar17,lVar16,0);
LAB_026e9890:
        lVar16 = *(long *)(lVar16 + 8);
        *(long **)(puVar10 + -0xb0) = plVar29;
        puVar32 = (undefined *)
                  (**(code **)(lVar16 + 0x10))
                            (*(undefined8 *)(lVar16 + 8),lVar16,plVar17,puVar10 + -0xb0,plVar29);
        plVar27 = *(long **)(puVar10 + -0xc0);
        auVar2._8_8_ = plVar27;
        auVar2._0_8_ = &DAT_059df598;
        if (plVar27 == (long *)0x0) {
LAB_026e9b78:
          if (*(long *)(lVar28 + 0x28) == *(long *)(puVar10 + -0x98)) {
            puVar32 = (undefined *)func_0x0249fb90();
            goto LAB_026e9b8c;
          }
          goto LAB_026e9cfc;
        }
        lVar16 = *(long *)(plVar19[7] + 0x30);
        if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = func_0x024d8f40(lVar16);
        }
        lVar22 = *plVar27;
        uVar24 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar24 != 0) {
          piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == lVar16) {
              lVar16 = lVar22 + (long)*piVar26 * 0x10 + 0x138;
              goto LAB_026e991c;
            }
            uVar24 = uVar24 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar24 != 0);
        }
        lVar16 = func_0x024d927c(plVar27,lVar16,0);
LAB_026e991c:
        lVar16 = *(long *)(lVar16 + 8);
        *(long **)(puVar10 + -0xb0) = plVar30;
        plVar17 = plVar27;
        puVar32 = (undefined *)
                  (**(code **)(lVar16 + 0x10))
                            (*(undefined8 *)(lVar16 + 8),lVar16,plVar27,puVar10 + -0xb0,plVar30);
        if (plVar13 == (long *)0x0) goto LAB_026e9b78;
        plVar27 = (long *)plVar19[7];
        lVar16 = *plVar27;
        if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = func_0x024d8f40(lVar16);
          plVar27 = (long *)plVar19[7];
        }
        plVar15 = plVar29;
        unaff_x27 = plVar30;
        if (-1 < *(int *)(plVar27[8] + 0x28)) {
          plVar15 = (long *)*plVar29;
          unaff_x27 = (long *)*plVar30;
        }
        lVar22 = *plVar13;
        uVar24 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar24 != 0) {
          piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == lVar16) {
              lVar16 = lVar22 + (long)*piVar26 * 0x10 + 0x138;
              goto LAB_026e99c4;
            }
            uVar24 = uVar24 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar24 != 0);
        }
        lVar16 = func_0x024d927c(plVar13,lVar16,0);
LAB_026e99c4:
        *(long **)(puVar10 + -0xb0) = plVar15;
        *(long **)(puVar10 + -0xa8) = unaff_x27;
        lVar16 = *(long *)(lVar16 + 8);
        plVar18 = plVar13;
        puVar32 = (undefined *)
                  (**(code **)(lVar16 + 0x10))
                            (*(undefined8 *)(lVar16 + 8),lVar16,plVar13,puVar10 + -0xb0,
                             puVar10 + -0x9c);
      } while (puVar10[-0x9c] != '\0');
      plVar29 = (long *)0xc;
LAB_026e9a64:
      auVar36._8_8_ = plVar15;
      auVar36._0_8_ = &DAT_059df598;
      plVar19 = (long *)0x0;
      puVar23 = (undefined8 *)(puVar10 + -0xc0);
      plVar17 = plVar18;
      goto LAB_026e9a68;
    }
    puVar32 = &DAT_05ab5c10;
  }
  puVar32 = (undefined *)func_0x0249f8f8(puVar32);
  auVar2 = auVar36;
  auVar37 = auVar6;
  if (*(long *)(lVar28 + 0x28) == *(long *)(puVar10 + -0x98)) {
    uVar14 = func_0x04730fcc(puVar32,0);
    puVar32 = (undefined *)func_0x0249fa54(uVar14,plVar19);
    do {
      auVar37._8_8_ = plVar13;
      auVar37._0_8_ = plVar19;
      auVar2 = auVar36;
      if (*(long *)(lVar28 + 0x28) != *(long *)(puVar10 + -0x98)) goto LAB_026e9cfc;
      puVar32 = (undefined *)func_0x0249fb88();
      do {
        auVar37._8_8_ = plVar13;
        auVar37._0_8_ = plVar19;
        auVar2 = auVar36;
        if (*(long *)(lVar28 + 0x28) != *(long *)(puVar10 + -0x98)) goto LAB_026e9cfc;
        puVar32 = (undefined *)func_0x0249fb88(plVar19);
LAB_026e9c2c:
        auVar37._8_8_ = plVar13;
        auVar37._0_8_ = plVar19;
        auVar2 = auVar36;
        if (*(long *)(lVar28 + 0x28) != *(long *)(puVar10 + -0x98)) goto LAB_026e9cfc;
        auVar37 = func_0x0249fb90();
        plVar13 = auVar37._8_8_;
        uVar14 = auVar37._0_8_;
        if (auVar37._8_4_ != 1) {
          func_0x022bd79c(puVar10 + -0xe0);
          if (auVar37._8_4_ != 1) {
            puVar32 = (undefined *)func_0x022bd79c(puVar10 + -0xd0);
            if (*(long *)(lVar28 + 0x28) == *(long *)(puVar10 + -0x98)) {
              puVar32 = (undefined *)func_0x0258f7ac(uVar14);
            }
            goto LAB_026e9cfc;
          }
          puVar23 = (undefined8 *)func_0x054ed080(uVar14);
          *(undefined8 *)(puVar10 + -0xd0) = *puVar23;
          func_0x054ed090();
          goto LAB_026e9ad0;
        }
        puVar23 = (undefined8 *)func_0x054ed080(uVar14);
        plVar19 = (long *)*puVar23;
        *(long **)(puVar10 + -0xe0) = plVar19;
        puVar32 = (undefined *)func_0x054ed090();
        puVar23 = *(undefined8 **)(puVar10 + -0xd8);
        plVar29 = (long *)0x0;
LAB_026e9a68:
        plVar13 = (long *)*puVar23;
        if (plVar13 != (long *)0x0) {
          lVar16 = *plVar13;
          uVar24 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar24 != 0) {
            piVar26 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == *auVar36._0_8_) {
                puVar23 = (undefined8 *)(lVar16 + (long)*piVar26 * 0x10 + 0x138);
                goto LAB_026e9abc;
              }
              uVar24 = uVar24 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar24 != 0);
          }
          plVar17 = (long *)0x0;
          puVar23 = (undefined8 *)func_0x024d927c(plVar13);
LAB_026e9abc:
          puVar32 = (undefined *)(*(code *)*puVar23)(plVar13,puVar23[1]);
        }
      } while (plVar19 != (long *)0x0);
      if ((int)plVar29 == 0) {
LAB_026e9ad0:
        plVar29 = (long *)0x0;
      }
      plVar19 = (long *)**(undefined8 **)(puVar10 + -200);
      auVar37._8_8_ = plVar13;
      auVar37._0_8_ = plVar19;
      if (plVar19 != (long *)0x0) {
        lVar16 = *plVar19;
        uVar24 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar24 != 0) {
          piVar26 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == *auVar36._0_8_) {
              puVar23 = (undefined8 *)(lVar16 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_026e9b2c;
            }
            uVar24 = uVar24 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar24 != 0);
        }
        plVar17 = (long *)0x0;
        puVar23 = (undefined8 *)func_0x024d927c(plVar19);
LAB_026e9b2c:
        (*(code *)*puVar23)(plVar19,puVar23[1]);
      }
      puVar32 = *(undefined **)(puVar10 + -0xd0);
    } while (puVar32 != (undefined *)0x0);
    puVar32 = (undefined *)(ulong)((int)plVar29 != 0xc);
    auVar2 = auVar36;
    if (*(long *)(lVar28 + 0x28) == *(long *)(puVar10 + -0x98)) {
      return puVar32;
    }
  }
LAB_026e9cfc:
  func_0x054ed0f0(puVar32);
  func_0x022bd790();
  plVar30[-0xc] = (long)(puVar10 + -0x90);
  plVar30[-0xb] = 0x26e9d04;
  plVar30[-10] = (long)unaff_x27;
  plVar30[-8] = (long)unaff_x26;
  plVar30[-7] = lVar28;
  *(undefined1 (*) [16])(plVar30 + -6) = auVar2;
  plVar30[-4] = (long)plVar30;
  plVar30[-3] = (long)plVar29;
  plVar30[-2] = auVar37._8_8_;
  plVar30[-1] = auVar37._0_8_;
  lVar28 = tpidr_el0;
  plVar30[-0xd] = *(long *)(lVar28 + 0x28);
  lVar28 = plVar17[7];
  if (lVar28 == 0) {
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059df6e0);
    lVar28 = plVar17[7];
    if (lVar28 == 0) {
      func_0x024d8f9c(plVar17);
      lVar28 = plVar17[7];
    }
  }
  uVar24 = (ulong)*(uint *)(*(long *)(lVar28 + 0x28) + 0xfc);
  plVar30[-0x11] = 0;
  puVar32 = (undefined *)memset((long)plVar30 + (uVar24 + 0xf & 0x1fffffff0) * -2 + -0x90,0,uVar24);
  return puVar32;
  while( true ) {
    uVar24 = uVar24 - 1;
    piVar26 = piVar26 + 4;
    if (uVar24 == 0) break;
LAB_026e9a10:
    if (*(long *)(piVar26 + -2) == _DAT_059df6e0) {
      puVar23 = (undefined8 *)(lVar16 + (long)*piVar26 * 0x10 + 0x138);
      goto LAB_026e9a44;
    }
  }
LAB_026e9a28:
  plVar18 = (long *)0x0;
  puVar23 = (undefined8 *)func_0x024d927c(plVar15);
LAB_026e9a44:
  puVar32 = (undefined *)(*(code *)*puVar23)(plVar15,puVar23[1]);
  uVar20 = 0xc;
  if (((ulong)puVar32 & 1) == 0) {
    uVar20 = 0xe;
  }
  plVar29 = (long *)(ulong)uVar20;
  goto LAB_026e9a64;
}

