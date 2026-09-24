/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.GuideActImpBoardToCustom$$.ctor RVA 0x1c3c178 =====

/* WARNING: Possible PIC construction at 0x034a2d5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x034a2d60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c4c178(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *unaff_r4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int *unaff_lr;
  undefined1 auStack_2c [20];
  int *apiStack_18 [2];
  
  pcVar5 = (char *)(_UNK_01c4c274 + 0x1c4c18c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c4c278 + 0x1c4c1a0));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c27c + 0x1c4c1ac));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c280 + 0x1c4c1b8));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c284 + 0x1c4c1c4));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c288 + 0x1c4c1d0));
    *pcVar5 = '\x01';
  }
  *(undefined1 *)(param_1 + 8) = 1;
  func_0x0244fedc(param_1,0);
  if (*(int *)(**(int **)(_UNK_01c4c28c + 0x1c4c1f8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01c4c290 + 0x1c4c214));
  uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01c4c294 + 0x1c4c228));
  func_0x0245043c(uVar2,param_1,**(undefined4 **)(_UNK_01c4c298 + 0x1c4c244),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = **(int **)(_UNK_01c4c29c + 0x1c4c268);
  iVar7 = 0;
  apiStack_18[0] = unaff_r4;
  piVar3 = (int *)func_0x0487907c(*(undefined4 *)(iVar1 + 8),uVar2,0);
  iVar6 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 4);
  if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
    iVar6 = func_0x02457d84(iVar6);
  }
  if ((piVar3 == (int *)0x0) || (iVar7 = func_0x02457d4c(piVar3,iVar6), iVar7 != 0)) {
    iVar6 = *(int *)(iVar4 + 0x10);
    *(int *)(iVar1 + 8) = iVar7;
    iVar6 = *(int *)(*(int *)(iVar6 + 0x60) + 4);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x02457d84(iVar6);
    }
    if (piVar3 == (int *)0x0) {
      return;
    }
    iVar1 = func_0x02457d4c(piVar3,iVar6);
    if (iVar1 != 0) {
      return;
    }
  }
  else {
    unaff_lr = (int *)0x34a2d60;
    apiStack_18[0] = piVar3;
    register0x00000054 = (BADSPACEBASE *)apiStack_18;
  }
  *(int **)((int)register0x00000054 + -4) = unaff_lr;
  *(int **)((int)register0x00000054 + -8) = apiStack_18[0];
  func_0x0142996c((int **)((int)register0x00000054 + -0x14),*(undefined4 *)(*piVar3 + 0x20),iVar6);
  piVar3 = *(int **)((int)register0x00000054 + -0xc);
  if (((uint)*(int **)((int)register0x00000054 + -0x14) & 1) == 0) {
    piVar3 = (int *)((uint)((int)register0x00000054 + -0x14) | 1);
  }
  iVar1 = func_0x01419d2c(piVar3);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  func_0x01418ff0(iVar1,0);
  if (((uint)*(int **)((int)register0x00000054 + -0x14) & 1) != 0) {
    func_0x0148d9d4(*(int **)((int)register0x00000054 + -0xc));
  }
  return;
}



// ===== FAT.GuideActImpBoardToCustom$$_StopWait RVA 0x1c3c2a0 =====

void FUN_01c4c2a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x934a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x934a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



// ===== FAT.GuideActImpBoardToCustom$$_Clear RVA 0x1c3c2f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c4c2f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01c4c4b4 + 0x1c4c318);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c4c4b8 + 0x1c4c330));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c4bc + 0x1c4c33c));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c4c0 + 0x1c4c348));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x934b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x934b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = 0;
    uStack_28 = param_4;
    func_0x022398d4(iVar1,param_1,param_2,param_3);
    return;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x9c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  if (iVar1 != 0) {
    func_0x01f038c4(iVar1,0,0);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x9c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  if (iVar1 != 0) {
    func_0x01f02ecc(iVar1,0);
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01c4c4c4 + 0x1c4c434));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_28 = 0;
  func_0x01de9578(iVar1,0,0,0);
  if (*(int *)(**(int **)(_UNK_01c4c4c8 + 0x1c4c470) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01c4c4cc + 0x1c4c48c));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0229f06c(0x3f,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x3f,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,iVar1,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar1 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.GuideActImpBoardToCustom$$Clear RVA 0x1c3c4d0 =====

/* WARNING: Possible PIC construction at 0x034a2fbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x034a2fc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c4c4d0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *unaff_r4;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int *unaff_lr;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int *apiStack_18 [2];
  
  pcVar6 = (char *)(_UNK_01c4c650 + 0x1c4c4e8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c4c654 + 0x1c4c4fc));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c658 + 0x1c4c508));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c65c + 0x1c4c514));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c660 + 0x1c4c520));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c664 + 0x1c4c52c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x934c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x934c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_30,uVar5,0,0);
    return;
  }
  pcVar6 = (char *)(_UNK_01c4c668 + 0x1c4c588);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c4c66c + 0x1c4c59c));
    *pcVar6 = '\x01';
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_01c4c670 + 0x1c4c5b4) + 0x5c);
  FUN_01c4c2f8(param_1,*puVar2,puVar2[1],0);
  if (*(int *)(**(int **)(_UNK_01c4c674 + 0x1c4c5d0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01c4c678 + 0x1c4c5ec));
  iVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01c4c67c + 0x1c4c600));
  func_0x0245043c(iVar7,param_1,**(undefined4 **)(_UNK_01c4c680 + 0x1c4c61c),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = **(int **)(_UNK_01c4c684 + 0x1c4c640);
  if (iVar7 != 0) {
    iVar9 = 0;
    apiStack_18[0] = unaff_r4;
    piVar3 = (int *)func_0x0487929c(*(undefined4 *)(iVar1 + 8),iVar7,0);
    iVar7 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 4);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = func_0x02457d84(iVar7);
    }
    if ((piVar3 == (int *)0x0) || (iVar9 = func_0x02457d4c(piVar3,iVar7), iVar9 != 0)) {
      iVar7 = *(int *)(iVar4 + 0x10);
      *(int *)(iVar1 + 8) = iVar9;
      iVar7 = *(int *)(*(int *)(iVar7 + 0x60) + 4);
      if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
        iVar7 = func_0x02457d84(iVar7);
      }
      if (piVar3 == (int *)0x0) {
        return;
      }
      iVar1 = func_0x02457d4c(piVar3,iVar7);
      if (iVar1 != 0) {
        return;
      }
    }
    else {
      unaff_lr = (int *)0x34a2fc0;
      apiStack_18[0] = piVar3;
      register0x00000054 = (BADSPACEBASE *)apiStack_18;
    }
    *(int **)((int)register0x00000054 + -4) = unaff_lr;
    *(int **)((int)register0x00000054 + -8) = apiStack_18[0];
    func_0x0142996c((int **)((int)register0x00000054 + -0x14),*(undefined4 *)(*piVar3 + 0x20),iVar7)
    ;
    piVar3 = *(int **)((int)register0x00000054 + -0xc);
    if (((uint)*(int **)((int)register0x00000054 + -0x14) & 1) == 0) {
      piVar3 = (int *)((uint)((int)register0x00000054 + -0x14) | 1);
    }
    iVar1 = func_0x01419d2c(piVar3);
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    func_0x01418ff0(iVar1,0);
    if (((uint)*(int **)((int)register0x00000054 + -0x14) & 1) != 0) {
      func_0x0148d9d4(*(int **)((int)register0x00000054 + -0xc));
    }
    return;
  }
  return;
}



// ===== FAT.GuideActImpBoardToCustom$$Play RVA 0x1c3c688 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c4c688(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_01c4cbf4 + 0x1c4c6a4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c4cbf8 + 0x1c4c6b8));
    func_0x01384978(*(undefined4 *)(_UNK_01c4cbfc + 0x1c4c6c4));
    func_0x01384978(*(undefined4 *)(_UNK_01c4cc00 + 0x1c4c6d0));
    func_0x01384978(*(undefined4 *)(_UNK_01c4cc04 + 0x1c4c6dc));
    func_0x01384978(*(undefined4 *)(_UNK_01c4cc08 + 0x1c4c6e8));
    func_0x01384978(*(undefined4 *)(_UNK_01c4cc0c + 0x1c4c6f4));
    func_0x01384978(*(undefined4 *)(_UNK_01c4cc10 + 0x1c4c700));
    func_0x01384978(*(undefined4 *)(_UNK_01c4cc14 + 0x1c4c70c));
    func_0x01384978(*(undefined4 *)(_UNK_01c4cc18 + 0x1c4c718));
    func_0x01384978(*(undefined4 *)(_UNK_01c4cc1c + 0x1c4c724));
    func_0x01384978(*(undefined4 *)(_UNK_01c4cc20 + 0x1c4c730));
    func_0x01384978(*(undefined4 *)(_UNK_01c4cc24 + 0x1c4c73c));
    func_0x01384978(*(undefined4 *)(_UNK_01c4cc28 + 0x1c4c748));
    func_0x01384978(*(undefined4 *)(_UNK_01c4cc2c + 0x1c4c754));
    func_0x01384978(*(undefined4 *)(_UNK_01c4cc30 + 0x1c4c760));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x934d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x934d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar4,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (1 < *(int *)(param_2 + 0xc)) {
    uVar8 = func_0x0244f8f4(*(undefined4 *)(param_2 + 0x10),0);
    puVar10 = *(undefined4 **)(_UNK_01c4cc3c + 0x1c4c7e8);
    iVar1 = func_0x03668dfc(*puVar10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01de4ff8(iVar1,uVar8,0,0);
    uVar8 = func_0x02fb1a6c(param_2,1,**(undefined4 **)(_UNK_01c4cc40 + 0x1c4c824));
    uVar8 = func_0x02fb63f8(uVar8,**(undefined4 **)(_UNK_01c4cc44 + 0x1c4c838));
    iVar7 = func_0x01c24918(0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar7 + 0x9c);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x01c7a348(iVar7,uVar8,0);
    iVar7 = func_0x01c24918(0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar7 + 0x9c);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar7 + 0x14);
    if (iVar7 != 0) {
      iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01c4cc48 + 0x1c4c8c0));
      func_0x03258eb8(iVar2,**(undefined4 **)(_UNK_01c4cc4c + 0x1c4c8d4));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_30 = uVar8;
      uVar8 = func_0x0210e2d4(iVar1,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar2 + 8);
      uVar11 = *(uint *)(iVar2 + 0xc);
      piVar3 = *(int **)(_UNK_01c4cc50 + 0x1c4c928);
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      iVar9 = *piVar3;
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      if (uVar11 < *(uint *)(iVar5 + 0xc)) {
        *(uint *)(iVar2 + 0xc) = uVar11 + 1;
        *(undefined4 *)(iVar5 + uVar11 * 4 + 0x10) = uVar8;
      }
      else {
        func_0x0325970c(iVar2,uVar8,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38))
        ;
      }
      iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01c4cc54 + 0x1c4c9b8));
      func_0x0328e950(iVar5,**(undefined4 **)(_UNK_01c4cc58 + 0x1c4c9cc));
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar5 + 8);
      uVar11 = *(uint *)(iVar5 + 0xc);
      piVar3 = *(int **)(_UNK_01c4cc5c + 0x1c4ca00);
      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
      iVar12 = *piVar3;
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar8 = uStack_30;
      if (uVar11 < *(uint *)(iVar9 + 0xc)) {
        *(uint *)(iVar5 + 0xc) = uVar11 + 1;
        *(undefined4 *)(iVar9 + uVar11 * 4 + 0x10) = uStack_30;
      }
      else {
        func_0x0328f170(iVar5,uStack_30,
                        *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
      }
      puVar10 = *(undefined4 **)(_UNK_01c4cc60 + 0x1c4ca6c);
      uStack_38 = 0;
      uStack_34 = 0;
      func_0x01f03938(iVar7,iVar2,iVar5,0x3f000000);
    }
    func_0x01c872f4(&uStack_2c,0,uVar8,0);
    uVar4 = uStack_28;
    uVar8 = uStack_2c;
    if (*(int *)(**(int **)(_UNK_01c4cc64 + 0x1c4ca98) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01dd8b7c(&uStack_2c,uVar8,uVar4,0);
    if (*(int *)(**(int **)(_UNK_01c4cc68 + 0x1c4cad0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = func_0x0300d558(**(undefined4 **)(_UNK_01c4cc6c + 0x1c4caf4));
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uStack_38 = **(undefined4 **)(_UNK_01c4cc70 + 0x1c4cb20);
    func_0x034a2950(iVar7,iVar1,uStack_2c,uStack_28);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x9c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 != 0) {
      iVar7 = func_0x03668dfc(*puVar10);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x01ddbed8(iVar7,0);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uVar8 = func_0x01f0908c(iVar7,0);
      func_0x01f038c4(iVar1,uVar8,0);
    }
    iVar1 = func_0x03668dfc(*puVar10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_38 = 0;
    func_0x01de9578(iVar1,0,0,8);
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  FUN_01c4c2a0(param_1);
  if (*(int *)(**(int **)(_UNK_01c4cc34 + 0x1c4c968) + 0x74) == 0) {
    func_0x01384ab4();
  }
  (*(code *)&UNK_0515b220)(**(undefined4 **)(_UNK_01c4cc38 + 0x1c4c988),0);
  return;
}



// ===== FAT.GuideActImpBoardToCustom$$<>iFixBaseProxy_Clear RVA 0x1c3cc74 =====

void thunk_FUN_01c47b34(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x92e0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x92e0,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.GuideActImpBoardToCustom$$<>iFixBaseProxy_Play RVA 0x1c3cc78 =====

void thunk_FUN_01c47208(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0x92e1,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x92e1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
  return;
}


