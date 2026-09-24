/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MiniBoardMultiActivity$$.ctor RVA 0x1aa0b00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01ab0b00(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  pcVar4 = (char *)(_UNK_01ab0d90 + 0x1ab0b14);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab0d94 + 0x1ab0b28));
    func_0x01384978(*(undefined4 *)(_UNK_01ab0d98 + 0x1ab0b34));
    func_0x01384978(*(undefined4 *)(_UNK_01ab0d9c + 0x1ab0b40));
    func_0x01384978(*(undefined4 *)(_UNK_01ab0da0 + 0x1ab0b4c));
    func_0x01384978(*(undefined4 *)(_UNK_01ab0da4 + 0x1ab0b58));
    func_0x01384978(*(undefined4 *)(_UNK_01ab0da8 + 0x1ab0b64));
    *pcVar4 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01ab0dac + 0x1ab0b78));
  func_0x0215a9fc(uVar1,0);
  puVar5 = *(undefined4 **)(_UNK_01ab0db0 + 0x1ab0b94);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar1 = func_0x01384be4(*puVar5);
  func_0x02b635c4(uVar1,0);
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x02b635c4(uVar1,0);
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x02b635c4(uVar1,0);
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x02b635c4(uVar1,0);
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x02b635c4(uVar1,0);
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 100) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x02b635c4(uVar1,0);
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x02b635c4(uVar1,0);
  puVar5 = *(undefined4 **)(_UNK_01ab0db4 + 0x1ab0c44);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  uVar1 = func_0x01384be4(*puVar5);
  func_0x01ea074c(uVar1,0);
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x01ea074c(uVar1,0);
  puVar5 = *(undefined4 **)(_UNK_01ab0db8 + 0x1ab0c7c);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  uVar1 = func_0x01384be4(*puVar5);
  func_0x01ea074c(uVar1,0);
  piVar6 = *(int **)(_UNK_01ab0dbc + 0x1ab0c9c);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  iVar3 = *piVar6;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar6;
  }
  puVar5 = *(undefined4 **)(_UNK_01ab0dc0 + 0x1ab0cc4);
  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x44c);
  uVar1 = func_0x01384be4(*puVar5);
  func_0x02b63ca4(uVar1,uVar2,0);
  iVar3 = *piVar6;
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x450);
  uVar1 = func_0x01384be4(*puVar5);
  func_0x02b63ca4(uVar1,uVar2,0);
  iVar3 = *piVar6;
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x45c);
  uVar1 = func_0x01384be4(*puVar5);
  func_0x02b63ca4(uVar1,uVar2,0);
  iVar3 = *piVar6;
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x454);
  uVar1 = func_0x01384be4(*puVar5);
  func_0x02b63ca4(uVar1,uVar2,0);
  iVar3 = *piVar6;
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x458);
  uVar1 = func_0x01384be4(*puVar5);
  func_0x02b63ca4(uVar1,uVar2,0);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  pcVar4 = (char *)(_UNK_02b4dd1c + 0x2b4dc18);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4dd20 + 0x2b4dc2c),0);
    func_0x01384978(*(undefined4 *)(_UNK_02b4dd24 + 0x2b4dc38));
    func_0x01384978(*(undefined4 *)(_UNK_02b4dd28 + 0x2b4dc44));
    *pcVar4 = '\x01';
  }
  piVar6 = *(int **)(_UNK_02b4dd2c + 0x2b4dc58);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar4 = (char *)(_UNK_02b4dd30 + 0x2b4dc74);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4dd34 + 0x2b4dc88));
    *pcVar4 = '\x01';
  }
  iVar3 = *piVar6;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar6;
  }
  puVar5 = *(undefined4 **)(_UNK_02b4dd38 + 0x2b4dcb8);
  *(undefined4 *)(param_1 + 0x10) = **(undefined4 **)(iVar3 + 0x5c);
  uVar1 = func_0x01384be4(*puVar5);
  func_0x02b635c4(uVar1,0);
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x02b635c4(uVar1,0);
  puVar5 = *(undefined4 **)(_UNK_02b4dd3c + 0x2b4dcf4);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x01384be4(*puVar5);
  func_0x029eadb4(uVar1,0);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  return param_1;
}



// ===== FAT.MiniBoardMultiActivity$$Setup RVA 0x1aa0dc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab0dc4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
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
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x8545,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8545,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02174858(iVar1,param_1,param_2,param_3);
    return;
  }
  *(undefined4 *)(param_1 + 0x3c) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  piVar7 = *(int **)(param_1 + 0x44);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar9 = (char *)(_UNK_01dbba4c + 0x1dbb948);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbba50 + 0x1dbb95c),piVar7,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dbba54 + 0x1dbb968));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x16b4,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x16b4,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,piVar7,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485278(&uStack_38,piVar7,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar1 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_38,uVar6,0,0);
    return;
  }
  iVar1 = func_0x02f6252c(*(undefined4 *)(iVar1 + 0x34),piVar7,
                          **(undefined4 **)(_UNK_01dbba58 + 0x1dbb9c8));
  if (piVar7 == (int *)0x0 || iVar1 == 0) {
    return;
  }
  iVar1 = *piVar7;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_01dbba5c + 0x1dbb9f0)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd0);
        goto LAB_01dbba38;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01dbba5c + 0x1dbb9f0),2);
