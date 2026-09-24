/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ItemActivityTokenComponent$$get_CanShow_BL RVA 0x20fccb4 =====

undefined4 FUN_0210ccb4(int param_1)

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
  iVar1 = func_0x0229f06c(0x1677,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1677,0);
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
  if ((0 < *(int *)(param_1 + 0x10)) && (uVar3 = 0, 0 < *(int *)(param_1 + 0x14))) {
    uVar3 = 1;
  }
  return uVar3;
}



// ===== FAT.Merge.ItemActivityTokenComponent$$ClearActivityInfo_BL RVA 0x20fcdf0 =====

void FUN_0210cdf0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0x4cf6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4cf6,0);
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
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3);
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar1 = func_0x02123568(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0229f06c(0x27d,0);
  if (iVar4 == 0) {
    if (*(char *)(iVar1 + 0x50) != '\0') {
      return;
    }
    iVar4 = FUN_0210cd28(iVar1);
    if (iVar4 == 0) {
      return;
    }
    iVar4 = FUN_0210cd28(iVar1);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0229f06c(0x27e,0,0);
    if (iVar2 == 0) {
      iVar4 = *(int *)(iVar4 + 0x3c);
      if (iVar4 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x020eaa64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar4 + 0x20),iVar1,*(undefined4 *)(iVar4 + 0x14));
      return;
    }
    iVar2 = func_0x0229f13c(0x27e,0);
    param_1 = iVar1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x27d,0);
    iVar4 = iVar1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_1,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar4,0);
  func_0x01485278(&uStack_38,param_1,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar5 = *(undefined4 *)(iVar2 + 0xc);
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
  return;
}



// ===== FAT.Merge.ItemActivityTokenComponent$$OnSerialize RVA 0x210b8f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211b8f8(undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_0211b9e0 + 0x211b914);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211b9e4 + 0x211b928));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb34f,0);
  if (iVar1 == 0) {
    func_0x02123514(param_1,param_2,0);
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0211b9e8 + 0x211b998));
    func_0x017a1564(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = 0;
    func_0x0211b9ec(param_1,&uStack_1c,*(undefined4 *)(iVar1 + 0xc));
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    *(int *)(param_2 + 0x60) = iVar1;
  }
  else {
    iVar1 = func_0x0229f13c(0xb34f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.ItemActivityTokenComponent$$_SerializeBL RVA 0x210b9ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211b9ec(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  
  pcVar6 = (char *)(_UNK_0211bc30 + 0x211ba0c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211bc34 + 0x211ba20));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb350,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb350,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0229c660(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  uVar2 = func_0x01c23578(iVar1,*(undefined4 *)(param_1 + 0x10),0);
  if (param_3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_3;
  piVar7 = *(int **)(_UNK_0211bc38 + 0x211bab4);
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == *piVar7) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd0);
        goto LAB_0211bafc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_3,*piVar7,2);
LAB_0211bafc:
  (*(code *)*puVar3)(param_3,uVar2,puVar3[1]);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  uVar2 = func_0x01c23578(iVar1,*(undefined4 *)(param_1 + 0x14),0);
  if (param_3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_3;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == *piVar7) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd0);
        goto LAB_0211bb88;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_3,*piVar7,2);
LAB_0211bb88:
  (*(code *)*puVar3)(param_3,uVar2,puVar3[1]);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  uVar2 = func_0x01c23578(iVar1,*(undefined4 *)(param_1 + 0x18),0);
  if (param_3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_3;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == *piVar7) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd0);
        goto LAB_0211bc14;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_3,*piVar7,2);
LAB_0211bc14:
                    /* WARNING: Could not recover jumptable at 0x0211bc2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(param_3,uVar2,puVar3[1]);
  return;
}



// ===== FAT.Merge.ItemActivityTokenComponent$$OnDeserialize RVA 0x210bc3c =====

void FUN_0211bc3c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0xb351,0);
  if (iVar1 == 0) {
    func_0x021237d4(param_1,param_2,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(param_2 + 0x60) != 0) {
      uStack_14 = 0;
      func_0x0211bcdc(param_1,&uStack_14,*(undefined4 *)(*(int *)(param_2 + 0x60) + 0xc));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb351,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.ItemActivityTokenComponent$$_DeserializeBL RVA 0x210bcdc =====

void FUN_0211bcdc(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0xb352,0);
  if (iVar1 == 0) {
    iVar1 = *param_2;
    *param_2 = iVar1 + 1;
    uVar2 = func_0x01c23c30(iVar1,param_3,0);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    iVar1 = *param_2;
    *param_2 = iVar1 + 1;
    uVar2 = func_0x01c23c30(iVar1,param_3,0);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    iVar1 = *param_2;
    *param_2 = iVar1 + 1;
    uVar2 = func_0x01c23c30(iVar1,param_3,0);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
  }
  else {
    iVar1 = func_0x0229f13c(0xb352,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0229c660(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.ItemActivityTokenComponent$$get_ActivityId_BL RVA 0x210bd9c =====

undefined4 FUN_0211bd9c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// ===== FAT.Merge.ItemActivityTokenComponent$$set_ActivityId_BL RVA 0x210bda4 =====

void FUN_0211bda4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ===== FAT.Merge.ItemActivityTokenComponent$$get_TokenId_BL RVA 0x210bdac =====

undefined4 FUN_0211bdac(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.Merge.ItemActivityTokenComponent$$set_TokenId_BL RVA 0x210bdb4 =====

void FUN_0211bdb4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



// ===== FAT.Merge.ItemActivityTokenComponent$$get_TokenNum_BL RVA 0x210bdbc =====

undefined4 FUN_0211bdbc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== FAT.Merge.ItemActivityTokenComponent$$set_TokenNum_BL RVA 0x210bdc4 =====

void FUN_0211bdc4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// ===== FAT.Merge.ItemActivityTokenComponent$$SetActivityInfo_BL RVA 0x210bdcc =====

void FUN_0211bdcc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0xb353,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = param_2;
    *(undefined4 *)(param_1 + 0x14) = param_3;
    *(undefined4 *)(param_1 + 0x18) = param_4;
  }
  else {
    iVar1 = func_0x0229f13c(0xb353,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179c40(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.Merge.ItemActivityTokenComponent$$.ctor RVA 0x210be48 =====

void FUN_0211be48(int param_1)

{
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined2 *)(param_1 + 0xc) = 0x101;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemActivityTokenComponent$$<>iFixBaseProxy_OnSerialize RVA 0x210be50 =====

void FUN_0211be50(undefined4 param_1,undefined4 param_2)

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



// ===== FAT.Merge.ItemActivityTokenComponent$$<>iFixBaseProxy_OnDeserialize RVA 0x210be58 =====

void FUN_0211be58(undefined4 param_1,undefined4 param_2)

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


