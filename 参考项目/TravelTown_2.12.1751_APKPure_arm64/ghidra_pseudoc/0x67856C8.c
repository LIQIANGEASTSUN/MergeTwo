/* Ghidra 12.1.2 native pseudocode; RVA 0x67856C8; MergeEngine.ECS.Systems.Board.SplitSystem.SplitStackingWithAvailableSpace; status ok */


/* WARNING: Possible PIC construction at 0x068857f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0688583c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06885858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06885884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068858b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068859d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06885ac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06885b00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06885b84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06885df8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06885e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06885eb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06885ed4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06885eb4) */
/* WARNING: Removing unreachable block (ram,0x06885e30) */
/* WARNING: Removing unreachable block (ram,0x06885e38) */
/* WARNING: Removing unreachable block (ram,0x06885e54) */
/* WARNING: Removing unreachable block (ram,0x06885e5c) */
/* WARNING: Removing unreachable block (ram,0x06885e84) */
/* WARNING: Removing unreachable block (ram,0x06885e68) */
/* WARNING: Removing unreachable block (ram,0x06885e74) */
/* WARNING: Removing unreachable block (ram,0x06885e94) */
/* WARNING: Removing unreachable block (ram,0x06885dfc) */
/* WARNING: Removing unreachable block (ram,0x06885e04) */
/* WARNING: Removing unreachable block (ram,0x06885b88) */
/* WARNING: Removing unreachable block (ram,0x06885b8c) */
/* WARNING: Removing unreachable block (ram,0x06885b04) */
/* WARNING: Removing unreachable block (ram,0x06885b0c) */
/* WARNING: Removing unreachable block (ram,0x06885b50) */
/* WARNING: Removing unreachable block (ram,0x06885ac8) */
/* WARNING: Removing unreachable block (ram,0x06885ad0) */
/* WARNING: Removing unreachable block (ram,0x06885af4) */
/* WARNING: Removing unreachable block (ram,0x068859dc) */
/* WARNING: Removing unreachable block (ram,0x068859f4) */
/* WARNING: Removing unreachable block (ram,0x06885a34) */
/* WARNING: Removing unreachable block (ram,0x06885a54) */
/* WARNING: Removing unreachable block (ram,0x06885a5c) */
/* WARNING: Removing unreachable block (ram,0x06885a84) */
/* WARNING: Removing unreachable block (ram,0x06885a68) */
/* WARNING: Removing unreachable block (ram,0x06885a74) */
/* WARNING: Removing unreachable block (ram,0x06885a90) */
/* WARNING: Removing unreachable block (ram,0x06885aa8) */
/* WARNING: Removing unreachable block (ram,0x068858bc) */
/* WARNING: Removing unreachable block (ram,0x068858c0) */
/* WARNING: Removing unreachable block (ram,0x06885888) */
/* WARNING: Removing unreachable block (ram,0x06885890) */
/* WARNING: Removing unreachable block (ram,0x0688585c) */
/* WARNING: Removing unreachable block (ram,0x06885878) */
/* WARNING: Removing unreachable block (ram,0x06885840) */
/* WARNING: Removing unreachable block (ram,0x068857f8) */
/* WARNING: Removing unreachable block (ram,0x06885800) */
/* WARNING: Removing unreachable block (ram,0x06885830) */
/* WARNING: Removing unreachable block (ram,0x06885ed8) */
/* WARNING: Removing unreachable block (ram,0x06885edc) */
/* WARNING: Removing unreachable block (ram,0x06885efc) */
/* WARNING: Removing unreachable block (ram,0x06885f24) */
/* WARNING: Removing unreachable block (ram,0x06885f2c) */
/* WARNING: Removing unreachable block (ram,0x06885f54) */
/* WARNING: Removing unreachable block (ram,0x06885f38) */
/* WARNING: Removing unreachable block (ram,0x06885f44) */
/* WARNING: Removing unreachable block (ram,0x06885f60) */
/* WARNING: Removing unreachable block (ram,0x06885f80) */
/* WARNING: Removing unreachable block (ram,0x06885f90) */
/* WARNING: Removing unreachable block (ram,0x06885fac) */
/* WARNING: Removing unreachable block (ram,0x06885fb4) */
/* WARNING: Removing unreachable block (ram,0x06885fdc) */
/* WARNING: Removing unreachable block (ram,0x06885fc0) */
/* WARNING: Removing unreachable block (ram,0x06885fcc) */
/* WARNING: Removing unreachable block (ram,0x06885fe8) */
/* WARNING: Removing unreachable block (ram,0x06886008) */
/* WARNING: Removing unreachable block (ram,0x06886010) */
/* WARNING: Removing unreachable block (ram,0x072cde8c) */
/* WARNING: Removing unreachable block (ram,0x0688601c) */
/* WARNING: Removing unreachable block (ram,0x06886034) */
/* WARNING: Removing unreachable block (ram,0x0688603c) */
/* WARNING: Removing unreachable block (ram,0x06886064) */
/* WARNING: Removing unreachable block (ram,0x06886048) */
/* WARNING: Removing unreachable block (ram,0x06886054) */
/* WARNING: Removing unreachable block (ram,0x06886070) */
/* WARNING: Removing unreachable block (ram,0x06886090) */
/* WARNING: Removing unreachable block (ram,0x06886098) */
/* WARNING: Removing unreachable block (ram,0x068860c4) */
/* WARNING: Removing unreachable block (ram,0x068860cc) */
/* WARNING: Removing unreachable block (ram,0x068860f4) */
/* WARNING: Removing unreachable block (ram,0x068860d8) */
/* WARNING: Removing unreachable block (ram,0x068860e4) */
/* WARNING: Removing unreachable block (ram,0x06886100) */
/* WARNING: Removing unreachable block (ram,0x06886140) */
/* WARNING: Removing unreachable block (ram,0x06886160) */
/* WARNING: Removing unreachable block (ram,0x0688618c) */
/* WARNING: Removing unreachable block (ram,0x06886170) */
/* WARNING: Removing unreachable block (ram,0x068861a4) */
/* WARNING: Removing unreachable block (ram,0x068861bc) */
/* WARNING: Removing unreachable block (ram,0x068861e8) */
/* WARNING: Removing unreachable block (ram,0x068861cc) */
/* WARNING: Removing unreachable block (ram,0x06886200) */
/* WARNING: Removing unreachable block (ram,0x06886218) */
/* WARNING: Removing unreachable block (ram,0x06886244) */
/* WARNING: Removing unreachable block (ram,0x06886228) */
/* WARNING: Removing unreachable block (ram,0x0688625c) */
/* WARNING: Removing unreachable block (ram,0x06886274) */
/* WARNING: Removing unreachable block (ram,0x068862a0) */
/* WARNING: Removing unreachable block (ram,0x06886284) */
/* WARNING: Removing unreachable block (ram,0x068862b8) */
/* WARNING: Removing unreachable block (ram,0x068862bc) */
/* WARNING: Removing unreachable block (ram,0x068b91e4) */
/* WARNING: Removing unreachable block (ram,0x068b9204) */
/* WARNING: Removing unreachable block (ram,0x068b9224) */
/* WARNING: Removing unreachable block (ram,0x068b92c8) */
/* WARNING: Removing unreachable block (ram,0x068b92ec) */
/* WARNING: Removing unreachable block (ram,0x068b930c) */
/* WARNING: Removing unreachable block (ram,0x068b93b0) */
/* WARNING: Removing unreachable block (ram,0x068b93d4) */
/* WARNING: Removing unreachable block (ram,0x068b93f4) */
/* WARNING: Removing unreachable block (ram,0x068b949c) */
/* WARNING: Removing unreachable block (ram,0x068b94c4) */
/* WARNING: Removing unreachable block (ram,0x068b94e4) */
/* WARNING: Removing unreachable block (ram,0x068b958c) */
/* WARNING: Removing unreachable block (ram,0x068b95b4) */
/* WARNING: Removing unreachable block (ram,0x068b95d4) */
/* WARNING: Removing unreachable block (ram,0x068b967c) */
/* WARNING: Removing unreachable block (ram,0x068b96a4) */
/* WARNING: Removing unreachable block (ram,0x068b96c4) */
/* WARNING: Removing unreachable block (ram,0x068b976c) */
/* WARNING: Removing unreachable block (ram,0x068b9790) */
/* WARNING: Removing unreachable block (ram,0x068b97b0) */
/* WARNING: Removing unreachable block (ram,0x068b9858) */
/* WARNING: Removing unreachable block (ram,0x068b987c) */
/* WARNING: Removing unreachable block (ram,0x068b989c) */
/* WARNING: Removing unreachable block (ram,0x068b9944) */
/* WARNING: Removing unreachable block (ram,0x068b997c) */
/* WARNING: Removing unreachable block (ram,0x068b99a8) */
/* WARNING: Removing unreachable block (ram,0x068b99c0) */
/* WARNING: Removing unreachable block (ram,0x068b9a84) */
/* WARNING: Removing unreachable block (ram,0x068b9abc) */
/* WARNING: Removing unreachable block (ram,0x068b9ae8) */
/* WARNING: Removing unreachable block (ram,0x068b9b00) */
/* WARNING: Removing unreachable block (ram,0x068b9bc4) */
/* WARNING: Removing unreachable block (ram,0x068b9be8) */
/* WARNING: Removing unreachable block (ram,0x068b9c08) */
/* WARNING: Removing unreachable block (ram,0x068b9cb0) */
/* WARNING: Removing unreachable block (ram,0x068b9cd4) */
/* WARNING: Removing unreachable block (ram,0x068b9cf4) */
/* WARNING: Removing unreachable block (ram,0x068b9d9c) */
/* WARNING: Removing unreachable block (ram,0x068b9dc0) */
/* WARNING: Removing unreachable block (ram,0x068b9de0) */
/* WARNING: Removing unreachable block (ram,0x068b9e84) */
/* WARNING: Removing unreachable block (ram,0x068b9ea8) */
/* WARNING: Removing unreachable block (ram,0x068b9ec8) */
/* WARNING: Removing unreachable block (ram,0x068b9f70) */
/* WARNING: Removing unreachable block (ram,0x064a7540) */
/* WARNING: Removing unreachable block (ram,0x068b9ed0) */
/* WARNING: Removing unreachable block (ram,0x068b9efc) */
/* WARNING: Removing unreachable block (ram,0x068b9f04) */
/* WARNING: Removing unreachable block (ram,0x068b9f28) */
/* WARNING: Removing unreachable block (ram,0x068b9f10) */
/* WARNING: Removing unreachable block (ram,0x068b9f1c) */
/* WARNING: Removing unreachable block (ram,0x068b9f38) */
/* WARNING: Removing unreachable block (ram,0x068b9de8) */
/* WARNING: Removing unreachable block (ram,0x068b9e14) */
/* WARNING: Removing unreachable block (ram,0x068b9e1c) */
/* WARNING: Removing unreachable block (ram,0x068b9e40) */
/* WARNING: Removing unreachable block (ram,0x068b9e28) */
/* WARNING: Removing unreachable block (ram,0x068b9e34) */
/* WARNING: Removing unreachable block (ram,0x068b9e50) */
/* WARNING: Removing unreachable block (ram,0x068b9cfc) */
/* WARNING: Removing unreachable block (ram,0x068b9d28) */
/* WARNING: Removing unreachable block (ram,0x068b9d30) */
/* WARNING: Removing unreachable block (ram,0x068b9d54) */
/* WARNING: Removing unreachable block (ram,0x068b9d3c) */
/* WARNING: Removing unreachable block (ram,0x068b9d48) */
/* WARNING: Removing unreachable block (ram,0x068b9d64) */
/* WARNING: Removing unreachable block (ram,0x068b9c10) */
/* WARNING: Removing unreachable block (ram,0x068b9c3c) */
/* WARNING: Removing unreachable block (ram,0x068b9c44) */
/* WARNING: Removing unreachable block (ram,0x068b9c68) */
/* WARNING: Removing unreachable block (ram,0x068b9c50) */
/* WARNING: Removing unreachable block (ram,0x068b9c5c) */
/* WARNING: Removing unreachable block (ram,0x068b9c78) */
/* WARNING: Removing unreachable block (ram,0x068b9b20) */
/* WARNING: Removing unreachable block (ram,0x068b9b4c) */
/* WARNING: Removing unreachable block (ram,0x068b9b54) */
/* WARNING: Removing unreachable block (ram,0x068b9b78) */
/* WARNING: Removing unreachable block (ram,0x068b9b60) */
/* WARNING: Removing unreachable block (ram,0x068b9b6c) */
/* WARNING: Removing unreachable block (ram,0x068b9b88) */
/* WARNING: Removing unreachable block (ram,0x068b99e0) */
/* WARNING: Removing unreachable block (ram,0x068b9a0c) */
/* WARNING: Removing unreachable block (ram,0x068b9a14) */
/* WARNING: Removing unreachable block (ram,0x068b9a38) */
/* WARNING: Removing unreachable block (ram,0x068b9a20) */
/* WARNING: Removing unreachable block (ram,0x068b9a2c) */
/* WARNING: Removing unreachable block (ram,0x068b9a48) */
/* WARNING: Removing unreachable block (ram,0x068b98a4) */
/* WARNING: Removing unreachable block (ram,0x068b98d0) */
/* WARNING: Removing unreachable block (ram,0x068b98d8) */
/* WARNING: Removing unreachable block (ram,0x068b98fc) */
/* WARNING: Removing unreachable block (ram,0x068b98e4) */
/* WARNING: Removing unreachable block (ram,0x068b98f0) */
/* WARNING: Removing unreachable block (ram,0x068b990c) */
/* WARNING: Removing unreachable block (ram,0x068b97b8) */
/* WARNING: Removing unreachable block (ram,0x068b97e4) */
/* WARNING: Removing unreachable block (ram,0x068b97ec) */
/* WARNING: Removing unreachable block (ram,0x068b9810) */
/* WARNING: Removing unreachable block (ram,0x068b97f8) */
/* WARNING: Removing unreachable block (ram,0x068b9804) */
/* WARNING: Removing unreachable block (ram,0x068b9820) */
/* WARNING: Removing unreachable block (ram,0x068b96cc) */
/* WARNING: Removing unreachable block (ram,0x068b96f8) */
/* WARNING: Removing unreachable block (ram,0x068b9700) */
/* WARNING: Removing unreachable block (ram,0x068b9724) */
/* WARNING: Removing unreachable block (ram,0x068b970c) */
/* WARNING: Removing unreachable block (ram,0x068b9718) */
/* WARNING: Removing unreachable block (ram,0x068b9734) */
/* WARNING: Removing unreachable block (ram,0x068b95dc) */
/* WARNING: Removing unreachable block (ram,0x068b9608) */
/* WARNING: Removing unreachable block (ram,0x068b9610) */
/* WARNING: Removing unreachable block (ram,0x068b9634) */
/* WARNING: Removing unreachable block (ram,0x068b961c) */
/* WARNING: Removing unreachable block (ram,0x068b9628) */
/* WARNING: Removing unreachable block (ram,0x068b9644) */
/* WARNING: Removing unreachable block (ram,0x068b94ec) */
/* WARNING: Removing unreachable block (ram,0x068b9518) */
/* WARNING: Removing unreachable block (ram,0x068b9520) */
/* WARNING: Removing unreachable block (ram,0x068b9544) */
/* WARNING: Removing unreachable block (ram,0x068b952c) */
/* WARNING: Removing unreachable block (ram,0x068b9538) */
/* WARNING: Removing unreachable block (ram,0x068b9554) */
/* WARNING: Removing unreachable block (ram,0x068b93fc) */
/* WARNING: Removing unreachable block (ram,0x068b9428) */
/* WARNING: Removing unreachable block (ram,0x068b9430) */
/* WARNING: Removing unreachable block (ram,0x068b9454) */
/* WARNING: Removing unreachable block (ram,0x068b943c) */
/* WARNING: Removing unreachable block (ram,0x068b9448) */
/* WARNING: Removing unreachable block (ram,0x068b9464) */
/* WARNING: Removing unreachable block (ram,0x068b9314) */
/* WARNING: Removing unreachable block (ram,0x068b9340) */
/* WARNING: Removing unreachable block (ram,0x068b9348) */
/* WARNING: Removing unreachable block (ram,0x068b936c) */
/* WARNING: Removing unreachable block (ram,0x068b9354) */
/* WARNING: Removing unreachable block (ram,0x068b9360) */
/* WARNING: Removing unreachable block (ram,0x068b937c) */
/* WARNING: Removing unreachable block (ram,0x068b922c) */
/* WARNING: Removing unreachable block (ram,0x068b9258) */
/* WARNING: Removing unreachable block (ram,0x068b9260) */
/* WARNING: Removing unreachable block (ram,0x068b9284) */
/* WARNING: Removing unreachable block (ram,0x068b926c) */
/* WARNING: Removing unreachable block (ram,0x068b9278) */
/* WARNING: Removing unreachable block (ram,0x068b9294) */