LAB_01dbba38:
                    /* WARNING: Could not recover jumptable at 0x01dbba48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(piVar7,puVar3[1]);
  return;
}



// ===== FAT.MiniBoardMultiActivity$$get_ConfD RVA 0x1aa125c =====

undefined4 FUN_01ab125c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// ===== FAT.MiniBoardMultiActivity$$set_ConfD RVA 0x1aa1264 =====

void FUN_01ab1264(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}



// ===== FAT.MiniBoardMultiActivity$$get_GroupId RVA 0x1aa126c =====

undefined4 FUN_01ab126c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ===== FAT.MiniBoardMultiActivity$$set_GroupId RVA 0x1aa1274 =====

void FUN_01ab1274(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}



// ===== FAT.MiniBoardMultiActivity$$get_SpawnHandler RVA 0x1aa127c =====

undefined4 FUN_01ab127c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// ===== FAT.MiniBoardMultiActivity$$get_UIOpenState RVA 0x1aa1284 =====

undefined1 FUN_01ab1284(int param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



// ===== FAT.MiniBoardMultiActivity$$set_UIOpenState RVA 0x1aa128c =====

void FUN_01ab128c(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x48) = param_2;
  return;
}



// ===== FAT.MiniBoardMultiActivity$$get_Visual RVA 0x1aa1294 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ab1294(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8558,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8558,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021c7f44 + 0x21c7e64);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021c7f48 + 0x21c7e78),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7f4c + 0x21c7f34));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x58);
}



// ===== FAT.MiniBoardMultiActivity$$SetupFresh RVA 0x1aa12e8 =====

void FUN_01ab12e8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8559,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8559,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar1 = *(int *)(iVar1 + 0x2c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = *(undefined4 *)(iVar3 + 0x30);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x01cf6408(iVar1,uVar4,0);
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  func_0x01ab140c(param_1);
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined2 *)(iVar1 + 0x39) = 0;
  *(undefined1 *)(iVar1 + 0x38) = 1;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xfc);
  uVar4 = *(undefined4 *)(param_1 + 0x70);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = 0;
  func_0x01e7437c(iVar1,uVar4,0,0);
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



// ===== FAT.MiniBoardMultiActivity$$_RefreshPopupInfo RVA 0x1aa140c =====

/* WARNING: Possible PIC construction at 0x01ab14b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01ab1544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01ab15d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01ab165c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01ab1698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01ab16d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01ab169c) */
/* WARNING: Removing unreachable block (ram,0x01ab16ac) */
/* WARNING: Removing unreachable block (ram,0x01ab16b0) */
/* WARNING: Removing unreachable block (ram,0x01ab16c0) */
/* WARNING: Removing unreachable block (ram,0x01ab16c4) */
/* WARNING: Removing unreachable block (ram,0x01ab1660) */
/* WARNING: Removing unreachable block (ram,0x01ab1670) */
/* WARNING: Removing unreachable block (ram,0x01ab1674) */
/* WARNING: Removing unreachable block (ram,0x01ab1684) */
/* WARNING: Removing unreachable block (ram,0x01ab1688) */
/* WARNING: Removing unreachable block (ram,0x01ab15d4) */
/* WARNING: Removing unreachable block (ram,0x01ab15dc) */
/* WARNING: Removing unreachable block (ram,0x01ab15f0) */
/* WARNING: Removing unreachable block (ram,0x01ab15f4) */
/* WARNING: Removing unreachable block (ram,0x01ab1624) */
/* WARNING: Removing unreachable block (ram,0x01ab1634) */
/* WARNING: Removing unreachable block (ram,0x01ab1638) */
/* WARNING: Removing unreachable block (ram,0x01ab1648) */
/* WARNING: Removing unreachable block (ram,0x01ab164c) */
/* WARNING: Removing unreachable block (ram,0x01ab1548) */
/* WARNING: Removing unreachable block (ram,0x01ab1550) */
/* WARNING: Removing unreachable block (ram,0x01ab1564) */
/* WARNING: Removing unreachable block (ram,0x01ab1568) */
/* WARNING: Removing unreachable block (ram,0x01ab1598) */
/* WARNING: Removing unreachable block (ram,0x01ab15a8) */
/* WARNING: Removing unreachable block (ram,0x01ab15ac) */
/* WARNING: Removing unreachable block (ram,0x01ab15bc) */
/* WARNING: Removing unreachable block (ram,0x01ab15c0) */
/* WARNING: Removing unreachable block (ram,0x01ab14b8) */
/* WARNING: Removing unreachable block (ram,0x01ab14c0) */
/* WARNING: Removing unreachable block (ram,0x01ab14d4) */
/* WARNING: Removing unreachable block (ram,0x01ab14d8) */
/* WARNING: Removing unreachable block (ram,0x01ab150c) */
/* WARNING: Removing unreachable block (ram,0x01ab151c) */
/* WARNING: Removing unreachable block (ram,0x01ab1520) */
/* WARNING: Removing unreachable block (ram,0x01ab1530) */
/* WARNING: Removing unreachable block (ram,0x01ab1534) */
/* WARNING: Removing unreachable block (ram,0x01ab16d8) */
/* WARNING: Removing unreachable block (ram,0x01ab16e8) */
/* WARNING: Removing unreachable block (ram,0x01ab16ec) */
/* WARNING: Removing unreachable block (ram,0x01ab16fc) */
/* WARNING: Removing unreachable block (ram,0x01ab1700) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ab140c(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uStack_48;
  int iStack_44;
  int *piStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  iVar1 = func_0x0229f06c(0x855c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x855c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0245494c(&uStack_48,0,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&stack0xffffffd0,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&stack0xffffffd0,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    uVar6 = func_0x0245495c(iVar4,uVar6,&stack0xffffffd0,uVar3,0,0);
    return uVar6;
  }
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if (iVar1 == 0) {
    return 0;
  }
  iVar4 = param_1[0xf];
  iVar1 = param_1[0x15];
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar5 = param_1[0x1f];
  iVar4 = *(int *)(iVar4 + 0x28);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_02b61bf0 + 0x2b61a70);
  piStack_40 = param_1;
  iStack_3c = iVar1;
  iStack_38 = iVar5;
  iStack_34 = iVar4;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b61bf4 + 0x2b61a84),iVar4,iVar5,0);
    func_0x01384978(*(undefined4 *)(_UNK_02b61bf8 + 0x2b61a90));
    func_0x01384978(*(undefined4 *)(_UNK_02b61bfc + 0x2b61a9c));
    func_0x01384978(*(undefined4 *)(_UNK_02b61c00 + 0x2b61aa8));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x305,0);
  if (iVar2 == 0) {
    uVar6 = 0;
    iVar2 = func_0x01822f2c(iVar4,0);
    *(int *)(iVar1 + 8) = iVar2;
    if (iVar2 == 0) {
      if (0 < iVar4) {
        iStack_44 = iVar4;
        uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_02b61c04 + 0x2b61b88),&iStack_44);
        uVar6 = 0;
        uVar3 = func_0x0467272c(**(undefined4 **)(_UNK_02b61c08 + 0x2b61ba8),
                                **(undefined4 **)(_UNK_02b61c0c + 0x2b61bb4),uVar3,0);
        if (*(int *)(**(int **)(_UNK_02b61c10 + 0x2b61bc8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2944(uVar3,0);
      }
    }
    else {
      uVar3 = func_0x017d2c28(*(undefined4 *)(iVar2 + 0x1c),0);
      uVar6 = 1;
      *(undefined4 *)(iVar1 + 0xc) = uVar3;
      if (iVar5 != 0) {
        iVar4 = *(int *)(iVar1 + 8);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x01875b98(*(undefined4 *)(iVar4 + 0x24),0);
        *(undefined4 *)(iVar1 + 0x10) = uVar3;
        uVar3 = func_0x02b61610(iVar1);
        func_0x02b61c14(iVar5,uVar3);
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x305,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_48 = 0;
    uVar6 = func_0x021846e8(iVar2,iVar1,iVar4,iVar5);
  }
  return uVar6;
}



// ===== FAT.MiniBoardMultiActivity$$SaveSetup RVA 0x1aa1724 =====

/* WARNING: Possible PIC construction at 0x01ab17e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01ab1814: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01ab17e8) */
/* WARNING: Removing unreachable block (ram,0x01ab1804) */
/* WARNING: Removing unreachable block (ram,0x01ab1808) */
/* WARNING: Removing unreachable block (ram,0x01ab1818) */
/* WARNING: Removing unreachable block (ram,0x01ab1834) */
/* WARNING: Removing unreachable block (ram,0x01ab1838) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab1724(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  pcVar4 = (char *)(_UNK_01ab184c + 0x1ab173c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab1850 + 0x1ab1750));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x855d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x855d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    iStack_2c = uStack_44;
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
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x28);
  uVar5 = func_0x01c23578(0,*(undefined4 *)(param_1 + 0x40),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piStack_24 = *(int **)(_UNK_01ab1854 + 0x1ab17e4);
  iVar3 = *piStack_24;
  pcVar4 = (char *)(_UNK_03652bac + 0x3652b1c);
  iStack_30 = param_1;
  iStack_2c = iVar1;
  uStack_28 = uVar5;
  if (*pcVar4 == '\0') {
    func_0x02457d54(*(undefined4 *)(_UNK_03652bb0 + 0x3652b30));
    *pcVar4 = '\x01';
  }
  func_0x03031dbc(uVar5,**(undefined4 **)(_UNK_03652bb4 + 0x3652b4c),
                  *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x80));
  func_0x036529a8(iVar1,*(int *)(iVar1 + 0xc) + 1,
                  *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x3c));
  iVar3 = *(int *)(iVar1 + 8);
  uVar6 = *(uint *)(iVar1 + 0xc);
  *(uint *)(iVar1 + 0xc) = uVar6 + 1;
  if (iVar3 == 0) {
    func_0x02457d50();
  }
  if (*(uint *)(iVar3 + 0xc) <= uVar6) {
    func_0x02457d5c();
  }
  *(undefined4 *)(iVar3 + uVar6 * 4 + 0x10) = uVar5;
  return;
}



// ===== FAT.MiniBoardMultiActivity$$LoadSetup RVA 0x1aa1858 =====

/* WARNING: Possible PIC construction at 0x01ab14b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01ab1544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01ab15d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01ab165c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01ab1698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01ab16d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01ab169c) */
/* WARNING: Removing unreachable block (ram,0x01ab16ac) */
/* WARNING: Removing unreachable block (ram,0x01ab16b0) */
/* WARNING: Removing unreachable block (ram,0x01ab16c0) */
/* WARNING: Removing unreachable block (ram,0x01ab16c4) */
/* WARNING: Removing unreachable block (ram,0x01ab1660) */
/* WARNING: Removing unreachable block (ram,0x01ab1670) */
/* WARNING: Removing unreachable block (ram,0x01ab1674) */
/* WARNING: Removing unreachable block (ram,0x01ab1684) */
/* WARNING: Removing unreachable block (ram,0x01ab1688) */
/* WARNING: Removing unreachable block (ram,0x01ab15d4) */
/* WARNING: Removing unreachable block (ram,0x01ab15dc) */
/* WARNING: Removing unreachable block (ram,0x01ab15f0) */
/* WARNING: Removing unreachable block (ram,0x01ab15f4) */
/* WARNING: Removing unreachable block (ram,0x01ab1624) */
/* WARNING: Removing unreachable block (ram,0x01ab1634) */
/* WARNING: Removing unreachable block (ram,0x01ab1638) */
/* WARNING: Removing unreachable block (ram,0x01ab1648) */
/* WARNING: Removing unreachable block (ram,0x01ab164c) */
/* WARNING: Removing unreachable block (ram,0x01ab1548) */
/* WARNING: Removing unreachable block (ram,0x01ab1550) */
/* WARNING: Removing unreachable block (ram,0x01ab1564) */
/* WARNING: Removing unreachable block (ram,0x01ab1568) */
/* WARNING: Removing unreachable block (ram,0x01ab1598) */
/* WARNING: Removing unreachable block (ram,0x01ab15a8) */
/* WARNING: Removing unreachable block (ram,0x01ab15ac) */
/* WARNING: Removing unreachable block (ram,0x01ab15bc) */
/* WARNING: Removing unreachable block (ram,0x01ab15c0) */
/* WARNING: Removing unreachable block (ram,0x01ab14b8) */
/* WARNING: Removing unreachable block (ram,0x01ab14c0) */
/* WARNING: Removing unreachable block (ram,0x01ab14d4) */
/* WARNING: Removing unreachable block (ram,0x01ab14d8) */
/* WARNING: Removing unreachable block (ram,0x01ab150c) */
/* WARNING: Removing unreachable block (ram,0x01ab151c) */
/* WARNING: Removing unreachable block (ram,0x01ab1520) */
/* WARNING: Removing unreachable block (ram,0x01ab1530) */
/* WARNING: Removing unreachable block (ram,0x01ab1534) */
/* WARNING: Removing unreachable block (ram,0x01ab16d8) */
/* WARNING: Removing unreachable block (ram,0x01ab16e8) */
/* WARNING: Removing unreachable block (ram,0x01ab16ec) */
/* WARNING: Removing unreachable block (ram,0x01ab16fc) */
/* WARNING: Removing unreachable block (ram,0x01ab1700) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ab1858(int *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int *piStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  iVar2 = func_0x0229f06c(0x855f,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x855f,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_38 = 0;
    func_0x0245494c(&iStack_50,0,param_2,0);
    iStack_38 = iStack_50;
    iStack_34 = uStack_4c;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&iStack_38,param_1,0);
    func_0x01485278(&iStack_38,param_2,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    uVar7 = func_0x0245495c(iVar5,uVar7,&iStack_38,uVar4,0,0);
    return uVar7;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar7 = *(undefined4 *)(param_2 + 0x28);
  iVar2 = func_0x01c23c30(0,uVar7,0);
  param_1[0x10] = iVar2;
  uVar1 = func_0x01c23b88(1,uVar7,0);
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  iVar2 = func_0x01c23c30(2,uVar7,0);
  param_1[0x13] = iVar2;
  iVar2 = func_0x0229f06c(0x855c,0);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (iVar2 == 0) {
      return 0;
    }
    iVar5 = param_1[0xf];
    iVar2 = param_1[0x15];
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar6 = param_1[0x1f];
    iVar5 = *(int *)(iVar5 + 0x28);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02b61bf0 + 0x2b61a70);
    piStack_40 = param_1;
    iStack_3c = iVar2;
    iStack_38 = iVar6;
    iStack_34 = iVar5;
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b61bf4 + 0x2b61a84),iVar5,iVar6,0);
      func_0x01384978(*(undefined4 *)(_UNK_02b61bf8 + 0x2b61a90));
      func_0x01384978(*(undefined4 *)(_UNK_02b61bfc + 0x2b61a9c));
      func_0x01384978(*(undefined4 *)(_UNK_02b61c00 + 0x2b61aa8));
      *pcVar8 = '\x01';
    }
    iVar3 = func_0x0229f06c(0x305,0);
    if (iVar3 == 0) {
      uVar7 = 0;
      iVar3 = func_0x01822f2c(iVar5,0);
      *(int *)(iVar2 + 8) = iVar3;
      if (iVar3 == 0) {
        if (0 < iVar5) {
          iStack_44 = iVar5;
          uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_02b61c04 + 0x2b61b88),&iStack_44);
          uVar7 = 0;
          uVar4 = func_0x0467272c(**(undefined4 **)(_UNK_02b61c08 + 0x2b61ba8),
                                  **(undefined4 **)(_UNK_02b61c0c + 0x2b61bb4),uVar4,0);
          if (*(int *)(**(int **)(_UNK_02b61c10 + 0x2b61bc8) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x028c2944(uVar4,0);
        }
      }
      else {
        uVar4 = func_0x017d2c28(*(undefined4 *)(iVar3 + 0x1c),0);
        uVar7 = 1;
        *(undefined4 *)(iVar2 + 0xc) = uVar4;
        if (iVar6 != 0) {
          iVar5 = *(int *)(iVar2 + 8);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uVar4 = func_0x01875b98(*(undefined4 *)(iVar5 + 0x24),0);
          *(undefined4 *)(iVar2 + 0x10) = uVar4;
          uVar4 = func_0x02b61610(iVar2);
          func_0x02b61c14(iVar6,uVar4);
        }
      }
    }
    else {
      iVar3 = func_0x0229f13c(0x305,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uStack_48 = 0;
      uVar7 = func_0x021846e8(iVar3,iVar2,iVar5,iVar6);
    }
    return uVar7;
  }
  iVar2 = func_0x0229f13c(0x855c,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0245494c(&uStack_48,0,0);
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&stack0xffffffd0,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&stack0xffffffd0,param_1,0);
  iVar5 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  iStack_50 = 0;
  uStack_4c = 0;
  uVar7 = func_0x0245495c(iVar5,uVar7,&stack0xffffffd0,uVar4);
  return uVar7;
}



// ===== FAT.MiniBoardMultiActivity$$ResEnumerate RVA 0x1aa1904 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01ab1904(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_01ab19b4 + 0x1ab1918);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab19b8 + 0x1ab192c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8561,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8561,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_021c7568 + 0x21c7488);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021c756c + 0x21c749c),param_1,0);
      *pcVar3 = '\x01';
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
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7570 + 0x21c7558));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01ab19bc + 0x1ab1984));
  func_0x0244f5a0(iVar1,0);
  *(undefined4 *)(iVar1 + 8) = 0xfffffffe;
  uVar5 = func_0x0245057c(0);
  *(undefined4 *)(iVar1 + 0x14) = uVar5;
  *(undefined4 *)(iVar1 + 0x18) = param_1;
  return iVar1;
}



// ===== FAT.MiniBoardMultiActivity.<ResEnumerate>d__38$$.ctor RVA 0x1aa19c0 =====

void FUN_01ab19c0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  uVar1 = func_0x0245057c(0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}



// ===== FAT.MiniBoardMultiActivity$$WhenEnd RVA 0x1aa19e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab19e8(int param_1)

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
  undefined4 uStack_18;
  
  pcVar3 = (char *)(_UNK_01ab1c24 + 0x1ab1a00);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab1c28 + 0x1ab1a14));
    func_0x01384978(*(undefined4 *)(_UNK_01ab1c2c + 0x1ab1a20));
    func_0x01384978(*(undefined4 *)(_UNK_01ab1c30 + 0x1ab1a2c));
    func_0x01384978(*(undefined4 *)(_UNK_01ab1c34 + 0x1ab1a38));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8571,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8571,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  uVar5 = *(undefined4 *)(param_1 + 0x44);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbba60(iVar1,uVar5,0);
  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01ab1c38 + 0x1ab1ad0));
  iVar4 = *(int *)(param_1 + 0x7c);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(iVar4 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01eea2b8(iVar1,uVar5,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xfc);
    uVar5 = *(undefined4 *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_18 = 0;
    func_0x01e7437c(iVar1,uVar5,0,0);
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01ab1c3c + 0x1ab1b64));
  func_0x0328e950(iVar1,**(undefined4 **)(_UNK_01ab1c40 + 0x1ab1b78));
  iVar4 = func_0x01c24918(0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar4 + 0xc4);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x01ab1c44(iVar4,iVar1);
  if (iVar4 != 0) {
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar1 + 0xc)) {
      iVar4 = func_0x01c24918(0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar4 + 0xfc);
      uVar5 = *(undefined4 *)(param_1 + 0x78);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_18 = 0;
      func_0x01e7437c(iVar4,uVar5,0,iVar1);
    }
  }
  return;
}



// ===== FAT.MiniBoardMultiActivity$$SetupClear RVA 0x1aa2200 =====

void FUN_01ab2200(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8577,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8577,0);
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
  func_0x02b4d3fc(param_1,0);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}



// ===== FAT.MiniBoardMultiActivity$$TryPopup RVA 0x1aa2264 =====

void FUN_01ab2264(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x8578,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x50) == '\0') {
      uVar2 = *(undefined4 *)(param_1 + 0x70);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x01e7437c(param_2,uVar2,param_3,0,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8578,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c7f50(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MiniBoardMultiActivity$$Open RVA 0x1aa2308 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab2308(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
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
  
  iVar1 = func_0x0229f06c(0x8579,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0xc4);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_01ab2630 + 0x1ab239c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01ab2634 + 0x1ab23b0));
      func_0x01384978(*(undefined4 *)(_UNK_01ab2638 + 0x1ab23bc));
      func_0x01384978(*(undefined4 *)(_UNK_01ab263c + 0x1ab23c8));
      func_0x01384978(*(undefined4 *)(_UNK_01ab2640 + 0x1ab23d4));
      func_0x01384978(*(undefined4 *)(_UNK_01ab2644 + 0x1ab23e0));
      func_0x01384978(*(undefined4 *)(_UNK_01ab2648 + 0x1ab23ec));
      func_0x01384978(*(undefined4 *)(_UNK_01ab264c + 0x1ab23f8));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x857a,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01ab27ec(param_1);
      if (iVar1 != 0) {
        puVar8 = *(undefined4 **)(_UNK_01ab2650 + 0x1ab2460);
        iVar1 = func_0x034aaa34(*puVar8);
        iVar5 = *(int *)(param_1 + 8);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar5 + 0x7c);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uVar7 = *(undefined4 *)(iVar5 + 0xc);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01eea2b8(iVar1,uVar7,0);
        if (iVar1 == 0) {
          iVar1 = func_0x034aaa34(*puVar8);
          piVar6 = *(int **)(_UNK_01ab2654 + 0x1ab24cc);
          iVar5 = *piVar6;
          if (*(int *)(iVar5 + 0x74) == 0) {
            func_0x01384ab4();
            iVar5 = *piVar6;
          }
          uVar7 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x3c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01eea2b8(iVar1,uVar7,0);
          **(undefined1 **)(**(int **)(_UNK_01ab2658 + 0x1ab2514) + 0x5c) = (char)iVar1;
          if (iVar1 != 0) {
            if (*(int *)(**(int **)(_UNK_01ab265c + 0x1ab252c) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01ab2660 + 0x1ab2548));
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x0349da44(iVar1,0,**(undefined4 **)(_UNK_01ab2664 + 0x1ab256c));
          }
          iVar1 = func_0x034aaa34(*puVar8);
          iVar5 = *(int *)(param_1 + 8);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = *(int *)(iVar5 + 0x7c);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uVar7 = *(undefined4 *)(iVar5 + 0xc);
          piVar6 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01ab2668 + 0x1ab25b0),1);
          iVar5 = *(int *)(param_1 + 8);
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          if ((iVar5 != 0) &&
             (iVar2 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar6 + 0x20)), iVar2 == 0)) {
            uVar3 = func_0x01384c10();
            func_0x01384aa0(uVar3,0);
          }
          if (piVar6[3] == 0) {
            func_0x01384bf4();
          }
          piVar6[4] = iVar5;
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x0229f06c(0xd,0,piVar6,0);
          if (iVar5 == 0) {
            func_0x01ee81d4(iVar1,uVar7,0,piVar6);
          }
          else {
            iVar5 = func_0x0229f13c(0xd,0);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            uStack_20 = 0;
            func_0x02174858(iVar5,iVar1,uVar7,piVar6);
          }
          return;
        }
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x857a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8579,0);
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
  iVar5 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar5,uVar7,&uStack_30,uVar3,0,0);
  return;
}



// ===== FAT.MiniBoardMultiActivity$$BoardEntryAsset RVA 0x1aa266c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ab266c(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_01ab2758 + 0x1ab2684);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab275c + 0x1ab2698));
    func_0x01384978(*(undefined4 *)(_UNK_01ab2760 + 0x1ab26a4));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x857b,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03470a60(iVar1,**(undefined4 **)(_UNK_01ab2768 + 0x1ab2744),&uStack_14,
                    **(undefined4 **)(_UNK_01ab2764 + 0x1ab2738));
  }
  else {
    iVar1 = func_0x0229f13c(0x857b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.MiniBoardMultiActivity$$get_BoardEntryVisible RVA 0x1aa276c =====

undefined4 FUN_01ab276c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x857c,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0xc4);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 0;
    iVar1 = func_0x0229f06c(0x358,0);
    if (iVar1 == 0) {
      if ((*(int *)(param_1 + 8) != 0) && (uVar4 = 0, *(int *)(param_1 + 0x10) != 0)) {
        uVar4 = 1;
      }
      return uVar4;
    }
    iVar1 = func_0x0229f13c(0x358,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x857c,0);
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
  uVar4 = func_0x0245496c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.MiniBoardMultiActivity$$get_OutputType RVA 0x1aa285c =====

undefined4 FUN_01ab285c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x90);
}



// ===== FAT.MiniBoardMultiActivity$$set_OutputType RVA 0x1aa2864 =====

void FUN_01ab2864(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x90) = param_2;
  return;
}



// ===== FAT.MiniBoardMultiActivity$$get_OutputMethod RVA 0x1aa286c =====

undefined4 FUN_01ab286c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x94);
}



// ===== FAT.MiniBoardMultiActivity$$set_OutputMethod RVA 0x1aa2874 =====

void FUN_01ab2874(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x94) = param_2;
  return;
}



// ===== FAT.MiniBoardMultiActivity$$RefreshOutputType RVA 0x1aa287c =====

void FUN_01ab287c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x857d,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x857d,0);
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



// ===== FAT.MiniBoardMultiActivity$$RefreshOutputMethod RVA 0x1aa28c8 =====

void FUN_01ab28c8(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x857e,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x857e,0);
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



// ===== FAT.MiniBoardMultiActivity$$IsEnergyMethod RVA 0x1aa2914 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ab2914(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
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
  
  iVar1 = func_0x0229f06c(0x7aa7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7aa7,0);
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
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4);
    uVar7 = func_0x0245496c(&uStack_30,0,0);
    return uVar7;
  }
  pcVar8 = (char *)(_UNK_02c05e40 + 0x2c05d5c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c05e44 + 0x2c05d70),1,0);
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5a9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5a9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,1,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar4,0,0);
    uVar7 = func_0x0245496c(&uStack_38,0,0);
    return uVar7;
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02c05e48 + 0x2c05dd8)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xe8);
        goto LAB_02c05e28;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_02c05e48 + 0x2c05dd8),5);
LAB_02c05e28:
                    /* WARNING: Could not recover jumptable at 0x02c05e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (*(code *)*puVar2)(param_1,1,puVar2[1]);
  return uVar7;
}



// ===== FAT.MiniBoardMultiActivity$$FAT.IActivityOrderHandler.OnPreUpdate RVA 0x1aa2974 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ab2974(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01ab2cc8 + 0x1ab2994);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab2ccc + 0x1ab29ac));
    func_0x01384978(*(undefined4 *)(_UNK_01ab2cd0 + 0x1ab29b8));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x857f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x857f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021d2b64(iVar1,param_1,param_2,param_3,param_4,0);
    return uVar2;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(iVar1 + 0xc);
  iVar1 = param_1[0x10];
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01ca8c38(iVar10,iVar1,0);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = func_0x02b449f8(param_1,0);
  iVar10 = func_0x01e4b758(param_2,uVar2,0);
  piVar9 = *(int **)(_UNK_01ab2cd4 + 0x1ab2a8c);
  iVar3 = *piVar9;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar9;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x01e4b23c(iVar3,param_2,0);
  if (iVar3 == 0) {
LAB_01ab2b24:
    iVar3 = *param_1;
    uVar2 = *(undefined4 *)(iVar1 + 0x20);
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    uVar11 = *(undefined4 *)(iVar1 + 0x24);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01ab2cd8 + 0x1ab2b34)) {
          puVar5 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xf0);
          goto LAB_01ab2b84;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01ab2cd8 + 0x1ab2b34),6);
LAB_01ab2b84:
    iVar1 = (*(code *)*puVar5)(param_1,param_2,uVar11,uVar2,puVar5[1]);
    uVar2 = 1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar3 = *piVar9;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar9;
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar3 = func_0x01e4b2b0(iVar3,param_2,0);
    iVar4 = func_0x02b449f8(param_1,0);
    if (iVar3 != iVar4) goto LAB_01ab2b24;
  }
  if (iVar10 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x01e4b23c(0,param_2,0);
    if (iVar1 != 0) {
      func_0x01384bf0();
      goto LAB_01ab2bf8;
    }
  }
  else {
    iVar1 = func_0x01e4b23c(iVar10,param_2,0);
    if (iVar1 != 0) {
LAB_01ab2bf8:
      uVar11 = 0;
      iVar1 = func_0x01e4b2b0(iVar10,param_2,0);
      iVar3 = func_0x02b449f8(param_1,0);
      if (iVar1 == iVar3) goto LAB_01ab2ca8;
    }
  }
  iVar1 = *piVar9;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar9;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4b3b8(&uStack_2c,iVar1,param_2,0);
  uVar11 = func_0x02b449f8(param_1,0);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4ba84(iVar10,param_2,uVar11,uStack_28,uStack_2c,0);
  uVar11 = 1;
LAB_01ab2ca8:
  iVar1 = func_0x01f2a218(0);
  if (iVar1 != 0) {
    uVar2 = uVar11;
  }
  return uVar2;
}



// ===== FAT.MiniBoardMultiActivity$$FAT.IBoardActivityOutput.IsValidForOrder RVA 0x1aa2cdc =====

void FUN_01ab2cdc(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x8580,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8580,0);
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
    func_0x0245496c(&uStack_30,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01ab2d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  return;
}



// ===== FAT.MiniBoardMultiActivity$$FAT.IBoardActivityOutput.GetFlyType RVA 0x1aa2d40 =====

undefined4 FUN_01ab2d40(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x8581,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8581,0);
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
  return 0x1b;
}



// ===== FAT.MiniBoardMultiActivity$$FAT.IBoardActivityOutput.GetReasonString RVA 0x1aa2d94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ab2d94(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
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
  
  pcVar4 = (char *)(_UNK_01ab2e34 + 0x1ab2da8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab2e38 + 0x1ab2dbc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8582,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8582,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0221b1d4 + 0x221b0f4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0221b1d8 + 0x221b108),param_1,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    uVar6 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0221b1dc + 0x221b1c4));
    return uVar6;
  }
  piVar3 = *(int **)(_UNK_01ab2e3c + 0x1ab2e14);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x124);
}



// ===== FAT.MiniBoardMultiActivity$$FAT.IBoardActivityOutput.TrackOrderGetItem RVA 0x1aa2e40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab2e40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01ab2f8c + 0x1ab2e60);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab2f90 + 0x1ab2e78));
    func_0x01384978(*(undefined4 *)(_UNK_01ab2f94 + 0x1ab2e84));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8583,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01dbb000(iVar1,0);
    uVar4 = 0;
    if (iVar1 != 0) {
      iVar1 = func_0x02139cf4(iVar1,0);
      uVar4 = 0;
      if (iVar1 != 0) {
        uStack_24 = 0;
        uStack_28 = 0;
        func_0x03507d38(&uStack_28,*(undefined4 *)(iVar1 + 8),
                        **(undefined4 **)(_UNK_01ab2f98 + 0x1ab2f40));
        uVar4 = uStack_24;
      }
    }
    uVar2 = func_0x02157e88(param_2,0);
    func_0x019afbc4(param_1,uVar4,param_2,uVar2,param_3,param_4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x8583,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179c40(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MiniBoardMultiActivity$$<>iFixBaseProxy_get_Visual RVA 0x1aa2fa4 =====

undefined4 FUN_01ab2fa4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.MiniBoardMultiActivity$$<>iFixBaseProxy_SetupFresh RVA 0x1aa2fac =====

void FUN_01ab2fac(undefined4 param_1)

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



// ===== FAT.MiniBoardMultiActivity$$<>iFixBaseProxy_ResEnumerate RVA 0x1aa2fb4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01ab2fb4(int *param_1)

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



// ===== FAT.MiniBoardMultiActivity$$<>iFixBaseProxy_WhenEnd RVA 0x1aa2fbc =====

void FUN_01ab2fbc(undefined4 param_1)

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



// ===== FAT.MiniBoardMultiActivity$$<>iFixBaseProxy_SetupClear RVA 0x1aa2fc4 =====

void FUN_01ab2fc4(int param_1)

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



// ===== FAT.MiniBoardMultiActivity$$<>iFixBaseProxy_TryPopup RVA 0x1aa2fcc =====

void FUN_01ab2fcc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x1aa2,0,param_3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1aa2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c7f50(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MiniBoardMultiActivity.<ResEnumerate>d__38$$System.IDisposable.Dispose RVA 0x1aa2fd4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab2fd4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0xfffffff7:
  case 7:
    break;
  case 0xfffffff8:
  case 6:
    pcVar5 = &UNK_01ab4384 + _UNK_01ab4424;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01ab4398 + _UNK_01ab4428));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01ab43c4 + _UNK_01ab442c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01ab4410;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01ab43c4 + _UNK_01ab442c),0);
code_r0x01ab4410:
                    /* WARNING: Could not recover jumptable at 0x01ab4420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffff9:
  case 5:
    pcVar5 = &UNK_01ab42c4 + _UNK_01ab4364;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01ab42d8 + _UNK_01ab4368));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01ab4304 + _UNK_01ab436c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01ab4350;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01ab4304 + _UNK_01ab436c),0);
code_r0x01ab4350:
                    /* WARNING: Could not recover jumptable at 0x01ab4360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffa:
  case 4:
    pcVar5 = &UNK_01ab4204 + _UNK_01ab42a4;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01ab4218 + _UNK_01ab42a8));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01ab4244 + _UNK_01ab42ac)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01ab4290;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01ab4244 + _UNK_01ab42ac),0);
code_r0x01ab4290:
                    /* WARNING: Could not recover jumptable at 0x01ab42a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffb:
  case 3:
    pcVar5 = &UNK_01ab4144 + _UNK_01ab41e4;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01ab4158 + _UNK_01ab41e8));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01ab4184 + _UNK_01ab41ec)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01ab41d0;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01ab4184 + _UNK_01ab41ec),0);
code_r0x01ab41d0:
                    /* WARNING: Could not recover jumptable at 0x01ab41e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffc:
  case 2:
    pcVar5 = &UNK_01ab4084 + _UNK_01ab4124;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01ab4098 + _UNK_01ab4128));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01ab40c4 + _UNK_01ab412c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01ab4110;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01ab40c4 + _UNK_01ab412c),0);
code_r0x01ab4110:
                    /* WARNING: Could not recover jumptable at 0x01ab4120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffd:
  case 1:
    pcVar5 = &UNK_01ab3fc4 + _UNK_01ab4064;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01ab3fd8 + _UNK_01ab4068));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01ab4004 + _UNK_01ab406c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01ab4050;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01ab4004 + _UNK_01ab406c),0);
code_r0x01ab4050:
                    /* WARNING: Could not recover jumptable at 0x01ab4060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffe:
  case 0xffffffff:
  case 0:
    return;
  default:
    return;
  }
  pcVar5 = &UNK_01ab4444 + _UNK_01ab44e4;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(&UNK_01ab4458 + _UNK_01ab44e8));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(&UNK_01ab4484 + _UNK_01ab44ec)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto code_r0x01ab44d0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01ab4484 + _UNK_01ab44ec),0);
code_r0x01ab44d0:
                    /* WARNING: Could not recover jumptable at 0x01ab44e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MiniBoardMultiActivity.<ResEnumerate>d__38$$MoveNext RVA 0x1aa3054 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ab3054(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar7 = (char *)(_UNK_01ab3f4c + 0x1ab306c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab3f50 + 0x1ab3080));
    func_0x01384978(*(undefined4 *)(_UNK_01ab3f54 + 0x1ab308c));
    func_0x01384978(*(undefined4 *)(_UNK_01ab3f58 + 0x1ab3098));
    *pcVar7 = '\x01';
  }
  if (7 < *(uint *)(param_1 + 8)) {
    return 0;
  }
  piVar8 = *(int **)(param_1 + 0x18);
  switch(*(uint *)(param_1 + 8)) {
  case 0:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = (**(code **)(*piVar8 + 0x108))(piVar8,*(undefined4 *)(*piVar8 + 0x10c));
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = piVar8[0x15];
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b61d48(iVar1,0);
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(&UNK_01ab314c + _UNK_01ab3f5c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto code_r0x01ab3204;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01ab314c + _UNK_01ab3f5c),0);
code_r0x01ab3204:
    piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 0xfffffffd;
    *(int **)(param_1 + 0x1c) = piVar6;
    break;
  case 1:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffd;
    break;
  case 2:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffc;
    goto code_r0x01ab33ec;
  case 3:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffb;
    goto code_r0x01ab35b0;
  case 4:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffa;
    goto code_r0x01ab3774;
  case 5:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff9;
    goto code_r0x01ab3938;
  case 6:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff8;
    goto code_r0x01ab3afc;
  case 7:
    piVar8 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff7;
    goto code_r0x01ab3cd4;
  }
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(&UNK_01ab3240 + _UNK_01ab3f64)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
        goto code_r0x01ab3288;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01ab3240 + _UNK_01ab3f64),0);
code_r0x01ab3288:
  iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
  if (iVar1 == 0) {
    func_0x01ab3fb0(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = piVar8[0x16];
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b61d48(iVar1,0);
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(&UNK_01ab3354 + _UNK_01ab3f68)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto code_r0x01ab33cc;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01ab3354 + _UNK_01ab3f68),0);
code_r0x01ab33cc:
    piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 0xfffffffc;
    *(int **)(param_1 + 0x1c) = piVar6;
code_r0x01ab33ec:
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(&UNK_01ab3408 + _UNK_01ab3f70)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto code_r0x01ab3450;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01ab3408 + _UNK_01ab3f70),0);
code_r0x01ab3450:
    iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
    if (iVar1 == 0) {
      func_0x01ab4070(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = piVar8[0x17];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar6 = (int *)func_0x02b61d48(iVar1,0);
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar6;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(&UNK_01ab351c + _UNK_01ab3f74)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto code_r0x01ab3590;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01ab351c + _UNK_01ab3f74),0);
code_r0x01ab3590:
      piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
      *(undefined4 *)(param_1 + 8) = 0xfffffffb;
      *(int **)(param_1 + 0x1c) = piVar6;
code_r0x01ab35b0:
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar6;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(&UNK_01ab35cc + _UNK_01ab3f7c)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto code_r0x01ab3614;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01ab35cc + _UNK_01ab3f7c),0);
code_r0x01ab3614:
      iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
      if (iVar1 == 0) {
        func_0x01ab4130(param_1);
        *(undefined4 *)(param_1 + 0x1c) = 0;
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = piVar8[0x18];
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        piVar6 = (int *)func_0x02b61d48(iVar1,0);
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar6;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(&UNK_01ab36e0 + _UNK_01ab3f80)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
              goto code_r0x01ab3754;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01ab36e0 + _UNK_01ab3f80),0);
code_r0x01ab3754:
        piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
        *(undefined4 *)(param_1 + 8) = 0xfffffffa;
        *(int **)(param_1 + 0x1c) = piVar6;
code_r0x01ab3774:
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar6;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(&UNK_01ab3790 + _UNK_01ab3f88)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
              goto code_r0x01ab37d8;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01ab3790 + _UNK_01ab3f88),0);
code_r0x01ab37d8:
        iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
        if (iVar1 == 0) {
          func_0x01ab41f0(param_1);
          *(undefined4 *)(param_1 + 0x1c) = 0;
          if (piVar8 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = piVar8[0x19];
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          piVar6 = (int *)func_0x02b61d48(iVar1,0);
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar6;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar5[-1] == **(int **)(&UNK_01ab38a4 + _UNK_01ab3f8c)) {
                puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                goto code_r0x01ab3918;
              }
              uVar3 = uVar3 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01ab38a4 + _UNK_01ab3f8c),0)
          ;
code_r0x01ab3918:
          piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
          *(undefined4 *)(param_1 + 8) = 0xfffffff9;
          *(int **)(param_1 + 0x1c) = piVar6;
code_r0x01ab3938:
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar6;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar5[-1] == **(int **)(&UNK_01ab3954 + _UNK_01ab3f94)) {
                puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                goto code_r0x01ab399c;
              }
              uVar3 = uVar3 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01ab3954 + _UNK_01ab3f94),0)
          ;
code_r0x01ab399c:
          iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
          if (iVar1 == 0) {
            func_0x01ab42b0(param_1);
            *(undefined4 *)(param_1 + 0x1c) = 0;
            if (piVar8 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = piVar8[0x1a];
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            piVar6 = (int *)func_0x02b61d48(iVar1,0);
            if (piVar6 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar6;
            uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar3 != 0) {
              piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar5[-1] == **(int **)(&UNK_01ab3a68 + _UNK_01ab3f98)) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                  goto code_r0x01ab3adc;
                }
                uVar3 = uVar3 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined4 *)
                     func_0x014002dc(piVar6,**(int **)(&UNK_01ab3a68 + _UNK_01ab3f98),0);
code_r0x01ab3adc:
            piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
            *(undefined4 *)(param_1 + 8) = 0xfffffff8;
            *(int **)(param_1 + 0x1c) = piVar6;
code_r0x01ab3afc:
            if (piVar6 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar6;
            uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar3 != 0) {
              piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar5[-1] == **(int **)(&UNK_01ab3b18 + _UNK_01ab3fa0)) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                  goto code_r0x01ab3b60;
                }
                uVar3 = uVar3 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined4 *)
                     func_0x014002dc(piVar6,**(int **)(&UNK_01ab3b18 + _UNK_01ab3fa0),0);
code_r0x01ab3b60:
            iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
            if (iVar1 == 0) {
              func_0x01ab4370(param_1);
              *(undefined4 *)(param_1 + 0x1c) = 0;
              if (piVar8 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = (**(code **)(*piVar8 + 0x118))(piVar8,*(undefined4 *)(*piVar8 + 0x11c));
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              piVar8 = (int *)func_0x02b61d48(iVar1,0);
              if (piVar8 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar8;
              uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar3 != 0) {
                piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar6[-1] == **(int **)(&UNK_01ab3c40 + _UNK_01ab3fa4)) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                    goto code_r0x01ab3cb4;
                  }
                  uVar3 = uVar3 - 1;
                  piVar6 = piVar6 + 2;
                } while (uVar3 != 0);
              }
              puVar2 = (undefined4 *)
                       func_0x014002dc(piVar8,**(int **)(&UNK_01ab3c40 + _UNK_01ab3fa4),0);
code_r0x01ab3cb4:
              piVar8 = (int *)(*(code *)*puVar2)(piVar8,puVar2[1]);
              *(undefined4 *)(param_1 + 8) = 0xfffffff7;
              *(int **)(param_1 + 0x1c) = piVar8;
code_r0x01ab3cd4:
              if (piVar8 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar8;
              uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar3 != 0) {
                piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar6[-1] == **(int **)(&UNK_01ab3cf0 + _UNK_01ab3fac)) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                    goto code_r0x01ab3d38;
                  }
                  uVar3 = uVar3 - 1;
                  piVar6 = piVar6 + 2;
                } while (uVar3 != 0);
              }
              puVar2 = (undefined4 *)
                       func_0x014002dc(piVar8,**(int **)(&UNK_01ab3cf0 + _UNK_01ab3fac),0);
code_r0x01ab3d38:
              iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
              if (iVar1 == 0) {
                func_0x01ab4430(param_1);
                *(undefined4 *)(param_1 + 0x1c) = 0;
                return 0;
              }
              piVar8 = *(int **)(param_1 + 0x1c);
              if (piVar8 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar8;
              uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar3 != 0) {
                piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar6[-1] == **(int **)(&UNK_01ab3d70 + _UNK_01ab3fa8)) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                    goto code_r0x01ab3dcc;
                  }
                  uVar3 = uVar3 - 1;
                  piVar6 = piVar6 + 2;
                } while (uVar3 != 0);
              }
              puVar2 = (undefined4 *)
                       func_0x014002dc(piVar8,**(int **)(&UNK_01ab3d70 + _UNK_01ab3fa8),0);
code_r0x01ab3dcc:
              (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
              uVar4 = 7;
            }
            else {
              piVar8 = *(int **)(param_1 + 0x1c);
              if (piVar8 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar8;
              uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar3 != 0) {
                piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar6[-1] == **(int **)(&UNK_01ab3b98 + _UNK_01ab3f9c)) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                    goto code_r0x01ab3c88;
                  }
                  uVar3 = uVar3 - 1;
                  piVar6 = piVar6 + 2;
                } while (uVar3 != 0);
              }
              puVar2 = (undefined4 *)
                       func_0x014002dc(piVar8,**(int **)(&UNK_01ab3b98 + _UNK_01ab3f9c),0);
code_r0x01ab3c88:
              (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
              uVar4 = 6;
            }
          }
          else {
            piVar8 = *(int **)(param_1 + 0x1c);
            if (piVar8 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar8;
            uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar3 != 0) {
              piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar6[-1] == **(int **)(&UNK_01ab39d4 + _UNK_01ab3f90)) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                  goto code_r0x01ab3ab0;
                }
                uVar3 = uVar3 - 1;
                piVar6 = piVar6 + 2;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined4 *)
                     func_0x014002dc(piVar8,**(int **)(&UNK_01ab39d4 + _UNK_01ab3f90),0);
code_r0x01ab3ab0:
            (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
            uVar4 = 5;
          }
        }
        else {
          piVar8 = *(int **)(param_1 + 0x1c);
          if (piVar8 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar8;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar6[-1] == **(int **)(&UNK_01ab3810 + _UNK_01ab3f84)) {
                puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                goto code_r0x01ab38ec;
              }
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01ab3810 + _UNK_01ab3f84),0)
          ;
code_r0x01ab38ec:
          (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
          uVar4 = 4;
        }
      }
      else {
        piVar8 = *(int **)(param_1 + 0x1c);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar8;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(&UNK_01ab364c + _UNK_01ab3f78)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
              goto code_r0x01ab3728;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01ab364c + _UNK_01ab3f78),0);
code_r0x01ab3728:
        (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
        uVar4 = 3;
      }
    }
    else {
      piVar8 = *(int **)(param_1 + 0x1c);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar8;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(&UNK_01ab3488 + _UNK_01ab3f6c)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto code_r0x01ab3564;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01ab3488 + _UNK_01ab3f6c),0);
code_r0x01ab3564:
      (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
      uVar4 = 2;
    }
    *(undefined4 *)(param_1 + 8) = uVar4;
  }
  else {
    piVar8 = *(int **)(param_1 + 0x1c);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar8;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(&UNK_01ab32c0 + _UNK_01ab3f60)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto code_r0x01ab339c;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01ab32c0 + _UNK_01ab3f60),0);
code_r0x01ab339c:
    (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 1;
  }
  *(undefined4 *)(param_1 + 0xc) = uStack_20;
  *(undefined4 *)(param_1 + 0x10) = uStack_1c;
  return 1;
}



// ===== FAT.MiniBoardMultiActivity.<ResEnumerate>d__38$$<>m__Finally1 RVA 0x1aa3fb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab3fb0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01ab4064 + 0x1ab3fc4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab4068 + 0x1ab3fd8));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01ab406c + 0x1ab4004)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01ab4050;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01ab406c + 0x1ab4004),0);
LAB_01ab4050:
                    /* WARNING: Could not recover jumptable at 0x01ab4060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MiniBoardMultiActivity.<ResEnumerate>d__38$$<>m__Finally2 RVA 0x1aa4070 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab4070(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01ab4124 + 0x1ab4084);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab4128 + 0x1ab4098));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01ab412c + 0x1ab40c4)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01ab4110;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01ab412c + 0x1ab40c4),0);
LAB_01ab4110:
                    /* WARNING: Could not recover jumptable at 0x01ab4120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MiniBoardMultiActivity.<ResEnumerate>d__38$$<>m__Finally3 RVA 0x1aa4130 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab4130(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01ab41e4 + 0x1ab4144);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab41e8 + 0x1ab4158));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01ab41ec + 0x1ab4184)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01ab41d0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01ab41ec + 0x1ab4184),0);
LAB_01ab41d0:
                    /* WARNING: Could not recover jumptable at 0x01ab41e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MiniBoardMultiActivity.<ResEnumerate>d__38$$<>m__Finally4 RVA 0x1aa41f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab41f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01ab42a4 + 0x1ab4204);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab42a8 + 0x1ab4218));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01ab42ac + 0x1ab4244)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01ab4290;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01ab42ac + 0x1ab4244),0);
LAB_01ab4290:
                    /* WARNING: Could not recover jumptable at 0x01ab42a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MiniBoardMultiActivity.<ResEnumerate>d__38$$<>m__Finally5 RVA 0x1aa42b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab42b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01ab4364 + 0x1ab42c4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab4368 + 0x1ab42d8));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01ab436c + 0x1ab4304)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01ab4350;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01ab436c + 0x1ab4304),0);
LAB_01ab4350:
                    /* WARNING: Could not recover jumptable at 0x01ab4360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MiniBoardMultiActivity.<ResEnumerate>d__38$$<>m__Finally6 RVA 0x1aa4370 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab4370(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01ab4424 + 0x1ab4384);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab4428 + 0x1ab4398));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01ab442c + 0x1ab43c4)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01ab4410;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01ab442c + 0x1ab43c4),0);
LAB_01ab4410:
                    /* WARNING: Could not recover jumptable at 0x01ab4420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MiniBoardMultiActivity.<ResEnumerate>d__38$$<>m__Finally7 RVA 0x1aa4430 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab4430(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01ab44e4 + 0x1ab4444);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab44e8 + 0x1ab4458));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01ab44ec + 0x1ab4484)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01ab44d0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01ab44ec + 0x1ab4484),0);
LAB_01ab44d0:
                    /* WARNING: Could not recover jumptable at 0x01ab44e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MiniBoardMultiActivity.<ResEnumerate>d__38$$System.Collections.Generic.IEnumerator<(System.String,EL.Resource.AssetTag)>.get_Current RVA 0x1aa44f0 =====

void FUN_01ab44f0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *param_1 = *(undefined4 *)(param_2 + 0xc);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.MiniBoardMultiActivity.<ResEnumerate>d__38$$System.Collections.IEnumerator.Reset RVA 0x1aa4504 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab4504(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  func_0x01384988(*(undefined4 *)(_UNK_01ab4540 + 0x1ab4514));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(_UNK_01ab4544 + 0x1ab4530));
  func_0x01384aa0(uVar1,uVar2);
  func_0x01384928();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== FAT.MiniBoardMultiActivity.<ResEnumerate>d__38$$System.Collections.IEnumerator.get_Current RVA 0x1aa4548 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab4548(int param_1)

{
  char *pcVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_01ab45a4 + 0x1ab4560);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab45a8 + 0x1ab4574));
    *pcVar1 = '\x01';
  }
  uStack_18 = *(undefined4 *)(param_1 + 0xc);
  uStack_14 = *(undefined4 *)(param_1 + 0x10);
  func_0x01384abc(**(undefined4 **)(_UNK_01ab45ac + 0x1ab4590),&uStack_18);
  return;
}



// ===== FAT.MiniBoardMultiActivity.<ResEnumerate>d__38$$System.Collections.Generic.IEnumerable<(System.String,EL.Resource.AssetTag)>.GetEnumerator RVA 0x1aa45b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01ab45b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_01ab4650 + 0x1ab45c4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab4654 + 0x1ab45d8));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x0245057c(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01ab4658 + 0x1ab461c));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x0245057c(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}



// ===== FAT.MiniBoardMultiActivity.<ResEnumerate>d__38$$System.Collections.IEnumerable.GetEnumerator RVA 0x1aa465c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_01ab45b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_01ab4650 + 0x1ab45c4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab4654 + 0x1ab45d8));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x0245057c(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01ab4658 + 0x1ab461c));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x0245057c(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}


