/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ActivityLike$$get_Type RVA 0x2b2c4a4 =====

void FUN_02b3c4a4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
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
  
  iVar1 = func_0x0229f06c(0x94,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    func_0x0245498c(&uStack_30,0,0);
    return;
  }
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x02b3c514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xf0))(piVar3,*(undefined4 *)(*piVar3 + 0xf4));
  return;
}



// ===== FAT.ActivityLike$$get_Param RVA 0x2b3429c =====

void FUN_02b4429c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
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
  
  iVar1 = func_0x0229f06c(0x11a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x11a,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    func_0x0245498c(&uStack_30,0,0);
    return;
  }
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x02b4430c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
  return;
}



// ===== FAT.ActivityLike$$get_Id RVA 0x2b349f8 =====

void FUN_02b449f8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
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
  
  iVar1 = func_0x0229f06c(0x116,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x116,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    func_0x0245498c(&uStack_30,0,0);
    return;
  }
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x02b44a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xe0))(piVar3,*(undefined4 *)(*piVar3 + 0xe4));
  return;
}



// ===== FAT.ActivityLike$$get_From RVA 0x2b3762c =====

undefined4 FUN_02b4762c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x118,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x118,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x14);
}



// ===== FAT.ActivityLike$$get_Active RVA 0x2b38934 =====

undefined4 FUN_02b48934(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 uVar6;
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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x128,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x128,0);
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
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if (iVar1 != 0) {
    uVar6 = func_0x02b4cec4(param_1);
    iVar1 = (int)((ulonglong)uVar6 >> 0x20);
    bVar5 = (int)uVar6 != 0;
    uVar4 = 0;
    if ((int)-(iVar1 + (uint)bVar5) < 0 != (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)bVar5))) {
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ===== FAT.ActivityLike$$get_Info3 RVA 0x2b389c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b489c0(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_02b48aac + 0x2b489dc);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b48ab0 + 0x2b489f0));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x115,0);
  if (iVar1 == 0) {
    uVar2 = FUN_02b449f8(param_2);
    uVar3 = FUN_02b4762c(param_2);
    uVar4 = FUN_02b4429c(param_2);
    puVar5 = *(undefined4 **)(_UNK_02b48ab4 + 0x2b48a8c);
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 0;
    uVar6 = *puVar5;
    *(undefined4 *)(param_1 + 1) = 0;
    func_0x03923edc(param_1,uVar2,uVar3,uVar4,uVar6);
  }
  else {
    iVar1 = func_0x0229f13c(0x115,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02175cb4(&uStack_28,iVar1,param_2,0);
    *(undefined4 *)(param_1 + 1) = uStack_20;
    *param_1 = uStack_28;
  }
  return;
}



// ===== FAT.ActivityLike$$get_Id2 RVA 0x2b38ab8 =====

void FUN_02b48ab8(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x1fa,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b4c924(&uStack_18,iVar1);
  }
  else {
    iVar1 = func_0x0229f13c(0x1fa,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217edb0(&uStack_18,iVar1,param_2,0);
  }
  *param_1 = uStack_18;
  param_1[1] = uStack_14;
  return;
}



// ===== FAT.ActivityLike$$RefreshTS RVA 0x2b39ff4 =====

void FUN_02b49ff4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  iVar1 = func_0x0229f06c(0x1ee,0);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x1b0))
              (&uStack_38,param_1,param_3,param_4,param_5,param_6,*(undefined4 *)(*param_1 + 0x1b4))
    ;
    *(undefined8 *)(param_1 + 10) = uStack_38;
    *(undefined8 *)(param_1 + 0xc) = uStack_30;
  }
  else {
    iVar1 = func_0x0229f13c(0x1ee,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217eb50(iVar1,param_1,param_3,param_4,param_5,param_6,0);
  }
  return;
}



// ===== FAT.ActivityLike$$get_Lite RVA 0x2b3c914 =====

undefined4 FUN_02b4c914(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// ===== FAT.ActivityLike$$set_Lite RVA 0x2b3c91c =====

void FUN_02b4c91c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ===== FAT.ActivityLike$$get_OpenCount RVA 0x2b3c9fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b4c9fc(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
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
  
  pcVar5 = (char *)(_UNK_02b4cacc + 0x2b4ca10);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4cad0 + 0x2b4ca24));
    *pcVar5 = '\x01';
  }
  iVar6 = 0;
  iVar1 = func_0x0229f06c(0x9e9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e9,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3,0,0);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  iVar1 = FUN_02b4762c(param_1);
  if ((iVar1 == 1) && (piVar2 = *(int **)(param_1 + 0x10), piVar2 != (int *)0x0)) {
    uVar4 = (uint)*(byte *)(**(int **)(_UNK_02b4cad4 + 0x2b4ca9c) + 0xb8);
    if ((uVar4 <= *(byte *)(*piVar2 + 0xb8)) &&
       (*(int *)(*(int *)(*piVar2 + 100) + uVar4 * 4 + -4) == **(int **)(_UNK_02b4cad4 + 0x2b4ca9c))
       ) {
      iVar6 = piVar2[6];
    }
  }
  return iVar6;
}



// ===== FAT.ActivityLike$$get_Valid RVA 0x2b3cad8 =====

void FUN_02b4cad8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
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
  
  iVar1 = func_0x0229f06c(0x127,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x127,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    func_0x0245496c(&uStack_30,0,0);
    return;
  }
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x02b4cb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x130))(piVar3,*(undefined4 *)(*piVar3 + 0x134));
  return;
}



// ===== FAT.ActivityLike$$get_BoardFlyCenterSoundEnabled RVA 0x2b3cb4c =====

undefined4 FUN_02b4cb4c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x737f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x737f,0);
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
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  return 1;
}



// ===== FAT.ActivityLike$$get_Visual RVA 0x2b3cba0 =====

undefined4 FUN_02b4cba0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.ActivityLike$$get_AppendVisual RVA 0x2b3cba8 =====

undefined4 FUN_02b4cba8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== FAT.ActivityLike$$get_GuideRes RVA 0x2b3cbb0 =====

void FUN_02b4cbb0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  *param_1 = *(undefined4 *)(param_2 + 0x1c);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityLike$$get_EntryVisible RVA 0x2b3cbc4 =====

