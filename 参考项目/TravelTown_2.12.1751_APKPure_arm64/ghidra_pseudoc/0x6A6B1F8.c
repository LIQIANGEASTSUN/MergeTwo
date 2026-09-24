/* Ghidra 12.1.2 native pseudocode; RVA 0x6A6B1F8; Merger.MergeBoard.Systems.InteractionSystem.Tick; status ok */


/* WARNING: Possible PIC construction at 0x06b6b270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b6b2a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b6b3e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b6b7b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b6b3e8) */
/* WARNING: Removing unreachable block (ram,0x06b6b3ec) */
/* WARNING: Removing unreachable block (ram,0x06b6b4d4) */
/* WARNING: Removing unreachable block (ram,0x06b6b4ec) */
/* WARNING: Removing unreachable block (ram,0x06b6b4f8) */
/* WARNING: Removing unreachable block (ram,0x06b6b514) */
/* WARNING: Removing unreachable block (ram,0x06b6b51c) */
/* WARNING: Removing unreachable block (ram,0x06b6b544) */
/* WARNING: Removing unreachable block (ram,0x06b6b528) */
/* WARNING: Removing unreachable block (ram,0x06b6b534) */
/* WARNING: Removing unreachable block (ram,0x06b6b550) */
/* WARNING: Removing unreachable block (ram,0x06b6b59c) */
/* WARNING: Removing unreachable block (ram,0x06b6b5c0) */
/* WARNING: Removing unreachable block (ram,0x06b6b680) */
/* WARNING: Removing unreachable block (ram,0x06b6b5d4) */
/* WARNING: Removing unreachable block (ram,0x06b6b564) */
/* WARNING: Removing unreachable block (ram,0x06b6b578) */
/* WARNING: Removing unreachable block (ram,0x06b6b5f0) */
/* WARNING: Removing unreachable block (ram,0x06b6b590) */
/* WARNING: Removing unreachable block (ram,0x06b6b63c) */
/* WARNING: Removing unreachable block (ram,0x06b6b660) */
/* WARNING: Removing unreachable block (ram,0x06b6b274) */
/* WARNING: Removing unreachable block (ram,0x06b6b7bc) */
/* WARNING: Removing unreachable block (ram,0x06b6b814) */
/* WARNING: Removing unreachable block (ram,0x06b6b834) */
/* WARNING: Removing unreachable block (ram,0x06b6b90c) */
/* WARNING: Removing unreachable block (ram,0x06b6b9a0) */
/* WARNING: Removing unreachable block (ram,0x06b6b914) */
/* WARNING: Removing unreachable block (ram,0x06b6b928) */
/* WARNING: Removing unreachable block (ram,0x06b6b940) */
/* WARNING: Removing unreachable block (ram,0x06b6b984) */

void Merger_MergeBoard_Systems_InteractionSystem__Tick(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *extraout_x1;
  undefined8 *puVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  if ((bRam0000000007e2a6c4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830d20);
    func_0x03280a18(PTR_DAT_07830f10);
    bRam0000000007e2a6c4 = 1;
  }
  uStack_28 = 0;
  if (param_2[1] != 0) {
    uVar2 = func_0x03ec5020(param_2[1],&uStack_28,*(undefined8 *)PTR_DAT_07830f10);
    if ((uVar2 & 1) != 0) {
      uStack_48 = param_2[1];
      uStack_50 = *param_2;
      uStack_38 = param_2[3];
      uStack_40 = param_2[2];
      puVar3 = &uStack_50;
      goto SUB_06b6b2bc;
    }
    if (param_2[1] != 0) {
      uVar2 = func_0x03ec47bc(param_2[1],*(undefined8 *)PTR_DAT_07830d20);
      puVar1 = PTR_DAT_07830f70;
      if ((uVar2 & 1) != 0) {
        uStack_68 = param_2[1];
        uStack_70 = *param_2;
        uStack_58 = param_2[3];
        uStack_60 = param_2[2];
        if ((bRam0000000007e2a6c6 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07830d40,&uStack_70);
          func_0x03280a18(PTR_DAT_0782fe48);
          func_0x03280a18(PTR_DAT_07830f78);
          func_0x03280a18(PTR_DAT_07830d28);
          func_0x03280a18(PTR_DAT_0782fe68);
          func_0x03280a18(PTR_DAT_07830f80);
          func_0x03280a18(PTR_DAT_07830d38);
          func_0x03280a18(PTR_DAT_07830f88);
          func_0x03280a18(PTR_DAT_07830f90);
          func_0x03280a18(PTR_DAT_07830d30);
          func_0x03280a18(PTR_DAT_07830f98);
          func_0x03280a18(PTR_DAT_07830f60);
          func_0x03280a18(PTR_DAT_07830fa0);
          func_0x03280a18(PTR_DAT_07830f70);
          bRam0000000007e2a6c6 = 1;
        }
        func_0x03280ca0(*(undefined8 *)puVar1);
        return;
      }
      return;
    }
  }
  func_0x03280cac();
  puVar3 = extraout_x1;
SUB_06b6b2bc:
  puVar1 = PTR_DAT_07830f18;
  if ((bRam0000000007e2a6c5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830f20,puVar3);
    func_0x03280a18(PTR_DAT_07826868);
    func_0x03280a18(PTR_DAT_07830f28);
    func_0x03280a18(PTR_DAT_07830f30);
    func_0x03280a18(PTR_DAT_077cf100);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07830f38);
    func_0x03280a18(PTR_DAT_07830ed0);
    func_0x03280a18(PTR_DAT_07830f40);
    func_0x03280a18(PTR_DAT_07830f48);
    func_0x03280a18(PTR_DAT_07830f50);
    func_0x03280a18(PTR_DAT_07830f58);
    func_0x03280a18(PTR_DAT_07830f60);
    func_0x03280a18(PTR_DAT_07830f68);
    func_0x03280a18(PTR_DAT_07830f18);
    bRam0000000007e2a6c5 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}

