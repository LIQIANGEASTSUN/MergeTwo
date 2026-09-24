/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ItemSkillComponent$$get_param RVA 0x2114bc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02124bc4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5e48,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e48,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_022065c0 + 0x22064e0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022065c4 + 0x22064f4),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_022065c8 + 0x22065b0));
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x24);
}



// ===== FAT.Merge.ItemSkillComponent$$get_type RVA 0x211f4e4 =====

undefined4 FUN_0212f4e4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x1657,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1657,0);
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
  return *(undefined4 *)(iVar1 + 0x28);
}



// ===== FAT.Merge.ItemSkillComponent$$get_param2 RVA 0x2122544 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02132544(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5e4c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e4c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_022065c0 + 0x22064e0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022065c4 + 0x22064f4),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_022065c8 + 0x22065b0));
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x1c);
}



// ===== FAT.Merge.ItemSkillComponent$$get_param3 RVA 0x21225a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_021325a8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5e4d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e4d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_022065c0 + 0x22064e0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022065c4 + 0x22064f4),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_022065c8 + 0x22065b0));
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x20);
}



// ===== FAT.Merge.ItemSkillComponent$$get_descList RVA 0x212260c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0213260c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb3f2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3f2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0221b7a8 + 0x221b6c8);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0221b7ac + 0x221b6dc),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0221b7b0 + 0x221b798));
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x14);
}



// ===== FAT.Merge.ItemSkillComponent$$get_sandGlassSeconds RVA 0x2122670 =====

undefined4 FUN_02132670(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9e59,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e59,0);
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
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.Merge.ItemSkillComponent$$get_teslaActive RVA 0x21226c4 =====

undefined4 FUN_021326c4(int param_1)

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
  iVar1 = func_0x0229f06c(0x1656,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1656,0);
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
  iVar1 = FUN_0212f4e4(param_1);
  if ((iVar1 == 6) && (uVar3 = 0, 0 < *(int *)(param_1 + 0x14))) {
    uVar3 = 1;
  }
  return uVar3;
}



// ===== FAT.Merge.ItemSkillComponent$$get_teslaTotalLife RVA 0x212273c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0213273c(undefined4 param_1)

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
  
  pcVar7 = (char *)(_UNK_02132840 + 0x2132750);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02132844 + 0x2132764));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5e47,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e47,0);
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
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  piVar2 = (int *)FUN_02124bc4(param_1);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02132848 + 0x21327d8)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
        goto LAB_02132820;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02132848 + 0x21327d8),0);
LAB_02132820:
  iVar1 = (*(code *)*puVar3)(piVar2,0,puVar3[1]);
  return iVar1 * 1000;
}



// ===== FAT.Merge.ItemSkillComponent$$get_teslaLeftMilli RVA 0x212284c =====

int FUN_0213284c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5e46,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e46,0);
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
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  iVar1 = FUN_0213273c(param_1);
  return iVar1 - *(int *)(param_1 + 0x14);
}



// ===== FAT.Merge.ItemSkillComponent$$get_stackCount RVA 0x21228ac =====

undefined4 FUN_021328ac(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9e86,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e86,0);
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
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== FAT.Merge.ItemSkillComponent$$OnPostAttach RVA 0x2122900 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02132900(int param_1)

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
  
  pcVar7 = (char *)(_UNK_02132aac + 0x2132914);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02132ab0 + 0x2132928));
    func_0x01384978(*(undefined4 *)(_UNK_02132ab4 + 0x2132934));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb3f3,0);
  if (iVar1 == 0) {
    FUN_02127894(param_1);
    piVar2 = (int *)func_0x021566f4(0);
    iVar1 = FUN_02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar9 = FUN_0210e2d4(iVar1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_02132ab8 + 0x21329d8)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x110);
          goto LAB_02132a20;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02132ab8 + 0x21329d8),10);
LAB_02132a20:
    iVar1 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x2c);
    *(int *)(param_1 + 0x10) = iVar1;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0x28) == 8) {
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x24);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar9 = func_0x0364c9b8(iVar1,0,**(undefined4 **)(_UNK_02132abc + 0x2132a94));
      *(undefined4 *)(param_1 + 0x14) = uVar9;
    }
    iVar1 = func_0x0229f06c(0xb3f4,0);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x18) = 1;
      return;
    }
    iVar1 = func_0x0229f13c(0xb3f4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb3f3,0);
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



// ===== FAT.Merge.ItemSkillComponent$$_SetupStack RVA 0x2122ac0 =====

void FUN_02132ac0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb3f4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3f4,0);
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
  *(undefined4 *)(param_1 + 0x18) = 1;
  return;
}



// ===== FAT.Merge.ItemSkillComponent$$MaxStackNum RVA 0x2122b18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02132b18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 extraout_r2;
  undefined4 uVar4;
  int extraout_r3;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_02132be0 + 0x2132b2c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02132be4 + 0x2132b40));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e9f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e9f,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  iVar1 = func_0x02132bec(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar7 = **(undefined4 **)(_UNK_02132be8 + 0x2132bcc);
  if (*(int *)(iVar1 + 0xc) < 1) {
    func_0x02457d6c(*(undefined4 *)(iRam0364ca44 + 0x364ca10));
    uVar4 = func_0x02457d58();
    uVar2 = func_0x02457d6c(*(undefined4 *)(iRam0364ca48 + 0x364ca24));
    func_0x047901e8(uVar4,uVar2,0);
    func_0x02457d90(uVar4,uVar7);
    lVar8 = func_0x02457d94();
    uVar3 = (uint)((ulonglong)lVar8 >> 0x20);
    pcVar5 = (char *)(iRam0364cb28 + 0x364ca68);
    uStack_28 = uVar7;
    uStack_24 = uVar4;
    if (*pcVar5 == '\0') {
      func_0x02457d54(*(undefined4 *)(iRam0364cb2c + 0x364ca80));
      *pcVar5 = '\x01';
    }
    if ((-1 < lVar8) && ((int)uVar3 < *(int *)((int)lVar8 + 0xc))) {
      func_0x03031db0(extraout_r2,**(undefined4 **)(iRam0364cb30 + 0x364cab0),
                      *(undefined4 *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0x80));
      iVar1 = *(int *)((int)lVar8 + 8);
      if (iVar1 == 0) {
        func_0x02457d50();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar3) {
        func_0x02457d5c();
      }
      iVar1 = iVar1 + uVar3 * 4;
      *(undefined4 *)(iVar1 + 0x10) = extraout_r2;
      return iVar1;
    }
    func_0x02457d6c(*(undefined4 *)(iRam0364cb34 + 0x364caf4));
    uVar7 = func_0x02457d58();
    uVar4 = func_0x02457d6c(*(undefined4 *)(iRam0364cb38 + 0x364cb08));
    func_0x047901e8(uVar7,uVar4,0);
    func_0x02457d90(uVar7,extraout_r3);
    func_0x02457d94();
    return 0;
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x02457d50();
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    func_0x02457d5c();
  }
  return *(int *)(iVar1 + 0x10);
}