void MergeEngine_ECS_Systems_Board_SplitSystem__SplitStackingWithAvailableSpace
               (long param_1,long param_2,long *param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  code **ppcVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long extraout_x1;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  long unaff_x22;
  long unaff_x23;
  undefined *unaff_x24;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  code *apcStack_80 [2];
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = param_1;
  plVar13 = (long *)0x7e28000;
  if ((bRam0000000007e28d15 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ecd8);
    func_0x03280a18(PTR_DAT_07810148);
    func_0x03280a18(PTR_DAT_07810150);
    func_0x03280a18(PTR_DAT_07810158);
    bRam0000000007e28d15 = 1;
  }
  if (param_2 == 0) {
LAB_068858f0:
    func_0x03280cac();
  }
  else {
    if (*(char *)(param_2 + 0x59) == '\0') {
      plVar13 = *(long **)(param_2 + 0x18);
    }
    else {
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_068858f0;
      param_3 = (long *)0x0;
      plVar13 = (long *)func_0x06760834(*(long *)(param_1 + 0x58),*(undefined8 *)(param_2 + 0x20));
    }
    puVar1 = PTR_DAT_0777ecd8;
    plVar3 = *(long **)(param_1 + 0x58);
    if (plVar3 == (long *)0x0) goto LAB_068858f0;
    param_3 = *(long **)PTR_DAT_07810158;
    param_5 = 1;
    (**(code **)(*plVar3 + 0x218))(plVar3,plVar13,param_3,1,1,*(undefined8 *)(*plVar3 + 0x220));
    unaff_x22 = *(long *)(param_1 + 0x58);
    unaff_x23 = *(long *)(param_2 + 0x28);
    plVar3 = (long *)func_0x03280afc(*(undefined8 *)puVar1,1);
    unaff_x24 = puVar1;
    if ((plVar13 == (long *)0x0) || (param_3 = plVar3, plVar3 == (long *)0x0)) goto LAB_068858f0;
    if ((int)plVar3[3] != 0) {
      plVar3[4] = plVar13[6];
      if (unaff_x22 != 0) {
        param_5 = func_0x06769c6c(unaff_x22,unaff_x23,plVar3,0);
        plVar3 = *(long **)(param_2 + 0x40);
        lVar9 = 0x28;
        if (*(char *)(param_2 + 0x59) != '\0') {
          lVar9 = 0x20;
        }
        unaff_x22 = *(long *)(param_2 + lVar9);
        uVar14 = 0x68857f8;
        ppcVar2 = (code **)&stack0xffffffffffffffc0;
        lVar10 = unaff_x22;
        lVar9 = param_1;
        goto SUB_068862e8;
      }
      goto LAB_068858f0;
    }
  }
  auVar15 = func_0x03280cb4();
  lVar10 = auVar15._8_8_;
  lVar9 = auVar15._0_8_;
  apcStack_80[0] = MergeEngine_ECS_Systems_Board_SplitSystem__SplitStackingWithBoardFull;
  puStack_70 = unaff_x24;
  lStack_68 = unaff_x23;
  lStack_60 = unaff_x22;
  plStack_58 = plVar13;
  lStack_50 = param_2;
  lStack_48 = param_1;
  if ((bRam0000000007e28d14 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d7798);
    func_0x03280a18(PTR_DAT_0777a940);
    func_0x03280a18(PTR_DAT_0777e5b8);
    func_0x03280a18(PTR_DAT_0777e5d0);
    func_0x03280a18(PTR_DAT_077d77b0);
    func_0x03280a18(PTR_DAT_07810148);
    func_0x03280a18(PTR_DAT_07810150);
    func_0x03280a18(PTR_DAT_07810158);
    bRam0000000007e28d14 = 1;
  }
  if ((lVar10 == 0) || (plVar13 = *(long **)(lVar9 + 0x58), plVar13 == (long *)0x0)) {
    auVar15 = func_0x03280cac();
    unaff_x22 = auVar15._8_8_;
    lVar9 = auVar15._0_8_;
    auVar15._8_8_ = param_3;
    auVar15._0_8_ = lVar9;
    ppcVar2 = (code **)&stack0xffffffffffffff20;
    plVar13 = (long *)0x7e28000;
    plVar3 = param_3;
    if ((bRam0000000007e28d12 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077d75b8);
      func_0x03280a18(PTR_DAT_0777a498);
      func_0x03280a18(PTR_DAT_0777e4a0);
      func_0x03280a18(PTR_DAT_077e71b8);
      func_0x03280a18(PTR_DAT_077e71c0);
      func_0x03280a18(PTR_DAT_077e71c8);
      func_0x03280a18(PTR_DAT_07810148);
      func_0x03280a18(PTR_DAT_07810150);
      func_0x03280a18(PTR_DAT_0777e5f8);
      func_0x03280a18(PTR_DAT_07810160);
      func_0x03280a18(PTR_DAT_07810168);
      func_0x03280a18(PTR_DAT_0776b160);
      bRam0000000007e28d12 = 1;
    }
    if (unaff_x22 != 0) {
      plVar13 = *(long **)(lVar9 + 0x58);
      uVar14 = func_0x03ced81c(unaff_x22,*(undefined8 *)PTR_DAT_077d75b8);
      if (plVar13 != (long *)0x0) {
        plVar3 = *(long **)PTR_DAT_07810168;
        (**(code **)(*plVar13 + 0x218))(plVar13,uVar14,plVar3,1,1,*(undefined8 *)(*plVar13 + 0x220))
        ;
        plVar4 = *(long **)(lVar9 + 0x58);
        if (plVar4 != (long *)0x0) {
          plVar3 = *(long **)PTR_DAT_07810160;
          (**(code **)(*plVar4 + 0x218))(plVar4,param_3,plVar3,1,1,*(undefined8 *)(*plVar4 + 0x220))
          ;
          puVar1 = PTR_DAT_0777a498;
          plVar4 = *(long **)(lVar9 + 0x40);
          plVar13 = (long *)0x0;
          if (plVar4 != (long *)0x0) {
            lVar10 = *plVar4;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777a498) {
                  puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x14) * 0x10 + 0x138);
                  goto LAB_06885d6c;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar5 = (undefined8 *)func_0x03256b10(plVar4,*(long *)PTR_DAT_0777a498,0x14);
LAB_06885d6c:
            plVar3 = (long *)puVar5[1];
            uVar14 = (*(code *)*puVar5)(plVar4,param_3);
            plVar4 = *(long **)(lVar9 + 0x40);
            plVar13 = (long *)0x0;
            if (plVar4 != (long *)0x0) {
              lVar10 = *plVar4;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                    puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x10) * 0x10 + 0x138);
                    goto LAB_06885dd8;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar5 = (undefined8 *)func_0x03256b10(plVar4,*(long *)puVar1,0x10);
LAB_06885dd8:
              plVar3 = (long *)(*(code *)*puVar5)(plVar4,uVar14,puVar5[1]);
              uVar14 = 0x6885dfc;
              ppcVar2 = (code **)&stack0xffffffffffffff20;
              lVar10 = param_5;
              plVar13 = plVar3;
              goto SUB_068862e8;
            }
          }
        }
      }
    }
    uVar14 = 0x68862e8;
    auVar16 = func_0x03280cac();
    lVar10 = auVar16._8_8_;
    auVar15._0_8_ = auVar16._0_8_;
  }
  else {
    (**(code **)(*plVar13 + 0x218))
              (plVar13,*(undefined8 *)(lVar10 + 0x18),*(undefined8 *)PTR_DAT_07810158,1,1,
               *(undefined8 *)(*plVar13 + 0x220));
    plVar3 = *(long **)(lVar10 + 0x40);
    plVar13 = (long *)(lVar10 + 0x28);
    if (*(char *)(lVar10 + 0x59) != '\0') {
      plVar13 = (long *)(lVar10 + 0x20);
    }
    uVar14 = 0x68859dc;
    ppcVar2 = apcStack_80;
    lVar10 = *plVar13;
    plVar13 = (long *)0x7e28000;
    param_5 = unaff_x23;
  }
