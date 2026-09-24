/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ItemChoiceBoxComponent$$ClearChoiceBoxOutput RVA 0x20fb220 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0210b220(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0210b2c8 + 0x210b234);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210b2cc + 0x210b248));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e2a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e2a,0);
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
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  func_0x02122188(param_1);
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}



// ===== FAT.Merge.ItemChoiceBoxComponent$$get_config RVA 0x211196c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0212196c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9e2e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e2e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02286f80 + 0x2286ea0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02286f84 + 0x2286eb4),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02286f88 + 0x2286f70));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x10);
}



// ===== FAT.Merge.ItemChoiceBoxComponent$$Validate RVA 0x21119c0 =====

undefined4 FUN_021219c0(int param_1)

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
  iVar1 = func_0x0229f06c(0xb38e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb38e,0);
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
  if ((param_1 != 0) && (uVar3 = 0, *(int *)(param_1 + 0x44) != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}



// ===== FAT.Merge.ItemChoiceBoxComponent$$OnPostAttach RVA 0x2111a2c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02121a2c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
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
  
  pcVar7 = (char *)(_UNK_02121b74 + 0x2121a40);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02121b78 + 0x2121a54));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb38f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb38f,0);
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
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
    return;
  }
  func_0x02127894(param_1,0);
  piVar2 = (int *)func_0x021566f4(0);
  iVar1 = func_0x02123568(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar9 = FUN_0210e2d4(iVar1);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02121b7c + 0x2121afc)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x110);
        goto LAB_02121b44;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02121b7c + 0x2121afc),10);
LAB_02121b44:
  iVar1 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar1 + 0x44);
  return;
}



// ===== FAT.Merge.ItemChoiceBoxComponent$$EnsureChoiceBoxOutput RVA 0x2111b80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02121b80(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_02121e10 + 0x2121b98);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02121e14 + 0x2121bac));
    func_0x01384978(*(undefined4 *)(_UNK_02121e18 + 0x2121bb8));
    *pcVar8 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iVar4 = func_0x0229f06c(0x9e2c,0);
  if (iVar4 == 0) {
    iVar4 = func_0x02121e1c(param_1);
    uVar6 = func_0x02121ff4(param_1,&uStack_28,&uStack_2c);
    iVar9 = *(int *)(param_1 + 0x14);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0xc);
    iVar7 = 0;
    if ((uVar6 & iVar9 == iVar4) == 1) {
      uVar5 = 0;
      iVar7 = func_0x01c24918(0);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uVar10 = uStack_28;
      uVar2 = uStack_2c;
      iVar11 = *(int *)(iVar7 + 0x58);
      iVar7 = FUN_0212196c(param_1);
      uVar14 = *(undefined4 *)(param_1 + 0x14);
      if (iVar7 != 0) {
        uVar5 = *(undefined4 *)(iVar7 + 0x1c);
      }
      uVar13 = *(undefined4 *)(param_1 + 0x1c);
      cVar1 = *(char *)(param_1 + 0x20);
      uVar12 = *(undefined4 *)(param_1 + 0x18);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x01dc5a74(iVar11,uVar10,uVar2,uVar5,uVar14,cVar1 != '\0',uVar12,uVar13,0);
    }
    if (iVar7 != 0 || iVar9 != iVar4) {
      iVar9 = *(int *)(param_1 + 0x14);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar9 + 0xc) = 0;
      *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
      iVar9 = func_0x01c24918(0);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar2 = uStack_28;
      uVar5 = uStack_2c;
      iVar9 = *(int *)(iVar9 + 0x58);
      if (uVar6 == 0) {
        uVar10 = *(undefined4 *)(param_1 + 0x14);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        func_0x01dc5738(iVar9,uVar2,uVar5,uVar10,iVar4,0);
        *(undefined1 *)(param_1 + 0x20) = 1;
        func_0x02122188(param_1);
      }
      else {
        iVar7 = FUN_0212196c(param_1);
        uVar10 = *(undefined4 *)(param_1 + 0x14);
        uVar12 = *(undefined4 *)(param_1 + 0x18);
        uVar14 = *(undefined4 *)(param_1 + 0x1c);
        if (iVar7 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(undefined4 *)(iVar7 + 0x1c);
        }
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x01dc5910(iVar9,uVar2,uVar5,uVar13,uVar10,iVar4,uVar12,uVar14,0);
        *(undefined1 *)(param_1 + 0x20) = uVar3;
      }
    }
    uVar5 = *(undefined4 *)(param_1 + 0x14);
  }
  else {
    iVar4 = func_0x0229f13c(0x9e2c,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x0220394c(iVar4,param_1,0);
  }
  return uVar5;
}