// ===== FAT.Merge.ItemSkillComponent$$CanStack RVA 0x2122bec =====

uint FUN_02132bec(int param_1)

{
  int iVar1;
  uint uVar2;
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
  
  iVar1 = func_0x0229f06c(0x9e5c,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x28);
    if (iVar1 == 3) {
      uVar2 = 1;
    }
    else {
      uVar2 = (uint)(iVar1 == 7);
    }
    return uVar2;
  }
  iVar1 = func_0x0229f13c(0x9e5c,0);
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
  uVar2 = func_0x0245496c(&uStack_30,0,0);
  return uVar2;
}



// ===== FAT.Merge.ItemSkillComponent$$StackBy RVA 0x2122c64 =====

int FUN_02132c64(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x9ea0,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02132b18(param_1);
    param_2 = *(int *)(param_1 + 0x18) + param_2;
    if (iVar1 < param_2) {
      *(int *)(param_1 + 0x18) = iVar1;
      iVar1 = param_2 - iVar1;
    }
    else {
      iVar1 = 0;
      *(int *)(param_1 + 0x18) = param_2;
    }
    return iVar1;
  }
  iVar1 = func_0x0229f13c(0x9ea0,0);
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
  func_0x01485238(&uStack_38,param_2,0);
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
  iVar1 = func_0x0245498c(&uStack_38,0,0);
  return iVar1;
}



// ===== FAT.Merge.ItemSkillComponent$$MultiplyBy RVA 0x2122ce0 =====

void FUN_02132ce0(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x7f8,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0x28) == 8) {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) * param_2;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x7f8,0);
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
  func_0x01485238(&uStack_38,param_2,0);
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



// ===== FAT.Merge.ItemSkillComponent$$OnSerialize RVA 0x2122d5c =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02132d5c(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_02132e4c + 0x2132d74);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02132e50 + 0x2132d88));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb3f5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3f5,0);
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
  FUN_02123514(param_1,param_2);
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02132e54 + 0x2132df0));
  func_0x0179f114(iVar1,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  *(int *)(param_2 + 0x40) = iVar1;
  if (iVar1 == 0) {
    func_0x01384bf0();
    iVar1 = *(int *)(param_2 + 0x40);
    uRam0000000c = uVar5;
    if (iVar1 == 0) {
      func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(undefined4 *)(iVar1 + 0xc) = uVar5;
  }
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// ===== FAT.Merge.ItemSkillComponent$$OnDeserialize RVA 0x2122e58 =====

void FUN_02132e58(int param_1,int param_2)

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
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xb3f6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3f6,0);
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
  FUN_021237d4(param_1,param_2);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x40);
  if (iVar1 == 0) {
    return;
  }
  iVar3 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 0xc);
  *(int *)(param_1 + 0x18) = iVar3;
  if (0 < iVar3) {
    return;
  }
  iVar1 = func_0x0229f06c(0xb3f4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3f4,0);
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
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2);
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 1;
  return;
}



// ===== FAT.Merge.ItemSkillComponent$$Validate RVA 0x2122ef8 =====

