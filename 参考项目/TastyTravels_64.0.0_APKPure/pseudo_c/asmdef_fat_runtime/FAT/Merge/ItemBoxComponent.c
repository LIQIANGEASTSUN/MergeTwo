/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ItemBoxComponent$$get_countLeft RVA 0x210de94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0211de94(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  pcVar4 = (char *)(_UNK_0211df2c + 0x211dea8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211df30 + 0x211debc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1478,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1478,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245498c(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(int *)(iVar1 + 0xc) - *(int *)(param_1 + 0x10);
  return uVar2 & ~((int)uVar2 >> 0x1f);
}



// ===== FAT.Merge.ItemBoxComponent$$get_config RVA 0x210df34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0211df34(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x162f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x162f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021d0660 + 0x21d0580);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021d0664 + 0x21d0594),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021d0668 + 0x21d0650));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== FAT.Merge.ItemBoxComponent$$get_energyCost RVA 0x210df88 =====

undefined4 FUN_0211df88(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x162e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x162e,0);
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
  iVar1 = FUN_0211df34(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x14);
}



// ===== FAT.Merge.ItemBoxComponent$$Validate RVA 0x210dff4 =====

undefined4 FUN_0211dff4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0xb373,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb373,0);
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
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245496c(&uStack_30,0,0);
    return uVar3;
  }
  if ((param_1 != 0) && (uVar3 = 0, *(int *)(param_1 + 0x1c) != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}



// ===== FAT.Merge.ItemBoxComponent$$OnSerialize RVA 0x210e060 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211e060(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  pcVar4 = (char *)(_UNK_0211e130 + 0x211e078);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211e134 + 0x211e08c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb374,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb374,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  func_0x02123514(param_1,param_2,0);
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0211e138 + 0x211e0f8));
  func_0x0179ee1c(iVar1,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  *(int *)(param_2 + 0x38) = iVar1;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0xc) = uVar5;
  return;
}



// ===== FAT.Merge.ItemBoxComponent$$OnDeserialize RVA 0x210e13c =====

void FUN_0211e13c(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0xb375,0);
  if (iVar1 == 0) {
    func_0x021237d4(param_1,param_2,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(param_2 + 0x38) != 0) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(*(int *)(param_2 + 0x38) + 0xc);
    }
    return;
  }
  iVar1 = func_0x0229f13c(0xb375,0);
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



// ===== FAT.Merge.ItemBoxComponent$$OnPostAttach RVA 0x210e1c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211e1c0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int unaff_r7;
  int iVar11;
  int unaff_r10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar7 = (char *)(_UNK_0211e340 + 0x211e1d4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211e344 + 0x211e1e8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb376,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb376,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar8,uVar10,&uStack_30,uVar6);
    return;
  }
  func_0x02127894(param_1,0);
  piVar2 = (int *)func_0x021566f4(0);
  iVar1 = func_0x02123568(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar10 = FUN_0210e2d4(iVar1);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_0211e348 + 0x211e290)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x110);
        goto LAB_0211e2d8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0211e348 + 0x211e290),10);