uint FUN_02b4cbc4(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  iVar2 = func_0x0229f06c(0x1ae3,0);
  if (iVar2 == 0) {
    param_1 = (int *)(**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0229f06c(0x1ae4,0);
    if (iVar2 == 0) {
      return (uint)(param_1[3] != 0);
    }
    iVar2 = func_0x0229f13c(0x1ae4,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x1ae3,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar5 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
  uVar1 = func_0x0245496c(&uStack_30,0,0);
  return uVar1;
}



// ===== FAT.ActivityLike$$get_AppendEntryVisible RVA 0x2b3cc44 =====

uint FUN_02b4cc44(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  iVar2 = func_0x0229f06c(0x732c,0);
  if (iVar2 == 0) {
    param_1 = (int *)(**(code **)(*param_1 + 0x120))(param_1,*(undefined4 *)(*param_1 + 0x124));
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0229f06c(0x1ae4,0);
    if (iVar2 == 0) {
      return (uint)(param_1[3] != 0);
    }
    iVar2 = func_0x0229f13c(0x1ae4,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x732c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar5 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
  uVar1 = func_0x0245496c(&uStack_30,0,0);
  return uVar1;
}



// ===== FAT.ActivityLike$$get_EntryIcon RVA 0x2b3ccc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b4ccc4(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x173,0);
  if (iVar1 == 0) {
    param_1 = (int *)(**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    uVar5 = 0;
    iVar1 = func_0x0229f06c(0x175,0);
    if (iVar1 == 0) {
      if (param_1[2] != 0) {
        uVar5 = *(undefined4 *)(param_1[2] + 0x20);
      }
      return uVar5;
    }
    iVar1 = func_0x0229f13c(0x175,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x173,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar4 = (char *)(_UNK_02173f74 + 0x2173e94);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
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
  uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
  return uVar5;
}



// ===== FAT.ActivityLike$$get_AppendEntryIcon RVA 0x2b3cd44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b4cd44(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x7380,0);
  if (iVar1 == 0) {
    param_1 = (int *)(**(code **)(*param_1 + 0x120))(param_1,*(undefined4 *)(*param_1 + 0x124));
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    uVar5 = 0;
    iVar1 = func_0x0229f06c(0x175,0);
    if (iVar1 == 0) {
      if (param_1[2] != 0) {
        uVar5 = *(undefined4 *)(param_1[2] + 0x20);
      }
      return uVar5;
    }
    iVar1 = func_0x0229f13c(0x175,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7380,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar4 = (char *)(_UNK_02173f74 + 0x2173e94);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
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
  uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
  return uVar5;
}



// ===== FAT.ActivityLike$$get_Priority RVA 0x2b3cdc4 =====

undefined4 FUN_02b4cdc4(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x7326,0);
  if (iVar1 == 0) {
    param_1 = (int *)(**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    uVar4 = 0;
    iVar1 = func_0x0229f06c(0x7327,0);
    if (iVar1 == 0) {
      if (param_1[3] != 0) {
        uVar4 = *(undefined4 *)(param_1[3] + 0x18);
      }
      return uVar4;
    }
    iVar1 = func_0x0229f13c(0x7327,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7326,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
  uVar4 = func_0x0245498c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.ActivityLike$$get_AppendPriority RVA 0x2b3ce44 =====

undefined4 FUN_02b4ce44(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x7330,0);
  if (iVar1 == 0) {
    param_1 = (int *)(**(code **)(*param_1 + 0x120))(param_1,*(undefined4 *)(*param_1 + 0x124));
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    uVar4 = 0;
    iVar1 = func_0x0229f06c(0x7327,0);
    if (iVar1 == 0) {
      if (param_1[3] != 0) {
        uVar4 = *(undefined4 *)(param_1[3] + 0x18);
      }
      return uVar4;
    }
    iVar1 = func_0x0229f13c(0x7327,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7330,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
  uVar4 = func_0x0245498c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.ActivityLike$$get_Countdown RVA 0x2b3cec4 =====

int FUN_02b4cec4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x129,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x129,0);
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
    iVar1 = func_0x0245499c(&uStack_30,0,0);
    return iVar1;
  }
  iVar3 = *(int *)(param_1 + 0x30);
  iVar1 = func_0x01c34eb8(0);
  return iVar3 - iVar1;
}



// ===== FAT.ActivityLike$$get_Asset RVA 0x2b3cf28 =====

undefined4 FUN_02b4cf28(int param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// ===== FAT.ActivityLike$$ToString RVA 0x2b3cf30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4cf30(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  longlong lStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong lStack_20;
  undefined4 uStack_18;
  
  pcVar4 = (char *)(_UNK_02b4d010 + 0x2b4cf48);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4d014 + 0x2b4cf5c));
    func_0x01384978(*(undefined4 *)(_UNK_02b4d018 + 0x2b4cf68));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7381,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7381,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02173f74 + 0x2173e94);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    lStack_30 = (ulonglong)*(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4) << 0x20;
    lStack_20._0_4_ = 0;
    func_0x0245494c(auStack_48,0);
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    lStack_20 = CONCAT44(lStack_20._4_4_,uStack_38);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&lStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&lStack_30,param_1,0);
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
    func_0x0245495c(iVar3,uVar5,&lStack_30,uVar2,0,0);
    func_0x02f5db90(&lStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return;
  }
  FUN_02b489c0(&lStack_30,param_1);
  uStack_18 = uStack_28;
  lStack_20 = lStack_30;
  uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_02b4d01c + 0x2b4cfd8),&lStack_30);
  func_0x046604e4(**(undefined4 **)(_UNK_02b4d020 + 0x2b4d004),uVar5,0);
  return;
}



// ===== FAT.ActivityLike$$SaveData RVA 0x2b3d024 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b4d024(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
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
  
  pcVar8 = (char *)(_UNK_02b4d134 + 0x2b4d038);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4d138 + 0x2b4d04c));
    *pcVar8 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x7357,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x7357,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_0224d604 + 0x224d524);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0224d608 + 0x224d538),param_1,0);
      *pcVar8 = '\x01';
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
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar4 + 8);
    uVar9 = *(undefined4 *)(iVar4 + 0xc);
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar4 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar5,0,0);
    iVar4 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0224d60c + 0x224d5f4));
    return iVar4;
  }
  iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_02b4d13c + 0x2b4d0a4));
  func_0x0177d5c8(iVar4,0);
  uVar9 = FUN_02b449f8(param_1);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar4 + 0xc) = uVar9;
  iVar7 = param_1[10];
  iVar1 = param_1[0xb];
  iVar2 = param_1[0xc];
  iVar3 = param_1[0xd];
  *(int *)(iVar4 + 0x20) = param_1[9];
  *(int *)(iVar4 + 0x10) = iVar7;
  *(int *)(iVar4 + 0x14) = iVar1;
  *(int *)(iVar4 + 0x18) = iVar2;
  *(int *)(iVar4 + 0x1c) = iVar3;
  uVar9 = FUN_02b3c4a4(param_1);
  iVar7 = param_1[4];
  *(undefined4 *)(iVar4 + 0x24) = uVar9;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(iVar7 + 0x14);
  pcVar6 = *(code **)(*param_1 + 0x170);
  uVar9 = *(undefined4 *)(*param_1 + 0x174);
  param_1[3] = 0;
  (*pcVar6)(param_1,iVar4,uVar9);
  return iVar4;
}