undefined4 FUN_02132ef8(int param_1)

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
  iVar1 = func_0x0229f06c(0xb3b1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3b1,0);
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
  if ((param_1 != 0) && (uVar3 = 0, *(int *)(param_1 + 0x2c) != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}



// ===== FAT.Merge.ItemSkillComponent$$ProcessDesc RVA 0x2122f64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02132f64(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int iStack_1c;
  
  pcVar6 = (char *)(_UNK_02133188 + 0x2132f84);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213318c + 0x2132f98));
    func_0x01384978(*(undefined4 *)(_UNK_02133190 + 0x2132fa4));
    *pcVar6 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x9731,0);
  if (iVar1 == 0) {
    switch(param_2) {
    case 3:
    case 7:
      goto code_r0x0213317c;
    case 4:
    case 8:
      if (param_3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *param_3;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(&UNK_02133050 + _UNK_02133194)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto code_r0x021330f0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(param_3,**(int **)(&UNK_02133050 + _UNK_02133194),0);
code_r0x021330f0:
      uVar4 = (*(code *)*puVar2)(param_3,0,puVar2[1]);
      iVar1 = (int)(((ulonglong)uVar4 << 0x20) + (longlong)(int)uVar4 * -0x6e5d4c3b >> 0x20);
      iStack_1c = (iVar1 >> 0xb) - (iVar1 >> 0x1f);
      break;
    default:
      if (param_3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *param_3;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_02133198 + 0x21330a8)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_02133128;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(param_3,**(int **)(_UNK_02133198 + 0x21330a8),0);
LAB_02133128:
      iStack_1c = (*(code *)*puVar2)(param_3,0,puVar2[1]);
    }
    uVar3 = func_0x014867c8(&iStack_1c,0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    param_1 = func_0x024517f0(param_1,**(undefined4 **)(_UNK_0213319c + 0x2133170),uVar3,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x9731,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = func_0x022763c4(iVar1,param_1,param_2,param_3,0);
  }
code_r0x0213317c:
  return param_1;
}



// ===== FAT.Merge.ItemSkillComponent$$IsNeedTarget RVA 0x21231a0 =====

undefined4 FUN_021331a0(undefined4 param_1)

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
  iVar1 = func_0x0229f06c(0x9e37,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e37,0);
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
  iVar1 = FUN_0212f4e4(param_1);
  if (iVar1 != 4) {
    iVar1 = FUN_0212f4e4(param_1);
    uVar3 = 0;
    if (iVar1 != 6) {
      uVar3 = 1;
    }
  }
  return uVar3;
}



// ===== FAT.Merge.ItemSkillComponent$$OnPostMerge RVA 0x2123218 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02133218(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iStack_20;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_02133394 + 0x2133238);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02133398 + 0x213324c));
    *pcVar4 = '\x01';
  }
  iStack_1c = 0;
  iStack_20 = 0;
  iVar1 = func_0x0229f06c(0xb3f7,0);
  if (iVar1 == 0) {
    FUN_02125ffc(param_1,param_2,param_3);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    puVar5 = *(undefined4 **)(_UNK_0213339c + 0x21332e4);
    iVar1 = func_0x02feb690(param_2,&iStack_1c,0,*puVar5);
    if (iVar1 != 0) {
      if (param_3 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02feb690(param_3,&iStack_20,0,*puVar5);
      iVar1 = iStack_1c;
      if (iVar2 != 0) {
        if (iStack_1c == 0) {
          func_0x01384bf0();
        }
        iVar2 = FUN_0212f4e4(iVar1);
        iVar1 = iStack_20;
        if (iVar2 == 8) {
          if (iStack_20 == 0) {
            func_0x01384bf0();
          }
          iVar2 = FUN_0212f4e4(iVar1);
          iVar1 = iStack_1c;
          if (iVar2 == 8) {
            if (iStack_1c == 0) {
              func_0x01384bf0();
            }
            iVar2 = iStack_20;
            iVar1 = *(int *)(iVar1 + 0x14);
            if (iStack_20 == 0) {
              func_0x01384bf0();
            }
            uVar3 = *(int *)(iVar2 + 0x14) + iVar1;
            *(uint *)(param_1 + 0x14) = uVar3 & ~((int)uVar3 >> 0x1f);
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb3f7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.ItemSkillComponent$$CanUseForTarget RVA 0x21233a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_021333a0(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  char cVar9;
  char *pcVar10;
  undefined8 uVar11;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  pcVar10 = (char *)(_UNK_02133c0c + 0x21333c0);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02133c10 + 0x21333d4));
    func_0x01384978(*(undefined4 *)(_UNK_02133c14 + 0x21333e0));
    func_0x01384978(*(undefined4 *)(_UNK_02133c18 + 0x21333ec));
    func_0x01384978(*(undefined4 *)(_UNK_02133c1c + 0x21333f8));
    *pcVar10 = '\x01';
  }
  iStack_24 = 0;
  iStack_28 = 0;
  iStack_2c = 0;
  uStack_30 = 0;
  iStack_34 = 0;
  iStack_38 = 0;
  iStack_3c = 0;
  iVar1 = func_0x0229f06c(0x9e57,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e57,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02287cd0(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  *param_3 = 0;
  param_3[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_3[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_3[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar1 = FUN_0211015c(0,0);
    if (iVar1 != 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = FUN_0210cd28(0,0);
    if (iVar1 == 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = FUN_02116a8c(0,0);
    if (iVar1 != 0) {
      return 0;
    }
    func_0x01384bf0();
  }
  else {
    iVar1 = FUN_0211015c(param_2,0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_0210cd28(param_2,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_02116a8c(param_2,0);
    if (iVar1 != 0) {
      return 0;
    }
  }
  iVar1 = FUN_02116b64(param_2,0);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = func_0x02168930(param_2,0);
  if (iVar1 != 0) {
    return 0;
  }
  uVar3 = FUN_02123568(param_1);
  iVar1 = func_0x02164a44(uVar3,param_2,0);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = FUN_0212f4e4(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar2 = FUN_02116a38(param_2,0);
  if (iVar1 == 5) {
    return uVar2;
  }
  if ((uVar2 != 0) && (iVar1 = FUN_0212f4e4(param_1), iVar1 != 7)) {
    return 0;
  }
  uVar3 = FUN_0212f4e4(param_1);
  uVar2 = 0;
  switch(uVar3) {
  case 1:
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar6 = func_0x02feb690(param_2,&iStack_24,0,**(undefined4 **)(&UNK_0213363c + _UNK_02133c20));
    iVar1 = iStack_24;
    if (iVar6 != 0) {
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      uVar2 = FUN_02122810(iVar1);
      uVar2 = uVar2 ^ 1;
    }
    break;
  case 2:
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_0210e250(param_2,2,0,0);
    break;
  case 3:
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_02116ae0(param_2,0);
    if (iVar1 == 0) {
      return 0;
    }
    piVar4 = (int *)func_0x021566f4(0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = FUN_0210e2d4(param_2,0);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar4;
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(&UNK_021336f8 + _UNK_02133c24)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x108);
          goto code_r0x02133ba4;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(&UNK_021336f8 + _UNK_02133c24),9);
code_r0x02133ba4:
    iVar1 = (*(code *)*puVar5)(piVar4,uVar3,puVar5[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    cVar9 = *(char *)(iVar1 + 0x3c);
    goto code_r0x02133bcc;
  case 7:
    piVar4 = (int *)func_0x021566f4(0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = FUN_0210e2d4(param_2,0);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar4;
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(&UNK_02133778 + _UNK_02133c28)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x108);
          goto code_r0x02133b6c;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(&UNK_02133778 + _UNK_02133c28),9);
code_r0x02133b6c:
    iVar1 = (*(code *)*puVar5)(piVar4,uVar3,puVar5[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    cVar9 = *(char *)(iVar1 + 0x40);
    goto code_r0x02133bcc;
  case 8:
    if (param_2 == 0) {
      func_0x01384bf0();
      iVar1 = FUN_02116ae0(0,0);
      if (iVar1 == 0) {
        return 0;
      }
      func_0x01384bf0();
      iVar1 = FUN_0210e250(0,6,0,0);
      if (iVar1 != 0) {
        return 0;
      }
      iStack_2c = 0;
      uStack_30 = 0;
      func_0x01384bf0();
    }
    else {
      iVar1 = FUN_02116ae0(param_2,0);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_0210e250(param_2,6,0,0);
      if (iVar1 != 0) {
        return 0;
      }
      iStack_2c = 0;
      uStack_30 = 0;
    }
    iVar6 = func_0x02feb690(param_2,&iStack_34,0,**(undefined4 **)(&UNK_021338cc + _UNK_02133c30));
    iVar1 = iStack_34;
    if (iVar6 != 0) {
      if (iStack_34 == 0) {
        func_0x01384bf0();
      }
      iVar6 = FUN_02122f9c(iVar1);
      iVar1 = iStack_34;
      if (iVar6 < 1) {
        if (iStack_34 == 0) {
          func_0x01384bf0();
        }
        iVar6 = FUN_02122cc0(iVar1);
        iVar1 = iStack_34;
        if (iVar6 != 0) {
          if (iStack_34 == 0) {
            func_0x01384bf0();
          }
          iVar1 = FUN_02123058(iVar1);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar6 = iStack_34;
          iVar1 = *(int *)(iVar1 + 0x44);
          if (iStack_34 == 0) {
            func_0x01384bf0();
          }
          iVar6 = FUN_02122c6c(iVar6);
          iVar6 = iVar1 * 1000 - iVar6;
          func_0x02133c3c(param_1,&uStack_30,iVar6,iVar6 >> 0x1f);
        }
        iVar1 = iStack_34;
        if (iStack_34 == 0) {
          func_0x01384bf0();
        }
        iVar6 = FUN_02122da4(iVar1);
        iVar1 = iStack_34;
        if (iVar6 != 0) {
          if (iStack_34 == 0) {
            func_0x01384bf0();
          }
          iVar6 = FUN_02122e38(iVar1);
          iVar1 = iStack_34;
          if (iStack_34 == 0) {
            func_0x01384bf0();
          }
          iVar1 = FUN_02123004(iVar1);
          func_0x02133c3c(param_1,&uStack_30,iVar6 - iVar1,iVar6 - iVar1 >> 0x1f);
        }
      }
    }
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x02feb690(param_2,&iStack_38,0,**(undefined4 **)(&UNK_02133a04 + _UNK_02133c34));
    iVar1 = iStack_38;
    if (iVar6 != 0) {
      if (iStack_38 == 0) {
        func_0x01384bf0();
      }
      iVar6 = FUN_0211bf58(iVar1,0);
      iVar1 = iStack_38;
      if (iVar6 != 0) {
        if (iStack_38 == 0) {
          func_0x01384bf0();
        }
        uVar11 = FUN_0211bfcc(iVar1,0);
        iVar1 = iStack_38;
        if (iStack_38 == 0) {
          func_0x01384bf0();
        }
        uVar2 = FUN_0211be60(iVar1,0);
        func_0x02133c3c(param_1,&uStack_30,(uint)uVar11 - uVar2,
                        (int)((ulonglong)uVar11 >> 0x20) -
                        (((int)uVar2 >> 0x1f) + (uint)((uint)uVar11 < uVar2)));
      }
    }
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x02feb690(param_2,&iStack_3c,0,**(undefined4 **)(&UNK_02133aac + _UNK_02133c38));
    iVar1 = iStack_3c;
    if (iVar6 != 0) {
      if (iStack_3c == 0) {
        func_0x01384bf0();
      }
      iVar6 = FUN_0211f8ec(iVar1,0);
      iVar1 = iStack_3c;
      if (iVar6 != 0) {
        if (iStack_3c == 0) {
          func_0x01384bf0();
        }
        iVar1 = FUN_0211fa9c(iVar1,0);
        func_0x02133c3c(param_1,&uStack_30,iVar1,iVar1 >> 0x1f);
        *param_3 = 1;
      }
    }
    iVar1 = iStack_2c;
    uVar2 = uStack_30;
    if (iStack_2c < 0) {
      uStack_30 = 0;
      iStack_2c = 0;
    }
    else {
      iVar6 = FUN_02132670(param_1);
      uVar7 = iVar6 * 1000;
      iVar6 = (int)uVar7 >> 0x1f;
      if ((int)(iVar6 - (iVar1 + (uint)(uVar7 < uVar2))) < 0 !=
          (SBORROW4(iVar6,iVar1) != SBORROW4(iVar6 - iVar1,(uint)(uVar7 < uVar2)))) {
        iVar1 = FUN_02132670(param_1,uVar7 - uVar2);
        uStack_30 = iVar1 * 1000;
        iStack_2c = (int)uStack_30 >> 0x1f;
      }
    }
    param_3[2] = uStack_30;
    param_3[3] = iStack_2c;
    uVar2 = (uint)((int)-(iStack_2c + (uint)(uStack_30 != 0)) < 0 !=
                  (SBORROW4(0,iStack_2c) != SBORROW4(-iStack_2c,(uint)(uStack_30 != 0))));
    break;
  case 9:
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x02feb690(param_2,&iStack_28,0,**(undefined4 **)(&UNK_02133828 + _UNK_02133c2c));
    iVar1 = iStack_28;
    if (iVar6 == 0) {
      return 0;
    }
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_02123058(iVar1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    cVar9 = *(char *)(iVar1 + 0x2d);
code_r0x02133bcc:
    uVar2 = (uint)(cVar9 != '\0');
  }
  return uVar2;
}



// ===== FAT.Merge.ItemSkillComponent$$_SelectMinAndPositive RVA 0x2123c3c =====

void FUN_02133c3c(undefined4 param_1,uint *param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = func_0x0229f06c(0x9e58,0);
  if (iVar1 == 0) {
    if ((int)(uint)(param_3 == 0) <= (int)param_4) {
      uVar2 = *param_2;
      uVar3 = param_2[1];
      if (((int)(param_4 - (uVar3 + (param_3 < uVar2))) < 0 !=
           (SBORROW4(param_4,uVar3) != SBORROW4(param_4 - uVar3,(uint)(param_3 < uVar2)))) ||
         ((int)-(uVar3 + (uVar2 != 0)) < 0 ==
          (SBORROW4(0,uVar3) != SBORROW4(-uVar3,(uint)(uVar2 != 0))))) {
        *param_2 = param_3;
        param_2[1] = param_4;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e58,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02287bb8(iVar1,param_1,param_2);
  }
  return;
}



// ===== FAT.Merge.ItemSkillComponent$$StackToTarget RVA 0x2123cdc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02133cdc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar7 = (char *)(_UNK_02134080 + 0x2133cf8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02134084 + 0x2133d0c));
    func_0x01384978(*(undefined4 *)(_UNK_02134088 + 0x2133d18));
    func_0x01384978(*(undefined4 *)(_UNK_0213408c + 0x2133d24));
    func_0x01384978(*(undefined4 *)(_UNK_02134090 + 0x2133d30));
    func_0x01384978(*(undefined4 *)(_UNK_02134094 + 0x2133d3c));
    *pcVar7 = '\x01';
  }
  uVar8 = 0;
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x9e9e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e9e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x021734d8(iVar1,param_1,param_2,0);
    return uVar8;
  }
  uVar2 = FUN_0212f4e4(param_1);
  if ((uVar2 | 4) == 7) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02feb690(param_2,&iStack_1c,0,**(undefined4 **)(_UNK_02134098 + 0x2133dcc));
    if ((iStack_1c == 0 || iVar1 == 0) || (iVar4 = FUN_02132bec(), iVar1 = iStack_1c, iVar4 == 0)) {
      piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0213409c + 0x2133df8),2);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = FUN_0210e2d4(param_2,0);
      puVar9 = *(undefined4 **)(_UNK_021340a0 + 0x2133e28);
      iVar1 = func_0x01384abc(*puVar9,&uStack_20);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar1 != 0) &&
         (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)) {
        uVar5 = func_0x01384c10();
        func_0x01384aa0(uVar5,0);
      }
      if (piVar3[3] == 0) {
        func_0x01384bf4();
      }
      piVar3[4] = iVar1;
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uStack_24 = FUN_0210e5f4(param_2,0);
      iVar1 = func_0x01384abc(*puVar9,&uStack_24);
      if ((iVar1 != 0) &&
         (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)) {
        uVar5 = func_0x01384c10();
        func_0x01384aa0(uVar5,0);
      }
      if ((uint)piVar3[3] < 2) {
        func_0x01384bf4();
      }
      piVar3[5] = iVar1;
      if (*(int *)(**(int **)(_UNK_021340a4 + 0x2133f00) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2f28(**(undefined4 **)(_UNK_021340a8 + 0x2133f28),piVar3,0);
      return 0;
    }
    if (iStack_1c == 0) {
      func_0x01384bf0();
    }
    iVar4 = FUN_021328ac(iVar1);
    iVar1 = iStack_1c;
    if (iStack_1c == 0) {
      func_0x01384bf0();
    }
    iVar6 = FUN_02132b18(iVar1);
    iVar1 = iStack_1c;
    if (iVar6 <= iVar4) {
      return 0;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x18);
    if (iStack_1c == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_02132c64(iVar1,uVar5);
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar1 < 1) {
      iVar1 = FUN_02123568(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_0210cd28(iVar1,0);
      uVar5 = FUN_02123568(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_020dd560(iVar1,uVar5,4,0);
      uVar8 = 1;
      uVar2 = 1;
    }
    else {
      uVar2 = 1;
      uVar8 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  if ((uVar8 & uVar2) != 0) {
    iVar1 = FUN_02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_0210cd28(iVar1,0);
    uVar5 = FUN_02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_020dd560(iVar1,uVar5,4,0);
  }
  return uVar2;
}



// ===== FAT.Merge.ItemSkillComponent$$Use RVA 0x21240ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_021340ac(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
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
  
  pcVar6 = (char *)(_UNK_02134538 + 0x21340c4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213453c + 0x21340d8));
    func_0x01384978(*(undefined4 *)(_UNK_02134540 + 0x21340e4));
    func_0x01384978(*(undefined4 *)(_UNK_02134544 + 0x21340f0));
    func_0x01384978(*(undefined4 *)(_UNK_02134548 + 0x21340fc));
    func_0x01384978(*(undefined4 *)(_UNK_0213454c + 0x2134108));
    *pcVar6 = '\x01';
  }
  uVar10 = 0;
  iVar1 = func_0x0229f06c(0x9e38,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e38,0);
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
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar5,0,0);
    uVar10 = func_0x0245496c(&uStack_30,0,0);
    return uVar10;
  }
  iVar1 = FUN_0212f4e4(param_1);
  if (iVar1 == 6) {
    iVar1 = FUN_021326c4(param_1);
    uVar10 = 0;
    uVar8 = 0;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x14) = 1;
      iVar1 = FUN_02123568(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar10 = 0;
      iVar1 = FUN_02116f08(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02139cf4(iVar1,0);
      uVar8 = 1;
      if (iVar1 != 0) {
        uVar9 = FUN_02123568(param_1);
        uVar10 = 0;
        FUN_020ec3b4(iVar1,uVar9,0);
      }
    }
  }
  else {
    uVar8 = 0;
    if (iVar1 == 4) {
      iVar1 = FUN_02123568(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_02116f08(iVar1,0);
      if (iVar1 == 0) {
        piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02134550 + 0x21342d4),2);
        iVar1 = FUN_02123568(param_1);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_1c = FUN_0210e5f4(iVar1,0);
        puVar3 = *(undefined4 **)(_UNK_02134554 + 0x2134310);
        iVar1 = func_0x01384abc(*puVar3,&uStack_1c);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar1 != 0) &&
           (iVar7 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar7 == 0)) {
          uVar9 = func_0x01384c10();
          func_0x01384aa0(uVar9,0);
        }
        if (piVar2[3] == 0) {
          func_0x01384bf4();
        }
        piVar2[4] = iVar1;
        iVar1 = FUN_02123568(param_1);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = FUN_0210e2d4(iVar1,0);
        iVar1 = func_0x01384abc(*puVar3,&uStack_20);
        if ((iVar1 != 0) &&
           (iVar7 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar7 == 0)) {
          uVar9 = func_0x01384c10();
          func_0x01384aa0(uVar9,0);
        }
        if ((uint)piVar2[3] < 2) {
          func_0x01384bf4();
        }
        piVar2[5] = iVar1;
        if (*(int *)(**(int **)(_UNK_02134558 + 0x21343f4) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c23bc(**(undefined4 **)(_UNK_0213455c + 0x213441c),piVar2,0);
        return 0;
      }
      iVar1 = FUN_02123568(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_02116f08(iVar1,0);
      piVar2 = (int *)FUN_02124bc4(param_1);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar7 = *piVar2;
      uVar10 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar10 != 0) {
        piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_02134560 + 0x21341f4)) {
            puVar3 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xc0);
            goto LAB_02134430;
          }
          uVar10 = uVar10 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02134560 + 0x21341f4),0);
LAB_02134430:
      uVar9 = (*(code *)*puVar3)(piVar2,0,puVar3[1]);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02148f90(iVar1,uVar9,0);
      iVar1 = FUN_02123568(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_02116f08(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02139cf4(iVar1,0);
      if (iVar1 != 0) {
        uVar9 = FUN_02123568(param_1);
        FUN_020eaecc(iVar1,uVar9,0);
      }
      uVar10 = 1;
      uVar8 = 1;
    }
  }
  if ((uVar10 & uVar8) != 0) {
    iVar1 = FUN_02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_0210cd28(iVar1,0);
    uVar9 = FUN_02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_020dd560(iVar1,uVar9,4,0);
  }
  return uVar8;
}



// ===== FAT.Merge.ItemSkillComponent$$UseForTarget RVA 0x2124564 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02134564(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar10 = (char *)(_UNK_02135014 + 0x2134580);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02135018 + 0x2134594));
    func_0x01384978(*(undefined4 *)(_UNK_0213501c + 0x21345a0));
    func_0x01384978(*(undefined4 *)(_UNK_02135020 + 0x21345ac));
    func_0x01384978(*(undefined4 *)(_UNK_02135024 + 0x21345b8));
    func_0x01384978(*(undefined4 *)(_UNK_02135028 + 0x21345c4));
    func_0x01384978(*(undefined4 *)(_UNK_0213502c + 0x21345d0));
    *pcVar10 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar11 = 0;
  iStack_28 = 0;
  iStack_40 = 0;
  iStack_2c = 0;
  iStack_30 = 0;
  iVar2 = func_0x0229f06c(0x9e81,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9e81,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar11 = func_0x021734d8(iVar2,param_1,param_2,0);
    return uVar11;
  }
  uVar3 = FUN_0212f4e4(param_1);
  uVar13 = 1;
  switch(uVar3) {
  case 1:
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar11 = 0;
    iVar5 = func_0x02feb690(param_2,&iStack_28,0,**(undefined4 **)(&UNK_021346ac + _UNK_02135030));
    iVar2 = iStack_28;
    if (iVar5 == 0) goto LAB_02134f54;
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    iVar5 = FUN_02122810(iVar2);
    iVar2 = iStack_28;
    if (iVar5 != 0) goto LAB_02134f54;
    piVar6 = (int *)FUN_02124bc4(param_1);
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar5 = *piVar6;
    uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(&UNK_02134708 + _UNK_02135034)) {
          puVar7 = (undefined4 *)(iVar5 + *piVar9 * 8 + 0xc0);
          goto code_r0x02134f1c;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_02134708 + _UNK_02135034),0);
code_r0x02134f1c:
    uVar3 = (*(code *)*puVar7)(piVar6,0,puVar7[1]);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    FUN_02124c28(iVar2,uVar3);
    break;
  case 2:
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar11 = 0;
    iVar5 = func_0x02feb690(param_2,&iStack_2c,0,**(undefined4 **)(&UNK_02134768 + _UNK_02135038));
    iVar2 = iStack_2c;
    if (iVar5 == 0) goto LAB_02134f54;
    piVar6 = (int *)FUN_02124bc4(param_1);
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar5 = *piVar6;
    uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(&UNK_021347a4 + _UNK_0213503c)) {
          puVar7 = (undefined4 *)(iVar5 + *piVar9 * 8 + 0xc0);
          goto code_r0x02134e9c;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_021347a4 + _UNK_0213503c),0);
code_r0x02134e9c:
    uVar3 = (*(code *)*puVar7)(piVar6,0,puVar7[1]);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    FUN_0212532c(iVar2,uVar3);
    break;
  case 3:
    piVar6 = (int *)func_0x021566f4(0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = FUN_0210e2d4(param_2,0);
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar6;
    uVar11 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(&UNK_02134824 + _UNK_02135040)) {
          puVar7 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0x118);
          goto code_r0x02134a78;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_02134824 + _UNK_02135040),0xb);
code_r0x02134a78:
    iVar2 = (*(code *)*puVar7)(piVar6,uVar3,puVar7[1]);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar2 + 0x44);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar11 = 0;
    uVar3 = FUN_0210e2d4(param_2,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x0364c54c(iVar5,uVar3,**(undefined4 **)(&UNK_02134adc + _UNK_02135044));
    if (iVar5 < 1) goto LAB_02134f54;
    iVar2 = *(int *)(iVar2 + 0x44);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0364c9b8(iVar2,iVar5 + -1,**(undefined4 **)(&UNK_02134b10 + _UNK_02135048));
    iVar2 = *(int *)(param_1 + 0x18) + -1;
    *(int *)(param_1 + 0x18) = iVar2;
    if (iVar2 < 1) {
      iVar2 = FUN_02123568(param_1);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = FUN_0210cd28(iVar2,0);
      uVar8 = FUN_02123568(param_1);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      FUN_020dd560(iVar2,uVar8,4,0);
    }
    if (param_2 == 0) {
      func_0x01384bf0();
      iVar2 = FUN_0210cd28(0,0);
      func_0x01384bf0();
    }
    else {
      iVar2 = FUN_0210cd28(param_2,0);
    }
    FUN_0210cd7c(&uStack_48,param_2,0);
    iVar5 = FUN_02123568(param_1);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = FUN_0210cd28(iVar5,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    FUN_020dd560(iVar5,param_2,4,0);
    uVar8 = FUN_020d80e4(9,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar8 = FUN_020ded9c(iVar2,uVar3,uVar8,uStack_48,uStack_44,0,0,0);
    iVar5 = FUN_020d8024(uVar8,9,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar13 = 0;
    goto code_r0x02134e54;
  default:
    goto LAB_02134f54;
  case 5:
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = FUN_0210cd28(param_2,0);
    if (iVar2 != 0) {
      FUN_020eb26c(iVar2,param_2,0);
    }
    break;
  case 7:
    piVar6 = (int *)func_0x021566f4(0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = FUN_0210e2d4(param_2,0);
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar6;
    uVar11 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(&UNK_021348d4 + _UNK_02135054)) {
          puVar7 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0x118);
          goto code_r0x02134bac;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_021348d4 + _UNK_02135054),0xb);
code_r0x02134bac:
    iVar2 = (*(code *)*puVar7)(piVar6,uVar3,puVar7[1]);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar2 + 0x44);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = FUN_0210e2d4(param_2,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x0364c54c(iVar5,uVar3,**(undefined4 **)(&UNK_02134c0c + _UNK_02135058));
    iVar4 = *(int *)(iVar2 + 0x44);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar11 = 0;
    if (*(int *)(iVar4 + 0xc) + -1 <= iVar5) goto LAB_02134f54;
    iVar2 = *(int *)(iVar2 + 0x44);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0364c9b8(iVar2,iVar5 + 1,**(undefined4 **)(&UNK_02134c5c + _UNK_0213505c));
    iVar2 = *(int *)(param_1 + 0x18) + -1;
    *(int *)(param_1 + 0x18) = iVar2;
    uVar13 = (uint)(iVar2 < 1);
    if (param_2 == 0) {
      func_0x01384bf0();
      iVar2 = FUN_0210cd28(0,0);
      func_0x01384bf0();
    }
    else {
      iVar2 = FUN_0210cd28(param_2,0);
    }
    FUN_0210cd7c(&uStack_48,param_2,0);
    iVar5 = FUN_02123568(param_1);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = FUN_0210cd28(iVar5,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    FUN_020dd560(iVar5,param_2,4,0);
    iVar5 = FUN_020d80e4(0xc,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar5 + 0xc) = param_2;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
code_r0x02134e54:
    FUN_020ded9c(iVar2,uVar3,iVar5,uStack_48,uStack_44,0,0,0);
    goto code_r0x02134f50;
  case 8:
    iVar4 = FUN_021333a0(param_1,param_2,&iStack_40);
    iVar5 = iStack_34;
    uVar12 = uStack_38;
    iVar2 = iStack_40;
    if (iVar4 != 0) {
      lVar1 = (longlong)*(int *)(param_1 + 0x14) * 1000;
      uVar11 = (uint)lVar1;
      uVar11 = func_0x01458584(uVar11 - uStack_38,
                               (int)((ulonglong)lVar1 >> 0x20) -
                               (iStack_34 + (uint)(uVar11 < uStack_38)),1000,0);
      *(uint *)(param_1 + 0x14) = uVar11 & ~((int)uVar11 >> 0x1f);
      if (iVar2 == 1) {
        if ((int)-(iVar5 + (uint)(0x3ffffffe < uVar12)) < 0 !=
            (SBORROW4(0,iVar5) != SBORROW4(-iVar5,(uint)(0x3ffffffe < uVar12)))) {
          uVar12 = 0x3fffffff;
        }
        if (param_2 == 0) {
          func_0x01384bf0();
          FUN_0211a5d0(0,uVar12,0);
          func_0x01384bf0();
        }
        else {
          FUN_0211a5d0(param_2,uVar12,0);
        }
        iVar2 = FUN_0210cd28(param_2,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        FUN_020eda20(iVar2,uVar12,0);
      }
      else if (iVar2 == 0) {
        if ((int)-(iVar5 + (uint)(0x3ffffffe < uVar12)) < 0 !=
            (SBORROW4(0,iVar5) != SBORROW4(-iVar5,(uint)(0x3ffffffe < uVar12)))) {
          uVar12 = 0x3fffffff;
        }
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        FUN_0211a5d0(param_2,uVar12,0);
      }
      func_0x02135060(param_1);
      uVar11 = 1;
      uVar13 = 0;
    }
    goto LAB_02134f54;
  case 9:
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar11 = 0;
    iVar5 = func_0x02feb690(param_2,&iStack_30,0,**(undefined4 **)(&UNK_021349c0 + _UNK_0213504c));
    iVar2 = iStack_30;
    if (iVar5 == 0) goto LAB_02134f54;
    if (iStack_30 == 0) {
      func_0x01384bf0();
    }
    iVar2 = FUN_02123058(iVar2);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar5 = iStack_30;
    if (*(char *)(iVar2 + 0x2d) == '\0') goto LAB_02134f54;
    piVar6 = (int *)FUN_02132544(param_1);
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar6;
    uVar11 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(&UNK_02134a30 + _UNK_02135050)) {
          puVar7 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
          goto code_r0x02134edc;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_02134a30 + _UNK_02135050),0);
code_r0x02134edc:
    uVar3 = (*(code *)*puVar7)(piVar6,0,puVar7[1]);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    FUN_02123b38(iVar5,uVar3);
  }
  uVar13 = 1;
code_r0x02134f50:
  uVar11 = 1;
LAB_02134f54:
  if ((uVar13 & uVar11) != 0) {
    iVar2 = FUN_02123568(param_1);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = FUN_0210cd28(iVar2,0);
    uVar3 = FUN_02123568(param_1);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    FUN_020dd560(iVar2,uVar3,4,0);
  }
  return uVar11;
}



// ===== FAT.Merge.ItemSkillComponent$$_CheckDead RVA 0x2125060 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02135060(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
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
  undefined4 auStack_1c [3];
  
  iVar2 = func_0x0229f06c(0x9e85,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9e85,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    iVar2 = func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3,0,0);
    return iVar2;
  }
  iVar2 = FUN_0212f4e4(param_1);
  if (iVar2 == 8) {
    if (0 < *(int *)(param_1 + 0x14)) {
      return *(int *)(param_1 + 0x14);
    }
  }
  else if ((iVar2 != 6) ||
          (iVar4 = *(int *)(param_1 + 0x14), iVar2 = FUN_0213273c(param_1), iVar4 < iVar2)) {
    return iVar2;
  }
  iVar2 = FUN_02123568(param_1);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = FUN_0210cd28(iVar2,0);
  iVar4 = FUN_02123568(param_1);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_020dd720 + 0x20dd580);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dd724 + 0x20dd594),iVar4,4,0);
    func_0x01384978(*(undefined4 *)(_UNK_020dd728 + 0x20dd5a0));
    func_0x01384978(*(undefined4 *)(_UNK_020dd72c + 0x20dd5ac));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x248,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x248,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    iVar2 = func_0x021808e8(iVar1,iVar2,iVar4,4);
    return iVar2;
  }
  if (iVar4 == 0) {
    func_0x01384bf0();
    iVar1 = FUN_0210cd28(0,0);
    if (iVar1 == iVar2) goto LAB_020dd6e8;
    func_0x01384bf0();
  }
  else {
    iVar1 = FUN_0210cd28(iVar4,0);
    if (iVar1 == iVar2) {
LAB_020dd6e8:
      FUN_020dd73c(iVar2,iVar4,1,4);
      FUN_020dd8f4(iVar2,iVar4,iVar4,4);
      return 1;
    }
  }
  auStack_1c[0] = FUN_0210e5f4(iVar4,0);
  puVar5 = *(undefined4 **)(_UNK_020dd730 + 0x20dd65c);
  uVar6 = func_0x01384abc(*puVar5,auStack_1c);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = FUN_0210e2d4(iVar4,0);
  uVar3 = func_0x01384abc(*puVar5,&uStack_20);
  uVar6 = func_0x0244f690(**(undefined4 **)(_UNK_020dd734 + 0x20dd6b4),uVar6,uVar3,0);
  if (*(int *)(**(int **)(_UNK_020dd738 + 0x20dd6c8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2874(uVar6,0);
  return 0;
}



// ===== FAT.Merge.ItemSkillComponent$$OnUpdate RVA 0x2125140 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02135140(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
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
  undefined4 auStack_1c [2];
  
  iVar2 = func_0x0229f06c(0xb3f8,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xb3f8,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    iVar2 = func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
    return iVar2;
  }
  FUN_02126b58(param_1,param_2);
  iVar2 = FUN_02123568(param_1);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = FUN_0210cd28(iVar2,0);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_0212f4e4(param_1);
  if ((iVar2 == 6) && (iVar2 = FUN_021326c4(param_1), iVar2 != 0)) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2;
  }
  iVar2 = func_0x0229f06c(0x9e85,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9e85,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    iVar2 = func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3);
    return iVar2;
  }
  iVar2 = FUN_0212f4e4(param_1);
  if (iVar2 == 8) {
    if (0 < *(int *)(param_1 + 0x14)) {
      return *(int *)(param_1 + 0x14);
    }
  }
  else if ((iVar2 != 6) ||
          (iVar4 = *(int *)(param_1 + 0x14), iVar2 = FUN_0213273c(param_1), iVar4 < iVar2)) {
    return iVar2;
  }
  iVar2 = FUN_02123568(param_1);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = FUN_0210cd28(iVar2,0);
  iVar4 = FUN_02123568(param_1);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_020dd720 + 0x20dd580);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dd724 + 0x20dd594),iVar4,4,0);
    func_0x01384978(*(undefined4 *)(_UNK_020dd728 + 0x20dd5a0));
    func_0x01384978(*(undefined4 *)(_UNK_020dd72c + 0x20dd5ac));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x248,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x248,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    iVar2 = func_0x021808e8(iVar1,iVar2,iVar4,4);
    return iVar2;
  }
  if (iVar4 == 0) {
    func_0x01384bf0();
    iVar1 = FUN_0210cd28(0,0);
    if (iVar1 != iVar2) {
      func_0x01384bf0();
      goto LAB_020dd640;
    }
  }
  else {
    iVar1 = FUN_0210cd28(iVar4,0);
    if (iVar1 != iVar2) {
LAB_020dd640:
      auStack_1c[0] = FUN_0210e5f4(iVar4,0);
      puVar5 = *(undefined4 **)(_UNK_020dd730 + 0x20dd65c);
      uVar6 = func_0x01384abc(*puVar5,auStack_1c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = FUN_0210e2d4(iVar4,0);
      uVar3 = func_0x01384abc(*puVar5,&uStack_20);
      uVar6 = func_0x0244f690(**(undefined4 **)(_UNK_020dd734 + 0x20dd6b4),uVar6,uVar3,0);
      if (*(int *)(**(int **)(_UNK_020dd738 + 0x20dd6c8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar6,0);
      return 0;
    }
  }
  FUN_020dd73c(iVar2,iVar4,1,4);
  FUN_020dd8f4(iVar2,iVar4,iVar4,4);
  return 1;
}



// ===== FAT.Merge.ItemSkillComponent$$.ctor RVA 0x2125204 =====

void FUN_02135204(int param_1)

{
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined2 *)(param_1 + 0xc) = 0x101;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemSkillComponent$$<>iFixBaseProxy_OnPostAttach RVA 0x212521c =====

void thunk_FUN_02127894(undefined4 param_1)

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



// ===== FAT.Merge.ItemSkillComponent$$<>iFixBaseProxy_OnSerialize RVA 0x2125220 =====

void thunk_FUN_02123514(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5c7d,0);
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



// ===== FAT.Merge.ItemSkillComponent$$<>iFixBaseProxy_OnDeserialize RVA 0x2125224 =====

void thunk_FUN_021237d4(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5c62,0);
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



// ===== FAT.Merge.ItemSkillComponent$$<>iFixBaseProxy_OnPostMerge RVA 0x2125228 =====

void thunk_FUN_02125ffc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9ea5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ea5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.ItemSkillComponent$$<>iFixBaseProxy_OnUpdate RVA 0x212522c =====

void thunk_FUN_02126b58(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5e59,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5e59,0);
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
  func_0x01485238(&uStack_38,param_2,0);
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