LAB_0211e2d8:
  iVar1 = (*(code *)*puVar3)(piVar2,uVar10,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar10 = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = uVar10;
  iVar1 = func_0x02123568(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar10 = FUN_0210e2d4(iVar1);
  iVar1 = *(int *)(param_1 + 0x14);
  pcVar7 = (char *)(_UNK_02167e40 + 0x2167c34);
  uStack_24 = unaff_r4;
  uStack_20 = unaff_r5;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02167e44 + 0x2167c48),iVar1,0);
    func_0x01384978(*(undefined4 *)(_UNK_02167e48 + 0x2167c54));
    func_0x01384978(*(undefined4 *)(_UNK_02167e4c + 0x2167c60));
    func_0x01384978(*(undefined4 *)(_UNK_02167e50 + 0x2167c6c));
    *pcVar7 = '\x01';
  }
  iVar8 = func_0x0229f06c(0xb377,0);
  if (iVar8 != 0) {
    iVar8 = func_0x0229f13c(0xb377,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = uStack_20;
    uStack_20 = uStack_24;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,iVar1,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar8 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar8 + 0x10),0);
    }
    func_0x01485238(&uStack_38,uVar10,0);
    func_0x01485278(&uStack_38,iVar1,0);
    iVar9 = *(int *)(iVar8 + 8);
    uVar10 = *(undefined4 *)(iVar8 + 0xc);
    iVar1 = *(int *)(iVar8 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_38,uVar6,0,0);
    return;
  }
  piVar2 = (int *)func_0x021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      unaff_r7 = piVar5[-1];
      if (unaff_r7 == **(int **)(_UNK_02167e54 + 0x2167ce4)) {
        puVar3 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0x110);
        goto LAB_02167d2c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02167e54 + 0x2167ce4),10);
LAB_02167d2c:
  iVar8 = (*(code *)*puVar3)(piVar2,uVar10,puVar3[1]);
  if (iVar8 != 0) {
    unaff_r7 = *(int *)(iVar8 + 0x1c);
    unaff_r10 = iVar8;
  }
  if (iVar8 != 0 && unaff_r7 != 0) {
    iVar8 = 0;
    piVar2 = *(int **)(_UNK_02167e58 + 0x2167d6c);
    while( true ) {
      if (unaff_r7 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(unaff_r7 + 0x18);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar9 + 0xc) <= iVar8) break;
      iVar9 = *(int *)(unaff_r10 + 0x1c);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0x18);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar10 = func_0x0364c9b8(iVar9,iVar8,**(undefined4 **)(_UNK_02167e5c + 0x2167dc0));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar1 + 8);
      uVar4 = *(uint *)(iVar1 + 0xc);
      iVar11 = *piVar2;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      if (uVar4 < *(uint *)(iVar9 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar4 + 1;
        *(undefined4 *)(iVar9 + uVar4 * 4 + 0x10) = uVar10;
      }
      else {
        func_0x0325970c(iVar1,uVar10,
                        *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
      }
      unaff_r7 = *(int *)(unaff_r10 + 0x1c);
      iVar8 = iVar8 + 1;
    }
  }
  return;
}



// ===== FAT.Merge.ItemBoxComponent$$ConsumeNextItem RVA 0x210e34c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211e34c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  pcVar3 = (char *)(_UNK_0211e428 + 0x211e360);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211e42c + 0x211e374));
    func_0x01384978(*(undefined4 *)(_UNK_0211e430 + 0x211e380));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e31,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e31,0);
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
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 < *(int *)(iVar1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0(0);
    }
    func_0x03259410(iVar1,iVar4,**(undefined4 **)(_UNK_0211e434 + 0x211e410));
    iVar4 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar4 + 1;
  return;
}



// ===== FAT.Merge.ItemBoxComponent$$.ctor RVA 0x210e438 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211e438(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0211e4b0 + 0x211e44c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211e4b4 + 0x211e460));
    func_0x01384978(*(undefined4 *)(_UNK_0211e4b8 + 0x211e46c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0211e4bc + 0x211e480));
  func_0x03258eb8(uVar1,**(undefined4 **)(_UNK_0211e4c0 + 0x211e494));
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined2 *)(param_1 + 0xc) = 0x101;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemBoxComponent$$<>iFixBaseProxy_OnSerialize RVA 0x210e4c4 =====

void FUN_0211e4c4(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5c7d,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5c7d,0);
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



// ===== FAT.Merge.ItemBoxComponent$$<>iFixBaseProxy_OnDeserialize RVA 0x210e4cc =====

void FUN_0211e4cc(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5c62,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5c62,0);
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



// ===== FAT.Merge.ItemBoxComponent$$<>iFixBaseProxy_OnPostAttach RVA 0x210e4d4 =====

void FUN_0211e4d4(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x279,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x279,0);
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


