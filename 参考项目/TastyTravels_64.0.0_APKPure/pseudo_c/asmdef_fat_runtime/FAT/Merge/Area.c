/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.Area$$get_config RVA 0x20c79b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020d79b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0xb300,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb300,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0229b854 + 0x229b774);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0229b858 + 0x229b788),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0229b85c + 0x229b844));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.Merge.Area$$get_rect RVA 0x20c7a0c =====

void FUN_020d7a0c(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  iVar1 = func_0x0229f06c(0xb301,0);
  if (iVar1 == 0) {
    uStack_28 = *(undefined8 *)(param_2 + 0xc);
    uStack_20 = *(undefined8 *)(param_2 + 0x14);
  }
  else {
    iVar1 = func_0x0229f13c(0xb301,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0229b860(&uStack_28,iVar1,param_2,0);
  }
  *param_1 = uStack_28;
  param_1[1] = uStack_20;
  return;
}



// ===== FAT.Merge.Area$$.ctor RVA 0x20c7a80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d7a80(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
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
  
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  pcVar6 = (char *)(_UNK_020d7ca4 + 0x20d7ab8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d7ca8 + 0x20d7acc));
    func_0x01384978(*(undefined4 *)(_UNK_020d7cac + 0x20d7ad8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb302,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb302,0);
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
  iVar1 = FUN_020d79b8(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar1 + 0xc);
  iVar1 = FUN_020d79b8(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar9 = *(undefined4 **)(_UNK_020d7cb0 + 0x20d7b8c);
  iVar1 = func_0x0364c9b8(iVar1,2,*puVar9);
  iVar2 = FUN_020d79b8(param_1);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x20);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar8 = func_0x0364c9b8(iVar2,2,*puVar9);
  uVar8 = func_0x01457ae8(iVar7 + iVar1 + -1,uVar8);
  iVar1 = FUN_020d79b8(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar5 = func_0x0364c9b8(iVar1,0,*puVar9);
  iVar1 = FUN_020d79b8(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar3 = func_0x0364c9b8(iVar1,1,*puVar9);
  iVar1 = FUN_020d79b8(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364c9b8(iVar1,2,*puVar9);
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = uVar8;
  return;
}



// ===== FAT.Merge.Area$$_RefreshArea RVA 0x20c7aa4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d7aa4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_020d7ca4 + 0x20d7ab8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d7ca8 + 0x20d7acc));
    func_0x01384978(*(undefined4 *)(_UNK_020d7cac + 0x20d7ad8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb302,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb302,0);
    if (iVar1 == 0) {
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
  iVar1 = FUN_020d79b8(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar1 + 0xc);
  iVar1 = FUN_020d79b8(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar9 = *(undefined4 **)(_UNK_020d7cb0 + 0x20d7b8c);
  iVar1 = func_0x0364c9b8(iVar1,2,*puVar9);
  iVar2 = FUN_020d79b8(param_1);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x20);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar8 = func_0x0364c9b8(iVar2,2,*puVar9);
  uVar8 = func_0x01457ae8(iVar7 + iVar1 + -1,uVar8);
  iVar1 = FUN_020d79b8(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar5 = func_0x0364c9b8(iVar1,0,*puVar9);
  iVar1 = FUN_020d79b8(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar3 = func_0x0364c9b8(iVar1,1,*puVar9);
  iVar1 = FUN_020d79b8(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364c9b8(iVar1,2,*puVar9);
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = uVar8;
  return;
}



// ===== FAT.Merge.Area$$WalkGrid RVA 0x20c7cb4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d7cb4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar4 = (char *)(_UNK_020d7f1c + 0x20d7cd0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d7f20 + 0x20d7ce4));
    func_0x01384978(*(undefined4 *)(_UNK_020d7f24 + 0x20d7cf0));
    *pcVar4 = '\x01';
  }
  iVar6 = 0;
  iVar1 = func_0x0229f06c(0x5bdb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5bdb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  puVar9 = *(undefined4 **)(_UNK_020d7f28 + 0x20d7d54);
  piVar5 = *(int **)(_UNK_020d7f2c + 0x20d7d5c);
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) <= iVar6) break;
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0364c9b8(iVar1,iVar6,*puVar9);
    if (param_2 != 0 && iVar1 != 0) {
      if (*(char *)(_UNK_020d7f30 + 0x20d7dcc) == '\0') {
        func_0x01384978(piVar5);
        *(undefined1 *)(_UNK_020d7f34 + 0x20d7dec) = 1;
      }
      iVar1 = *(int *)(param_1 + 0xc);
      iVar8 = *(int *)(param_1 + 0x14);
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iStack_28 = func_0x0148aaf8(iVar1,iVar8 + iVar1,0);
      uVar7 = *(undefined4 *)(param_1 + 0x14);
      if (*(char *)(_UNK_020d7f38 + 0x20d7e2c) == '\0') {
        func_0x01384978(piVar5);
        *(undefined1 *)(_UNK_020d7f3c + 0x20d7e4c) = 1;
      }
      iVar1 = *(int *)(param_1 + 0x10);
      iVar8 = *(int *)(param_1 + 0x18);
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0148aaf8(iVar1,iVar8 + iVar1,0);
      iVar8 = *(int *)(param_1 + 8);
      uVar3 = *(undefined4 *)(param_1 + 0x14);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0x18);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      func_0x01458344(iVar6,uVar7);
      iVar2 = func_0x01457ae8(iVar6,uVar3);
      puVar9 = *(undefined4 **)(_UNK_020d7f40 + 0x20d7ed8);
      uVar7 = func_0x0364c9b8(iVar8,iVar6,*puVar9);
      uStack_30 = *(undefined4 *)(param_2 + 0x14);
      (**(code **)(param_2 + 0xc))
                (*(undefined4 *)(param_2 + 0x20),extraout_r1 + iStack_28,iVar2 + iVar1,uVar7);
      piVar5 = *(int **)(_UNK_020d7f44 + 0x20d7f10);
    }
    iVar6 = iVar6 + 1;
  }
  return;
}