SUB_068862e8:
  puVar1 = PTR_DAT_0777e5d0;
  lVar6 = auVar15._0_8_;
  *(undefined8 *)((long)ppcVar2 + -0x30) = uVar14;
  *(long *)((long)ppcVar2 + -0x28) = param_5;
  *(long *)((long)ppcVar2 + -0x20) = unaff_x22;
  *(long **)((long)ppcVar2 + -0x18) = plVar13;
  *(long *)((long)ppcVar2 + -0x10) = auVar15._8_8_;
  *(long *)((long)ppcVar2 + -8) = lVar9;
  if ((bRam0000000007e28d16 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a940);
    func_0x03280a18(PTR_DAT_0777e5b8);
    func_0x03280a18(PTR_DAT_0777e5c0);
    func_0x03280a18(PTR_DAT_0777e5d0);
    bRam0000000007e28d16 = 1;
  }
  uVar14 = *(undefined8 *)puVar1;
  *(undefined8 *)((long)ppcVar2 + -0x38) = 0;
  func_0x0437ba9c((undefined1 *)((long)ppcVar2 + -0x38),0x100,uVar14);
  lVar9 = 0;
  lVar7 = func_0x06a13bc8(lVar10,*(undefined8 *)((long)ppcVar2 + -0x38),0,0,0);
  plVar13 = *(long **)(lVar6 + 0x18);
  if (plVar13 != (long *)0x0) {
    lVar9 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777e5b8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_068863dc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_0777e5b8,0);