// ===== FAT.Merge.ItemChoiceBoxComponent$$ResolveChoiceCount RVA 0x2111e1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02121e1c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_02121fc8 + 0x2121e34);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02121fcc + 0x2121e48));
    func_0x01384978(*(undefined4 *)(_UNK_02121fd0 + 0x2121e54));
    func_0x01384978(*(undefined4 *)(_UNK_02121fd4 + 0x2121e60));
    func_0x01384978(*(undefined4 *)(_UNK_02121fd8 + 0x2121e6c));
    func_0x01384978(*(undefined4 *)(_UNK_02121fdc + 0x2121e78));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e2d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e2d,0);
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
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  iVar1 = FUN_0212196c(param_1);
  if ((iVar1 == 0) || (iVar1 = *(int *)(iVar1 + 0x18), iVar1 < 1)) {
    uVar6 = 0;
    iVar1 = func_0x02123568(param_1,0);
    uVar3 = **(undefined4 **)(_UNK_02121fe0 + 0x2121f04);
    if (iVar1 == 0) {
      uStack_14 = 0;
    }
    else {
      uVar6 = FUN_0210e2d4();
      uStack_14 = 0;
      uStack_18 = 0;
      func_0x03507d38(&uStack_18,uVar6,**(undefined4 **)(_UNK_02121fe4 + 0x2121f1c));
      uVar6 = uStack_18;
    }
    uStack_18 = uVar6;
    uVar6 = func_0x01384abc(**(undefined4 **)(_UNK_02121fe8 + 0x2121f4c),&uStack_18);
    iVar1 = 3;
    uStack_1c = 3;
    uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_02121fec + 0x2121f74),&uStack_1c);
    uVar6 = func_0x0244f690(uVar3,uVar6,uVar2,0);
    if (*(int *)(**(int **)(_UNK_02121ff0 + 0x2121fa0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(uVar6,0);
  }
  return iVar1;
}



// ===== FAT.Merge.ItemChoiceBoxComponent$$ResolveActDiffRange RVA 0x2111ff4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02121ff4(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  
  pcVar5 = (char *)(_UNK_02122178 + 0x2122014);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212217c + 0x2122028));
    func_0x01384978(*(undefined4 *)(_UNK_02122180 + 0x2122034));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e2f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e2f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021cc06c(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  iVar3 = FUN_0212196c(param_1);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x14);
  }
  if (iVar3 != 0 && iVar1 != 0) {
    iVar1 = FUN_0212196c(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (1 < *(int *)(iVar1 + 0xc)) {
      iVar1 = FUN_0212196c(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      puVar6 = *(undefined4 **)(_UNK_02122184 + 0x2122130);
      uVar2 = func_0x0364c9b8(iVar1,0,*puVar6);
      *param_2 = uVar2;
      iVar1 = FUN_0212196c(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = 1;
      uVar2 = func_0x0364c9b8(iVar1,1,*puVar6);
      goto LAB_021220b0;
    }
  }
  uVar4 = 0;
  uVar2 = 0x7fffffff;
  *param_2 = 0;
LAB_021220b0:
  *param_3 = uVar2;
  return uVar4;
}



// ===== FAT.Merge.ItemChoiceBoxComponent$$ClearRelateOrders RVA 0x2112188 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02122188(int param_1)

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
  
  pcVar3 = (char *)(_UNK_02122244 + 0x212219c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02122248 + 0x21221b0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e2b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e2b,0);
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
    return;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar4 + 0xc) = 0;
  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
  return;
}



// ===== FAT.Merge.ItemChoiceBoxComponent$$OnSerialize RVA 0x211224c =====