// ===== FAT.ActivityLike$$LoadData RVA 0x2b3d140 =====

void FUN_02b4d140(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
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
  undefined4 uStack_24;
  
  uVar6 = func_0x0229f06c(0x1ed,0);
  if ((int)uVar6 != 0) {
    iVar1 = func_0x0229f13c(0x1ed,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  if (param_2 == 0) {
    uStack_28 = 0;
    uStack_24 = 0;
    FUN_02b49ff4(param_1,(int)((ulonglong)uVar6 >> 0x20),0,0);
    (**(code **)(*param_1 + 0x1a0))(param_1,*(undefined4 *)(*param_1 + 0x1a4));
  }
  else {
    param_1[9] = *(int *)(param_2 + 0x20);
    pcVar3 = *(code **)(*param_1 + 0x178);
    uVar5 = *(undefined4 *)(*param_1 + 0x17c);
    param_1[3] = 0;
    (*pcVar3)(param_1,param_2,uVar5);
    uStack_28 = *(undefined4 *)(param_2 + 0x18);
    uStack_24 = *(undefined4 *)(param_2 + 0x1c);
    FUN_02b49ff4(param_1,uStack_24,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
  }
                    /* WARNING: Could not recover jumptable at 0x02b4d238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x188))(param_1,param_2,*(undefined4 *)(*param_1 + 0x18c));
  return;
}



// ===== FAT.ActivityLike$$AfterLoad RVA 0x2b3d23c =====

void FUN_02b4d23c(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x7382,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x7382,0);
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
  func_0x01485228(&uStack_38,param_2,0);
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



// ===== FAT.ActivityLike$$AfterLoad RVA 0x2b3d290 =====

void FUN_02b4d290(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x1f1,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1f1,0);
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



// ===== FAT.ActivityLike$$SetupPending RVA 0x2b3d2e4 =====

undefined4 FUN_02b4d2e4(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x1f8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1f8,0);
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
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  return 0;
}



// ===== FAT.ActivityLike$$ResPending RVA 0x2b3d338 =====

undefined4 FUN_02b4d338(int param_1)

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
  
  iVar1 = func_0x0229f06c(500,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(500,0);
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
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x029eac44(iVar1,param_1,0,0);
  return 0;
}



// ===== FAT.ActivityLike$$SetupFresh RVA 0x2b3d3b0 =====

void FUN_02b4d3b0(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x1f0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1f0,0);
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



// ===== FAT.ActivityLike$$SetupClear RVA 0x2b3d3fc =====

void FUN_02b4d3fc(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  iVar1 = func_0x0229f06c(0x1a8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1a8,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    return;
  }
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02b4d464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 0x168))(piVar2,*(undefined4 *)(*piVar2 + 0x16c));
    return;
  }
  return;
}



// ===== FAT.ActivityLike$$SetupTS RVA 0x2b3d46c =====

void FUN_02b4d46c(undefined8 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  iVar1 = func_0x0229f06c(0x1ef,0);
  if (iVar1 == 0) {
    piVar2 = *(int **)(param_2 + 0x10);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar2 + 0x160))
              (&uStack_38,piVar2,param_3,param_4,param_5,param_6,*(undefined4 *)(*piVar2 + 0x164));
  }
  else {
    iVar1 = func_0x0229f13c(0x1ef,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217ea04(&uStack_38,iVar1,param_2);
  }
  *param_1 = uStack_38;
  param_1[1] = uStack_30;
  return;
}



// ===== FAT.ActivityLike$$WhenActive RVA 0x2b3d53c =====

void FUN_02b4d53c(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x201,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x201,0);
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
  func_0x01485228(&uStack_38,param_2,0);
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



// ===== FAT.ActivityLike$$WhenEnd RVA 0x2b3d590 =====

void FUN_02b4d590(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x1a2,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1a2,0);
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



// ===== FAT.ActivityLike$$WakeLimbo RVA 0x2b3d5dc =====

void FUN_02b4d5dc(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x7364,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x7364,0);
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



// ===== FAT.ActivityLike$$WhenReset RVA 0x2b3d628 =====

void FUN_02b4d628(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x13ac,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x13ac,0);
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



// ===== FAT.ActivityLike$$WhenObserve RVA 0x2b3d674 =====

undefined4 FUN_02b4d674(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x205,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x205,0);
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
    uVar4 = func_0x0245496c(&uStack_38,0,0);
    return uVar4;
  }
  return 0;
}



// ===== FAT.ActivityLike$$TryPopup RVA 0x2b3d6d0 =====

void FUN_02b4d6d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x1aa2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1aa2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c7f50(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityLike$$ResetPopup RVA 0x2b3d738 =====

void FUN_02b4d738(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x2997,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x2997,0);
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



// ===== FAT.ActivityLike$$BeforePopupActiveCheck RVA 0x2b3d784 =====

undefined4 FUN_02b4d784(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x7383,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7383,0);
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
    uVar4 = func_0x0245496c(&uStack_38,0,0);
    return uVar4;
  }
  return 1;
}



// ===== FAT.ActivityLike$$OpenAppend RVA 0x2b3d7e0 =====

void FUN_02b4d7e0(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x27f1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x27f1,0);
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
                    /* WARNING: Could not recover jumptable at 0x02b4d840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined4 *)(*param_1 + 0x1fc));
  return;
}



// ===== FAT.ActivityLike$$CheckClickAppend RVA 0x2b3d844 =====

undefined4 FUN_02b4d844(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x27f0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x27f0,0);
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
    uVar4 = func_0x0245496c(&uStack_38,0,0);
    return uVar4;
  }
  return 0;
}



// ===== FAT.ActivityLike$$Open RVA 0x2b3d8a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4d8a0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  char *pcVar6;
  int iVar7;
  undefined1 uVar8;
  undefined8 uStack_50;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  
  iVar2 = func_0x0229f06c(0x3df6,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x3df6,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_0221335c + 0x2213250);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02213360 + 0x2213264),param_1,param_2,0);
      *pcVar6 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = (undefined4)uStack_50;
    uStack_34 = uStack_50._4_4_;
    uStack_30 = iStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_50 = *(undefined8 *)param_2;
    iStack_48 = param_2[2];
    uVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02213364 + 0x22132b8),&uStack_50);
    func_0x01485288(&uStack_38,uVar1,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x014852b8(&uStack_38,0,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar1 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar1,&uStack_38,uVar5,1,0);
    return;
  }
  iVar2 = *param_2;
  iVar7 = func_0x0229f06c(0x1724,0);
  if (iVar7 == 0) {
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar2 + 0xc);
    pcVar6 = (char *)(_UNK_02b4db08 + 0x2b4d9f0);
    uStack_18 = unaff_r4;
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b4db0c + 0x2b4da04));
      func_0x01384978(*(undefined4 *)(_UNK_02b4db10 + 0x2b4da10));
      *pcVar6 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x13da,0);
    if (iVar2 == 0) {
      iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_02b4db14 + 0x2b4da6c));
      piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02b4db18 + 0x2b4da84),1);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((param_1 != 0) &&
         (iVar3 = func_0x01384ab8(param_1,*(undefined4 *)(*piVar4 + 0x20)), iVar3 == 0)) {
        uVar1 = func_0x01384c10();
        func_0x01384aa0(uVar1,0);
      }
      if (piVar4[3] == 0) {
        func_0x01384bf4();
      }
      piVar4[4] = param_1;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee858c(iVar2,iVar7,piVar4,0);
      uStack_20 = uStack_18;
      pcVar6 = (char *)(_UNK_019a8b30 + 0x19a88e4);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_019a8b34 + 0x19a88f8),0);
        func_0x01384978(*(undefined4 *)(_UNK_019a8b38 + 0x19a8904));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b3c + 0x19a8910));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b40 + 0x19a891c));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b44 + 0x19a8928));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b48 + 0x19a8934));
        *pcVar6 = '\x01';
      }
      uStack_24 = 0;
      uStack_28 = 0;
      iVar2 = func_0x0229f06c(0x94b,0);
      if (iVar2 == 0) {
        piVar4 = *(int **)(_UNK_019a8b4c + 0x19a8998);
        if (*(int *)(*piVar4 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x02f74dec(**(undefined4 **)(_UNK_019a8b50 + 0x19a89b4));
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        FUN_02b489c0(&uStack_38,param_1,0);
        uVar5 = uStack_34;
        uVar1 = uStack_38;
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar2 + 0x54) = uStack_30;
        *(undefined4 *)(iVar2 + 0x48) = uVar1;
        *(undefined4 *)(iVar2 + 0x4c) = uVar5;
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        uVar1 = FUN_02b3c4a4(param_1,0);
        *(undefined4 *)(iVar2 + 0x50) = uVar1;
        iVar7 = func_0x01c24918(0);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar7 = *(int *)(iVar7 + 0xc);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar7 + 8) == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(**(int **)(_UNK_019a8b54 + 0x19a8a58) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x024500d4(&uStack_38,0);
        uStack_28 = uStack_38;
        uStack_24 = uStack_34;
        uVar1 = func_0x01486058(&uStack_28,**(undefined4 **)(_UNK_019a8b58 + 0x19a8a84),0);
        *(undefined4 *)(iVar2 + 0x58) = uVar1;
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        uVar8 = 0;
        uVar1 = FUN_02b449f8(param_1,0);
        if (*(int *)(**(int **)(_UNK_019a8b5c + 0x19a8ac8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar7 = func_0x036a1750(uVar1,**(undefined4 **)(_UNK_019a8b60 + 0x19a8ae4));
        if ((iVar7 != 0) && (uVar8 = 0, *(char *)(iVar7 + 0x2c) != '\0')) {
          uVar8 = 1;
        }
        iVar7 = *(int *)(*piVar4 + 0x74);
        *(undefined1 *)(iVar2 + 0x5c) = uVar8;
        if (iVar7 == 0) {
          func_0x01384ab4();
        }
        func_0x019930d8(iVar2,0,0);
      }
      else {
        iVar2 = func_0x0229f13c(0x94b,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x02173f80(iVar2,param_1,0);
      }
      return;
    }
    iVar3 = func_0x0229f13c(0x13da,0);
    iVar2 = param_1;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x1724,0);
    iVar7 = param_1;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,iVar2,0);
  uStack_38 = (undefined4)uStack_50;
  uStack_34 = uStack_50._4_4_;
  uStack_30 = iStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar7,0);
  func_0x01485278(&uStack_38,iVar2,0);
  iVar7 = *(int *)(iVar3 + 8);
  uVar1 = *(undefined4 *)(iVar3 + 0xc);
  iVar2 = *(int *)(iVar3 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar7,uVar1,&uStack_38,uVar5,0,0);
  return;
}



// ===== FAT.ActivityLike$$Open RVA 0x2b3d904 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4d904(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  int iVar5;
  undefined4 unaff_r5;
  undefined1 uVar6;
  undefined4 uVar7;
  char *pcVar8;
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
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x1724,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 0xc);
    pcVar8 = (char *)(_UNK_02b4db08 + 0x2b4d9f0);
    uStack_18 = unaff_r4;
    uStack_14 = unaff_r5;
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b4db0c + 0x2b4da04));
      func_0x01384978(*(undefined4 *)(_UNK_02b4db10 + 0x2b4da10));
      *pcVar8 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x13da,0);
    if (iVar2 == 0) {
      iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_02b4db14 + 0x2b4da6c));
      piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02b4db18 + 0x2b4da84),1);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((param_1 != 0) &&
         (iVar5 = func_0x01384ab8(param_1,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
        uVar7 = func_0x01384c10();
        func_0x01384aa0(uVar7,0);
      }
      if (piVar3[3] == 0) {
        func_0x01384bf4();
      }
      piVar3[4] = param_1;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee858c(iVar2,iVar1,piVar3,0);
      uStack_1c = uStack_14;
      uStack_20 = uStack_18;
      pcVar8 = (char *)(_UNK_019a8b30 + 0x19a88e4);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_019a8b34 + 0x19a88f8),0);
        func_0x01384978(*(undefined4 *)(_UNK_019a8b38 + 0x19a8904));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b3c + 0x19a8910));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b40 + 0x19a891c));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b44 + 0x19a8928));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b48 + 0x19a8934));
        *pcVar8 = '\x01';
      }
      uStack_24 = 0;
      uStack_28 = 0;
      iVar1 = func_0x0229f06c(0x94b,0);
      if (iVar1 == 0) {
        piVar3 = *(int **)(_UNK_019a8b4c + 0x19a8998);
        if (*(int *)(*piVar3 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x02f74dec(**(undefined4 **)(_UNK_019a8b50 + 0x19a89b4));
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        FUN_02b489c0(&uStack_38,param_1,0);
        uVar4 = uStack_34;
        uVar7 = uStack_38;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar1 + 0x54) = uStack_30;
        *(undefined4 *)(iVar1 + 0x48) = uVar7;
        *(undefined4 *)(iVar1 + 0x4c) = uVar4;
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        uVar7 = FUN_02b3c4a4(param_1,0);
        *(undefined4 *)(iVar1 + 0x50) = uVar7;
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0xc);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar2 + 8) == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(**(int **)(_UNK_019a8b54 + 0x19a8a58) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x024500d4(&uStack_38,0);
        uStack_28 = uStack_38;
        uStack_24 = uStack_34;
        uVar7 = func_0x01486058(&uStack_28,**(undefined4 **)(_UNK_019a8b58 + 0x19a8a84),0);
        *(undefined4 *)(iVar1 + 0x58) = uVar7;
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        uVar6 = 0;
        uVar7 = FUN_02b449f8(param_1,0);
        if (*(int *)(**(int **)(_UNK_019a8b5c + 0x19a8ac8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x036a1750(uVar7,**(undefined4 **)(_UNK_019a8b60 + 0x19a8ae4));
        if ((iVar2 != 0) && (uVar6 = 0, *(char *)(iVar2 + 0x2c) != '\0')) {
          uVar6 = 1;
        }
        iVar2 = *(int *)(*piVar3 + 0x74);
        *(undefined1 *)(iVar1 + 0x5c) = uVar6;
        if (iVar2 == 0) {
          func_0x01384ab4();
        }
        func_0x019930d8(iVar1,0,0);
      }
      else {
        iVar1 = func_0x0229f13c(0x94b,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02173f80(iVar1,param_1,0);
      }
      return;
    }
    iVar2 = func_0x0229f13c(0x13da,0);
    param_2 = param_1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x1724,0);
    iVar1 = param_1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar5 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar5,uVar7,&uStack_38,uVar4,0,0);
  return;
}



// ===== FAT.ActivityLike$$Open RVA 0x2b3d974 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4d974(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  char *pcVar6;
  int iVar7;
  undefined1 uVar8;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  
  iVar3 = func_0x0229f06c(0x697b,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x697b,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_0224494c + 0x2244844);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02244950 + 0x2244858),param_1,param_2,0);
      *pcVar6 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&iStack_50,0);
    iStack_38 = iStack_50;
    uStack_34 = iStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    iStack_50 = *param_2;
    iStack_4c = param_2[1];
    uVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02244954 + 0x22448a8),&iStack_50);
    func_0x01485288(&iStack_38,uVar1,0);
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&iStack_38,param_1,0);
    func_0x014852b8(&iStack_38,0,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar1 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar3 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar1,&iStack_38,uVar5,1,0);
    return;
  }
  iVar3 = *param_2;
  iVar7 = func_0x0229f06c(0x1724,0);
  if (iVar7 == 0) {
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar3 + 0xc);
    pcVar6 = (char *)(_UNK_02b4db08 + 0x2b4d9f0);
    uStack_18 = unaff_r4;
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b4db0c + 0x2b4da04));
      func_0x01384978(*(undefined4 *)(_UNK_02b4db10 + 0x2b4da10));
      *pcVar6 = '\x01';
    }
    iVar3 = func_0x0229f06c(0x13da,0);
    if (iVar3 == 0) {
      iVar3 = func_0x034aaa34(**(undefined4 **)(_UNK_02b4db14 + 0x2b4da6c));
      piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02b4db18 + 0x2b4da84),1);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((param_1 != 0) &&
         (iVar2 = func_0x01384ab8(param_1,*(undefined4 *)(*piVar4 + 0x20)), iVar2 == 0)) {
        uVar1 = func_0x01384c10();
        func_0x01384aa0(uVar1,0);
      }
      if (piVar4[3] == 0) {
        func_0x01384bf4();
      }
      piVar4[4] = param_1;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee858c(iVar3,iVar7,piVar4,0);
      uStack_20 = uStack_18;
      pcVar6 = (char *)(_UNK_019a8b30 + 0x19a88e4);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_019a8b34 + 0x19a88f8),0);
        func_0x01384978(*(undefined4 *)(_UNK_019a8b38 + 0x19a8904));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b3c + 0x19a8910));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b40 + 0x19a891c));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b44 + 0x19a8928));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b48 + 0x19a8934));
        *pcVar6 = '\x01';
      }
      uStack_24 = 0;
      uStack_28 = 0;
      iVar3 = func_0x0229f06c(0x94b,0);
      if (iVar3 == 0) {
        piVar4 = *(int **)(_UNK_019a8b4c + 0x19a8998);
        if (*(int *)(*piVar4 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar3 = func_0x02f74dec(**(undefined4 **)(_UNK_019a8b50 + 0x19a89b4));
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        FUN_02b489c0(&iStack_38,param_1,0);
        uVar1 = uStack_34;
        iVar7 = iStack_38;
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar3 + 0x54) = uStack_30;
        *(int *)(iVar3 + 0x48) = iVar7;
        *(undefined4 *)(iVar3 + 0x4c) = uVar1;
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        uVar1 = FUN_02b3c4a4(param_1,0);
        *(undefined4 *)(iVar3 + 0x50) = uVar1;
        iVar7 = func_0x01c24918(0);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar7 = *(int *)(iVar7 + 0xc);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar7 + 8) == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(**(int **)(_UNK_019a8b54 + 0x19a8a58) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x024500d4(&iStack_38,0);
        uStack_28 = iStack_38;
        uStack_24 = uStack_34;
        uVar1 = func_0x01486058(&uStack_28,**(undefined4 **)(_UNK_019a8b58 + 0x19a8a84),0);
        *(undefined4 *)(iVar3 + 0x58) = uVar1;
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        uVar8 = 0;
        uVar1 = FUN_02b449f8(param_1,0);
        if (*(int *)(**(int **)(_UNK_019a8b5c + 0x19a8ac8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar7 = func_0x036a1750(uVar1,**(undefined4 **)(_UNK_019a8b60 + 0x19a8ae4));
        if ((iVar7 != 0) && (uVar8 = 0, *(char *)(iVar7 + 0x2c) != '\0')) {
          uVar8 = 1;
        }
        iVar7 = *(int *)(*piVar4 + 0x74);
        *(undefined1 *)(iVar3 + 0x5c) = uVar8;
        if (iVar7 == 0) {
          func_0x01384ab4();
        }
        func_0x019930d8(iVar3,0,0);
      }
      else {
        iVar3 = func_0x0229f13c(0x94b,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x02173f80(iVar3,param_1,0);
      }
      return;
    }
    iVar2 = func_0x0229f13c(0x13da,0);
    iVar3 = param_1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x1724,0);
    iVar7 = param_1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&iStack_50,0,iVar3,0);
  iStack_38 = iStack_50;
  uStack_34 = iStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&iStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&iStack_38,iVar7,0);
  func_0x01485278(&iStack_38,iVar3,0);
  iVar7 = *(int *)(iVar2 + 8);
  uVar1 = *(undefined4 *)(iVar2 + 0xc);
  iVar3 = *(int *)(iVar2 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar3 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar7,uVar1,&iStack_38,uVar5,0,0);
  return;
}



// ===== FAT.ActivityLike$$OpenRes RVA 0x2b3d9d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4d9d8(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  char *pcVar7;
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
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_02b4db08 + 0x2b4d9f0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4db0c + 0x2b4da04));
    func_0x01384978(*(undefined4 *)(_UNK_02b4db10 + 0x2b4da10));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x13da,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x13da,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_02b4db14 + 0x2b4da6c));
  piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02b4db18 + 0x2b4da84),1);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  if ((param_2 != 0) &&
     (iVar4 = func_0x01384ab8(param_2,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
    uVar6 = func_0x01384c10();
    func_0x01384aa0(uVar6,0);
  }
  if (piVar2[3] == 0) {
    func_0x01384bf4();
  }
  piVar2[4] = param_2;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01ee858c(iVar1,param_1,piVar2,0);
  pcVar7 = (char *)(_UNK_019a8b30 + 0x19a88e4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019a8b34 + 0x19a88f8),0);
    func_0x01384978(*(undefined4 *)(_UNK_019a8b38 + 0x19a8904));
    func_0x01384978(*(undefined4 *)(_UNK_019a8b3c + 0x19a8910));
    func_0x01384978(*(undefined4 *)(_UNK_019a8b40 + 0x19a891c));
    func_0x01384978(*(undefined4 *)(_UNK_019a8b44 + 0x19a8928));
    func_0x01384978(*(undefined4 *)(_UNK_019a8b48 + 0x19a8934));
    *pcVar7 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x94b,0);
  if (iVar1 == 0) {
    piVar2 = *(int **)(_UNK_019a8b4c + 0x19a8998);
    if (*(int *)(*piVar2 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x02f74dec(**(undefined4 **)(_UNK_019a8b50 + 0x19a89b4));
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    FUN_02b489c0(&uStack_38,param_2,0);
    uVar3 = uStack_34;
    uVar6 = uStack_38;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 0x54) = uStack_30;
    *(undefined4 *)(iVar1 + 0x48) = uVar6;
    *(undefined4 *)(iVar1 + 0x4c) = uVar3;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar6 = FUN_02b3c4a4(param_2,0);
    *(undefined4 *)(iVar1 + 0x50) = uVar6;
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0xc);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar4 + 8) == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(**(int **)(_UNK_019a8b54 + 0x19a8a58) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x024500d4(&uStack_38,0);
    uStack_28 = uStack_38;
    uStack_24 = uStack_34;
    uVar6 = func_0x01486058(&uStack_28,**(undefined4 **)(_UNK_019a8b58 + 0x19a8a84),0);
    *(undefined4 *)(iVar1 + 0x58) = uVar6;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 0;
    uVar6 = FUN_02b449f8(param_2,0);
    if (*(int *)(**(int **)(_UNK_019a8b5c + 0x19a8ac8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar4 = func_0x036a1750(uVar6,**(undefined4 **)(_UNK_019a8b60 + 0x19a8ae4));
    if ((iVar4 != 0) && (uVar5 = 0, *(char *)(iVar4 + 0x2c) != '\0')) {
      uVar5 = 1;
    }
    iVar4 = *(int *)(*piVar2 + 0x74);
    *(undefined1 *)(iVar1 + 0x5c) = uVar5;
    if (iVar4 == 0) {
      func_0x01384ab4();
    }
    func_0x019930d8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x94b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_2,0);
  }
  return;
}



// ===== FAT.ActivityLike$$OpenRes RVA 0x2b3db1c =====

/* WARNING: Possible PIC construction at 0x019a8984: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x019a8988) */
/* WARNING: Removing unreachable block (ram,0x02b4daa0) */
/* WARNING: Removing unreachable block (ram,0x02b4dab8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4db1c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int unaff_r5;
  undefined1 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  int *piVar7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
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
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  iVar1 = func_0x0229f06c(0x7384,0);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = *(undefined4 *)(param_1 + 0xc);
    pcVar6 = (char *)(_UNK_02b4db08 + 0x2b4d9f0);
    uStack_18 = unaff_r4;
    iStack_14 = unaff_r5;
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b4db0c + 0x2b4da04));
      func_0x01384978(*(undefined4 *)(_UNK_02b4db10 + 0x2b4da10));
      *pcVar6 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x13da,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0x13da,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iStack_1c = iStack_14;
      uStack_20 = uStack_18;
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,0,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar1 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
      }
      func_0x01485278(&uStack_38,uVar5,0);
      func_0x01485278(&uStack_38,0,0);
      iVar2 = *(int *)(iVar1 + 8);
      uVar5 = *(undefined4 *)(iVar1 + 0xc);
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar3 = 3;
      if (iVar1 == 0) {
        uVar3 = 2;
      }
      func_0x0245495c(iVar2,uVar5,&uStack_38,uVar3,0,0);
      return;
    }
    iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_02b4db14 + 0x2b4da6c));
    iVar2 = func_0x01384a00(**(undefined4 **)(_UNK_02b4db18 + 0x2b4da84),1);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar2 + 0xc) == 0) {
      func_0x01384bf4();
    }
    *(undefined4 *)(iVar2 + 0x10) = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01ee858c(iVar1,uVar5,iVar2,0);
    iStack_1c = iStack_14;
    uStack_20 = uStack_18;
    pcVar6 = (char *)(_UNK_019a8b30 + 0x19a88e4);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_019a8b34 + 0x19a88f8),0);
      func_0x01384978(*(undefined4 *)(_UNK_019a8b38 + 0x19a8904));
      func_0x01384978(*(undefined4 *)(_UNK_019a8b3c + 0x19a8910));
      func_0x01384978(*(undefined4 *)(_UNK_019a8b40 + 0x19a891c));
      func_0x01384978(*(undefined4 *)(_UNK_019a8b44 + 0x19a8928));
      func_0x01384978(*(undefined4 *)(_UNK_019a8b48 + 0x19a8934));
      *pcVar6 = '\x01';
    }
    uStack_24 = 0;
    uStack_28 = 0;
    iVar1 = func_0x0229f06c(0x94b,0);
    if (iVar1 == 0) {
      piVar7 = *(int **)(_UNK_019a8b4c + 0x19a8998);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x02f74dec(**(undefined4 **)(_UNK_019a8b50 + 0x19a89b4));
      func_0x01384bf0();
      FUN_02b489c0(&uStack_38,0,0);
      uVar3 = uStack_34;
      uVar5 = uStack_38;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar1 + 0x54) = uStack_30;
      *(undefined4 *)(iVar1 + 0x48) = uVar5;
      *(undefined4 *)(iVar1 + 0x4c) = uVar3;
      func_0x01384bf0();
      uVar5 = FUN_02b3c4a4(0,0);
      *(undefined4 *)(iVar1 + 0x50) = uVar5;
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar2 + 8) == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(**(int **)(_UNK_019a8b54 + 0x19a8a58) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x024500d4(&uStack_38,0);
      uStack_28 = uStack_38;
      uStack_24 = uStack_34;
      uVar5 = func_0x01486058(&uStack_28,**(undefined4 **)(_UNK_019a8b58 + 0x19a8a84),0);
      *(undefined4 *)(iVar1 + 0x58) = uVar5;
      func_0x01384bf0();
      uVar4 = 0;
      uVar5 = FUN_02b449f8(0,0);
      if (*(int *)(**(int **)(_UNK_019a8b5c + 0x19a8ac8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x036a1750(uVar5,**(undefined4 **)(_UNK_019a8b60 + 0x19a8ae4));
      if ((iVar2 != 0) && (uVar4 = 0, *(char *)(iVar2 + 0x2c) != '\0')) {
        uVar4 = 1;
      }
      iVar2 = *(int *)(*piVar7 + 0x74);
      *(undefined1 *)(iVar1 + 0x5c) = uVar4;
      if (iVar2 == 0) {
        func_0x01384ab4();
      }
      func_0x019930d8(iVar1,0,0);
      return;
    }
    iVar1 = func_0x0229f13c(0x94b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = 0;
    unaff_lr = 0x19a8988;
    unaff_r4 = uStack_18;
    unaff_r5 = iVar1;
    register0x00000054 = (BADSPACEBASE *)&uStack_38;
  }
  else {
    iVar1 = func_0x0229f13c(0x7384,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar2 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  *(undefined4 *)((int)register0x00000054 + -0x20) =
       *(undefined4 *)((int)register0x00000054 + -0x38);
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar2,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar2,uVar5,(undefined1 *)((int)register0x00000054 + -0x30),uVar3);
  return;
}



// ===== FAT.ActivityLike$$ResEnumerate RVA 0x2b3db84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b4db84(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x3189,0);
  if (iVar1 == 0) {
    param_1 = (int *)(**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02b61df8 + 0x2b61d5c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b61dfc + 0x2b61d70),0);
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x1395,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b61e00 + 0x2b61dc8));
      func_0x04874ed4(iVar1,0);
      *(undefined4 *)(iVar1 + 8) = 0xfffffffe;
      uVar5 = func_0x048799ac(0);
      *(undefined4 *)(iVar1 + 0x14) = uVar5;
      *(int **)(iVar1 + 0x18) = param_1;
      return iVar1;
    }
    iVar1 = func_0x0229f13c(0x1395,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x3189,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar4 = (char *)(_UNK_021c7568 + 0x21c7488);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021c756c + 0x21c749c),param_1,0);
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
  iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7570 + 0x21c7558));
  return iVar1;
}



// ===== FAT.ActivityLike$$.ctor RVA 0x2b3dc04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b4dc04(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_02b4dd1c + 0x2b4dc18);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4dd20 + 0x2b4dc2c));
    func_0x01384978(*(undefined4 *)(_UNK_02b4dd24 + 0x2b4dc38));
    func_0x01384978(*(undefined4 *)(_UNK_02b4dd28 + 0x2b4dc44));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_02b4dd2c + 0x2b4dc58);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar4 = (char *)(_UNK_02b4dd30 + 0x2b4dc74);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4dd34 + 0x2b4dc88));
    *pcVar4 = '\x01';
  }
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  puVar6 = *(undefined4 **)(_UNK_02b4dd38 + 0x2b4dcb8);
  *(undefined4 *)(param_1 + 0x10) = **(undefined4 **)(iVar1 + 0x5c);
  uVar2 = func_0x01384be4(*puVar6);
  func_0x02b635c4(uVar2,0);
  uVar3 = *puVar6;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  uVar2 = func_0x01384be4(uVar3);
  func_0x02b635c4(uVar2,0);
  puVar6 = *(undefined4 **)(_UNK_02b4dd3c + 0x2b4dcf4);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  uVar2 = func_0x01384be4(*puVar6);
  func_0x029eadb4(uVar2,0);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  return param_1;
}



// ===== FAT.ActivityLike$$<>iFixBaseProxy_ToString RVA 0x2b3dd40 =====

void FUN_02b4dd40(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)func_0x0340ab84(param_1,0);
  if (piVar1 == (int *)0x0) {
    func_0x03409cb0();
  }
                    /* WARNING: Could not recover jumptable at 0x048868d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
  return;
}



// ===== FAT.ActivityLike$$OpenAsync<object> RVA 0x2d83368 =====

void FUN_02d93368(undefined8 *param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  puVar1 = *(undefined4 **)(param_4 + 0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    func_0x0140024c(param_4);
    puVar1 = *(undefined4 **)(param_4 + 0x1c);
  }
  func_0x02d93420(&uStack_28,param_2,*param_3,*puVar1);
  *(undefined4 *)(param_1 + 1) = uStack_20;
  *param_1 = uStack_28;
  return;
}



// ===== FAT.ActivityLike$$OpenAsync<object> RVA 0x2d833c4 =====

void FUN_02d933c4(undefined8 *param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  puVar1 = *(undefined4 **)(param_4 + 0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    func_0x0140024c(param_4);
    puVar1 = *(undefined4 **)(param_4 + 0x1c);
  }
  func_0x02d93420(&uStack_28,param_2,*param_3,*puVar1);
  *(undefined4 *)(param_1 + 1) = uStack_20;
  *param_1 = uStack_28;
  return;
}



// ===== FAT.ActivityLike$$OpenAsync<object> RVA 0x2d83420 =====

void FUN_02d93420(undefined8 *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if (*(int *)(param_4 + 0x1c) == 0) {
    func_0x0140024c(param_4);
  }
  if (param_3 == 0) {
    func_0x01384bf0();
  }
  func_0x02d934ec(&uStack_28,*(undefined4 *)(param_3 + 0xc),param_2,
                  **(undefined4 **)(param_4 + 0x1c));
  *(undefined4 *)(param_1 + 1) = uStack_20;
  *param_1 = uStack_28;
  return;
}



// ===== FAT.ActivityLike$$OpenResAsync<object> RVA 0x2d83488 =====

void FUN_02d93488(undefined8 *param_1,int param_2,int param_3)

{
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  if (*(int *)(param_3 + 0x1c) == 0) {
    func_0x0140024c(param_3);
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x02d934ec(&uStack_20,*(undefined4 *)(param_2 + 0xc),0,**(undefined4 **)(param_3 + 0x1c));
  *(undefined4 *)(param_1 + 1) = uStack_18;
  *param_1 = uStack_20;
  return;
}



// ===== FAT.ActivityLike$$OpenResAsync<object> RVA 0x2d834ec =====

void FUN_02d934ec(undefined8 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = *(int *)(param_4 + 0x1c);
  if (iVar1 == 0) {
    func_0x0140024c(param_4);
    iVar1 = *(int *)(param_4 + 0x1c);
  }
  uStack_38 = 0;
  uStack_3c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_34 = 0;
  uStack_40 = 0xffffffff;
  iVar2 = *(int *)(iVar1 + 0x10);
  iVar1 = *(int *)(iVar2 + 0x1c);
  uStack_30 = param_2;
  uStack_2c = param_3;
  if (iVar1 == 0) {
    func_0x0140024c(iVar2);
    iVar1 = *(int *)(iVar2 + 0x1c);
  }
  func_0x03b33ca0(&uStack_40,*(undefined4 *)(iVar1 + 8));
  func_0x01c02cec(&uStack_50,(uint)&uStack_40 | 4,*(undefined4 *)(*(int *)(param_4 + 0x1c) + 0x18));
  *(undefined4 *)(param_1 + 1) = uStack_48;
  *param_1 = uStack_50;
  return;
}



// ===== FAT.ActivityLike.<OpenResAsync>d__89<object>$$MoveNext RVA 0x3b23ca0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03b33ca0(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined8 uStack_50;
  int iStack_48;
  undefined8 uStack_40;
  int iStack_38;
  undefined8 uStack_30;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_03b34260 + 0x3b33cbc);
  if (*pcVar9 == '\0') {
    func_0x02457d54(*(undefined4 *)(_UNK_03b34264 + 0x3b33cd0));
    func_0x02457d54(*(undefined4 *)(_UNK_03b34268 + 0x3b33cdc));
    *pcVar9 = '\x01';
  }
  uStack_30 = 0;
  iStack_28 = 0;
  uStack_40 = 0;
  iStack_38 = 0;
  if (*param_1 == 0) {
    uStack_40 = *(undefined8 *)(param_1 + 6);
    *param_1 = -1;
    iStack_38 = param_1[8];
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[8] = 0;
  }
  else {
    iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_03b3426c + 0x3b33d18));
    iVar11 = param_1[4];
    piVar3 = (int *)func_0x02457d44(**(undefined4 **)(_UNK_03b34270 + 0x3b33d30),2);
    iVar10 = param_1[5];
    if (piVar3 == (int *)0x0) {
      func_0x02457d50();
    }
    if ((iVar10 != 0) &&
       (iVar4 = func_0x02457d4c(iVar10,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)) {
      uVar5 = func_0x02457d98();
      func_0x02457d90(uVar5,0);
    }
    if ((uint)piVar3[3] < 2) {
      func_0x02457d5c();
    }
    piVar3[5] = iVar10;
    if (iVar2 == 0) {
      func_0x02457d50();
    }
    iVar10 = *(int *)(param_2 + 0x10);
    if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
      iVar10 = func_0x02457d84();
    }
    func_0x030b40e4(&uStack_50,iVar2,iVar11,piVar3,*(undefined4 *)(*(int *)(iVar10 + 0x60) + 4));
    iStack_28 = iStack_48;
    uStack_30 = uStack_50;
    func_0x02457fa4(param_1[5],0);
    iVar2 = *(int *)(param_2 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x60) + 0xc) + 0x10) + 0xbd) & 1) == 0) {
      func_0x02457d84();
    }
    iVar2 = *(int *)(param_2 + 0x10);
    iStack_38 = iStack_28;
    uStack_40 = uStack_30;
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x60) + 0x18) + 0x10) + 0xbd) & 1) == 0) {
      func_0x02457d84();
    }
    pcVar9 = (char *)(_UNK_03b34274 + 0x3b33e64);
    if (*pcVar9 == '\0') {
      func_0x02457d54(*(undefined4 *)(_UNK_03b34278 + 0x3b33e78));
      *pcVar9 = '\x01';
    }
    piVar3 = (int *)uStack_40;
    if ((int *)uStack_40 != (int *)0x0) {
      iVar2 = *(int *)uStack_40;
      uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
      sVar1 = (short)iStack_38;
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_03b3427c + 0x3b33e9c)) {
            puVar6 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
            goto LAB_03b33f10;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined4 *)
               func_0x02457d88((int *)uStack_40,**(int **)(_UNK_03b3427c + 0x3b33e9c),0);
LAB_03b33f10:
      iVar2 = (*(code *)*puVar6)(piVar3,(int)sVar1,puVar6[1]);
      if (iVar2 == 0) {
        param_1[8] = iStack_38;
        *(undefined8 *)(param_1 + 6) = uStack_40;
        iVar2 = *(int *)(param_2 + 0x10);
        *param_1 = 0;
        if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
          iVar2 = func_0x02457d84();
        }
        func_0x02d7fd30(param_1 + 1,&uStack_40,param_1,
                        *(undefined4 *)(*(int *)(iVar2 + 0x60) + 0x24));
        return;
      }
    }
  }
  iVar2 = *(int *)(param_2 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x02457d84();
  }
  piVar3 = (int *)uStack_40;
  if ((int *)uStack_40 == (int *)0x0) {
    iVar2 = uStack_40._4_4_;
  }
  else {
    sVar1 = (short)iStack_38;
    iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 0x60) + 0x34) + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 0x14);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84(iVar2);
    }
    iVar10 = *piVar3;
    uVar7 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar2) {
          puVar6 = (undefined4 *)(iVar10 + *piVar8 * 8 + 0xc0);
          goto LAB_03b33fe0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined4 *)func_0x02457d88(piVar3,iVar2,0);
LAB_03b33fe0:
    iVar2 = (*(code *)*puVar6)(piVar3,(int)sVar1,puVar6[1]);
  }
  iVar10 = *(int *)(param_2 + 0x10);
  *param_1 = -2;
  if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
    iVar10 = func_0x02457d84();
  }
  piVar3 = (int *)param_1[1];
  if (piVar3 == (int *)0x0) {
    param_1[3] = iVar2;
  }
  else {
    iVar10 = *(int *)(*(int *)(*(int *)(iVar10 + 0x60) + 0x40) + 0x10);
    if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
      iVar10 = func_0x02457d84();
    }
    iVar10 = *(int *)(*(int *)(iVar10 + 0x60) + 4);
    if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
      iVar10 = func_0x02457d84(iVar10);
    }
    iVar11 = *piVar3;
    uVar7 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar10) {
          puVar6 = (undefined4 *)(iVar11 + *piVar8 * 8 + 0xd0);
          goto LAB_03b340b0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined4 *)func_0x02457d88(piVar3,iVar10,2);
LAB_03b340b0:
    (*(code *)*puVar6)(piVar3,iVar2,puVar6[1]);
  }
  return;
}



// ===== FAT.ActivityLike.<OpenResAsync>d__89<object>$$SetStateMachine RVA 0x3b24288 =====

undefined8 FUN_03b34288(int param_1,undefined4 param_2,int param_3)

{
  if ((*(ushort *)(*(int *)(param_3 + 0x10) + 0xbd) & 1) == 0) {
    func_0x02457d84();
  }
  return CONCAT44(param_2,param_1 + 4);
}

