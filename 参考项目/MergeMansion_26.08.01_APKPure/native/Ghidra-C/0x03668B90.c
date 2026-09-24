/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/BoardExtensions.txt
 * Cpp2IL method: System.Collections.Generic.IEnumerable`1<GameLogic.Player.Items.MergeItem> VisibleItems(GameLogic.Player.Board.IBoard mergeBoard)
 * Ghidra function entry: 03768b90
 * Generated Ghidra pseudocode; not original C# source. */


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

ulong FUN_03768b90(long *param_1,undefined8 param_2,undefined4 param_3,long param_4,int param_5)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long *plVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  int *piVar29;
  long lVar30;
  long *plVar31;
  undefined8 uVar32;
  long *plVar33;
  ulong unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined *unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x29;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  char acStack_27c [548];
  
  if ((bRam0000000005e2df35 & 1) == 0) {
    func_0x0249f8e4(&DAT_05a44938);
    func_0x0249f8e4(&DAT_059c6b38);
    func_0x0249f8e4(&DAT_059defb8);
    func_0x0249f8e4(&DAT_05a5fad8);
    func_0x0249f8e4(&DAT_059eb100);
    bRam0000000005e2df35 = 1;
  }
  if (param_1 == (long *)0x0) {
    auVar39 = func_0x0249fb90();
    lVar26 = auVar39._0_8_;
    func_0x045ecdec(lVar26,0);
    *(undefined8 *)(lVar26 + 0x10) = auVar39._8_8_;
    uVar27 = func_0x0249f888((undefined8 *)(lVar26 + 0x10),auVar39._8_8_);
    *(undefined4 *)(lVar26 + 0x18) = param_3;
    *(int *)(lVar26 + 0x1c) = (int)param_4;
    *(int *)(lVar26 + 0x20) = param_5;
    *(int *)(lVar26 + 0x24) = (int)param_4 - param_5;
    return uVar27;
  }
  lVar26 = *param_1;
  uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
  if (uVar27 != 0) {
    piVar29 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
    do {
      if (*(long *)(piVar29 + -2) == _DAT_059defb8) {
        puVar16 = (undefined8 *)(lVar26 + (long)(*piVar29 + 3) * 0x10 + 0x138);
        goto LAB_03768c54;
      }
      uVar27 = uVar27 - 1;
      piVar29 = piVar29 + 4;
    } while (uVar27 != 0);
  }
  puVar16 = (undefined8 *)func_0x024d927c(param_1,_DAT_059defb8,3);
LAB_03768c54:
  plVar17 = (long *)(*(code *)*puVar16)(param_1,puVar16[1]);
  if (*(int *)(_DAT_059eb100 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059eb100);
  }
  puVar16 = *(undefined8 **)(_DAT_059eb100 + 0xb8);
  lVar26 = puVar16[2];
  if (lVar26 == 0) {
    if (*(int *)(_DAT_059eb100 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059eb100);
      puVar16 = *(undefined8 **)(_DAT_059eb100 + 0xb8);
    }
    uVar32 = *puVar16;
    lVar26 = func_0x0249fb80(_DAT_059c6b38);
    param_4 = 0;
    func_0x02a9aa34(lVar26,uVar32,_DAT_05a5fad8);
    plVar18 = (long *)(*(long *)(_DAT_059eb100 + 0xb8) + 0x10);
    *plVar18 = lVar26;
    func_0x0249f888(plVar18,lVar26);
  }
  lVar21 = _DAT_05a44938;
  auVar39._8_8_ = plVar17;
  auVar39._0_8_ = _DAT_05a44938;
  lVar23 = _DAT_05a44938;
  if (*(long *)(_DAT_05a44938 + 0x38) == 0) {
    func_0x024d8f9c(_DAT_05a44938);
  }
  if (plVar17 == (long *)0x0) {
    puVar13 = &DAT_05ab6ae0;
LAB_026ec830:
    uVar32 = func_0x0249f8f8(puVar13);
    uVar32 = func_0x04730fcc(uVar32,0);
    func_0x0249fa54(uVar32,lVar21);
LAB_026ec844:
    func_0x0249ff10(plVar17);
  }
  else {
    if (lVar26 == 0) {
      puVar13 = &DAT_05ab4990;
      goto LAB_026ec830;
    }
    lVar14 = *(long *)(*(long *)(lVar21 + 0x38) + 0x10);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x024d8f40();
    }
    lVar25 = *plVar17;
    bVar1 = *(byte *)(lVar25 + 0x130);
    if (*(byte *)(lVar14 + 0x130) <= bVar1) {
      lVar30 = *(long *)(lVar21 + 0x38);
      if (*(long *)(*(long *)(lVar25 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) != lVar14)
      goto LAB_026ec5d0;
      lVar14 = *(long *)(lVar30 + 0x10);
      if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x024d8f40(lVar14);
        lVar25 = *plVar17;
        bVar1 = *(byte *)(lVar25 + 0x130);
      }
      if ((*(byte *)(lVar14 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar25 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14))
      {
        lVar21 = *(long *)(*(long *)(lVar21 + 0x38) + 0x10);
        if ((*(ushort *)(lVar21 + 0x135) & 1) == 0) {
          lVar21 = func_0x024d8f40(lVar21);
          lVar25 = *plVar17;
          bVar1 = *(byte *)(lVar25 + 0x130);
        }
        if ((*(byte *)(lVar21 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar25 + 200) + (ulong)*(byte *)(lVar21 + 0x130) * 8 + -8) == lVar21
           )) {
                    /* WARNING: Could not recover jumptable at 0x026ec73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar27 = (**(code **)(lVar25 + 0x228))(plVar17,lVar26,*(undefined8 *)(lVar25 + 0x230));
          return uVar27;
        }
      }
      goto LAB_026ec844;
    }
    lVar30 = *(long *)(lVar21 + 0x38);
LAB_026ec5d0:
    lVar14 = *(long *)(lVar30 + 0x20);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x024d8f40(lVar14);
    }
    lVar14 = func_0x0249fa68(plVar17,lVar14);
    if (lVar14 == 0) {
      lVar14 = *(long *)(*(long *)(lVar21 + 0x38) + 0x38);
      if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x024d8f40();
      }
      if (*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar14 + 0x130)) {
        lVar25 = *(long *)(lVar21 + 0x38);
LAB_026ec758:
        if ((*(ushort *)(*(long *)(lVar25 + 0x50) + 0x135) & 1) == 0) {
          func_0x024d8f40();
        }
        uVar27 = func_0x0249fb80();
        func_0x029a73b8(uVar27,plVar17,lVar26,*(undefined8 *)(*(long *)(lVar21 + 0x38) + 0x58));
        return uVar27;
      }
      lVar25 = *(long *)(lVar21 + 0x38);
      if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) != lVar14
         ) goto LAB_026ec758;
      if ((*(ushort *)(*(long *)(lVar25 + 0x40) + 0x135) & 1) == 0) {
        func_0x024d8f40();
      }
      unaff_x22 = func_0x0249fb80();
      lVar14 = *(long *)(*(long *)(lVar21 + 0x38) + 0x38);
      if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x024d8f40(lVar14);
      }
      if ((*(byte *)(lVar14 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14
         )) {
        func_0x029a7a94(unaff_x22,plVar17,lVar26,*(undefined8 *)(*(long *)(lVar21 + 0x38) + 0x48));
        return unaff_x22;
      }
      goto LAB_026ec844;
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar21 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      func_0x024d8f40();
    }
    unaff_x22 = func_0x0249fb80();
    unaff_x23 = *(long *)(*(long *)(lVar21 + 0x38) + 0x20);
    if ((*(ushort *)(unaff_x23 + 0x135) & 1) == 0) {
      unaff_x23 = func_0x024d8f40(unaff_x23);
    }
    lVar14 = func_0x0249fa68(plVar17,unaff_x23);
    if (lVar14 != 0) {
      func_0x029a6f28(unaff_x22,lVar14,lVar26,*(undefined8 *)(*(long *)(lVar21 + 0x38) + 0x30));
      return unaff_x22;
    }
  }
  auVar38 = func_0x0249ff10(plVar17,unaff_x23);
  puVar10 = &stack0xffffffffffffffb0;
  lVar21 = lVar23;
  if (*(long *)(lVar23 + 0x38) == 0) {
    func_0x024d8f9c(lVar23);
  }
  if (auVar38._0_8_ == 0) {
    puVar13 = &DAT_05ab6ae0;
LAB_026ec8b4:
    uVar32 = func_0x0249f8f8(puVar13);
    uVar34 = func_0x04730fcc(uVar32,0);
    uVar32 = 0x26ec8c8;
    auVar35 = func_0x0249fa54(uVar34,lVar23);
  }
  else {
    if (auVar38._8_8_ == 0) {
      puVar13 = &DAT_05ab4990;
      goto LAB_026ec8b4;
    }
    lVar21 = *(long *)(*(long *)(lVar23 + 0x38) + 0x10);
    uVar32 = 0x26ec858;
    puVar10 = &stack0xffffffffffffffd0;
    lVar23 = lVar26;
    auVar35 = auVar38;
    auVar38 = auVar39;
  }
  *(undefined8 *)(puVar10 + -0x30) = uVar32;
  *(ulong *)(puVar10 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])(puVar10 + -0x18) = auVar38;
  *(long *)(puVar10 + -8) = lVar23;
  plVar17 = *(long **)(lVar21 + 0x38);
  if (plVar17 == (long *)0x0) {
    func_0x024d8f9c(lVar21);
    plVar17 = *(long **)(lVar21 + 0x38);
  }
  if ((*(ushort *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x024d8f40();
  }
  uVar27 = func_0x0249fb80();
  lVar26 = *(long *)(*(long *)(lVar21 + 0x38) + 8);
  func_0x02811938(uVar27,0xfffffffe);
  if (uVar27 != 0) {
    func_0x022be0d8(uVar27,*(long *)(**(long **)(lVar21 + 0x38) + 0x80) + 0x80,auVar35._0_8_);
    func_0x022be0d8(uVar27,*(long *)(**(long **)(lVar21 + 0x38) + 0x80) + 0xc0,auVar35._8_8_);
    return uVar27;
  }
  auVar39 = func_0x0249fb90();
  puVar11 = puVar10 + -0x60;
  *(undefined8 *)(puVar10 + -0x60) = 0x26ec974;
  *(undefined8 *)(puVar10 + -0x50) = 0;
  *(long *)(puVar10 + -0x48) = auVar35._0_8_;
  *(long *)(puVar10 + -0x40) = lVar21;
  *(long *)(puVar10 + -0x38) = auVar35._8_8_;
  lVar21 = lVar26;
  lVar23 = param_4;
  if (*(long *)(param_4 + 0x38) == 0) {
    func_0x024d8f9c(param_4);
  }
  if (auVar39._0_8_ == 0) {
    puVar13 = &DAT_05aaf700;
LAB_026ec9f0:
    uVar32 = func_0x0249f8f8(puVar13);
    uVar32 = func_0x04730fcc(uVar32,0);
    uVar34 = 0x26eca04;
    auVar38 = func_0x0249fa54(uVar32,param_4);
  }
  else {
    if (auVar39._8_8_ == 0) {
      puVar13 = &DAT_05ab5c10;
      goto LAB_026ec9f0;
    }
    if (lVar26 == 0) {
      puVar13 = &DAT_05ab5510;
      goto LAB_026ec9f0;
    }
    plVar17 = (long *)(param_4 + 0x38);
    param_4 = *(long *)(puVar10 + -0x38);
    lVar23 = *(long *)(*plVar17 + 0x18);
    puVar11 = puVar10 + -0x30;
    uVar34 = *(undefined8 *)(puVar10 + -0x60);
    lVar21 = lVar26;
    lVar26 = *(long *)(puVar10 + -0x40);
    auVar38 = auVar39;
    auVar39 = *(undefined1 (*) [16])(puVar10 + -0x50);
  }
  uVar27 = auVar38._0_8_;
  *(undefined8 *)(puVar11 + -0x30) = uVar34;
  *(long *)(puVar11 + -0x28) = unaff_x23;
  *(undefined1 (*) [16])(puVar11 + -0x20) = auVar39;
  *(long *)(puVar11 + -0x10) = lVar26;
  *(long *)(puVar11 + -8) = param_4;
  plVar17 = *(long **)(lVar23 + 0x38);
  lVar26 = lVar23;
  if (plVar17 == (long *)0x0) {
    func_0x024d8f9c(lVar23);
    plVar17 = *(long **)(lVar23 + 0x38);
  }
  if ((*(ushort *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x024d8f40();
  }
  uVar15 = func_0x0249fb80();
  lVar14 = *(long *)(*(long *)(lVar23 + 0x38) + 8);
  func_0x029b6780(uVar15,0xfffffffe);
  if (uVar15 != 0) {
    func_0x022be0d8(uVar15,*(long *)(**(long **)(lVar23 + 0x38) + 0x80) + 0x80,uVar27);
    func_0x022be0d8(uVar15,*(long *)(**(long **)(lVar23 + 0x38) + 0x80) + 0xc0,auVar38._8_8_);
    func_0x022be0d8(uVar15,*(long *)(**(long **)(lVar23 + 0x38) + 0x80) + 0x100,lVar21);
    return uVar15;
  }
  auVar39 = func_0x0249fb90();
  lVar25 = auVar39._8_8_;
  plVar17 = auVar39._0_8_;
  *(undefined8 *)(puVar11 + -0x50) = 0x26ecad0;
  *(long *)(puVar11 + -0x48) = auVar38._8_8_;
  *(long *)(puVar11 + -0x40) = lVar23;
  *(long *)(puVar11 + -0x38) = lVar21;
  lVar21 = *(long *)(lVar14 + 0x38);
  if (lVar21 == 0) {
    func_0x024d8f9c(lVar14);
    lVar21 = *(long *)(lVar14 + 0x38);
  }
  lVar21 = *(long *)(lVar21 + 0x10);
  *(undefined8 *)(puVar11 + -0x60) = *(undefined8 *)(puVar11 + -0x50);
  *(undefined8 *)(puVar11 + -0x58) = 0;
  *(ulong *)(puVar11 + -0x50) = uVar27;
  *(undefined8 *)(puVar11 + -0x48) = *(undefined8 *)(puVar11 + -0x48);
  *(undefined8 *)(puVar11 + -0x40) = *(undefined8 *)(puVar11 + -0x40);
  *(undefined8 *)(puVar11 + -0x38) = *(undefined8 *)(puVar11 + -0x38);
  lVar23 = lVar21;
  if (*(long *)(lVar21 + 0x38) == 0) {
    func_0x024d8f9c(lVar21);
  }
  if (plVar17 == (long *)0x0) {
    puVar13 = &DAT_05ab6ae0;
LAB_026e9198:
    uVar32 = func_0x0249f8f8(puVar13);
    uVar32 = func_0x04730fcc(uVar32,0);
    func_0x0249fa54(uVar32,lVar21);
LAB_026e91ac:
    func_0x0249ff10(plVar17);
    lVar14 = 0;
  }
  else {
    if (lVar25 == 0) {
      puVar13 = &DAT_05ab5d58;
      goto LAB_026e9198;
    }
    lVar14 = *(long *)(*(long *)(lVar21 + 0x38) + 0x10);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x024d8f40();
    }
    lVar30 = *plVar17;
    bVar1 = *(byte *)(lVar30 + 0x130);
    if (*(byte *)(lVar14 + 0x130) <= bVar1) {
      lVar28 = *(long *)(lVar21 + 0x38);
      if (*(long *)(*(long *)(lVar30 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) != lVar14)
      goto LAB_026e8f18;
      lVar14 = *(long *)(lVar28 + 0x10);
      if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x024d8f40(lVar14);
        lVar30 = *plVar17;
        bVar1 = *(byte *)(lVar30 + 0x130);
      }
      if ((*(byte *)(lVar14 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar30 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14))
      {
        lVar14 = *(long *)(*(long *)(lVar21 + 0x38) + 0x10);
        lVar21 = *(long *)(*(long *)(lVar21 + 0x38) + 0x18);
        if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = func_0x024d8f40(lVar14);
          lVar30 = *plVar17;
          bVar1 = *(byte *)(lVar30 + 0x130);
        }
        if ((*(byte *)(lVar14 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar30 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14
           )) {
          lVar26 = func_0x0249fa60(*(undefined8 *)
                                    (lVar30 + (ulong)*(ushort *)(lVar21 + 0x50) * 0x10 + 0x140),
                                   lVar21);
                    /* WARNING: Could not recover jumptable at 0x026e909c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar27 = (**(code **)(lVar26 + 8))(plVar17,lVar25,lVar26);
          return uVar27;
        }
      }
      goto LAB_026e91ac;
    }
    lVar28 = *(long *)(lVar21 + 0x38);
LAB_026e8f18:
    lVar14 = *(long *)(lVar28 + 0x28);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x024d8f40(lVar14);
    }
    lVar14 = func_0x0249fa68(plVar17,lVar14);
    if (lVar14 == 0) {
      lVar14 = *(long *)(*(long *)(lVar21 + 0x38) + 0x48);
      if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x024d8f40();
      }
      if (*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar14 + 0x130)) {
        lVar30 = *(long *)(lVar21 + 0x38);
LAB_026e90b8:
        if ((*(ushort *)(*(long *)(lVar30 + 0x60) + 0x135) & 1) == 0) {
          func_0x024d8f40();
        }
        uVar27 = func_0x0249fb80();
        func_0x029a85c0(uVar27,plVar17,0,lVar25,*(undefined8 *)(*(long *)(lVar21 + 0x38) + 0x68));
        return uVar27;
      }
      lVar30 = *(long *)(lVar21 + 0x38);
      if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) != lVar14
         ) goto LAB_026e90b8;
      if ((*(ushort *)(*(long *)(lVar30 + 0x50) + 0x135) & 1) == 0) {
        func_0x024d8f40();
      }
      uVar27 = func_0x0249fb80();
      lVar14 = *(long *)(*(long *)(lVar21 + 0x38) + 0x48);
      if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = func_0x024d8f40(lVar14);
      }
      if ((*(byte *)(lVar14 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) == lVar14
         )) {
        func_0x029a8d1c(uVar27,plVar17,0,lVar25,*(undefined8 *)(*(long *)(lVar21 + 0x38) + 0x58));
        return uVar27;
      }
      goto LAB_026e91ac;
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar21 + 0x38) + 0x30) + 0x135) & 1) == 0) {
      func_0x024d8f40();
    }
    uVar27 = func_0x0249fb80();
    lVar14 = *(long *)(*(long *)(lVar21 + 0x38) + 0x28);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = func_0x024d8f40(lVar14);
    }
    lVar30 = func_0x0249fa68(plVar17,lVar14);
    if (lVar30 != 0) {
      func_0x029a80a8(uVar27,lVar30,0,lVar25,*(undefined8 *)(*(long *)(lVar21 + 0x38) + 0x38));
      return uVar27;
    }
  }
  auVar38 = func_0x0249ff10(plVar17,lVar14);
  puVar7 = puVar11 + -0x80;
  *(undefined8 *)(puVar11 + -0x80) = 0x26e91c0;
  *(long *)(puVar11 + -0x78) = lVar21;
  *(undefined1 (*) [16])(puVar11 + -0x70) = auVar39;
  lVar21 = lVar23;
  if (*(long *)(lVar23 + 0x38) == 0) {
    func_0x024d8f9c(lVar23);
  }
  if (auVar38._0_8_ == 0) {
    puVar13 = &DAT_05ab6ae0;
LAB_026e921c:
    uVar32 = func_0x0249f8f8(puVar13);
    uVar34 = func_0x04730fcc(uVar32,0);
    uVar32 = 0x26e9230;
    auVar39 = func_0x0249fa54(uVar34,lVar23);
  }
  else {
    if (auVar38._8_8_ == 0) {
      puVar13 = &DAT_05ab5d58;
      goto LAB_026e921c;
    }
    plVar17 = (long *)(lVar23 + 0x38);
    lVar23 = *(long *)(puVar11 + -0x68);
    lVar21 = *(long *)(*plVar17 + 0x10);
    puVar7 = puVar11 + -0x60;
    uVar32 = *(undefined8 *)(puVar11 + -0x80);
    auVar39 = auVar38;
    auVar38 = *(undefined1 (*) [16])(puVar11 + -0x78);
  }
  *(undefined8 *)(puVar7 + -0x30) = uVar32;
  *(ulong *)(puVar7 + -0x20) = uVar27;
  *(undefined1 (*) [16])(puVar7 + -0x18) = auVar38;
  *(long *)(puVar7 + -8) = lVar23;
  plVar17 = *(long **)(lVar21 + 0x38);
  if (plVar17 == (long *)0x0) {
    func_0x024d8f9c(lVar21);
    plVar17 = *(long **)(lVar21 + 0x38);
  }
  if ((*(ushort *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x024d8f40();
  }
  uVar27 = func_0x0249fb80();
  lVar23 = *(long *)(*(long *)(lVar21 + 0x38) + 8);
  func_0x02806980(uVar27,0xfffffffe);
  if (uVar27 != 0) {
    func_0x022be0d8(uVar27,*(long *)(**(long **)(lVar21 + 0x38) + 0x80) + 0x80,auVar39._0_8_);
    func_0x022be0d8(uVar27,*(long *)(**(long **)(lVar21 + 0x38) + 0x80) + 0xc0,auVar39._8_8_);
    return uVar27;
  }
  auVar38 = func_0x0249fb90();
  *(undefined8 *)(puVar7 + -0x50) = 0x26e92dc;
  *(long *)(puVar7 + -0x48) = auVar39._0_8_;
  *(long *)(puVar7 + -0x40) = lVar21;
  *(long *)(puVar7 + -0x38) = auVar39._8_8_;
  lVar21 = lVar23;
  if (*(long *)(lVar23 + 0x38) == 0) {
    func_0x024d8f9c(lVar23);
  }
  if (auVar38._0_8_ == 0) {
    puVar13 = &DAT_05ab6ae0;
LAB_026e9338:
    uVar32 = func_0x0249f8f8(puVar13);
    uVar32 = func_0x04730fcc(uVar32,0);
    auVar35 = func_0x0249fa54(uVar32,lVar23);
    puVar8 = puVar7 + -0x80;
    *(undefined8 *)(puVar7 + -0x80) = 0x26e934c;
    *(undefined8 *)(puVar7 + -0x70) = 0;
    *(undefined1 (*) [16])(puVar7 + -0x68) = auVar38;
    *(long *)(puVar7 + -0x58) = lVar23;
    lVar23 = lVar21;
    lVar25 = lVar26;
    if (*(long *)(lVar26 + 0x38) == 0) {
      func_0x024d8f9c(lVar26);
    }
    if (auVar35._0_8_ == 0) {
      puVar13 = &DAT_05ab6ae0;
LAB_026e93c8:
      uVar32 = func_0x0249f8f8(puVar13);
      uVar34 = func_0x04730fcc(uVar32,0);
      uVar32 = 0x26e93dc;
      auVar38 = func_0x0249fa54(uVar34,lVar26);
      goto LAB_026e93dc;
    }
    if (auVar35._8_8_ == 0) {
      puVar13 = &DAT_05aacdf8;
      goto LAB_026e93c8;
    }
    if (lVar21 == 0) {
      puVar13 = &DAT_05ab5510;
      goto LAB_026e93c8;
    }
    lVar23 = *(long *)(puVar7 + -0x60);
    uVar32 = *(undefined8 *)(puVar7 + -0x70);
    auVar38._8_8_ = *(undefined8 *)(puVar7 + -0x58);
    auVar38._0_8_ = *(undefined8 *)(puVar7 + -0x68);
    lVar25 = *(long *)(*(long *)(lVar26 + 0x38) + 0x18);
    puVar9 = puVar7 + -0x50;
    uVar34 = *(undefined8 *)(puVar7 + -0x80);
  }
  else {
    if (auVar38._8_8_ == 0) {
      puVar13 = &DAT_05ab5d58;
      goto LAB_026e9338;
    }
    lVar21 = *(long *)(puVar7 + -0x40);
    lVar23 = *(long *)(*(long *)(lVar23 + 0x38) + 0x10);
    puVar8 = puVar7 + -0x30;
    uVar32 = *(undefined8 *)(puVar7 + -0x50);
    auVar35._8_8_ = 0;
    auVar35._0_8_ = *(ulong *)(puVar7 + -0x48);
    auVar35 = auVar35 << 0x40;
    lVar25 = lVar26;
    lVar26 = *(long *)(puVar7 + -0x38);
LAB_026e93dc:
    puVar9 = puVar8 + -0x30;
    *(undefined8 *)(puVar8 + -0x30) = uVar32;
    *(undefined1 (*) [16])(puVar8 + -0x20) = auVar35;
    *(long *)(puVar8 + -0x10) = lVar21;
    *(long *)(puVar8 + -8) = lVar26;
    plVar17 = *(long **)(lVar23 + 0x38);
    if (plVar17 == (long *)0x0) {
      func_0x024d8f9c(lVar23);
      plVar17 = *(long **)(lVar23 + 0x38);
    }
    if ((*(ushort *)(*plVar17 + 0x135) & 1) == 0) {
      func_0x024d8f40();
    }
    uVar27 = func_0x0249fb80();
    lVar21 = *(long *)(*(long *)(lVar23 + 0x38) + 8);
    func_0x028073c8(uVar27,0xfffffffe);
    if (uVar27 != 0) {
      func_0x022be0d8(uVar27,*(long *)(**(long **)(lVar23 + 0x38) + 0x80) + 0x80,auVar38._0_8_);
      func_0x022be0d8(uVar27,*(long *)(**(long **)(lVar23 + 0x38) + 0x80) + 0xc0,auVar38._8_8_);
      return uVar27;
    }
    uVar34 = 0x26e9488;
    auVar35 = func_0x0249fb90();
    uVar32 = 0;
  }
  *(undefined8 *)(puVar9 + -0x30) = uVar34;
  *(long *)(puVar9 + -0x28) = lVar14;
  *(undefined8 *)(puVar9 + -0x20) = uVar32;
  *(long *)(puVar9 + -0x18) = auVar38._0_8_;
  *(long *)(puVar9 + -0x10) = lVar23;
  *(long *)(puVar9 + -8) = auVar38._8_8_;
  plVar17 = *(long **)(lVar25 + 0x38);
  if (plVar17 == (long *)0x0) {
    func_0x024d8f9c(lVar25);
    plVar17 = *(long **)(lVar25 + 0x38);
  }
  if ((*(ushort *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x024d8f40();
  }
  uVar27 = func_0x0249fb80();
  lVar26 = *(long *)(*(long *)(lVar25 + 0x38) + 8);
  func_0x028081a0(uVar27,0xfffffffe);
  if (uVar27 != 0) {
    func_0x022be0d8(uVar27,*(long *)(**(long **)(lVar25 + 0x38) + 0x80) + 0x80,auVar35._0_8_);
    func_0x022be0d8(uVar27,*(long *)(**(long **)(lVar25 + 0x38) + 0x80) + 0xc0,auVar35._8_8_);
    func_0x022be0d8(uVar27,*(long *)(**(long **)(lVar25 + 0x38) + 0x80) + 0x100,lVar21);
    return uVar27;
  }
  auVar36 = func_0x0249fb90();
  plVar18 = auVar36._8_8_;
  plVar17 = auVar36._0_8_;
  *(undefined8 *)(puVar9 + -0x50) = 0x26e9554;
  *(long *)(puVar9 + -0x48) = auVar35._8_8_;
  *(long *)(puVar9 + -0x40) = lVar25;
  *(long *)(puVar9 + -0x38) = lVar21;
  lVar21 = *(long *)(lVar26 + 0x38);
  if (lVar21 == 0) {
    func_0x024d8f9c(lVar26);
    lVar21 = *(long *)(lVar26 + 0x38);
  }
  plVar22 = *(long **)(lVar21 + 8);
  plVar19 = (long *)0x0;
  *(undefined8 *)(puVar9 + -0x90) = unaff_x29;
  *(undefined8 *)(puVar9 + -0x88) = *(undefined8 *)(puVar9 + -0x50);
  *(long **)(puVar9 + -0x80) = unaff_x27;
  *(undefined **)(puVar9 + -0x70) = unaff_x26;
  *(undefined8 *)(puVar9 + -0x68) = unaff_x25;
  *(undefined8 *)(puVar9 + -0x60) = unaff_x24;
  *(undefined8 *)(puVar9 + -0x58) = 0;
  *(long *)(puVar9 + -0x50) = auVar35._0_8_;
  *(undefined8 *)(puVar9 + -0x48) = *(undefined8 *)(puVar9 + -0x48);
  *(undefined8 *)(puVar9 + -0x40) = *(undefined8 *)(puVar9 + -0x40);
  *(undefined8 *)(puVar9 + -0x38) = *(undefined8 *)(puVar9 + -0x38);
  lVar26 = tpidr_el0;
  *(undefined8 *)(puVar9 + -0x98) = *(undefined8 *)(lVar26 + 0x28);
  lVar21 = plVar22[7];
  if (lVar21 == 0) {
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059df6e0);
    lVar21 = plVar22[7];
    if (lVar21 == 0) {
      func_0x024d8f9c(plVar22);
      lVar21 = plVar22[7];
    }
  }
  uVar27 = (ulong)*(uint *)(*(long *)(lVar21 + 0x40) + 0xfc) + 0xf & 0x1fffffff0;
  plVar31 = (long *)(puVar9 + (-0xe0 - uVar27));
  plVar33 = (long *)((long)plVar31 - uVar27);
  *(undefined8 *)(puVar9 + -0xc0) = 0;
  *(undefined8 *)(puVar9 + -0xb8) = 0;
  plVar12 = (long *)func_0x026ad0ac(*(undefined8 *)(lVar21 + 8));
  auVar6._8_8_ = plVar12;
  auVar6._0_8_ = plVar22;
  auVar5._8_8_ = plVar12;
  auVar5._0_8_ = plVar22;
  auVar4._8_8_ = plVar12;
  auVar4._0_8_ = plVar22;
  auVar3._8_8_ = plVar12;
  auVar3._0_8_ = plVar22;
  auVar37._8_8_ = plVar12;
  auVar37._0_8_ = plVar22;
  if (plVar17 == (long *)0x0) {
LAB_026e9bc8:
    puVar13 = &DAT_05aaf700;
  }
  else {
    if (plVar18 != (long *)0x0) {
      lVar21 = *(long *)(plVar22[7] + 0x20);
      plVar20 = plVar19;
      if ((*(ushort *)(lVar21 + 0x135) & 1) == 0) {
        lVar21 = func_0x024d8f40(lVar21);
        plVar20 = plVar19;
      }
      lVar23 = *plVar17;
      uVar27 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == lVar21) {
            puVar16 = (undefined8 *)(lVar23 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_026e96b4;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      plVar20 = (long *)0x0;
      puVar16 = (undefined8 *)func_0x024d927c(plVar17);
LAB_026e96b4:
      uVar32 = (*(code *)*puVar16)(plVar17,puVar16[1]);
      lVar21 = plVar22[7];
      *(undefined8 *)(puVar9 + -0xb8) = uVar32;
      lVar21 = *(long *)(lVar21 + 0x20);
      bVar1 = *(byte *)(lVar21 + 0x135);
      *(undefined8 *)(puVar9 + -0xd0) = 0;
      *(undefined1 **)(puVar9 + -200) = puVar9 + -0xb8;
      if ((bVar1 & 1) == 0) {
        lVar21 = func_0x024d8f40(lVar21);
      }
      lVar23 = *plVar18;
      uVar27 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == lVar21) {
            puVar16 = (undefined8 *)(lVar23 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_026e9738;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      plVar20 = (long *)0x0;
      puVar16 = (undefined8 *)func_0x024d927c(plVar18);
LAB_026e9738:
      uVar27 = (*(code *)*puVar16)(plVar18,puVar16[1]);
      *(ulong *)(puVar9 + -0xc0) = uVar27;
      unaff_x26 = &DAT_059df6e0;
      *(undefined8 *)(puVar9 + -0xe0) = 0;
      *(undefined1 **)(puVar9 + -0xd8) = puVar9 + -0xc0;
      do {
        plVar18 = *(long **)(puVar9 + -0xb8);
        plVar17 = (long *)0x0;
        plVar19 = plVar20;
        if (plVar18 == (long *)0x0) {
LAB_026e9b8c:
          auVar2._8_8_ = plVar17;
          auVar2._0_8_ = &DAT_059df598;
          auVar37 = auVar3;
          if (*(long *)(lVar26 + 0x28) != *(long *)(puVar9 + -0x98)) goto LAB_026e9cfc;
          uVar27 = func_0x0249fb90();
LAB_026e9ba0:
          auVar2._8_8_ = plVar17;
          auVar2._0_8_ = &DAT_059df598;
          auVar37 = auVar4;
          if (*(long *)(lVar26 + 0x28) != *(long *)(puVar9 + -0x98)) goto LAB_026e9cfc;
          uVar27 = func_0x0249fb90();
          plVar20 = plVar19;
LAB_026e9bb4:
          plVar19 = plVar20;
          auVar2._8_8_ = plVar17;
          auVar2._0_8_ = &DAT_059df598;
          auVar36._8_8_ = plVar17;
          auVar36._0_8_ = &DAT_059df598;
          auVar37 = auVar5;
          if (*(long *)(lVar26 + 0x28) != *(long *)(puVar9 + -0x98)) goto LAB_026e9cfc;
          func_0x0249fb90();
          goto LAB_026e9bc8;
        }
        lVar21 = *plVar18;
        uVar27 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar27 != 0) {
          piVar29 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059df6e0) {
              puVar16 = (undefined8 *)(lVar21 + (long)*piVar29 * 0x10 + 0x138);
              goto LAB_026e97ac;
            }
            uVar27 = uVar27 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar27 != 0);
        }
        plVar20 = (long *)0x0;
        puVar16 = (undefined8 *)func_0x024d927c(plVar18);
LAB_026e97ac:
        uVar27 = (*(code *)*puVar16)(plVar18,puVar16[1]);
        plVar18 = *(long **)(puVar9 + -0xc0);
        auVar36._8_8_ = plVar18;
        auVar36._0_8_ = &DAT_059df598;
        plVar19 = plVar20;
        if ((uVar27 & 1) == 0) {
          if (plVar18 == (long *)0x0) goto LAB_026e9c2c;
          lVar21 = *plVar18;
          uVar27 = (ulong)*(ushort *)(lVar21 + 0x12e);
          if (uVar27 == 0) goto LAB_026e9a28;
          piVar29 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          goto LAB_026e9a10;
        }
        plVar17 = (long *)0x0;
        if (plVar18 == (long *)0x0) goto LAB_026e9ba0;
        lVar21 = *plVar18;
        uVar27 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar27 != 0) {
          piVar29 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == _DAT_059df6e0) {
              puVar16 = (undefined8 *)(lVar21 + (long)*piVar29 * 0x10 + 0x138);
              goto LAB_026e9810;
            }
            uVar27 = uVar27 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar27 != 0);
        }
        plVar20 = (long *)0x0;
        puVar16 = (undefined8 *)func_0x024d927c(plVar18);
LAB_026e9810:
        uVar27 = (*(code *)*puVar16)(plVar18,puVar16[1]);
        if ((uVar27 & 1) == 0) break;
        plVar19 = *(long **)(puVar9 + -0xb8);
        plVar17 = (long *)0x0;
        if (plVar19 == (long *)0x0) goto LAB_026e9bb4;
        lVar21 = *(long *)(plVar22[7] + 0x30);
        if ((*(ushort *)(lVar21 + 0x135) & 1) == 0) {
          lVar21 = func_0x024d8f40(lVar21);
        }
        lVar23 = *plVar19;
        uVar27 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar27 != 0) {
          piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == lVar21) {
              lVar21 = lVar23 + (long)*piVar29 * 0x10 + 0x138;
              goto LAB_026e9890;
            }
            uVar27 = uVar27 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar27 != 0);
        }
        lVar21 = func_0x024d927c(plVar19,lVar21,0);
LAB_026e9890:
        lVar21 = *(long *)(lVar21 + 8);
        *(long **)(puVar9 + -0xb0) = plVar31;
        uVar27 = (**(code **)(lVar21 + 0x10))
                           (*(undefined8 *)(lVar21 + 8),lVar21,plVar19,puVar9 + -0xb0,plVar31);
        plVar17 = *(long **)(puVar9 + -0xc0);
        auVar2._8_8_ = plVar17;
        auVar2._0_8_ = &DAT_059df598;
        if (plVar17 == (long *)0x0) {
LAB_026e9b78:
          if (*(long *)(lVar26 + 0x28) == *(long *)(puVar9 + -0x98)) {
            uVar27 = func_0x0249fb90();
            goto LAB_026e9b8c;
          }
          goto LAB_026e9cfc;
        }
        lVar21 = *(long *)(plVar22[7] + 0x30);
        if ((*(ushort *)(lVar21 + 0x135) & 1) == 0) {
          lVar21 = func_0x024d8f40(lVar21);
        }
        lVar23 = *plVar17;
        uVar27 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar27 != 0) {
          piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == lVar21) {
              lVar21 = lVar23 + (long)*piVar29 * 0x10 + 0x138;
              goto LAB_026e991c;
            }
            uVar27 = uVar27 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar27 != 0);
        }
        lVar21 = func_0x024d927c(plVar17,lVar21,0);
LAB_026e991c:
        lVar21 = *(long *)(lVar21 + 8);
        *(long **)(puVar9 + -0xb0) = plVar33;
        plVar19 = plVar17;
        uVar27 = (**(code **)(lVar21 + 0x10))
                           (*(undefined8 *)(lVar21 + 8),lVar21,plVar17,puVar9 + -0xb0,plVar33);
        if (plVar12 == (long *)0x0) goto LAB_026e9b78;
        plVar17 = (long *)plVar22[7];
        lVar21 = *plVar17;
        if ((*(ushort *)(lVar21 + 0x135) & 1) == 0) {
          lVar21 = func_0x024d8f40(lVar21);
          plVar17 = (long *)plVar22[7];
        }
        plVar18 = plVar31;
        unaff_x27 = plVar33;
        if (-1 < *(int *)(plVar17[8] + 0x28)) {
          plVar18 = (long *)*plVar31;
          unaff_x27 = (long *)*plVar33;
        }
        lVar23 = *plVar12;
        uVar27 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar27 != 0) {
          piVar29 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == lVar21) {
              lVar21 = lVar23 + (long)*piVar29 * 0x10 + 0x138;
              goto LAB_026e99c4;
            }
            uVar27 = uVar27 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar27 != 0);
        }
        lVar21 = func_0x024d927c(plVar12,lVar21,0);
LAB_026e99c4:
        *(long **)(puVar9 + -0xb0) = plVar18;
        *(long **)(puVar9 + -0xa8) = unaff_x27;
        lVar21 = *(long *)(lVar21 + 8);
        plVar20 = plVar12;
        uVar27 = (**(code **)(lVar21 + 0x10))
                           (*(undefined8 *)(lVar21 + 8),lVar21,plVar12,puVar9 + -0xb0,puVar9 + -0x9c
                           );
      } while (puVar9[-0x9c] != '\0');
      plVar31 = (long *)0xc;
LAB_026e9a64:
      auVar36._8_8_ = plVar18;
      auVar36._0_8_ = &DAT_059df598;
      plVar22 = (long *)0x0;
      puVar16 = (undefined8 *)(puVar9 + -0xc0);
      plVar19 = plVar20;
      goto LAB_026e9a68;
    }
    puVar13 = &DAT_05ab5c10;
  }
  uVar27 = func_0x0249f8f8(puVar13);
  auVar2 = auVar36;
  auVar37 = auVar6;
  if (*(long *)(lVar26 + 0x28) == *(long *)(puVar9 + -0x98)) {
    uVar32 = func_0x04730fcc(uVar27,0);
    uVar27 = func_0x0249fa54(uVar32,plVar22);
    do {
      auVar37._8_8_ = plVar12;
      auVar37._0_8_ = plVar22;
      auVar2 = auVar36;
      if (*(long *)(lVar26 + 0x28) != *(long *)(puVar9 + -0x98)) goto LAB_026e9cfc;
      uVar27 = func_0x0249fb88();
      do {
        auVar37._8_8_ = plVar12;
        auVar37._0_8_ = plVar22;
        auVar2 = auVar36;
        if (*(long *)(lVar26 + 0x28) != *(long *)(puVar9 + -0x98)) goto LAB_026e9cfc;
        uVar27 = func_0x0249fb88(plVar22);
LAB_026e9c2c:
        auVar37._8_8_ = plVar12;
        auVar37._0_8_ = plVar22;
        auVar2 = auVar36;
        if (*(long *)(lVar26 + 0x28) != *(long *)(puVar9 + -0x98)) goto LAB_026e9cfc;
        auVar37 = func_0x0249fb90();
        plVar12 = auVar37._8_8_;
        uVar32 = auVar37._0_8_;
        if (auVar37._8_4_ != 1) {
          func_0x022bd79c(puVar9 + -0xe0);
          if (auVar37._8_4_ != 1) {
            uVar27 = func_0x022bd79c(puVar9 + -0xd0);
            if (*(long *)(lVar26 + 0x28) == *(long *)(puVar9 + -0x98)) {
              uVar27 = func_0x0258f7ac(uVar32);
            }
            goto LAB_026e9cfc;
          }
          puVar16 = (undefined8 *)func_0x054ed080(uVar32);
          *(undefined8 *)(puVar9 + -0xd0) = *puVar16;
          func_0x054ed090();
          goto LAB_026e9ad0;
        }
        puVar16 = (undefined8 *)func_0x054ed080(uVar32);
        plVar22 = (long *)*puVar16;
        *(long **)(puVar9 + -0xe0) = plVar22;
        uVar27 = func_0x054ed090();
        puVar16 = *(undefined8 **)(puVar9 + -0xd8);
        plVar31 = (long *)0x0;
LAB_026e9a68:
        plVar12 = (long *)*puVar16;
        if (plVar12 != (long *)0x0) {
          lVar21 = *plVar12;
          uVar27 = (ulong)*(ushort *)(lVar21 + 0x12e);
          if (uVar27 != 0) {
            piVar29 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == *auVar36._0_8_) {
                puVar16 = (undefined8 *)(lVar21 + (long)*piVar29 * 0x10 + 0x138);
                goto LAB_026e9abc;
              }
              uVar27 = uVar27 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar27 != 0);
          }
          plVar19 = (long *)0x0;
          puVar16 = (undefined8 *)func_0x024d927c(plVar12);
LAB_026e9abc:
          uVar27 = (*(code *)*puVar16)(plVar12,puVar16[1]);
        }
      } while (plVar22 != (long *)0x0);
      if ((int)plVar31 == 0) {
LAB_026e9ad0:
        plVar31 = (long *)0x0;
      }
      plVar22 = (long *)**(undefined8 **)(puVar9 + -200);
      auVar37._8_8_ = plVar12;
      auVar37._0_8_ = plVar22;
      if (plVar22 != (long *)0x0) {
        lVar21 = *plVar22;
        uVar27 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar27 != 0) {
          piVar29 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == *auVar36._0_8_) {
              puVar16 = (undefined8 *)(lVar21 + (long)*piVar29 * 0x10 + 0x138);
              goto LAB_026e9b2c;
            }
            uVar27 = uVar27 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar27 != 0);
        }
        plVar19 = (long *)0x0;
        puVar16 = (undefined8 *)func_0x024d927c(plVar22);
LAB_026e9b2c:
        (*(code *)*puVar16)(plVar22,puVar16[1]);
      }
      uVar27 = *(ulong *)(puVar9 + -0xd0);
    } while (uVar27 != 0);
    uVar27 = (ulong)((int)plVar31 != 0xc);
    auVar2 = auVar36;
    if (*(long *)(lVar26 + 0x28) == *(long *)(puVar9 + -0x98)) {
      return uVar27;
    }
  }
LAB_026e9cfc:
  func_0x054ed0f0(uVar27);
  func_0x022bd790();
  plVar33[-0xc] = (long)(puVar9 + -0x90);
  plVar33[-0xb] = 0x26e9d04;
  plVar33[-10] = (long)unaff_x27;
  plVar33[-8] = (long)unaff_x26;
  plVar33[-7] = lVar26;
  *(undefined1 (*) [16])(plVar33 + -6) = auVar2;
  plVar33[-4] = (long)plVar33;
  plVar33[-3] = (long)plVar31;
  plVar33[-2] = auVar37._8_8_;
  plVar33[-1] = auVar37._0_8_;
  lVar26 = tpidr_el0;
  plVar33[-0xd] = *(long *)(lVar26 + 0x28);
  lVar26 = plVar19[7];
  if (lVar26 == 0) {
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059df6e0);
    lVar26 = plVar19[7];
    if (lVar26 == 0) {
      func_0x024d8f9c(plVar19);
      lVar26 = plVar19[7];
    }
  }
  uVar27 = (ulong)*(uint *)(*(long *)(lVar26 + 0x28) + 0xfc);
  plVar33[-0x11] = 0;
  uVar27 = memset((long)plVar33 + (uVar27 + 0xf & 0x1fffffff0) * -2 + -0x90,0,uVar27);
  return uVar27;
  while( true ) {
    uVar27 = uVar27 - 1;
    piVar29 = piVar29 + 4;
    if (uVar27 == 0) break;
LAB_026e9a10:
    if (*(long *)(piVar29 + -2) == _DAT_059df6e0) {
      puVar16 = (undefined8 *)(lVar21 + (long)*piVar29 * 0x10 + 0x138);
      goto LAB_026e9a44;
    }
  }
LAB_026e9a28:
  plVar20 = (long *)0x0;
  puVar16 = (undefined8 *)func_0x024d927c(plVar18);
LAB_026e9a44:
  uVar27 = (*(code *)*puVar16)(plVar18,puVar16[1]);
  uVar24 = 0xc;
  if ((uVar27 & 1) == 0) {
    uVar24 = 0xe;
  }
  plVar31 = (long *)(ulong)uVar24;
  goto LAB_026e9a64;
}