/* WARNING: Possible PIC construction at 0x02122374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x021223a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x021223ac) */
/* WARNING: Removing unreachable block (ram,0x021223b8) */
/* WARNING: Removing unreachable block (ram,0x021223bc) */
/* WARNING: Removing unreachable block (ram,0x021223cc) */
/* WARNING: Removing unreachable block (ram,0x021223d0) */
/* WARNING: Removing unreachable block (ram,0x02122378) */
/* WARNING: Removing unreachable block (ram,0x02122384) */
/* WARNING: Removing unreachable block (ram,0x02122388) */
/* WARNING: Removing unreachable block (ram,0x02122398) */
/* WARNING: Removing unreachable block (ram,0x0212239c) */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0212224c(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  undefined4 uVar12;
  int *piVar13;
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int *piStack_30;
  int *piStack_2c;
  
  pcVar11 = (char *)(_UNK_021223e8 + 0x2122264);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021223ec + 0x2122278));
    func_0x01384978(*(undefined4 *)(_UNK_021223f0 + 0x2122284));
    func_0x01384978(*(undefined4 *)(_UNK_021223f4 + 0x2122290));
    *pcVar11 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xb390,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xb390,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    piStack_30 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    piStack_2c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    func_0x0245494c(&iStack_50,0,param_2,0);
    iStack_38 = iStack_50;
    iStack_34 = uStack_4c;
    piStack_30 = (int *)iStack_48;
    piStack_2c = (int *)uStack_44;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&iStack_38,param_1,0);
    func_0x01485278(&iStack_38,param_2,0);
    iVar10 = *(int *)(iVar2 + 8);
    uVar12 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar2 == 0) {
      uVar8 = 2;
    }
    iVar2 = func_0x0245495c(iVar10,uVar12,&iStack_38,uVar8,0,0);
    return iVar2;
  }
  func_0x02123514(param_1,param_2,0);
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 < 1) {
    return iVar2;
  }
  iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_021223f8 + 0x2122318));
  func_0x017a2f74(iVar2,0);
  uVar1 = *(undefined1 *)(param_1 + 0x20);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  *(undefined1 *)(iVar2 + 0x10) = uVar1;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(iVar2 + 0xc);
  piVar13 = *(int **)(param_1 + 0x14);
  *(int *)(param_2 + 100) = iVar2;
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  piStack_2c = *(int **)(_UNK_021223fc + 0x2122374);
  iVar6 = *piStack_2c;
  pcVar11 = (char *)(_UNK_0364c274 + 0x364bd44);
  iStack_40 = param_1;
  iStack_3c = param_2;
  iStack_38 = iVar2;
  iStack_34 = iVar10;
  piStack_30 = piVar13;
  if (*pcVar11 == '\0') {
    func_0x02457d54(*(undefined4 *)(_UNK_0364c278 + 0x364bd58));
    func_0x02457d54(*(undefined4 *)(_UNK_0364c27c + 0x364bd64));
    func_0x02457d54(*(undefined4 *)(_UNK_0364c280 + 0x364bd70));
    func_0x02457d54(*(undefined4 *)(_UNK_0364c284 + 0x364bd7c));
    *pcVar11 = '\x01';
  }
  func_0x03031d60(piVar13,**(undefined4 **)(_UNK_0364c288 + 0x364bd98),
                  *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x8c));
  iVar2 = **(int **)(*(int *)(iVar6 + 0x10) + 0x60);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x02457d84();
  }
  if (piVar13 == (int *)0x0) {
    piVar3 = (int *)func_0x02457d4c(0,**(undefined4 **)(_UNK_0364c294 + 0x364be04));
    if (piVar3 == (int *)0x0) {
      func_0x02457d50();
LAB_0364bf78:
      iVar2 = *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x88);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x02457d84(iVar2);
      }
      iVar4 = *piVar13;
      uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar7 != 0) {
        piVar3 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar3[-1] == iVar2) {
            puVar5 = (undefined4 *)(iVar4 + *piVar3 * 8 + 0xc0);
            goto LAB_0364bfe8;
          }
          uVar7 = uVar7 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined4 *)func_0x02457d88(piVar13,iVar2,0);
LAB_0364bfe8:
      piVar13 = (int *)(*(code *)*puVar5)(piVar13,puVar5[1]);
      piVar3 = *(int **)(_UNK_0364c298 + 0x364c008);
      do {
        if (piVar13 == (int *)0x0) {
          func_0x02457d50();
        }
        iVar2 = *piVar13;
        uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar9[-1] == *piVar3) {
              puVar5 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
              goto LAB_0364c060;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined4 *)func_0x02457d88(piVar13,*piVar3,0);
LAB_0364c060:
        iVar2 = (*(code *)*puVar5)(piVar13,puVar5[1]);
        if (iVar2 == 0) goto LAB_0364c120;
        if (piVar13 == (int *)0x0) {
          func_0x02457d50();
        }
        iVar2 = *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x94);
        if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
          iVar2 = func_0x02457d84(iVar2);
        }
        iVar4 = *piVar13;
        uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar9[-1] == iVar2) {
              puVar5 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0xc0);
              goto LAB_0364c0f4;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined4 *)func_0x02457d88(piVar13,iVar2,0);
LAB_0364c0f4:
        uVar12 = (*(code *)*puVar5)(piVar13,puVar5[1]);
        func_0x0364baf8(iVar10,uVar12,
                        *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x44));
      } while( true );
    }
  }
  else {
    if (*piVar13 == iVar2) {
      func_0x0364b9a0(iVar10,piVar13[3] + *(int *)(iVar10 + 0xc),
                      *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x3c));
      iStack_48 = piVar13[3];
      uStack_44 = 0;
      func_0x0484e904(piVar13[2],0,*(undefined4 *)(iVar10 + 8),*(undefined4 *)(iVar10 + 0xc));
      iVar4 = piVar13[3] + *(int *)(iVar10 + 0xc);
      goto LAB_0364bf68;
    }
    piVar3 = (int *)func_0x02457d4c(piVar13,**(undefined4 **)(_UNK_0364c28c + 0x364bde0));
    if (piVar3 == (int *)0x0) goto LAB_0364bf78;
  }
  iVar2 = *piVar3;
  piVar13 = *(int **)(_UNK_0364c290 + 0x364be28);
  uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
  iVar4 = *piVar13;
  if (uVar7 != 0) {
    piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar9[-1] == iVar4) {
        puVar5 = (undefined4 *)(iVar2 + *piVar9 * 8 + 200);
        goto LAB_0364bec0;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined4 *)func_0x02457d88(piVar3,iVar4,1);