LAB_068863dc:
    lVar9 = lVar7;
    lVar8 = (*(code *)*puVar5)(plVar13,plVar3,lVar7,puVar5[1]);
    plVar3 = *(long **)(lVar6 + 0x10);
    lVar10 = lVar7;
    if (plVar3 != (long *)0x0) {
      lVar9 = *plVar3;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777e5c0) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 5) * 0x10 + 0x138);
            goto LAB_06886454;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar3,*(long *)PTR_DAT_0777e5c0,5);
LAB_06886454:
      lVar9 = puVar5[1];
      (*(code *)*puVar5)(plVar3,lVar8);
      lVar6 = 0;
      if (lVar8 != 0) {
        func_0x03d20d84(lVar8,*(undefined8 *)PTR_DAT_0777a940);
        return;
      }
    }
  }
  func_0x03280cac();
  *(undefined8 *)((long)ppcVar2 + -0x60) = 0x6886494;
  *(long *)((long)ppcVar2 + -0x58) = lVar10;
  *(long **)((long)ppcVar2 + -0x50) = plVar3;
  *(long *)((long)ppcVar2 + -0x48) = lVar6;
  if ((bRam0000000007e28d17 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    bRam0000000007e28d17 = 1;
  }
  puVar1 = PTR_DAT_0777bf98;
  if (extraout_x1 != 0) {
    lVar10 = func_0x03ced81c(extraout_x1,*(undefined8 *)PTR_DAT_0777bf98);
    if (((lVar9 != 0) && (lVar9 = func_0x03ced81c(lVar9,*(undefined8 *)puVar1), lVar9 != 0)) &&
       (lVar10 != 0)) {
      *(undefined8 *)(lVar10 + 0x50) = *(undefined8 *)(lVar9 + 0x50);
      return;
    }
  }
  func_0x03280cac();
  return;
}