LAB_0364bec0:
  iVar4 = (*(code *)*puVar5)(piVar3,puVar5[1]);
  func_0x0364b9a0(iVar10,*(int *)(iVar10 + 0xc) + iVar4,
                  *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x3c));
  iVar2 = *piVar3;
  uVar8 = *(undefined4 *)(iVar10 + 8);
  uVar12 = *(undefined4 *)(iVar10 + 0xc);
  uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
  iVar6 = *piVar13;
  if (uVar7 != 0) {
    piVar13 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar13[-1] == iVar6) {
        puVar5 = (undefined4 *)(iVar2 + *piVar13 * 8 + 0xc0);
        goto LAB_0364bf48;
      }
      uVar7 = uVar7 - 1;
      piVar13 = piVar13 + 2;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined4 *)func_0x02457d88(piVar3,iVar6,0);
LAB_0364bf48:
  (*(code *)*puVar5)(piVar3,uVar8,uVar12,puVar5[1]);
  iVar4 = *(int *)(iVar10 + 0xc) + iVar4;
LAB_0364bf68:
  *(int *)(iVar10 + 0xc) = iVar4;
  return iVar4;
LAB_0364c120:
  if (piVar13 == (int *)0x0) {
    return 0;
  }
  iVar2 = *piVar13;
  uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar7 != 0) {
    piVar3 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_0364c29c + 0x364c13c)) {
        puVar5 = (undefined4 *)(iVar2 + *piVar3 * 8 + 0xc0);
        goto LAB_0364c184;
      }
      uVar7 = uVar7 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined4 *)func_0x02457d88(piVar13,**(int **)(_UNK_0364c29c + 0x364c13c),0);
LAB_0364c184:
  iVar2 = (*(code *)*puVar5)(piVar13,puVar5[1]);
  return iVar2;
}



// ===== FAT.Merge.ItemChoiceBoxComponent$$OnDeserialize RVA 0x2112400 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02122400(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
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
  
  pcVar4 = (char *)(_UNK_02122560 + 0x2122418);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02122564 + 0x212242c));
    func_0x01384978(*(undefined4 *)(_UNK_02122568 + 0x2122438));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb391,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb391,0);
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
  func_0x021237d4(param_1,param_2,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  FUN_02122188(param_1);
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 100);
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 0x14);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    puVar6 = *(undefined4 **)(_UNK_0212256c + 0x2122508);
    func_0x0325992c(iVar3,uVar5,*puVar6);
    iVar3 = *(int *)(param_1 + 0x18);
    uVar5 = *(undefined4 *)(iVar1 + 0x14);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0325992c(iVar3,uVar5,*puVar6);
    iVar3 = *(int *)(param_1 + 0x1c);
    uVar5 = *(undefined4 *)(iVar1 + 0x18);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0325992c(iVar3,uVar5,*puVar6);
    *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(iVar1 + 0x10);
  }
  return;
}



// ===== FAT.Merge.ItemChoiceBoxComponent$$.ctor RVA 0x2112570 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02122570(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_02122614 + 0x2122584);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02122618 + 0x2122598));
    func_0x01384978(*(undefined4 *)(_UNK_0212261c + 0x21225a4));
    *pcVar3 = '\x01';
  }
  puVar4 = *(undefined4 **)(_UNK_02122620 + 0x21225b8);
  uVar1 = func_0x01384be4(*puVar4);
  puVar5 = *(undefined4 **)(_UNK_02122624 + 0x21225cc);
  func_0x03258eb8(uVar1,*puVar5);
  uVar2 = *puVar4;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x03258eb8(uVar1,*puVar5);
  uVar2 = *puVar4;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x03258eb8(uVar1,*puVar5);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined2 *)(param_1 + 0xc) = 0x101;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemChoiceBoxComponent$$<>iFixBaseProxy_OnPostAttach RVA 0x2112628 =====

void FUN_02122628(undefined4 param_1)

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



// ===== FAT.Merge.ItemChoiceBoxComponent$$<>iFixBaseProxy_OnSerialize RVA 0x2112630 =====

void FUN_02122630(undefined4 param_1,undefined4 param_2)

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



// ===== FAT.Merge.ItemChoiceBoxComponent$$<>iFixBaseProxy_OnDeserialize RVA 0x2112638 =====

void FUN_02122638(undefined4 param_1,undefined4 param_2)

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


