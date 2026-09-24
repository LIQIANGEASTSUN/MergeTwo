/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBItemCharge$$get_tapCostComp RVA 0x1e0007c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e1007c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5e8e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e8e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0218b1e0 + 0x218b100);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0218b1e4 + 0x218b114),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0218b1e8 + 0x218b1d0));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x10);
}



// ===== FAT.MBItemCharge$$SetData RVA 0x1e000d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e100d0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iStack_1c;
  
  pcVar5 = (char *)(_UNK_01e10668 + 0x1e100ec);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1066c + 0x1e10100));
    func_0x01384978(*(undefined4 *)(_UNK_01e10670 + 0x1e1010c));
    func_0x01384978(*(undefined4 *)(_UNK_01e10674 + 0x1e10118));
    func_0x01384978(*(undefined4 *)(_UNK_01e10678 + 0x1e10124));
    func_0x01384978(*(undefined4 *)(_UNK_01e1067c + 0x1e10130));
    func_0x01384978(*(undefined4 *)(_UNK_01e10680 + 0x1e1013c));
    func_0x01384978(*(undefined4 *)(_UNK_01e10684 + 0x1e10148));
    func_0x01384978(*(undefined4 *)(_UNK_01e10688 + 0x1e10154));
    func_0x01384978(*(undefined4 *)(_UNK_01e1068c + 0x1e10160));
    func_0x01384978(*(undefined4 *)(_UNK_01e10690 + 0x1e1016c));
    func_0x01384978(*(undefined4 *)(_UNK_01e10694 + 0x1e10178));
    func_0x01384978(*(undefined4 *)(_UNK_01e10698 + 0x1e10184));
    *pcVar5 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x1627,0);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x30) = param_2;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02feb4f8(iVar1,0,**(undefined4 **)(_UNK_01e1069c + 0x1e1020c));
    iVar1 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = uVar2;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02feb4f8(iVar1,0,**(undefined4 **)(_UNK_01e106a0 + 0x1e10248));
    iVar1 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x38) = uVar2;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02feb4f8(iVar1,0,**(undefined4 **)(_UNK_01e106a4 + 0x1e10284));
    iVar1 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02feb4f8(iVar1,0,**(undefined4 **)(_UNK_01e106a8 + 0x1e102c0));
    iVar1 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02feb4f8(iVar1,0,**(undefined4 **)(_UNK_01e106ac + 0x1e102fc));
    iVar1 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x44) = uVar2;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02feb4f8(iVar1,0,**(undefined4 **)(_UNK_01e106b0 + 0x1e10338));
    iVar1 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x48) = uVar2;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02feb4f8(iVar1,0,**(undefined4 **)(_UNK_01e106b4 + 0x1e10374));
    iVar1 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02feb4f8(iVar1,0,**(undefined4 **)(_UNK_01e106b8 + 0x1e103b0));
    iVar1 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02feb4f8(iVar1,0,**(undefined4 **)(_UNK_01e106bc + 0x1e103ec));
    iVar1 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x02feb690(iVar1,&iStack_1c,0,**(undefined4 **)(_UNK_01e106c0 + 0x1e10430));
    iVar4 = iStack_1c;
    iVar1 = 0;
    if (iVar3 != 0) {
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x0211e780(iVar4,0);
      iVar1 = iStack_1c;
      if (iVar4 == 0) {
        iVar1 = 0;
      }
    }
    iVar4 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x58) = iVar1;
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar4 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02feb4f8(iVar1,0,**(undefined4 **)(_UNK_01e106c4 + 0x1e1049c));
    iVar1 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02feb4f8(iVar1,0,**(undefined4 **)(_UNK_01e106c8 + 0x1e104d8));
    iVar1 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar1,0,0);
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar1,0,0);
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244ffd4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar1,0,0);
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar1,0,0);
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar1,0,0);
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244ffd4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar1,0,0);
    iVar1 = func_0x0216ec24(*(undefined4 *)(param_2 + 0x30),0);
    *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
    *(bool *)(param_1 + 100) = 0 < iVar1;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x65) = 0;
    *(undefined2 *)(param_1 + 0x69) = 0;
    func_0x01e106cc(param_1,0);
    func_0x01e10748(param_1);
    func_0x01e107f4(param_1);
    if (*(int *)(param_1 + 0x54) != 0) {
      func_0x01e109d0(param_1,1);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x1627,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MBItemCharge$$_RefreshCD RVA 0x1e006cc =====

void FUN_01e106cc(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x1630,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1630,0);
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
  iVar1 = *(int *)(param_1 + 0x14);
  *(char *)(param_1 + 0x65) = (char)param_2;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar1,param_2,0);
  return;
}



// ===== FAT.MBItemCharge$$_RefreshBoxSource RVA 0x1e00748 =====

/* WARNING: Removing unreachable block (ram,0x01e182d0) */
/* WARNING: Removing unreachable block (ram,0x01e182d8) */
/* WARNING: Removing unreachable block (ram,0x01e182e0) */
/* WARNING: Removing unreachable block (ram,0x01e182e8) */
/* WARNING: Removing unreachable block (ram,0x01e182ec) */
/* WARNING: Removing unreachable block (ram,0x01e18308) */
/* WARNING: Removing unreachable block (ram,0x01e1830c) */
/* WARNING: Removing unreachable block (ram,0x01e18324) */
/* WARNING: Removing unreachable block (ram,0x01e18328) */
/* WARNING: Removing unreachable block (ram,0x01e18340) */
/* WARNING: Removing unreachable block (ram,0x01e18344) */
/* WARNING: Removing unreachable block (ram,0x01e18364) */
/* WARNING: Removing unreachable block (ram,0x01e18378) */
/* WARNING: Removing unreachable block (ram,0x01e18398) */
/* WARNING: Removing unreachable block (ram,0x01e1839c) */
/* WARNING: Removing unreachable block (ram,0x01e18178) */
/* WARNING: Removing unreachable block (ram,0x01e1816c) */
/* WARNING: Removing unreachable block (ram,0x01e183e0) */
/* WARNING: Removing unreachable block (ram,0x01e183e8) */
/* WARNING: Removing unreachable block (ram,0x01e183ec) */
/* WARNING: Removing unreachable block (ram,0x01e127d8) */
/* WARNING: Removing unreachable block (ram,0x022a09b4) */
/* WARNING: Removing unreachable block (ram,0x022a09c0) */
/* WARNING: Removing unreachable block (ram,0x01e18a84) */
/* WARNING: Removing unreachable block (ram,0x01e188e4) */
/* WARNING: Removing unreachable block (ram,0x01e18904) */
/* WARNING: Removing unreachable block (ram,0x01e18930) */
/* WARNING: Removing unreachable block (ram,0x01e18978) */
/* WARNING: Removing unreachable block (ram,0x01e18984) */
/* WARNING: Removing unreachable block (ram,0x01e18988) */
/* WARNING: Removing unreachable block (ram,0x01e189a4) */
/* WARNING: Removing unreachable block (ram,0x01e189a8) */
/* WARNING: Removing unreachable block (ram,0x01e189b4) */
/* WARNING: Removing unreachable block (ram,0x01e189b8) */
/* WARNING: Removing unreachable block (ram,0x01e189ec) */
/* WARNING: Removing unreachable block (ram,0x01e189f0) */
/* WARNING: Removing unreachable block (ram,0x03dd09c8) */
/* WARNING: Removing unreachable block (ram,0x03dd0a44) */
/* WARNING: Removing unreachable block (ram,0x03dd09d8) */
/* WARNING: Removing unreachable block (ram,0x03dd09f8) */
/* WARNING: Removing unreachable block (ram,0x03dd0a04) */
/* WARNING: Removing unreachable block (ram,0x03dd0a14) */
/* WARNING: Removing unreachable block (ram,0x03dd0a1c) */
/* WARNING: Removing unreachable block (ram,0x03dd0a54) */
/* WARNING: Removing unreachable block (ram,0x03dd0a28) */
/* WARNING: Removing unreachable block (ram,0x03dd0a34) */
/* WARNING: Removing unreachable block (ram,0x03dd0a60) */
/* WARNING: Removing unreachable block (ram,0x03dd0a78) */
/* WARNING: Removing unreachable block (ram,0x03dd0a8c) */
/* WARNING: Removing unreachable block (ram,0x03dd0d00) */
/* WARNING: Removing unreachable block (ram,0x03dd0d28) */
/* WARNING: Removing unreachable block (ram,0x03dd0da4) */
/* WARNING: Removing unreachable block (ram,0x03dd0d34) */
/* WARNING: Removing unreachable block (ram,0x03dd0d58) */
/* WARNING: Removing unreachable block (ram,0x03dd0d64) */
/* WARNING: Removing unreachable block (ram,0x03dd0d74) */
/* WARNING: Removing unreachable block (ram,0x03dd0d7c) */
/* WARNING: Removing unreachable block (ram,0x03dd0db8) */
/* WARNING: Removing unreachable block (ram,0x03dd0d88) */
/* WARNING: Removing unreachable block (ram,0x03dd0d94) */
/* WARNING: Removing unreachable block (ram,0x03dd0dc4) */
/* WARNING: Removing unreachable block (ram,0x03dd0de0) */
/* WARNING: Removing unreachable block (ram,0x03dd0df0) */
/* WARNING: Removing unreachable block (ram,0x03dd1074) */
/* WARNING: Removing unreachable block (ram,0x03dd10d0) */
/* WARNING: Removing unreachable block (ram,0x03dd10a4) */
/* WARNING: Removing unreachable block (ram,0x03dd10b0) */
/* WARNING: Removing unreachable block (ram,0x03dd10b4) */
/* WARNING: Removing unreachable block (ram,0x03dd10c0) */
/* WARNING: Removing unreachable block (ram,0x03dd10c4) */
/* WARNING: Removing unreachable block (ram,0x03dd10d4) */
/* WARNING: Removing unreachable block (ram,0x03dd0e00) */
/* WARNING: Removing unreachable block (ram,0x03dd0e20) */
/* WARNING: Removing unreachable block (ram,0x03dd0e24) */
/* WARNING: Removing unreachable block (ram,0x03dd0e38) */
/* WARNING: Removing unreachable block (ram,0x03dd0e48) */
/* WARNING: Removing unreachable block (ram,0x03dd0e58) */
/* WARNING: Removing unreachable block (ram,0x03dd0e5c) */
/* WARNING: Removing unreachable block (ram,0x03dd0e68) */
/* WARNING: Removing unreachable block (ram,0x03dd0e6c) */
/* WARNING: Removing unreachable block (ram,0x03dd0e80) */
/* WARNING: Removing unreachable block (ram,0x03dd0e88) */
/* WARNING: Removing unreachable block (ram,0x03dd0e8c) */
/* WARNING: Removing unreachable block (ram,0x03dd0f0c) */
/* WARNING: Removing unreachable block (ram,0x03dd0f34) */
/* WARNING: Removing unreachable block (ram,0x03dd0f40) */
/* WARNING: Removing unreachable block (ram,0x03dd0e90) */
/* WARNING: Removing unreachable block (ram,0x03dd0ea0) */
/* WARNING: Removing unreachable block (ram,0x03dd0ea4) */
/* WARNING: Removing unreachable block (ram,0x03dd0ec0) */
/* WARNING: Removing unreachable block (ram,0x03dd0ecc) */
/* WARNING: Removing unreachable block (ram,0x03dd0edc) */
/* WARNING: Removing unreachable block (ram,0x03dd0ee4) */
/* WARNING: Removing unreachable block (ram,0x03dd0f60) */
/* WARNING: Removing unreachable block (ram,0x03dd0ef0) */
/* WARNING: Removing unreachable block (ram,0x03dd0efc) */
/* WARNING: Removing unreachable block (ram,0x03dd0f6c) */
/* WARNING: Removing unreachable block (ram,0x03dd0f8c) */
/* WARNING: Removing unreachable block (ram,0x03dd0fbc) */
/* WARNING: Removing unreachable block (ram,0x03dd0ff8) */
/* WARNING: Removing unreachable block (ram,0x03dd1008) */
/* WARNING: Removing unreachable block (ram,0x03dd100c) */
/* WARNING: Removing unreachable block (ram,0x03dd1024) */
/* WARNING: Removing unreachable block (ram,0x03dd1028) */
/* WARNING: Removing unreachable block (ram,0x03dd0fc4) */
/* WARNING: Removing unreachable block (ram,0x03dd0fd0) */
/* WARNING: Removing unreachable block (ram,0x03dd0fd4) */
/* WARNING: Removing unreachable block (ram,0x03dd0fe4) */
/* WARNING: Removing unreachable block (ram,0x03dd0fe8) */
/* WARNING: Removing unreachable block (ram,0x03dd1030) */
/* WARNING: Removing unreachable block (ram,0x03dd0f98) */
/* WARNING: Removing unreachable block (ram,0x03dd0fa8) */
/* WARNING: Removing unreachable block (ram,0x03dd0fb4) */
/* WARNING: Removing unreachable block (ram,0x03dd0aa0) */
/* WARNING: Removing unreachable block (ram,0x03dd0ac0) */
/* WARNING: Removing unreachable block (ram,0x03dd0ac4) */
/* WARNING: Removing unreachable block (ram,0x03dd0ad4) */
/* WARNING: Removing unreachable block (ram,0x03dd0ae4) */
/* WARNING: Removing unreachable block (ram,0x03dd0af4) */
/* WARNING: Removing unreachable block (ram,0x03dd0af8) */
/* WARNING: Removing unreachable block (ram,0x03dd0b04) */
/* WARNING: Removing unreachable block (ram,0x03dd0b08) */
/* WARNING: Removing unreachable block (ram,0x03dd0b20) */
/* WARNING: Removing unreachable block (ram,0x03dd0b28) */
/* WARNING: Removing unreachable block (ram,0x03dd0b2c) */
/* WARNING: Removing unreachable block (ram,0x03dd0bac) */
/* WARNING: Removing unreachable block (ram,0x03dd0bd4) */
/* WARNING: Removing unreachable block (ram,0x03dd0be0) */
/* WARNING: Removing unreachable block (ram,0x03dd0b30) */
/* WARNING: Removing unreachable block (ram,0x03dd0b40) */
/* WARNING: Removing unreachable block (ram,0x03dd0b44) */
/* WARNING: Removing unreachable block (ram,0x03dd0b60) */
/* WARNING: Removing unreachable block (ram,0x03dd0b6c) */
/* WARNING: Removing unreachable block (ram,0x03dd0b7c) */
/* WARNING: Removing unreachable block (ram,0x03dd0b84) */
/* WARNING: Removing unreachable block (ram,0x03dd0c00) */
/* WARNING: Removing unreachable block (ram,0x03dd0b90) */
/* WARNING: Removing unreachable block (ram,0x03dd0b9c) */
/* WARNING: Removing unreachable block (ram,0x03dd0c0c) */
/* WARNING: Removing unreachable block (ram,0x03dd0c2c) */
/* WARNING: Removing unreachable block (ram,0x03dd0c4c) */
/* WARNING: Removing unreachable block (ram,0x03dd0c84) */
/* WARNING: Removing unreachable block (ram,0x03dd0c94) */
/* WARNING: Removing unreachable block (ram,0x03dd0c98) */
/* WARNING: Removing unreachable block (ram,0x03dd0cac) */
/* WARNING: Removing unreachable block (ram,0x03dd0cb0) */
/* WARNING: Removing unreachable block (ram,0x03dd0c54) */
/* WARNING: Removing unreachable block (ram,0x03dd0c60) */
/* WARNING: Removing unreachable block (ram,0x03dd0c64) */
/* WARNING: Removing unreachable block (ram,0x03dd0c74) */
/* WARNING: Removing unreachable block (ram,0x03dd0c78) */
/* WARNING: Removing unreachable block (ram,0x03dd0cb8) */
/* WARNING: Removing unreachable block (ram,0x03dd0c34) */
/* WARNING: Removing unreachable block (ram,0x03dd0c44) */
/* WARNING: Removing unreachable block (ram,0x03dd0cf4) */
/* WARNING: Removing unreachable block (ram,0x01e18944) */
/* WARNING: Removing unreachable block (ram,0x01e1895c) */
/* WARNING: Removing unreachable block (ram,0x01e18960) */
/* WARNING: Removing unreachable block (ram,0x01e18aa0) */
/* WARNING: Removing unreachable block (ram,0x01e18ab8) */
/* WARNING: Removing unreachable block (ram,0x01e18abc) */
/* WARNING: Removing unreachable block (ram,0x022a0988) */
/* WARNING: Removing unreachable block (ram,0x022a099c) */
/* WARNING: Removing unreachable block (ram,0x022a09a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e10748(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x1631,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0210e250(iVar1,9,0,0);
    uVar4 = 0;
    if (iVar1 != 0) {
      uVar4 = (uint)*(byte *)(param_1 + 100);
    }
    if (iVar1 == 0 || uVar4 == 0) {
      return uVar4;
    }
    func_0x01e126d0(param_1,1);
    iVar1 = func_0x0229f06c(0x163f,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0x163f,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,1,0);
      uStack_38 = uStack_50;
      iStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar1 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485228(&uStack_38,1,0);
      iVar2 = *(int *)(iVar1 + 8);
      uVar10 = *(undefined4 *)(iVar1 + 0xc);
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar5 = 3;
      if (iVar1 == 0) {
        uVar5 = 2;
      }
      uVar4 = func_0x0245495c(iVar2,uVar10,&uStack_38,uVar5,0,0);
      return uVar4;
    }
    iVar1 = *(int *)(param_1 + 0x30);
    *(undefined1 *)(param_1 + 0x67) = 1;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0229f06c(0x1640,0);
    if (iVar2 == 0) {
      iVar1 = *(int *)(iVar1 + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0229f06c(0x1641,0);
      if (iVar2 == 0) {
        pcVar6 = (char *)(_UNK_01e1882c + 0x1e18078);
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
          func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
          func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
          func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
          func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
          func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
          *pcVar6 = '\x01';
        }
        iVar2 = func_0x0229f06c(0x1636,0);
        if (iVar2 != 0) {
          iVar2 = func_0x0229f13c(0x1636,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_38 = 0;
          uStack_28 = 0;
          func_0x0245494c(&uStack_50,0,0,0);
          uStack_38 = uStack_50;
          iStack_34 = uStack_4c;
          uStack_30 = uStack_48;
          uStack_2c = uStack_44;
          uStack_28 = uStack_40;
          if (*(int *)(iVar2 + 0x10) != 0) {
            func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
          }
          func_0x01485278(&uStack_38,iVar1,0);
          func_0x01485238(&uStack_38,0,0);
          iVar8 = *(int *)(iVar2 + 8);
          uVar10 = *(undefined4 *)(iVar2 + 0xc);
          iVar1 = *(int *)(iVar2 + 0x10);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          uVar5 = 3;
          if (iVar1 == 0) {
            uVar5 = 2;
          }
          uVar4 = func_0x0245495c(iVar8,uVar10,&uStack_38,uVar5,0,0);
          return uVar4;
        }
        iVar2 = *(int *)(iVar1 + 0x20);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar4 = func_0x03dcf4b4(iVar2,0,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
        if (uVar4 == 0) {
          iVar2 = func_0x01e1a508(iVar1,0);
          pcVar6 = (char *)(_UNK_01e1884c + 0x1e1816c);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar8 = func_0x024504c0(iVar2,0);
          uVar10 = *(undefined4 *)(iVar1 + 0x14);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          func_0x024505b4(iVar8,uVar10,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iStack_34 = iVar1;
          iVar1 = func_0x024504c0(iVar2,0);
          if (*pcVar6 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01e18870 + 0x1e18454));
            *pcVar6 = '\x01';
          }
          piVar11 = *(int **)(_UNK_01e18874 + 0x1e18470);
          puVar3 = *(undefined4 **)(*piVar11 + 0x5c);
          uVar10 = puVar3[2];
          uVar5 = *puVar3;
          uVar9 = puVar3[1];
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uStack_38 = 0;
          func_0x0245068c(iVar1,uVar5,uVar9,uVar10);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x024504c0(iVar2,0);
          pcVar7 = (char *)(_UNK_01e18878 + 0x1e184c8);
          if (*pcVar7 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01e1887c + 0x1e184dc));
            *pcVar7 = '\x01';
          }
          iVar8 = *(int *)(*piVar11 + 0x5c);
          uVar10 = *(undefined4 *)(iVar8 + 0xc);
          uVar5 = *(undefined4 *)(iVar8 + 0x10);
          uVar9 = *(undefined4 *)(iVar8 + 0x14);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uStack_38 = 0;
          func_0x024503a4(iVar1,uVar10,uVar5,uVar9);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x024504c0(iVar2,0);
          if (*pcVar6 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01e18880 + 0x1e18550));
            *pcVar6 = '\x01';
          }
          puVar3 = *(undefined4 **)(*piVar11 + 0x5c);
          uVar10 = *puVar3;
          uVar5 = puVar3[1];
          uVar9 = puVar3[2];
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uStack_38 = 0;
          func_0x02450c24(iVar1,uVar10,uVar5,uVar9);
          iVar1 = *(int *)(iStack_34 + 0x20);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar4 = func_0x03dcf268(iVar1,0,iVar2,**(undefined4 **)(_UNK_01e18884 + 0x1e185b4));
        }
        return uVar4;
      }
      iVar2 = func_0x0229f13c(0x1641,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar2 = func_0x0229f13c(0x1640);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x1631,0);
    iVar1 = param_1;
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
  func_0x01485278(&uStack_30,iVar1,0);
  iVar8 = *(int *)(iVar2 + 8);
  uVar10 = *(undefined4 *)(iVar2 + 0xc);
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  uVar4 = func_0x0245495c(iVar8,uVar10,&uStack_30,uVar5);
  return uVar4;
}



// ===== FAT.MBItemCharge$$_RefreshOrderBox RVA 0x1e007f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e107f4(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_01e109bc + 0x1e1080c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e109c0 + 0x1e10820));
    func_0x01384978(*(undefined4 *)(_UNK_01e109c4 + 0x1e1082c));
    *pcVar3 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x1644,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02feb690(iVar1,&iStack_14,0,**(undefined4 **)(_UNK_01e109c8 + 0x1e108b4));
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x24);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = iStack_14;
      uVar4 = *(undefined4 *)(iVar1 + 0x10);
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02132318(iVar2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x1c);
      if (*(int *)(**(int **)(_UNK_01e109cc + 0x1e10910) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = iVar1 >> 0x1f;
      iVar1 = iVar1 / 1000 + iVar2;
      iVar2 = iVar1 - iVar2;
      func_0x02089060(uVar4,iVar1,iVar2,iVar2 >> 0x1f,1,0);
      iVar1 = *(int *)(param_1 + 0x24);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0244ffe4(iVar1,1,0);
      iVar1 = *(int *)(param_1 + 0x28);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0244ffe4(iVar1,0,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x1644,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MBItemCharge$$_TryRefreshBonus RVA 0x1e009d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e109d0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar6;
  int *piVar7;
  int extraout_r3;
  int extraout_r3_00;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 auStack_28 [2];
  undefined4 uStack_20;
  
  pcVar12 = (char *)(_UNK_01e10b54 + 0x1e109e8);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e10b58 + 0x1e109fc));
    *pcVar12 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1646,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1646,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    uVar2 = func_0x0245495c(iVar9,uVar13,&uStack_38,uVar6);
    return uVar2;
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x54);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02123568(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar13 = func_0x0210e5f4(iVar1,0);
    iVar1 = *(int *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x74) = uVar13;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02123568(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar13 = func_0x0210e2d4(iVar1,0);
    puVar5 = *(undefined4 **)(_UNK_01e10b5c + 0x1e10ad4);
    *(undefined4 *)(param_1 + 0x78) = uVar13;
    iVar1 = func_0x03668dfc(*puVar5);
    uVar6 = *(undefined4 *)(param_1 + 0x74);
    uVar13 = *(undefined4 *)(param_1 + 0x78);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar12 = (char *)(_UNK_01de9960 + 0x1de98bc);
    if (*pcVar12 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01de9964 + 0x1de98d0),uVar6,uVar13,0);
      *pcVar12 = '\x01';
    }
    iVar9 = func_0x0229f06c(0x1647,0);
    if (iVar9 == 0) {
      iVar1 = *(int *)(iVar1 + 0x44);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x03d5a8e0(iVar1,uVar6,uVar13,0);
      return uVar2;
    }
    iVar9 = func_0x0229f13c(0x1647,0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar2 = func_0x02179a68(iVar9,iVar1,uVar6,uVar13);
    return uVar2;
  }
  puVar5 = *(undefined4 **)(_UNK_01e10b60 + 0x1e10b20);
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  iVar1 = func_0x03668dfc(*puVar5);
  uVar13 = *(undefined4 *)(param_1 + 0x74);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar12 = (char *)(_UNK_01de9a14 + 0x1de9984);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de9a18 + 0x1de9998),uVar13,0);
    *pcVar12 = '\x01';
  }
  iVar9 = func_0x0229f06c(0x1648,0);
  if (iVar9 != 0) {
    iVar9 = func_0x0229f13c(0x1648,0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0,uVar13,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar9 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar9 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485238(&uStack_38,uVar13,0);
    iVar10 = *(int *)(iVar9 + 8);
    uVar13 = *(undefined4 *)(iVar9 + 0xc);
    iVar1 = *(int *)(iVar9 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    uVar2 = func_0x0245495c(iVar10,uVar13,&uStack_38,uVar6);
    return uVar2;
  }
  iVar1 = *(int *)(iVar1 + 0x44);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_34 = **(int **)(_UNK_01de9a1c + 0x1de9a08);
  if (*(int *)(iVar1 + 8) != 0) {
    piVar8 = *(int **)(iVar1 + 0x20);
    iStack_30 = iVar1;
    auStack_28[0] = uVar13;
    if (piVar8 == (int *)0x0) {
      uVar2 = func_0x04821a00(auStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc4));
    }
    else {
      iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x02457d84(iVar1);
      }
      iVar9 = *piVar8;
      uVar2 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar1) {
            puVar5 = (undefined4 *)(iVar9 + *piVar7 * 8 + 200);
            goto LAB_03d5b514;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined4 *)func_0x02457d88(piVar8,iVar1,1);
LAB_03d5b514:
      uVar2 = (*(code *)*puVar5)(piVar8,uVar13,puVar5[1]);
      iVar1 = iStack_30;
    }
    uVar14 = *(uint *)(iVar1 + 8);
    uVar11 = uVar14;
    if (uVar14 == 0) {
      func_0x02457d50();
      uVar11 = *(uint *)(iStack_30 + 8);
      if (uVar11 == 0) {
        uVar15 = func_0x02457d50();
        uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
        iVar1 = (int)uVar15;
        uStack_54 = 0;
        if (*(int *)(iVar1 + 8) != 0) {
          piVar8 = *(int **)(iVar1 + 0x20);
          uStack_60 = uVar13;
          uStack_5c = uVar2;
          uStack_58 = uVar11;
          uStack_50 = uVar14;
          if (piVar8 == (int *)0x0) {
            uVar2 = func_0x04821a00(&uStack_60,
                                    *(undefined4 *)
                                     (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0xc4));
          }
          else {
            iVar9 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
              iVar9 = func_0x02457d84(iVar9);
            }
            iVar10 = *piVar8;
            uVar2 = (uint)*(ushort *)(iVar10 + 0xb6);
            if (uVar2 != 0) {
              piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
              do {
                if (piVar7[-1] == iVar9) {
                  puVar5 = (undefined4 *)(iVar10 + *piVar7 * 8 + 200);
                  goto LAB_03d5b878;
                }
                uVar2 = uVar2 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar2 != 0);
            }
            puVar5 = (undefined4 *)func_0x02457d88(piVar8,iVar9,1);
LAB_03d5b878:
            uVar2 = (*(code *)*puVar5)(piVar8,uVar13,puVar5[1]);
          }
          iVar10 = *(int *)(iVar1 + 8);
          iVar9 = iVar10;
          if (iVar10 == 0) {
            func_0x02457d50();
            iVar9 = *(int *)(iVar1 + 8);
            if (iVar9 == 0) {
              uVar15 = func_0x02457d50();
              uVar2 = func_0x03d5a510((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) + 0x84));
              if ((int)uVar2 < 0) {
                uVar13 = 0;
              }
              else {
                iVar1 = *(int *)((int)uVar15 + 0xc);
                if (iVar1 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                  func_0x02457d5c();
                }
                uVar13 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
              }
              *extraout_r2_00 = uVar13;
              return ~uVar2 >> 0x1f;
            }
          }
          func_0x02457e94(uVar2 & 0x7fffffff,*(undefined4 *)(iVar10 + 0xc));
          if (*(uint *)(iVar9 + 0xc) <= extraout_r1_00) {
            func_0x02457d5c();
          }
          uVar11 = *(int *)(iVar9 + extraout_r1_00 * 4 + 0x10) - 1;
          if (-1 < (int)uVar11) {
            uVar14 = 0xffffffff;
            do {
              uVar3 = uVar11;
              iVar9 = *(int *)(iVar1 + 0xc);
              if (iVar9 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar9 + 0xc) <= uVar3) {
                func_0x02457d5c();
              }
              uVar13 = uStack_60;
              iVar9 = iVar9 + uVar3 * 0x10;
              if (*(uint *)(iVar9 + 0x10) == (uVar2 & 0x7fffffff)) {
                piVar8 = *(int **)(iVar1 + 0x20);
                if (piVar8 == (int *)0x0) {
                  piVar8 = (int *)func_0x02ecaf98(*(undefined4 *)
                                                   (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) +
                                                   0xc));
                  uVar13 = uStack_60;
                  uVar6 = *(undefined4 *)(iVar9 + 0x18);
                  if (piVar8 == (int *)0x0) {
                    func_0x02457d50(0,uVar6);
                  }
                  iVar10 = (**(code **)(*piVar8 + 0x100))
                                     (piVar8,uVar6,uVar13,*(undefined4 *)(*piVar8 + 0x104));
                }
                else {
                  uVar6 = *(undefined4 *)(iVar9 + 0x18);
                  if (piVar8 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
                    iVar10 = func_0x02457d84(iVar10);
                  }
                  iVar4 = *piVar8;
                  uVar11 = (uint)*(ushort *)(iVar4 + 0xb6);
                  if (uVar11 != 0) {
                    piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                    do {
                      if (piVar7[-1] == iVar10) {
                        puVar5 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xc0);
                        goto LAB_03d5ba20;
                      }
                      uVar11 = uVar11 - 1;
                      piVar7 = piVar7 + 2;
                    } while (uVar11 != 0);
                  }
                  puVar5 = (undefined4 *)func_0x02457d88(piVar8,iVar10,0);
LAB_03d5ba20:
                  iVar10 = (*(code *)*puVar5)(piVar8,uVar6,uVar13,puVar5[1]);
                }
                if (iVar10 != 0) {
                  if ((int)uVar14 < 0) {
                    iVar10 = *(int *)(iVar1 + 8);
                    iVar4 = *(int *)(iVar9 + 0x14);
                    if (iVar10 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
                      func_0x02457d5c();
                    }
                    *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) = iVar4 + 1;
                  }
                  else {
                    iVar10 = *(int *)(iVar1 + 0xc);
                    if (iVar10 == 0) {
                      func_0x02457d50();
                    }
                    uVar13 = *(undefined4 *)(iVar9 + 0x14);
                    if (*(uint *)(iVar10 + 0xc) <= uVar14) {
                      func_0x02457d5c();
                    }
                    *(undefined4 *)(iVar10 + uVar14 * 0x10 + 0x14) = uVar13;
                  }
                  *extraout_r2 = *(undefined4 *)(iVar9 + 0x1c);
                  uVar13 = *(undefined4 *)(iVar1 + 0x14);
                  iVar10 = *(int *)(iVar1 + 0x18);
                  iVar4 = *(int *)(iVar1 + 0x1c);
                  *(uint *)(iVar9 + 0x10) = 0xffffffff;
                  *(int *)(iVar1 + 0x18) = iVar10 + 1;
                  *(int *)(iVar1 + 0x1c) = iVar4 + 1;
                  *(uint *)(iVar1 + 0x14) = uVar3;
                  *(undefined4 *)(iVar9 + 0x14) = uVar13;
                  return 1;
                }
              }
              uVar11 = *(uint *)(iVar9 + 0x14);
              uVar14 = uVar3;
            } while (*(uint *)(iVar9 + 0x14) < 0x80000000);
          }
        }
        *extraout_r2 = 0;
        return 0;
      }
    }
    uStack_2c = uVar2 & 0x7fffffff;
    func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
    if (*(uint *)(uVar11 + 0xc) <= extraout_r1) {
      func_0x02457d5c();
    }
    uVar2 = *(int *)(uVar11 + extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar2) {
      iVar1 = iStack_30;
      uVar11 = 0xffffffff;
      uStack_38 = extraout_r1;
      do {
        uVar14 = uVar2;
        iVar9 = *(int *)(iVar1 + 0xc);
        if (iVar9 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar9 + 0xc) <= uVar14) {
          func_0x02457d5c();
        }
        uVar13 = auStack_28[0];
        iVar9 = iVar9 + uVar14 * 0x10;
        if (*(uint *)(iVar9 + 0x10) == uStack_2c) {
          piVar8 = *(int **)(iVar1 + 0x20);
          if (piVar8 == (int *)0x0) {
            piVar8 = (int *)func_0x02ecaf98(*(undefined4 *)
                                             (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc));
            uVar13 = auStack_28[0];
            uVar6 = *(undefined4 *)(iVar9 + 0x18);
            if (piVar8 == (int *)0x0) {
              func_0x02457d50(0,uVar6);
            }
            iVar10 = (**(code **)(*piVar8 + 0x100))
                               (piVar8,uVar6,uVar13,*(undefined4 *)(*piVar8 + 0x104));
          }
          else {
            uVar6 = *(undefined4 *)(iVar9 + 0x18);
            if (piVar8 == (int *)0x0) {
              func_0x02457d50();
            }
            iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x02457d84(iVar1);
            }
            iVar10 = *piVar8;
            uVar2 = (uint)*(ushort *)(iVar10 + 0xb6);
            if (uVar2 != 0) {
              piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
              do {
                if (piVar7[-1] == iVar1) {
                  puVar5 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xc0);
                  goto LAB_03d5b6c0;
                }
                uVar2 = uVar2 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar2 != 0);
            }
            puVar5 = (undefined4 *)func_0x02457d88(piVar8,iVar1,0);
LAB_03d5b6c0:
            iVar10 = (*(code *)*puVar5)(piVar8,uVar6,uVar13,puVar5[1]);
          }
          iVar1 = iStack_30;
          if (iVar10 != 0) {
            if ((int)uVar11 < 0) {
              iVar1 = *(int *)(iStack_30 + 8);
              iVar10 = *(int *)(iVar9 + 0x14);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar2 = uStack_38;
              if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                func_0x02457d5c();
              }
              *(int *)(iVar1 + uVar2 * 4 + 0x10) = iVar10 + 1;
            }
            else {
              iVar1 = *(int *)(iStack_30 + 0xc);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar13 = *(undefined4 *)(iVar9 + 0x14);
              if (*(uint *)(iVar1 + 0xc) <= uVar11) {
                func_0x02457d5c();
              }
              *(undefined4 *)(iVar1 + uVar11 * 0x10 + 0x14) = uVar13;
            }
            *(uint *)(iVar9 + 0x10) = 0xffffffff;
            uVar13 = *(undefined4 *)(iStack_30 + 0x14);
            *(int *)(iStack_30 + 0x18) = *(int *)(iStack_30 + 0x18) + 1;
            *(uint *)(iStack_30 + 0x14) = uVar14;
            *(int *)(iStack_30 + 0x1c) = *(int *)(iStack_30 + 0x1c) + 1;
            *(undefined4 *)(iVar9 + 0x14) = uVar13;
            return 1;
          }
        }
        uVar2 = *(uint *)(iVar9 + 0x14);
        uVar11 = uVar14;
      } while (*(uint *)(iVar9 + 0x14) < 0x80000000);
    }
  }
  return 0;
}



// ===== FAT.MBItemCharge$$ClearData RVA 0x1e00b64 =====

/* WARNING: Removing unreachable block (ram,0x01e10a54) */
/* WARNING: Removing unreachable block (ram,0x01e10a60) */
/* WARNING: Removing unreachable block (ram,0x01e10a64) */
/* WARNING: Removing unreachable block (ram,0x01e10a7c) */
/* WARNING: Removing unreachable block (ram,0x01e10a80) */
/* WARNING: Removing unreachable block (ram,0x01e10a9c) */
/* WARNING: Removing unreachable block (ram,0x01e10aa0) */
/* WARNING: Removing unreachable block (ram,0x01e10ab8) */
/* WARNING: Removing unreachable block (ram,0x01e10abc) */
/* WARNING: Removing unreachable block (ram,0x01e10af4) */
/* WARNING: Removing unreachable block (ram,0x01de989c) */
/* WARNING: Removing unreachable block (ram,0x01de98c4) */
/* WARNING: Removing unreachable block (ram,0x01de98d8) */
/* WARNING: Removing unreachable block (ram,0x01de98ec) */
/* WARNING: Removing unreachable block (ram,0x01de9908) */
/* WARNING: Removing unreachable block (ram,0x01de990c) */
/* WARNING: Removing unreachable block (ram,0x01de992c) */
/* WARNING: Removing unreachable block (ram,0x01de9938) */
/* WARNING: Removing unreachable block (ram,0x01de993c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e10b64(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar6;
  int *piVar7;
  int extraout_r3;
  int extraout_r3_00;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  iVar2 = func_0x0229f06c(0x5d9a,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5d9a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&stack0xffffffb8,0,0);
    uStack_20 = uStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar13 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar2 == 0) {
      uVar6 = 1;
    }
    uStack_50 = 0;
    uVar3 = func_0x0245495c(iVar9,uVar13,&iStack_30,uVar6);
    return uVar3;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    func_0x02ce9e90(*(int *)(param_1 + 0x7c),0,0);
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (*(int *)(param_1 + 0x54) == 0) {
    return 0;
  }
  pcVar12 = (char *)(_UNK_01e10b54 + 0x1e109e8);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e10b58 + 0x1e109fc));
    *pcVar12 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x1646,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x1646,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,0,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,0,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar13 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    iStack_58 = 0;
    uStack_54 = 0;
    uVar3 = func_0x0245495c(iVar9,uVar13,&uStack_38,uVar6);
    return uVar3;
  }
  puVar1 = *(undefined4 **)(_UNK_01e10b60 + 0x1e10b20);
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  iVar2 = func_0x03668dfc(*puVar1);
  uVar13 = *(undefined4 *)(param_1 + 0x74);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar12 = (char *)(_UNK_01de9a14 + 0x1de9984);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de9a18 + 0x1de9998),uVar13,0);
    *pcVar12 = '\x01';
  }
  iVar9 = func_0x0229f06c(0x1648,0);
  if (iVar9 != 0) {
    iVar9 = func_0x0229f13c(0x1648,0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,uVar13,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar9 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar9 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485238(&uStack_38,uVar13,0);
    iVar10 = *(int *)(iVar9 + 8);
    uVar13 = *(undefined4 *)(iVar9 + 0xc);
    iVar2 = *(int *)(iVar9 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    iStack_58 = 0;
    uStack_54 = 0;
    uVar3 = func_0x0245495c(iVar10,uVar13,&uStack_38,uVar6);
    return uVar3;
  }
  iVar2 = *(int *)(iVar2 + 0x44);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iStack_34 = **(int **)(_UNK_01de9a1c + 0x1de9a08);
  if (*(int *)(iVar2 + 8) != 0) {
    piVar8 = *(int **)(iVar2 + 0x20);
    iStack_30 = iVar2;
    uStack_28 = uVar13;
    if (piVar8 == (int *)0x0) {
      uVar3 = func_0x04821a00(&uStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc4));
    }
    else {
      iVar2 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x02457d84(iVar2);
      }
      iVar9 = *piVar8;
      uVar3 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar2) {
            puVar1 = (undefined4 *)(iVar9 + *piVar7 * 8 + 200);
            goto LAB_03d5b514;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined4 *)func_0x02457d88(piVar8,iVar2,1);
LAB_03d5b514:
      uVar3 = (*(code *)*puVar1)(piVar8,uVar13,puVar1[1]);
      iVar2 = iStack_30;
    }
    uVar14 = *(uint *)(iVar2 + 8);
    uVar11 = uVar14;
    if (uVar14 == 0) {
      func_0x02457d50();
      uVar11 = *(uint *)(iStack_30 + 8);
      if (uVar11 == 0) {
        uVar15 = func_0x02457d50();
        uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
        iVar2 = (int)uVar15;
        uStack_54 = 0;
        if (*(int *)(iVar2 + 8) != 0) {
          piVar8 = *(int **)(iVar2 + 0x20);
          uStack_60 = uVar13;
          uStack_5c = uVar3;
          iStack_58 = uVar11;
          uStack_50 = uVar14;
          if (piVar8 == (int *)0x0) {
            uVar3 = func_0x04821a00(&uStack_60,
                                    *(undefined4 *)
                                     (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0xc4));
          }
          else {
            iVar9 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
              iVar9 = func_0x02457d84(iVar9);
            }
            iVar10 = *piVar8;
            uVar3 = (uint)*(ushort *)(iVar10 + 0xb6);
            if (uVar3 != 0) {
              piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
              do {
                if (piVar7[-1] == iVar9) {
                  puVar1 = (undefined4 *)(iVar10 + *piVar7 * 8 + 200);
                  goto LAB_03d5b878;
                }
                uVar3 = uVar3 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar3 != 0);
            }
            puVar1 = (undefined4 *)func_0x02457d88(piVar8,iVar9,1);
LAB_03d5b878:
            uVar3 = (*(code *)*puVar1)(piVar8,uVar13,puVar1[1]);
          }
          iVar10 = *(int *)(iVar2 + 8);
          iVar9 = iVar10;
          if (iVar10 == 0) {
            func_0x02457d50();
            iVar9 = *(int *)(iVar2 + 8);
            if (iVar9 == 0) {
              uVar15 = func_0x02457d50();
              uVar3 = func_0x03d5a510((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) + 0x84));
              if ((int)uVar3 < 0) {
                uVar13 = 0;
              }
              else {
                iVar2 = *(int *)((int)uVar15 + 0xc);
                if (iVar2 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar2 + 0xc) <= uVar3) {
                  func_0x02457d5c();
                }
                uVar13 = *(undefined4 *)(iVar2 + uVar3 * 0x10 + 0x1c);
              }
              *extraout_r2_00 = uVar13;
              return ~uVar3 >> 0x1f;
            }
          }
          func_0x02457e94(uVar3 & 0x7fffffff,*(undefined4 *)(iVar10 + 0xc));
          if (*(uint *)(iVar9 + 0xc) <= extraout_r1_00) {
            func_0x02457d5c();
          }
          uVar11 = *(int *)(iVar9 + extraout_r1_00 * 4 + 0x10) - 1;
          if (-1 < (int)uVar11) {
            uVar14 = 0xffffffff;
            do {
              uVar4 = uVar11;
              iVar9 = *(int *)(iVar2 + 0xc);
              if (iVar9 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar9 + 0xc) <= uVar4) {
                func_0x02457d5c();
              }
              uVar13 = uStack_60;
              iVar9 = iVar9 + uVar4 * 0x10;
              if (*(uint *)(iVar9 + 0x10) == (uVar3 & 0x7fffffff)) {
                piVar8 = *(int **)(iVar2 + 0x20);
                if (piVar8 == (int *)0x0) {
                  piVar8 = (int *)func_0x02ecaf98(*(undefined4 *)
                                                   (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) +
                                                   0xc));
                  uVar13 = uStack_60;
                  uVar6 = *(undefined4 *)(iVar9 + 0x18);
                  if (piVar8 == (int *)0x0) {
                    func_0x02457d50(0,uVar6);
                  }
                  iVar10 = (**(code **)(*piVar8 + 0x100))
                                     (piVar8,uVar6,uVar13,*(undefined4 *)(*piVar8 + 0x104));
                }
                else {
                  uVar6 = *(undefined4 *)(iVar9 + 0x18);
                  if (piVar8 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
                    iVar10 = func_0x02457d84(iVar10);
                  }
                  iVar5 = *piVar8;
                  uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
                  if (uVar11 != 0) {
                    piVar7 = (int *)(*(int *)(iVar5 + 0x58) + 4);
                    do {
                      if (piVar7[-1] == iVar10) {
                        puVar1 = (undefined4 *)(iVar5 + *piVar7 * 8 + 0xc0);
                        goto LAB_03d5ba20;
                      }
                      uVar11 = uVar11 - 1;
                      piVar7 = piVar7 + 2;
                    } while (uVar11 != 0);
                  }
                  puVar1 = (undefined4 *)func_0x02457d88(piVar8,iVar10,0);
LAB_03d5ba20:
                  iVar10 = (*(code *)*puVar1)(piVar8,uVar6,uVar13,puVar1[1]);
                }
                if (iVar10 != 0) {
                  if ((int)uVar14 < 0) {
                    iVar10 = *(int *)(iVar2 + 8);
                    iVar5 = *(int *)(iVar9 + 0x14);
                    if (iVar10 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
                      func_0x02457d5c();
                    }
                    *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) = iVar5 + 1;
                  }
                  else {
                    iVar10 = *(int *)(iVar2 + 0xc);
                    if (iVar10 == 0) {
                      func_0x02457d50();
                    }
                    uVar13 = *(undefined4 *)(iVar9 + 0x14);
                    if (*(uint *)(iVar10 + 0xc) <= uVar14) {
                      func_0x02457d5c();
                    }
                    *(undefined4 *)(iVar10 + uVar14 * 0x10 + 0x14) = uVar13;
                  }
                  *extraout_r2 = *(undefined4 *)(iVar9 + 0x1c);
                  uVar13 = *(undefined4 *)(iVar2 + 0x14);
                  iVar10 = *(int *)(iVar2 + 0x18);
                  iVar5 = *(int *)(iVar2 + 0x1c);
                  *(uint *)(iVar9 + 0x10) = 0xffffffff;
                  *(int *)(iVar2 + 0x18) = iVar10 + 1;
                  *(int *)(iVar2 + 0x1c) = iVar5 + 1;
                  *(uint *)(iVar2 + 0x14) = uVar4;
                  *(undefined4 *)(iVar9 + 0x14) = uVar13;
                  return 1;
                }
              }
              uVar11 = *(uint *)(iVar9 + 0x14);
              uVar14 = uVar4;
            } while (*(uint *)(iVar9 + 0x14) < 0x80000000);
          }
        }
        *extraout_r2 = 0;
        return 0;
      }
    }
    uStack_2c = uVar3 & 0x7fffffff;
    func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
    if (*(uint *)(uVar11 + 0xc) <= extraout_r1) {
      func_0x02457d5c();
    }
    uVar3 = *(int *)(uVar11 + extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar3) {
      iVar2 = iStack_30;
      uVar11 = 0xffffffff;
      uStack_38 = extraout_r1;
      do {
        uVar14 = uVar3;
        iVar9 = *(int *)(iVar2 + 0xc);
        if (iVar9 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar9 + 0xc) <= uVar14) {
          func_0x02457d5c();
        }
        uVar13 = uStack_28;
        iVar9 = iVar9 + uVar14 * 0x10;
        if (*(uint *)(iVar9 + 0x10) == uStack_2c) {
          piVar8 = *(int **)(iVar2 + 0x20);
          if (piVar8 == (int *)0x0) {
            piVar8 = (int *)func_0x02ecaf98(*(undefined4 *)
                                             (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc));
            uVar13 = uStack_28;
            uVar6 = *(undefined4 *)(iVar9 + 0x18);
            if (piVar8 == (int *)0x0) {
              func_0x02457d50(0,uVar6);
            }
            iVar10 = (**(code **)(*piVar8 + 0x100))
                               (piVar8,uVar6,uVar13,*(undefined4 *)(*piVar8 + 0x104));
          }
          else {
            uVar6 = *(undefined4 *)(iVar9 + 0x18);
            if (piVar8 == (int *)0x0) {
              func_0x02457d50();
            }
            iVar2 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
              iVar2 = func_0x02457d84(iVar2);
            }
            iVar10 = *piVar8;
            uVar3 = (uint)*(ushort *)(iVar10 + 0xb6);
            if (uVar3 != 0) {
              piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
              do {
                if (piVar7[-1] == iVar2) {
                  puVar1 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xc0);
                  goto LAB_03d5b6c0;
                }
                uVar3 = uVar3 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar3 != 0);
            }
            puVar1 = (undefined4 *)func_0x02457d88(piVar8,iVar2,0);
LAB_03d5b6c0:
            iVar10 = (*(code *)*puVar1)(piVar8,uVar6,uVar13,puVar1[1]);
          }
          iVar2 = iStack_30;
          if (iVar10 != 0) {
            if ((int)uVar11 < 0) {
              iVar2 = *(int *)(iStack_30 + 8);
              iVar10 = *(int *)(iVar9 + 0x14);
              if (iVar2 == 0) {
                func_0x02457d50();
              }
              uVar3 = uStack_38;
              if (*(uint *)(iVar2 + 0xc) <= uStack_38) {
                func_0x02457d5c();
              }
              *(int *)(iVar2 + uVar3 * 4 + 0x10) = iVar10 + 1;
            }
            else {
              iVar2 = *(int *)(iStack_30 + 0xc);
              if (iVar2 == 0) {
                func_0x02457d50();
              }
              uVar13 = *(undefined4 *)(iVar9 + 0x14);
              if (*(uint *)(iVar2 + 0xc) <= uVar11) {
                func_0x02457d5c();
              }
              *(undefined4 *)(iVar2 + uVar11 * 0x10 + 0x14) = uVar13;
            }
            *(uint *)(iVar9 + 0x10) = 0xffffffff;
            uVar13 = *(undefined4 *)(iStack_30 + 0x14);
            *(int *)(iStack_30 + 0x18) = *(int *)(iStack_30 + 0x18) + 1;
            *(uint *)(iStack_30 + 0x14) = uVar14;
            *(int *)(iStack_30 + 0x1c) = *(int *)(iStack_30 + 0x1c) + 1;
            *(undefined4 *)(iVar9 + 0x14) = uVar13;
            return 1;
          }
        }
        uVar3 = *(uint *)(iVar9 + 0x14);
        uVar11 = uVar14;
      } while (*(uint *)(iVar9 + 0x14) < 0x80000000);
    }
  }
  return 0;
}



// ===== FAT.MBItemCharge$$UpdateEx RVA 0x1e00bf8 =====

/* WARNING: Possible PIC construction at 0x01e10edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e115a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e11840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e13488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e134f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e119cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e11bfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e11fd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e1206c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e1209c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e12224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e12254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e123e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e12410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e12510: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e12414) */
/* WARNING: Removing unreachable block (ram,0x01e123e4) */
/* WARNING: Removing unreachable block (ram,0x01e123f0) */
/* WARNING: Removing unreachable block (ram,0x01e123f4) */
/* WARNING: Removing unreachable block (ram,0x01e12400) */
/* WARNING: Removing unreachable block (ram,0x01e12404) */
/* WARNING: Removing unreachable block (ram,0x01e12258) */
/* WARNING: Removing unreachable block (ram,0x01e12264) */
/* WARNING: Removing unreachable block (ram,0x01e12268) */
/* WARNING: Removing unreachable block (ram,0x01e12274) */
/* WARNING: Removing unreachable block (ram,0x01e12278) */
/* WARNING: Removing unreachable block (ram,0x01e12228) */
/* WARNING: Removing unreachable block (ram,0x01e12234) */
/* WARNING: Removing unreachable block (ram,0x01e12238) */
/* WARNING: Removing unreachable block (ram,0x01e12244) */
/* WARNING: Removing unreachable block (ram,0x01e12248) */
/* WARNING: Removing unreachable block (ram,0x01e120a0) */
/* WARNING: Removing unreachable block (ram,0x01e12070) */
/* WARNING: Removing unreachable block (ram,0x01e1207c) */
/* WARNING: Removing unreachable block (ram,0x01e12080) */
/* WARNING: Removing unreachable block (ram,0x01e1208c) */
/* WARNING: Removing unreachable block (ram,0x01e12090) */
/* WARNING: Removing unreachable block (ram,0x01e11fdc) */
/* WARNING: Removing unreachable block (ram,0x01e120a4) */
/* WARNING: Removing unreachable block (ram,0x01e120ac) */
/* WARNING: Removing unreachable block (ram,0x01e120b0) */
/* WARNING: Removing unreachable block (ram,0x01e120bc) */
/* WARNING: Removing unreachable block (ram,0x01e120c0) */
/* WARNING: Removing unreachable block (ram,0x01e134f4) */
/* WARNING: Removing unreachable block (ram,0x01e1348c) */
/* WARNING: Removing unreachable block (ram,0x01e13494) */
/* WARNING: Removing unreachable block (ram,0x01e13498) */
/* WARNING: Removing unreachable block (ram,0x01e134b4) */
/* WARNING: Removing unreachable block (ram,0x01e134b8) */
/* WARNING: Removing unreachable block (ram,0x01e134d0) */
/* WARNING: Removing unreachable block (ram,0x01e134d4) */
/* WARNING: Removing unreachable block (ram,0x01e134dc) */
/* WARNING: Removing unreachable block (ram,0x01e134e0) */
/* WARNING: Removing unreachable block (ram,0x01e12514) */
/* WARNING: Removing unreachable block (ram,0x01e12518) */
/* WARNING: Removing unreachable block (ram,0x01e12520) */
/* WARNING: Removing unreachable block (ram,0x01e12524) */
/* WARNING: Removing unreachable block (ram,0x01e12530) */
/* WARNING: Removing unreachable block (ram,0x01e12534) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e10bf8(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  char cVar6;
  uint *puVar7;
  int iVar8;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  uint extraout_r2_01;
  undefined4 *extraout_r2_02;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  int extraout_r3;
  int extraout_r3_00;
  uint extraout_r3_01;
  int extraout_r3_02;
  uint unaff_r4;
  char *pcVar12;
  int *piVar13;
  uint unaff_r5;
  char *pcVar14;
  uint uVar15;
  uint unaff_r6;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  byte bVar20;
  uint unaff_r7;
  uint uVar21;
  uint uVar22;
  uint unaff_r8;
  int *unaff_r9;
  uint unaff_r10;
  int *unaff_r11;
  int *piVar23;
  uint uVar24;
  undefined4 unaff_lr;
  bool bVar25;
  uint *puVar26;
  undefined8 uVar27;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  int iStack_28;
  uint uStack_24;
  uint uStack_20;
  
  iVar2 = func_0x0229f06c(0xa06b,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa06b,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02173f80;
  }
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x30);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x02116ae0(iVar2,0);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar2 = func_0x0229f06c(0xa06c,0);
    if (iVar2 != 0) {
      iVar2 = func_0x0229f13c(0xa06c,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      goto SUB_02173f80;
    }
    iVar2 = *(int *)(param_1 + 0x40);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0211f8ec(iVar2,0);
    uVar21 = unaff_r7;
    if (uVar3 != 0) {
      iVar2 = *(int *)(param_1 + 0x40);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0211fb6c(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(param_1 + 0x40);
      iVar2 = *(int *)(iVar2 + 0x34);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iStack_28 = func_0x0211fbc0(iVar8,0);
      iVar2 = iVar2 * 1000;
      uStack_24 = iStack_28 >> 0x1f;
      uVar19 = func_0x01e125e0(param_1,uStack_24,iVar2,iVar2 >> 0x1f);
      uVar21 = *(uint *)(param_1 + 0x18);
      if (uVar21 == 0) {
        func_0x01384bf0();
      }
      func_0x0244feac(uVar21,uVar19,0);
    }
    if (*(byte *)(param_1 + 0x65) != uVar3) {
      FUN_01e106cc(param_1,uVar3);
    }
    uVar16 = (uint)(*(char *)(param_1 + 100) != '\0') & (uVar3 ^ 1);
    if (*(byte *)(param_1 + 0x66) == uVar16) {
      if (*(byte *)(param_1 + 0x67) != uVar16) {
        func_0x01e12758(param_1,uVar16);
      }
      pcVar14 = (char *)(_UNK_01e12934 + 0x1e127f8);
      if (*pcVar14 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e12938 + 0x1e1280c));
        *pcVar14 = '\x01';
      }
      iVar2 = func_0x0229f06c(0xa06e,0);
      if (iVar2 == 0) {
        iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01e1293c + 0x1e12868));
        iVar8 = *(int *)(param_1 + 0x40);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar8 = func_0x02123568(iVar8,0);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar8 = func_0x0210e5f4(iVar8,0);
        if (uVar3 == 0) {
          iVar1 = *(int *)(param_1 + 0x40);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x02123568(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar19 = func_0x0210e2d4(iVar1,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          pcVar14 = (char *)(_UNK_01de9ae4 + 0x1de9a40);
          if (*pcVar14 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01de9ae8 + 0x1de9a54),iVar8,uVar19,0);
            *pcVar14 = '\x01';
          }
          iVar1 = func_0x0229f06c(0x9eed,0);
          if (iVar1 != 0) {
            iVar1 = func_0x0229f13c(0x9eed,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uStack_20 = 0;
            uVar3 = func_0x02179a68(iVar1,iVar2,iVar8,uVar19);
            return uVar3;
          }
          iVar2 = *(int *)(iVar2 + 0x48);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
LAB_03d5bb8c:
          uVar3 = func_0x03d5a8e0(iVar2,iVar8,uVar19,0);
          return uVar3;
        }
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        pcVar14 = (char *)(_UNK_01de9a14 + 0x1de9984);
        if (*pcVar14 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01de9a18 + 0x1de9998),iVar8,0);
          *pcVar14 = '\x01';
        }
        iVar1 = func_0x0229f06c(0x1648,0);
        if (iVar1 == 0) {
          iVar2 = *(int *)(iVar2 + 0x44);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iStack_34 = **(int **)(_UNK_01de9a1c + 0x1de9a08);
LAB_03d5b44c:
          if (*(int *)(iVar2 + 8) != 0) {
            piVar13 = *(int **)(iVar2 + 0x20);
            iStack_30 = iVar2;
            iStack_28 = iVar8;
            if (piVar13 == (int *)0x0) {
              uVar3 = func_0x04821a00(&iStack_28,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc4));
            }
            else {
              iVar2 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
              if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                iVar2 = func_0x02457d84(iVar2);
              }
              iVar1 = *piVar13;
              uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar3 != 0) {
                piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar11[-1] == iVar2) {
                    puVar4 = (undefined4 *)(iVar1 + *piVar11 * 8 + 200);
                    goto LAB_03d5b514;
                  }
                  uVar3 = uVar3 - 1;
                  piVar11 = piVar11 + 2;
                } while (uVar3 != 0);
              }
              puVar4 = (undefined4 *)func_0x02457d88(piVar13,iVar2,1);
LAB_03d5b514:
              uVar3 = (*(code *)*puVar4)(piVar13,iVar8,puVar4[1]);
              iVar2 = iStack_30;
            }
            uVar16 = *(uint *)(iVar2 + 8);
            uVar21 = uVar16;
            if (uVar16 == 0) {
              func_0x02457d50();
              uVar21 = *(uint *)(iStack_30 + 8);
              if (uVar21 == 0) {
                uVar27 = func_0x02457d50();
                uVar19 = (undefined4)((ulonglong)uVar27 >> 0x20);
                iVar2 = (int)uVar27;
                uStack_54 = 0;
                if (*(int *)(iVar2 + 8) != 0) {
                  piVar13 = *(int **)(iVar2 + 0x20);
                  uStack_60 = uVar19;
                  uStack_5c = uVar3;
                  uStack_58 = uVar21;
                  uStack_50 = uVar16;
                  if (piVar13 == (int *)0x0) {
                    uVar3 = func_0x04821a00(&uStack_60,
                                            *(undefined4 *)
                                             (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0xc4))
                    ;
                  }
                  else {
                    iVar8 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
                      iVar8 = func_0x02457d84(iVar8);
                    }
                    iVar1 = *piVar13;
                    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
                    if (uVar3 != 0) {
                      piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                      do {
                        if (piVar11[-1] == iVar8) {
                          puVar4 = (undefined4 *)(iVar1 + *piVar11 * 8 + 200);
                          goto LAB_03d5b878;
                        }
                        uVar3 = uVar3 - 1;
                        piVar11 = piVar11 + 2;
                      } while (uVar3 != 0);
                    }
                    puVar4 = (undefined4 *)func_0x02457d88(piVar13,iVar8,1);
LAB_03d5b878:
                    uVar3 = (*(code *)*puVar4)(piVar13,uVar19,puVar4[1]);
                  }
                  iVar1 = *(int *)(iVar2 + 8);
                  iVar8 = iVar1;
                  if (iVar1 == 0) {
                    func_0x02457d50();
                    iVar8 = *(int *)(iVar2 + 8);
                    if (iVar8 == 0) {
                      uVar27 = func_0x02457d50();
                      uVar3 = func_0x03d5a510((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),
                                              *(undefined4 *)
                                               (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) +
                                               0x84));
                      if ((int)uVar3 < 0) {
                        uVar19 = 0;
                      }
                      else {
                        iVar2 = *(int *)((int)uVar27 + 0xc);
                        if (iVar2 == 0) {
                          func_0x02457d50();
                        }
                        if (*(uint *)(iVar2 + 0xc) <= uVar3) {
                          func_0x02457d5c();
                        }
                        uVar19 = *(undefined4 *)(iVar2 + uVar3 * 0x10 + 0x1c);
                      }
                      *extraout_r2_00 = uVar19;
                      return ~uVar3 >> 0x1f;
                    }
                  }
                  func_0x02457e94(uVar3 & 0x7fffffff,*(undefined4 *)(iVar1 + 0xc));
                  if (*(uint *)(iVar8 + 0xc) <= extraout_r1_00) {
                    func_0x02457d5c();
                  }
                  uVar21 = *(int *)(iVar8 + extraout_r1_00 * 4 + 0x10) - 1;
                  if (-1 < (int)uVar21) {
                    uVar16 = 0xffffffff;
                    do {
                      uVar24 = uVar21;
                      iVar8 = *(int *)(iVar2 + 0xc);
                      if (iVar8 == 0) {
                        func_0x02457d50();
                      }
                      if (*(uint *)(iVar8 + 0xc) <= uVar24) {
                        func_0x02457d5c();
                      }
                      uVar19 = uStack_60;
                      iVar8 = iVar8 + uVar24 * 0x10;
                      if (*(uint *)(iVar8 + 0x10) == (uVar3 & 0x7fffffff)) {
                        piVar13 = *(int **)(iVar2 + 0x20);
                        if (piVar13 == (int *)0x0) {
                          piVar13 = (int *)func_0x02ecaf98(*(undefined4 *)
                                                            (*(int *)(*(int *)(extraout_r3 + 0x10) +
                                                                     0x60) + 0xc));
                          uVar19 = uStack_60;
                          uVar10 = *(undefined4 *)(iVar8 + 0x18);
                          if (piVar13 == (int *)0x0) {
                            func_0x02457d50(0,uVar10);
                          }
                          iVar1 = (**(code **)(*piVar13 + 0x100))
                                            (piVar13,uVar10,uVar19,*(undefined4 *)(*piVar13 + 0x104)
                                            );
                        }
                        else {
                          uVar10 = *(undefined4 *)(iVar8 + 0x18);
                          if (piVar13 == (int *)0x0) {
                            func_0x02457d50();
                          }
                          iVar1 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                            iVar1 = func_0x02457d84(iVar1);
                          }
                          iVar5 = *piVar13;
                          uVar21 = (uint)*(ushort *)(iVar5 + 0xb6);
                          if (uVar21 != 0) {
                            piVar11 = (int *)(*(int *)(iVar5 + 0x58) + 4);
                            do {
                              if (piVar11[-1] == iVar1) {
                                puVar4 = (undefined4 *)(iVar5 + *piVar11 * 8 + 0xc0);
                                goto LAB_03d5ba20;
                              }
                              uVar21 = uVar21 - 1;
                              piVar11 = piVar11 + 2;
                            } while (uVar21 != 0);
                          }
                          puVar4 = (undefined4 *)func_0x02457d88(piVar13,iVar1,0);
LAB_03d5ba20:
                          iVar1 = (*(code *)*puVar4)(piVar13,uVar10,uVar19,puVar4[1]);
                        }
                        if (iVar1 != 0) {
                          if ((int)uVar16 < 0) {
                            iVar1 = *(int *)(iVar2 + 8);
                            iVar5 = *(int *)(iVar8 + 0x14);
                            if (iVar1 == 0) {
                              func_0x02457d50();
                            }
                            if (*(uint *)(iVar1 + 0xc) <= extraout_r1_00) {
                              func_0x02457d5c();
                            }
                            *(int *)(iVar1 + extraout_r1_00 * 4 + 0x10) = iVar5 + 1;
                          }
                          else {
                            iVar1 = *(int *)(iVar2 + 0xc);
                            if (iVar1 == 0) {
                              func_0x02457d50();
                            }
                            uVar19 = *(undefined4 *)(iVar8 + 0x14);
                            if (*(uint *)(iVar1 + 0xc) <= uVar16) {
                              func_0x02457d5c();
                            }
                            *(undefined4 *)(iVar1 + uVar16 * 0x10 + 0x14) = uVar19;
                          }
                          *extraout_r2 = *(undefined4 *)(iVar8 + 0x1c);
                          uVar19 = *(undefined4 *)(iVar2 + 0x14);
                          iVar1 = *(int *)(iVar2 + 0x18);
                          iVar5 = *(int *)(iVar2 + 0x1c);
                          *(uint *)(iVar8 + 0x10) = 0xffffffff;
                          *(int *)(iVar2 + 0x18) = iVar1 + 1;
                          *(int *)(iVar2 + 0x1c) = iVar5 + 1;
                          *(uint *)(iVar2 + 0x14) = uVar24;
                          *(undefined4 *)(iVar8 + 0x14) = uVar19;
                          return 1;
                        }
                      }
                      uVar21 = *(uint *)(iVar8 + 0x14);
                      uVar16 = uVar24;
                    } while (*(uint *)(iVar8 + 0x14) < 0x80000000);
                  }
                }
                *extraout_r2 = 0;
                return 0;
              }
            }
            uStack_2c = uVar3 & 0x7fffffff;
            func_0x02457e94(uStack_2c,*(undefined4 *)(uVar16 + 0xc));
            if (*(uint *)(uVar21 + 0xc) <= extraout_r1) {
              func_0x02457d5c();
            }
            uVar3 = *(int *)(uVar21 + extraout_r1 * 4 + 0x10) - 1;
            if (-1 < (int)uVar3) {
              iVar2 = iStack_30;
              uVar21 = 0xffffffff;
              uStack_38 = extraout_r1;
              do {
                uVar16 = uVar3;
                iVar8 = *(int *)(iVar2 + 0xc);
                if (iVar8 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar8 + 0xc) <= uVar16) {
                  func_0x02457d5c();
                }
                iVar1 = iStack_28;
                iVar8 = iVar8 + uVar16 * 0x10;
                if (*(uint *)(iVar8 + 0x10) == uStack_2c) {
                  piVar13 = *(int **)(iVar2 + 0x20);
                  if (piVar13 == (int *)0x0) {
                    piVar13 = (int *)func_0x02ecaf98(*(undefined4 *)
                                                      (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) +
                                                      0xc));
                    iVar2 = iStack_28;
                    uVar19 = *(undefined4 *)(iVar8 + 0x18);
                    if (piVar13 == (int *)0x0) {
                      func_0x02457d50(0,uVar19);
                    }
                    iVar1 = (**(code **)(*piVar13 + 0x100))
                                      (piVar13,uVar19,iVar2,*(undefined4 *)(*piVar13 + 0x104));
                  }
                  else {
                    uVar19 = *(undefined4 *)(iVar8 + 0x18);
                    if (piVar13 == (int *)0x0) {
                      func_0x02457d50();
                    }
                    iVar2 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                      iVar2 = func_0x02457d84(iVar2);
                    }
                    iVar5 = *piVar13;
                    uVar3 = (uint)*(ushort *)(iVar5 + 0xb6);
                    if (uVar3 != 0) {
                      piVar11 = (int *)(*(int *)(iVar5 + 0x58) + 4);
                      do {
                        if (piVar11[-1] == iVar2) {
                          puVar4 = (undefined4 *)(iVar5 + *piVar11 * 8 + 0xc0);
                          goto LAB_03d5b6c0;
                        }
                        uVar3 = uVar3 - 1;
                        piVar11 = piVar11 + 2;
                      } while (uVar3 != 0);
                    }
                    puVar4 = (undefined4 *)func_0x02457d88(piVar13,iVar2,0);
LAB_03d5b6c0:
                    iVar1 = (*(code *)*puVar4)(piVar13,uVar19,iVar1,puVar4[1]);
                  }
                  iVar2 = iStack_30;
                  if (iVar1 != 0) {
                    if ((int)uVar21 < 0) {
                      iVar2 = *(int *)(iStack_30 + 8);
                      iVar1 = *(int *)(iVar8 + 0x14);
                      if (iVar2 == 0) {
                        func_0x02457d50();
                      }
                      uVar3 = uStack_38;
                      if (*(uint *)(iVar2 + 0xc) <= uStack_38) {
                        func_0x02457d5c();
                      }
                      *(int *)(iVar2 + uVar3 * 4 + 0x10) = iVar1 + 1;
                    }
                    else {
                      iVar2 = *(int *)(iStack_30 + 0xc);
                      if (iVar2 == 0) {
                        func_0x02457d50();
                      }
                      uVar19 = *(undefined4 *)(iVar8 + 0x14);
                      if (*(uint *)(iVar2 + 0xc) <= uVar21) {
                        func_0x02457d5c();
                      }
                      *(undefined4 *)(iVar2 + uVar21 * 0x10 + 0x14) = uVar19;
                    }
                    *(uint *)(iVar8 + 0x10) = 0xffffffff;
                    uVar19 = *(undefined4 *)(iStack_30 + 0x14);
                    *(int *)(iStack_30 + 0x18) = *(int *)(iStack_30 + 0x18) + 1;
                    *(uint *)(iStack_30 + 0x14) = uVar16;
                    *(int *)(iStack_30 + 0x1c) = *(int *)(iStack_30 + 0x1c) + 1;
                    *(undefined4 *)(iVar8 + 0x14) = uVar19;
                    return 1;
                  }
                }
                uVar3 = *(uint *)(iVar8 + 0x14);
                uVar21 = uVar16;
              } while (*(uint *)(iVar8 + 0x14) < 0x80000000);
            }
          }
          return 0;
        }
        iVar1 = func_0x0229f13c(0x1648,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
SUB_021773c4:
        iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        iStack_28 = 0;
        func_0x0245494c(&uStack_50,0,iVar8,0);
        uStack_38 = uStack_50;
        iStack_34 = uStack_4c;
        iStack_30 = iStack_48;
        if (*(int *)(iVar1 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar2,0);
        func_0x01485238(&uStack_38,iVar8,0);
        iVar8 = *(int *)(iVar1 + 8);
        uVar19 = *(undefined4 *)(iVar1 + 0xc);
        iVar2 = *(int *)(iVar1 + 0x10);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uVar10 = 3;
        if (iVar2 == 0) {
          uVar10 = 2;
        }
        uStack_58 = 0;
        uStack_54 = 0;
        uVar3 = func_0x0245495c(iVar8,uVar19,&uStack_38,uVar10);
        return uVar3;
      }
      iVar2 = func_0x0229f13c(0xa06e,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      goto SUB_021744a8;
    }
    unaff_lr = 0x1e10ee0;
    unaff_r4 = param_1;
    unaff_r5 = uVar3;
    unaff_r6 = uVar16;
    unaff_r7 = uVar21;
    register0x00000054 = (BADSPACEBASE *)&iStack_28;
    goto SUB_01e126d0;
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    if (*(int *)(param_1 + 0x38) == 0) {
      if (*(int *)(param_1 + 0x3c) == 0) {
        if (*(int *)(param_1 + 0x48) == 0) {
          if (*(int *)(param_1 + 0x44) == 0) {
            if ((*(int *)(param_1 + 0x4c) != 0) &&
               (iVar2 = func_0x0212f4e4(*(int *)(param_1 + 0x4c),0), iVar2 == 6)) {
              iVar2 = func_0x0229f06c(0xa08a,0);
              if (iVar2 == 0) {
                iVar2 = *(int *)(param_1 + 0x4c);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                iVar2 = func_0x021326c4(iVar2,0);
                if (iVar2 == 0) {
                  return 0;
                }
                iVar2 = *(int *)(param_1 + 0x4c);
                iVar8 = *(int *)(param_1 + 0x20);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                iVar2 = func_0x0213273c(iVar2,0);
                iVar1 = *(int *)(param_1 + 0x4c);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                iVar1 = func_0x0213273c(iVar1,0);
                iVar5 = *(int *)(param_1 + 0x4c);
                if (iVar5 == 0) {
                  func_0x01384bf0();
                }
                iStack_28 = func_0x0213284c(iVar5,0);
                iStack_28 = iVar1 - iStack_28;
                uStack_24 = iStack_28 >> 0x1f;
                uVar19 = func_0x01e125e0(param_1,uStack_24,iVar2,iVar2 >> 0x1f);
                if (iVar8 == 0) {
                  func_0x01384bf0();
                }
                func_0x0244feac(iVar8,uVar19,0);
                iVar2 = *(int *)(param_1 + 0x1c);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                uVar19 = 1;
                goto SUB_0244ffe4;
              }
              iVar2 = func_0x0229f13c(0xa08a,0);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              goto SUB_02173f80;
            }
            if (*(int *)(param_1 + 0x50) == 0) {
              if (*(int *)(param_1 + 0x58) != 0) {
                pcVar14 = (char *)(_UNK_01e12290 + 0x1e12110);
                if (*pcVar14 == '\0') {
                  func_0x01384978(*(undefined4 *)(_UNK_01e12294 + 0x1e12124));
                  *pcVar14 = '\x01';
                }
                iVar2 = func_0x0229f06c(0xa08c,0);
                if (iVar2 != 0) {
                  iVar2 = func_0x0229f13c(0xa08c,0);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  goto SUB_02173f80;
                }
                iVar2 = *(int *)(param_1 + 0x28);
                iVar8 = *(int *)(param_1 + 0x58);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                uVar19 = *(undefined4 *)(iVar2 + 0x10);
                if (iVar8 == 0) {
                  func_0x01384bf0();
                }
                uVar27 = func_0x0211e5f0(iVar8,0);
                if (*(int *)(**(int **)(_UNK_01e12298 + 0x1e121bc) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                uVar27 = func_0x01458584((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),1000,0);
                uVar10 = (undefined4)((ulonglong)uVar27 >> 0x20);
                uStack_20 = 0;
                func_0x02089060(uVar19,uVar10,(int)uVar27,uVar10);
                iVar2 = *(int *)(param_1 + 0x28);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                iVar2 = *(int *)(iVar2 + 0xc);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                uVar19 = 0;
                goto SUB_0244ffe4;
              }
              if (*(int *)(param_1 + 0x5c) != 0) {
                pcVar14 = (char *)(_UNK_01e1254c + 0x1e122b4);
                if (*pcVar14 == '\0') {
                  func_0x01384978(*(undefined4 *)(_UNK_01e12550 + 0x1e122c8));
                  *pcVar14 = '\x01';
                }
                iVar2 = func_0x0229f06c(0xa08d,0);
                if (iVar2 == 0) {
                  iVar2 = *(int *)(param_1 + 0x5c);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  iVar8 = func_0x02137748(iVar2,0);
                  if (iVar8 == 0) {
                    iVar8 = *(int *)(param_1 + 0x24);
                    if (iVar8 == 0) {
                      func_0x01384bf0();
                    }
                    iVar8 = *(int *)(iVar8 + 8);
                    if (iVar8 == 0) {
                      func_0x01384bf0();
                    }
                    uVar3 = func_0x02450114(iVar8,0);
                    if (uVar3 != 0) {
                      return uVar3;
                    }
                    iVar8 = *(int *)(param_1 + 0x24);
                    if (iVar8 == 0) {
                      func_0x01384bf0();
                    }
                    uVar19 = *(undefined4 *)(iVar8 + 0x10);
                    if (iVar2 == 0) {
                      func_0x01384bf0();
                    }
                    iVar2 = func_0x021378d4(iVar2,0);
                    if (iVar2 == 0) {
                      func_0x01384bf0();
                    }
                    iVar2 = *(int *)(iVar2 + 0x18);
                    if (*(int *)(**(int **)(_UNK_01e12558 + 0x1e124a0) + 0x74) == 0) {
                      func_0x01384ab4();
                    }
                    uStack_20 = 1;
                    iVar8 = iVar2 >> 0x1f;
                    iVar2 = iVar2 / 1000 + iVar8;
                    iVar8 = iVar2 - iVar8;
                    func_0x02089060(uVar19,iVar2,iVar8,iVar8 >> 0x1f);
                    iVar2 = *(int *)(param_1 + 0x24);
                    if (iVar2 == 0) {
                      func_0x01384bf0();
                    }
                    iVar2 = *(int *)(iVar2 + 8);
                    if (iVar2 == 0) {
                      func_0x01384bf0();
                    }
                    uVar19 = 1;
                  }
                  else {
                    iVar8 = *(int *)(param_1 + 0x28);
                    if (iVar8 == 0) {
                      func_0x01384bf0();
                    }
                    uVar19 = *(undefined4 *)(iVar8 + 0x10);
                    if (iVar2 == 0) {
                      func_0x01384bf0();
                    }
                    iVar2 = func_0x02137828(iVar2,0);
                    if (*(int *)(**(int **)(_UNK_01e12554 + 0x1e1237c) + 0x74) == 0) {
                      func_0x01384ab4();
                    }
                    uStack_20 = 0;
                    iVar8 = iVar2 / 1000 + (iVar2 >> 0x1f);
                    iVar2 = iVar8 - (iVar2 >> 0x1f);
                    func_0x02089060(uVar19,iVar8,iVar2,iVar2 >> 0x1f);
                    iVar2 = *(int *)(param_1 + 0x28);
                    if (iVar2 == 0) {
                      func_0x01384bf0();
                    }
                    iVar2 = *(int *)(iVar2 + 0xc);
                    if (iVar2 == 0) {
                      func_0x01384bf0();
                    }
                    uVar19 = 0;
                  }
                  goto SUB_0244ffe4;
                }
                iVar2 = func_0x0229f13c(0xa08d,0);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                goto SUB_02173f80;
              }
              if (*(int *)(param_1 + 0x60) == 0) {
                return 0;
              }
              iVar2 = func_0x0229f06c(0xa091,0);
              if (iVar2 != 0) {
                iVar2 = func_0x0229f13c(0xa091,0);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                goto SUB_02173f80;
              }
              iVar2 = *(int *)(param_1 + 0x60);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              uVar16 = func_0x02136cb8(iVar2,0);
              if (*(byte *)(param_1 + 0x66) == uVar16) {
                return (uint)*(byte *)(param_1 + 0x66);
              }
              goto SUB_01e126d0;
            }
            pcVar14 = (char *)(_UNK_01e120d8 + 0x1e11d84);
            if (*pcVar14 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01e120dc + 0x1e11d98));
              func_0x01384978(*(undefined4 *)(_UNK_01e120e0 + 0x1e11da4));
              func_0x01384978(*(undefined4 *)(_UNK_01e120e4 + 0x1e11db0));
              *pcVar14 = '\x01';
            }
            iVar2 = func_0x0229f06c(0xa08b,0);
            if (iVar2 != 0) {
              iVar2 = func_0x0229f13c(0xa08b,0);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              goto SUB_02173f80;
            }
            iVar2 = *(int *)(param_1 + 0x50);
            if (iVar2 == 0) {
              func_0x01384bf0();
              iVar8 = func_0x0212eec0(0,0);
              if (iVar8 != 0) {
                func_0x01384bf0();
                goto LAB_01e11e40;
              }
            }
            else {
              iVar8 = func_0x0212eec0(iVar2,0);
              if (iVar8 != 0) {
LAB_01e11e40:
                iVar8 = func_0x0212f04c(iVar2,0);
                if (iVar8 == 0) {
                  func_0x01384bf0();
                }
                iVar1 = *(int *)(param_1 + 0x28);
                iVar8 = *(int *)(iVar8 + 0x18);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                if (iVar8 == -1) {
                  piVar13 = *(int **)(iVar1 + 0x10);
                  if (*(int *)(**(int **)(_UNK_01e120e8 + 0x1e11ff0) + 0x74) == 0) {
                    func_0x01384ab4();
                  }
                  uVar19 = func_0x028c1350(**(undefined4 **)(_UNK_01e120ec + 0x1e12014),0);
                  if (piVar13 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  (**(code **)(*piVar13 + 0x2d0))(piVar13,uVar19,*(undefined4 *)(*piVar13 + 0x2d4));
                }
                else {
                  uVar19 = *(undefined4 *)(iVar1 + 0x10);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  iVar2 = func_0x0212efa0(iVar2,0);
                  if (*(int *)(**(int **)(_UNK_01e120f0 + 0x1e11ea8) + 0x74) == 0) {
                    func_0x01384ab4();
                  }
                  uStack_20 = 0;
                  iVar8 = iVar2 / 1000 + (iVar2 >> 0x1f);
                  iVar2 = iVar8 - (iVar2 >> 0x1f);
                  func_0x02089060(uVar19,iVar8,iVar2,iVar2 >> 0x1f);
                }
                iVar2 = *(int *)(param_1 + 0x28);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                iVar2 = *(int *)(iVar2 + 0xc);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                uVar19 = 0;
                goto SUB_0244ffe4;
              }
            }
            iVar8 = *(int *)(param_1 + 0x24);
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            iVar8 = *(int *)(iVar8 + 8);
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            uVar3 = func_0x02450114(iVar8,0);
            if (uVar3 != 0) {
              return uVar3;
            }
            iVar8 = *(int *)(param_1 + 0x24);
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            uVar19 = *(undefined4 *)(iVar8 + 0x10);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x0212f04c(iVar2,0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar2 + 0x18);
            if (*(int *)(**(int **)(_UNK_01e120f4 + 0x1e11f68) + 0x74) == 0) {
              func_0x01384ab4();
            }
            uStack_20 = 1;
            iVar8 = iVar2 >> 0x1f;
            iVar2 = iVar2 / 1000 + iVar8;
            iVar8 = iVar2 - iVar8;
            func_0x02089060(uVar19,iVar2,iVar8,iVar8 >> 0x1f);
            iVar2 = *(int *)(param_1 + 0x24);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar2 + 8);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            uVar19 = 1;
            goto SUB_0244ffe4;
          }
          iVar2 = func_0x0229f06c(0xa086,0);
          if (iVar2 != 0) {
            iVar2 = func_0x0229f13c(0xa086,0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            goto SUB_02173f80;
          }
          iVar2 = *(int *)(param_1 + 0x44);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x0212bdd0(iVar2,0);
          if (iVar2 == 1) {
            iVar2 = *(int *)(param_1 + 0x44);
            uVar21 = *(uint *)(param_1 + 0x18);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x0212c014(iVar2,0);
            iVar8 = *(int *)(param_1 + 0x44);
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            uVar3 = 0;
            iStack_28 = func_0x0212bf60(iVar8,0);
            uStack_24 = iStack_28 >> 0x1f;
            uVar19 = func_0x01e125e0(param_1,uStack_24,iVar2,iVar2 >> 0x1f);
            if (uVar21 == 0) {
              func_0x01384bf0();
            }
            func_0x0244feac(uVar21,uVar19,0);
            uVar24 = 1;
            uVar16 = 0;
          }
          else {
            iVar2 = *(int *)(param_1 + 0x44);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            uVar24 = 0;
            iVar2 = func_0x0212bdd0(iVar2,0);
            uVar3 = 0;
            uVar16 = 0;
            uVar21 = unaff_r8;
            if (iVar2 == 2) {
              iVar2 = *(int *)(param_1 + 0x44);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              uVar24 = 0;
              iVar2 = func_0x0212c0d0(iVar2,0);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              uVar3 = 0;
              uVar16 = 1;
              if (0 < *(int *)(iVar2 + 0x24)) {
                uVar3 = 1;
              }
            }
          }
          if (*(byte *)(param_1 + 0x65) != uVar24) {
            FUN_01e106cc(param_1,uVar24);
          }
          if (*(byte *)(param_1 + 0x66) != uVar16) {
            unaff_lr = 0x1e11c00;
            unaff_r4 = param_1;
            unaff_r5 = uVar3;
            unaff_r6 = uVar24;
            unaff_r7 = uVar16;
            unaff_r8 = uVar21;
            register0x00000054 = (BADSPACEBASE *)&iStack_28;
            goto SUB_01e126d0;
          }
          if (*(byte *)(param_1 + 0x67) == uVar3) {
            return (uint)*(byte *)(param_1 + 0x67);
          }
          goto SUB_01e12758;
        }
        iVar2 = func_0x0229f06c(0xa084,0);
        if (iVar2 != 0) {
          iVar2 = func_0x0229f13c(0xa084,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          goto SUB_02173f80;
        }
        uVar3 = func_0x01e1365c(param_1);
        uVar16 = uVar3 ^ 1;
        if (*(byte *)(param_1 + 0x66) == uVar16) {
          return uVar3;
        }
      }
      else {
        uStack_20 = unaff_r4;
        iVar2 = func_0x0229f06c(0xa082,0);
        if (iVar2 != 0) {
          iVar2 = func_0x0229f13c(0xa082,0);
          unaff_r4 = uStack_20;
          if (iVar2 == 0) {
            func_0x01384bf0();
            unaff_r4 = uStack_20;
          }
          goto SUB_02173f80;
        }
        iVar2 = *(int *)(param_1 + 0x3c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar21 = func_0x0211bf04(iVar2,0);
        uVar3 = unaff_r8;
        piVar13 = unaff_r9;
        if ((int)uVar21 < 1) {
          iVar2 = *(int *)(param_1 + 0x3c);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar27 = func_0x0211bfcc(iVar2,0);
          piVar13 = (int *)((ulonglong)uVar27 >> 0x20);
          iVar2 = *(int *)(param_1 + 0x3c);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iStack_30 = func_0x0211be60(iVar2,0);
          uStack_2c = iStack_30 >> 0x1f;
          uVar3 = func_0x01e125e0(param_1,uStack_2c,(int)uVar27,piVar13);
          iVar2 = *(int *)(param_1 + 0x18);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x0244feac(iVar2,uVar3,0);
        }
        uVar16 = (uint)(0 < (int)uVar21);
        if ((uint)*(byte *)(param_1 + 0x65) != (uint)((int)uVar21 < 1)) {
          FUN_01e106cc(param_1,(int)uVar21 < 1);
        }
        if (*(byte *)(param_1 + 0x66) == uVar16) {
          uVar3 = (uint)((int)uVar21 < 1);
          pcVar14 = (char *)(_UNK_01e13650 + 0x1e13514);
          if (*pcVar14 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01e13654 + 0x1e13528));
            *pcVar14 = '\x01';
          }
          iVar2 = func_0x0229f06c(0xa083,0);
          if (iVar2 == 0) {
            iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01e13658 + 0x1e13584));
            iVar8 = *(int *)(param_1 + 0x3c);
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            iVar8 = func_0x02123568(iVar8,0);
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            iVar8 = func_0x0210e5f4(iVar8,0);
            if (uVar3 == 0) {
              iVar1 = *(int *)(param_1 + 0x3c);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar1 = func_0x02123568(iVar1,0);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uVar19 = func_0x0210e2d4(iVar1,0);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              pcVar14 = (char *)(_UNK_01de9c68 + 0x1de9bc4);
              if (*pcVar14 == '\0') {
                func_0x01384978(*(undefined4 *)(_UNK_01de9c6c + 0x1de9bd8),iVar8,uVar19,0);
                *pcVar14 = '\x01';
              }
              iVar1 = func_0x0229f06c(0x9eef,0);
              if (iVar1 != 0) {
                iVar1 = func_0x0229f13c(0x9eef,0);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                uStack_20 = 0;
                uVar3 = func_0x02179a68(iVar1,iVar2,iVar8,uVar19);
                return uVar3;
              }
              iVar2 = *(int *)(iVar2 + 0x4c);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              goto LAB_03d5bb8c;
            }
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            pcVar14 = (char *)(_UNK_01de9d1c + 0x1de9c8c);
            if (*pcVar14 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01de9d20 + 0x1de9ca0),iVar8,0);
              *pcVar14 = '\x01';
            }
            iVar1 = func_0x0229f06c(0x9ef0,0);
            if (iVar1 == 0) {
              iVar2 = *(int *)(iVar2 + 0x4c);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iStack_34 = **(int **)(_UNK_01de9d24 + 0x1de9d10);
              goto LAB_03d5b44c;
            }
            iVar1 = func_0x0229f13c(0x9ef0,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            goto SUB_021773c4;
          }
          iVar2 = func_0x0229f13c(0xa083,0);
          unaff_r4 = uStack_20;
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          goto SUB_021744a8;
        }
        unaff_lr = 0x1e119d0;
        unaff_r4 = param_1;
        unaff_r5 = uVar21;
        unaff_r6 = uVar16;
        unaff_r7 = (uint)((int)uVar21 < 1);
        unaff_r8 = uVar3;
        unaff_r9 = piVar13;
        register0x00000054 = (BADSPACEBASE *)&iStack_30;
      }
    }
    else {
      iVar2 = func_0x0229f06c(0xa07d,0);
      if (iVar2 != 0) {
        iVar2 = func_0x0229f13c(0xa07d,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        goto SUB_02173f80;
      }
      unaff_r5 = *(uint *)(param_1 + 0x38);
      if (unaff_r5 == 0) {
        func_0x01384bf0();
      }
      unaff_r8 = func_0x0212fa48(unaff_r5,0);
      unaff_r6 = *(uint *)(param_1 + 0x30);
      if (unaff_r6 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(unaff_r6 + 0x2c) == 0xf) {
        if (unaff_r5 == 0) {
          func_0x01384bf0();
        }
        unaff_r8 = func_0x0212f8d4(unaff_r5,0);
      }
      if (unaff_r5 == 0) {
        func_0x01384bf0();
        unaff_r7 = 0;
        iVar2 = func_0x0212f990(0,0);
        if (iVar2 < 1) {
          func_0x01384bf0();
          unaff_r7 = 0;
          iVar2 = func_0x0212f734(0,0);
          func_0x01384bf0();
          if (iVar2 != 0) goto LAB_01e1175c;
          iVar2 = func_0x0212f82c(0,0);
          unaff_r6 = 0;
          if (0 < iVar2) {
            func_0x01384bf0();
            iVar2 = func_0x0212f82c(0,0);
            func_0x01384bf0();
            goto LAB_01e117cc;
          }
        }
      }
      else {
        unaff_r7 = 0;
        iVar2 = func_0x0212f990(unaff_r5,0);
        if (iVar2 < 1) {
          unaff_r7 = 0;
          iVar2 = func_0x0212f734(unaff_r5,0);
          if (iVar2 == 0) {
            iVar2 = func_0x0212f82c(unaff_r5,0);
            if (iVar2 < 1) goto LAB_01e11818;
            iVar2 = func_0x0212f82c(unaff_r5,0);
LAB_01e117cc:
            iStack_28 = func_0x0212f9e4(unaff_r5,0);
          }
          else {
LAB_01e1175c:
            iVar2 = func_0x0212fb30(unaff_r5,0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar2 + 0x30);
            if (unaff_r5 == 0) {
              func_0x01384bf0();
            }
            iStack_28 = func_0x0212f6e0(unaff_r5,0);
            iVar2 = iVar2 * 1000;
          }
          uStack_24 = iStack_28 >> 0x1f;
          uVar19 = func_0x01e125e0(param_1,uStack_24,iVar2,iVar2 >> 0x1f);
          unaff_r6 = *(uint *)(param_1 + 0x18);
          if (unaff_r6 == 0) {
            func_0x01384bf0();
          }
          func_0x0244feac(unaff_r6,uVar19,0);
          unaff_r7 = 1;
        }
      }
LAB_01e11818:
      if (*(byte *)(param_1 + 0x65) != unaff_r7) {
        FUN_01e106cc(param_1,unaff_r7);
      }
      if (*(char *)(param_1 + 0x66) == '\0') {
        if (unaff_r8 == *(uint *)(param_1 + 0x80)) {
          return *(uint *)(param_1 + 0x80);
        }
        func_0x01e132bc(param_1,unaff_r7 ^ 1);
        if (unaff_r5 == 0) {
          func_0x01384bf0();
        }
        iVar8 = *(int *)(unaff_r5 + 0x38);
        uStack_20 = unaff_r4;
        iVar2 = func_0x0229f06c(0xa081,0);
        if (iVar2 != 0) {
          iVar2 = func_0x0229f13c(0xa081,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iStack_28 = 0;
          uVar3 = func_0x02179a68(iVar2,param_1,unaff_r8,iVar8);
          return uVar3;
        }
        iVar2 = *(int *)(param_1 + 0x2c);
        if (iVar2 == 0) {
          func_0x01384bf0();
          uVar3 = func_0x02450148(0,0);
          if ((int)uVar3 < 1) {
            return uVar3;
          }
          func_0x01384bf0();
        }
        else {
          uVar3 = func_0x02450148(iVar2,0);
          if ((int)uVar3 < 1) {
            return uVar3;
          }
        }
        iVar2 = func_0x02450158(iVar2,0,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0244ffd4(iVar2,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (iVar8 < 1) {
          uVar19 = 0;
        }
        else {
          uVar19 = 1;
        }
SUB_0244ffe4:
        uVar3 = (*(code *)&UNK_05189da8)(iVar2,uVar19,0);
        return uVar3;
      }
      uVar16 = 0;
      unaff_lr = 0x1e11844;
      unaff_r4 = param_1;
      register0x00000054 = (BADSPACEBASE *)&iStack_28;
    }
SUB_01e126d0:
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(uint *)((int)register0x00000054 + -8) = unaff_r6;
    *(uint *)((int)register0x00000054 + -0xc) = unaff_r5;
    puVar26 = (uint *)((int)register0x00000054 + -0x10);
    *puVar26 = unaff_r4;
    iVar2 = func_0x0229f06c(0x1632,0);
    if (iVar2 != 0) {
      iVar2 = func_0x0229f13c(0x1632,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      unaff_r4 = *puVar26;
      unaff_r5 = *(uint *)((int)register0x00000054 + -0xc);
      unaff_r6 = *(uint *)((int)register0x00000054 + -8);
      unaff_lr = *(undefined4 *)((int)register0x00000054 + -4);
      uVar3 = uVar16;
SUB_021744a8:
      *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
      *(uint *)((int)register0x00000054 + -8) = unaff_r10;
      *(int **)((int)register0x00000054 + -0xc) = unaff_r9;
      *(uint *)((int)register0x00000054 + -0x10) = unaff_r8;
      *(uint *)((int)register0x00000054 + -0x14) = unaff_r7;
      *(uint *)((int)register0x00000054 + -0x18) = unaff_r6;
      *(uint *)((int)register0x00000054 + -0x1c) = unaff_r5;
      *(uint *)((int)register0x00000054 + -0x20) = unaff_r4;
      *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x34) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      *(undefined4 *)((int)register0x00000054 + -0x30) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
      func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,uVar3,0);
      iVar8 = *(int *)(iVar2 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x38) =
           *(undefined4 *)((int)register0x00000054 + -0x50);
      *(undefined4 *)((int)register0x00000054 + -0x34) =
           *(undefined4 *)((int)register0x00000054 + -0x4c);
      *(undefined4 *)((int)register0x00000054 + -0x30) =
           *(undefined4 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x28) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      if (iVar8 != 0) {
        func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar8,0);
      }
      func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
      func_0x01485228((undefined1 *)((int)register0x00000054 + -0x38),uVar3,0);
      iVar8 = *(int *)(iVar2 + 8);
      uVar19 = *(undefined4 *)(iVar2 + 0xc);
      iVar2 = *(int *)(iVar2 + 0x10);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar10 = 3;
      if (iVar2 == 0) {
        uVar10 = 2;
      }
      *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
      uVar3 = func_0x0245495c(iVar8,uVar19,(undefined1 *)((int)register0x00000054 + -0x38),uVar10);
      return uVar3;
    }
    uVar3 = *(uint *)(param_1 + 0x30);
    *(char *)(param_1 + 0x66) = (char)uVar16;
    if (uVar3 == 0) {
      func_0x01384bf0();
    }
    param_1 = uVar3;
    if (uVar16 == 0) {
      unaff_r6 = *(uint *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -4);
      *(int **)((int)register0x00000054 + -8) = unaff_r11;
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0xc);
      *puVar26 = *puVar26;
      iVar2 = func_0x0229f06c(0x163a,0);
      if (iVar2 != 0) {
        iVar2 = func_0x0229f13c(0x163a);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        unaff_r4 = *puVar26;
        unaff_r5 = *(uint *)((int)register0x00000054 + -0xc);
        unaff_lr = *(undefined4 *)((int)register0x00000054 + -4);
        goto SUB_02173f80;
      }
      iVar2 = *(int *)(uVar3 + 0x1c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      FUN_01e0fd60(iVar2,1,0);
      param_1 = *(uint *)(uVar3 + 0x20);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -4);
      *(undefined4 *)((int)register0x00000054 + -8) = *(undefined4 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0xc);
      *puVar26 = *puVar26;
      iVar2 = func_0x0229f06c(0x163c,0);
      if (iVar2 != 0) {
        iVar2 = func_0x0229f13c(0x163c,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        unaff_r4 = *puVar26;
        unaff_r5 = *(uint *)((int)register0x00000054 + -0xc);
        unaff_lr = *(undefined4 *)((int)register0x00000054 + -4);
        goto SUB_02173f80;
      }
      uVar3 = 1;
      uVar21 = *puVar26;
      uVar16 = *(uint *)((int)register0x00000054 + -0xc);
      uVar24 = *(uint *)((int)register0x00000054 + -8);
      uVar22 = *(uint *)((int)register0x00000054 + -4);
SUB_01e188e4:
      puVar26[3] = uVar22;
      puVar26[2] = unaff_r6;
      puVar26[1] = uVar16;
      *puVar26 = uVar21;
      pcVar14 = (char *)(_UNK_01e18a0c + 0x1e188fc);
      if (*pcVar14 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
        func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
        func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
        *pcVar14 = '\x01';
      }
      iVar2 = func_0x0229f06c(0x163d,0);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0x20);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x03dcf4b4(iVar2,uVar3,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = *(int *)(param_1 + 0x20);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar19 = func_0x03dcf1b0(iVar2,uVar3,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
        func_0x01e1a604(param_1,uVar3,uVar19);
        uVar21 = *(uint *)(param_1 + 0x20);
        if (uVar21 == 0) {
          func_0x01384bf0();
        }
        uVar16 = **(uint **)(_UNK_01e18a24 + 0x1e18a00);
        uVar22 = *puVar26;
        uVar15 = puVar26[1];
        uVar18 = puVar26[2];
        puVar26[3] = puVar26[3];
        puVar26[2] = uVar24;
        puVar26[1] = unaff_r10;
        *puVar26 = (uint)unaff_r9;
        puVar26[-1] = unaff_r8;
        puVar26[-2] = unaff_r7;
        puVar26[-3] = uVar18;
        puVar26[-4] = uVar15;
        puVar26[-5] = uVar22;
        iVar2 = *(int *)(uVar21 + 8);
        puVar26[-9] = uVar16;
        puVar26[-6] = uVar3;
        if (iVar2 != 0) {
          piVar13 = *(int **)(uVar21 + 0x20);
          puVar26[-8] = uVar21;
          if (piVar13 == (int *)0x0) {
            uVar3 = func_0x04821a00(puVar26 + -6,0);
          }
          else {
            iVar2 = *(int *)(*(int *)(*(int *)(puVar26[-9] + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
              iVar2 = func_0x02457d84(iVar2);
            }
            iVar8 = *piVar13;
            uVar21 = (uint)*(ushort *)(iVar8 + 0xb6);
            if (uVar21 != 0) {
              piVar11 = (int *)(*(int *)(iVar8 + 0x58) + 4);
              do {
                if (piVar11[-1] == iVar2) {
                  puVar4 = (undefined4 *)(iVar8 + *piVar11 * 8 + 200);
                  goto LAB_03dd0a60;
                }
                uVar21 = uVar21 - 1;
                piVar11 = piVar11 + 2;
              } while (uVar21 != 0);
            }
            puVar4 = (undefined4 *)func_0x02457d88(piVar13,iVar2,1);
LAB_03dd0a60:
            uVar3 = (*(code *)*puVar4)(piVar13,uVar3,puVar4[1]);
            uVar21 = puVar26[-8];
          }
          iVar8 = *(int *)(uVar21 + 8);
          iVar2 = iVar8;
          if (iVar8 == 0) {
            func_0x02457d50();
            iVar2 = *(int *)(puVar26[-8] + 8);
            if (iVar2 == 0) {
              uVar27 = func_0x02457d50();
              uVar16 = (uint)((ulonglong)uVar27 >> 0x20);
              uVar21 = (uint)uVar27;
              puVar26[-0xb] = 0x3dd0d04;
              puVar26[-0xc] = uVar24;
              puVar26[-0xd] = unaff_r10;
              puVar26[-0xe] = (uint)unaff_r9;
              puVar26[-0xf] = unaff_r8;
              puVar26[-0x10] = 0;
              puVar26[-0x11] = 0;
              puVar26[-0x12] = 0;
              puVar26[-0x13] = uVar3;
              iVar2 = *(int *)(uVar21 + 8);
              puVar26[-0x15] = extraout_r3_01;
              puVar26[-0x18] = extraout_r2_01;
              puVar26[-0x14] = uVar16;
              if (iVar2 != 0) {
                piVar13 = *(int **)(uVar21 + 0x20);
                if (piVar13 == (int *)0x0) {
                  uVar3 = func_0x04821a00(puVar26 + -0x14,0);
                }
                else {
                  iVar2 = *(int *)(*(int *)(*(int *)(puVar26[-0x15] + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                    iVar2 = func_0x02457d84(iVar2);
                  }
                  iVar8 = *piVar13;
                  uVar3 = (uint)*(ushort *)(iVar8 + 0xb6);
                  if (uVar3 != 0) {
                    piVar11 = (int *)(*(int *)(iVar8 + 0x58) + 4);
                    do {
                      if (piVar11[-1] == iVar2) {
                        puVar4 = (undefined4 *)(iVar8 + *piVar11 * 8 + 200);
                        goto LAB_03dd0dc4;
                      }
                      uVar3 = uVar3 - 1;
                      piVar11 = piVar11 + 2;
                    } while (uVar3 != 0);
                  }
                  puVar4 = (undefined4 *)func_0x02457d88(piVar13,iVar2,1);
LAB_03dd0dc4:
                  uVar3 = (*(code *)*puVar4)(piVar13,uVar16,puVar4[1]);
                }
                iVar8 = *(int *)(uVar21 + 8);
                iVar2 = iVar8;
                if (iVar8 == 0) {
                  func_0x02457d50();
                  iVar2 = *(int *)(uVar21 + 8);
                  if (iVar2 == 0) {
                    uVar27 = func_0x02457d50();
                    puVar26[-0x1b] = 0x3dd1078;
                    puVar26[-0x1c] = 0;
                    puVar26[-0x1d] = 0;
                    puVar26[-0x1e] = uVar3;
                    uVar3 = func_0x03dcfa64((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),
                                            *(undefined4 *)
                                             (*(int *)(*(int *)(extraout_r3_02 + 0x10) + 0x60) +
                                             0x84));
                    if ((int)uVar3 < 0) {
                      uVar19 = 0;
                    }
                    else {
                      iVar2 = *(int *)((int)uVar27 + 0xc);
                      if (iVar2 == 0) {
                        func_0x02457d50();
                      }
                      if (*(uint *)(iVar2 + 0xc) <= uVar3) {
                        func_0x02457d5c();
                      }
                      uVar19 = *(undefined4 *)(iVar2 + uVar3 * 0x10 + 0x1c);
                    }
                    *extraout_r2_02 = uVar19;
                    return ~uVar3 >> 0x1f;
                  }
                }
                uVar3 = uVar3 & 0x7fffffff;
                func_0x02457e94(uVar3,*(undefined4 *)(iVar8 + 0xc));
                if (*(uint *)(iVar2 + 0xc) <= extraout_r1_02) {
                  func_0x02457d5c();
                }
                puVar26[-0x19] = extraout_r1_02;
                uVar16 = *(int *)(iVar2 + extraout_r1_02 * 4 + 0x10) - 1;
                if (-1 < (int)uVar16) {
                  puVar26[-0x16] = uVar21;
                  puVar26[-0x17] = uVar3;
                  uVar24 = 0xffffffff;
                  do {
                    uVar22 = uVar16;
                    iVar2 = *(int *)(uVar21 + 0xc);
                    if (iVar2 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar2 + 0xc) <= uVar22) {
                      func_0x02457d5c();
                    }
                    iVar2 = iVar2 + uVar22 * 0x10;
                    if (*(uint *)(iVar2 + 0x10) == uVar3) {
                      piVar13 = *(int **)(uVar21 + 0x20);
                      if (piVar13 == (int *)0x0) {
                        piVar13 = (int *)func_0x02ecb070(*(undefined4 *)
                                                          (*(int *)(*(int *)(puVar26[-0x15] + 0x10)
                                                                   + 0x60) + 0xc));
                        uVar19 = *(undefined4 *)(iVar2 + 0x18);
                        uVar3 = puVar26[-0x14];
                        if (piVar13 == (int *)0x0) {
                          func_0x02457d50(0,uVar19);
                        }
                        iVar8 = (**(code **)(*piVar13 + 0x100))
                                          (piVar13,uVar19,uVar3,*(undefined4 *)(*piVar13 + 0x104));
                      }
                      else {
                        uVar3 = puVar26[-0x14];
                        uVar19 = *(undefined4 *)(iVar2 + 0x18);
                        if (piVar13 == (int *)0x0) {
                          func_0x02457d50();
                        }
                        iVar8 = *(int *)(*(int *)(*(int *)(puVar26[-0x15] + 0x10) + 0x60) + 4);
                        if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
                          iVar8 = func_0x02457d84(iVar8);
                        }
                        iVar1 = *piVar13;
                        uVar21 = (uint)*(ushort *)(iVar1 + 0xb6);
                        if (uVar21 != 0) {
                          piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                          do {
                            if (piVar11[-1] == iVar8) {
                              puVar4 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
                              goto LAB_03dd0f6c;
                            }
                            uVar21 = uVar21 - 1;
                            piVar11 = piVar11 + 2;
                          } while (uVar21 != 0);
                        }
                        puVar4 = (undefined4 *)func_0x02457d88(piVar13,iVar8,0);
LAB_03dd0f6c:
                        iVar8 = (*(code *)*puVar4)(piVar13,uVar19,uVar3,puVar4[1]);
                      }
                      uVar21 = puVar26[-0x16];
                      uVar3 = puVar26[-0x17];
                      if (iVar8 != 0) {
                        if ((int)uVar24 < 0) {
                          iVar8 = *(int *)(uVar21 + 8);
                          iVar1 = *(int *)(iVar2 + 0x14);
                          if (iVar8 == 0) {
                            func_0x02457d50();
                          }
                          uVar3 = puVar26[-0x19];
                          puVar4 = (undefined4 *)puVar26[-0x18];
                          if (*(uint *)(iVar8 + 0xc) <= uVar3) {
                            func_0x02457d5c();
                          }
                          *(int *)(iVar8 + uVar3 * 4 + 0x10) = iVar1 + 1;
                        }
                        else {
                          iVar8 = *(int *)(uVar21 + 0xc);
                          if (iVar8 == 0) {
                            func_0x02457d50();
                          }
                          uVar19 = *(undefined4 *)(iVar2 + 0x14);
                          if (*(uint *)(iVar8 + 0xc) <= uVar24) {
                            func_0x02457d5c();
                          }
                          puVar4 = (undefined4 *)puVar26[-0x18];
                          *(undefined4 *)(iVar8 + uVar24 * 0x10 + 0x14) = uVar19;
                        }
                        *puVar4 = *(undefined4 *)(iVar2 + 0x1c);
                        uVar19 = *(undefined4 *)(uVar21 + 0x14);
                        *(undefined4 *)(iVar2 + 0x1c) = 0;
                        iVar1 = *(int *)(uVar21 + 0x1c);
                        iVar8 = *(int *)(uVar21 + 0x18);
                        *(undefined4 *)(iVar2 + 0x14) = uVar19;
                        *(uint *)(iVar2 + 0x10) = 0xffffffff;
                        *(int *)(uVar21 + 0x1c) = iVar1 + 1;
                        *(uint *)(uVar21 + 0x14) = uVar22;
                        *(int *)(uVar21 + 0x18) = iVar8 + 1;
                        return 1;
                      }
                    }
                    uVar16 = *(uint *)(iVar2 + 0x14);
                    uVar24 = uVar22;
                  } while (*(uint *)(iVar2 + 0x14) < 0x80000000);
                }
              }
              *(undefined4 *)puVar26[-0x18] = 0;
              return 0;
            }
          }
          uVar19 = *(undefined4 *)(iVar8 + 0xc);
          puVar26[-7] = uVar3 & 0x7fffffff;
          func_0x02457e94(uVar3 & 0x7fffffff,uVar19);
          if (*(uint *)(iVar2 + 0xc) <= extraout_r1_01) {
            func_0x02457d5c();
          }
          uVar3 = *(int *)(iVar2 + extraout_r1_01 * 4 + 0x10) - 1;
          if (-1 < (int)uVar3) {
            uVar16 = puVar26[-8];
            puVar26[-10] = extraout_r1_01;
            uVar21 = 0xffffffff;
            do {
              uVar24 = uVar3;
              iVar2 = *(int *)(uVar16 + 0xc);
              if (iVar2 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar2 + 0xc) <= uVar24) {
                func_0x02457d5c();
              }
              iVar2 = iVar2 + uVar24 * 0x10;
              if (*(uint *)(iVar2 + 0x10) == puVar26[-7]) {
                piVar13 = *(int **)(uVar16 + 0x20);
                if (piVar13 == (int *)0x0) {
                  piVar13 = (int *)func_0x02ecb070(*(undefined4 *)
                                                    (*(int *)(*(int *)(puVar26[-9] + 0x10) + 0x60) +
                                                    0xc));
                  uVar19 = *(undefined4 *)(iVar2 + 0x18);
                  uVar3 = puVar26[-6];
                  if (piVar13 == (int *)0x0) {
                    func_0x02457d50(0,uVar19);
                  }
                  iVar8 = (**(code **)(*piVar13 + 0x100))
                                    (piVar13,uVar19,uVar3,*(undefined4 *)(*piVar13 + 0x104));
                }
                else {
                  uVar3 = puVar26[-6];
                  uVar19 = *(undefined4 *)(iVar2 + 0x18);
                  if (piVar13 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar8 = *(int *)(*(int *)(*(int *)(puVar26[-9] + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
                    iVar8 = func_0x02457d84(iVar8);
                  }
                  iVar1 = *piVar13;
                  uVar16 = (uint)*(ushort *)(iVar1 + 0xb6);
                  if (uVar16 != 0) {
                    piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                    do {
                      if (piVar11[-1] == iVar8) {
                        puVar4 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
                        goto LAB_03dd0c0c;
                      }
                      uVar16 = uVar16 - 1;
                      piVar11 = piVar11 + 2;
                    } while (uVar16 != 0);
                  }
                  puVar4 = (undefined4 *)func_0x02457d88(piVar13,iVar8,0);
LAB_03dd0c0c:
                  iVar8 = (*(code *)*puVar4)(piVar13,uVar19,uVar3,puVar4[1]);
                }
                uVar16 = puVar26[-8];
                if (iVar8 != 0) {
                  if ((int)uVar21 < 0) {
                    iVar8 = *(int *)(uVar16 + 8);
                    iVar1 = *(int *)(iVar2 + 0x14);
                    if (iVar8 == 0) {
                      func_0x02457d50();
                    }
                    uVar3 = puVar26[-10];
                    if (*(uint *)(iVar8 + 0xc) <= uVar3) {
                      func_0x02457d5c();
                    }
                    *(int *)(iVar8 + uVar3 * 4 + 0x10) = iVar1 + 1;
                  }
                  else {
                    iVar8 = *(int *)(uVar16 + 0xc);
                    if (iVar8 == 0) {
                      func_0x02457d50();
                    }
                    uVar19 = *(undefined4 *)(iVar2 + 0x14);
                    if (*(uint *)(iVar8 + 0xc) <= uVar21) {
                      func_0x02457d5c();
                    }
                    *(undefined4 *)(iVar8 + uVar21 * 0x10 + 0x14) = uVar19;
                  }
                  uVar3 = puVar26[-8];
                  uVar19 = *(undefined4 *)(uVar3 + 0x14);
                  *(undefined4 *)(iVar2 + 0x1c) = 0;
                  iVar8 = *(int *)(uVar3 + 0x18);
                  iVar1 = *(int *)(uVar3 + 0x1c);
                  *(uint *)(iVar2 + 0x10) = 0xffffffff;
                  *(undefined4 *)(iVar2 + 0x14) = uVar19;
                  *(uint *)(uVar3 + 0x14) = uVar24;
                  *(int *)(uVar3 + 0x18) = iVar8 + 1;
                  *(int *)(uVar3 + 0x1c) = iVar1 + 1;
                  return 1;
                }
              }
              uVar3 = *(uint *)(iVar2 + 0x14);
              uVar21 = uVar24;
            } while (*(uint *)(iVar2 + 0x14) < 0x80000000);
          }
        }
        return 0;
      }
      iVar2 = func_0x0229f13c(0x163d,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar21 = *puVar26;
      uVar16 = puVar26[1];
      uVar24 = puVar26[2];
      uVar22 = puVar26[3];
      goto LAB_021d0928;
    }
    unaff_r6 = *(uint *)((int)register0x00000054 + -8);
    *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -4);
    *(int **)((int)register0x00000054 + -8) = unaff_r11;
    *(undefined4 *)((int)register0x00000054 + -0xc) =
         *(undefined4 *)((int)register0x00000054 + -0xc);
    *puVar26 = *puVar26;
    iVar2 = func_0x0229f06c(0x1633,0);
    if (iVar2 != 0) {
      iVar2 = func_0x0229f13c(0x1633);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      unaff_r4 = *puVar26;
      unaff_r5 = *(uint *)((int)register0x00000054 + -0xc);
      unaff_lr = *(undefined4 *)((int)register0x00000054 + -4);
SUB_02173f80:
      *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
      *(uint *)((int)register0x00000054 + -8) = unaff_r8;
      *(uint *)((int)register0x00000054 + -0xc) = unaff_r7;
      *(uint *)((int)register0x00000054 + -0x10) = unaff_r6;
      *(uint *)((int)register0x00000054 + -0x14) = unaff_r5;
      *(uint *)((int)register0x00000054 + -0x18) = unaff_r4;
      *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      *(undefined4 *)((int)register0x00000054 + -0x28) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      *(undefined4 *)((int)register0x00000054 + -0x24) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
      func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
      iVar8 = *(int *)(iVar2 + 0x10);
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
      if (iVar8 != 0) {
        func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar8,0);
      }
      func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
      iVar8 = *(int *)(iVar2 + 8);
      uVar19 = *(undefined4 *)(iVar2 + 0xc);
      iVar2 = *(int *)(iVar2 + 0x10);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar10 = 2;
      if (iVar2 == 0) {
        uVar10 = 1;
      }
      *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
      uVar3 = func_0x0245495c(iVar8,uVar19,(undefined1 *)((int)register0x00000054 + -0x30),uVar10);
      return uVar3;
    }
    iVar2 = *(int *)(uVar3 + 0x1c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    FUN_01e0f95c(iVar2,1,0);
    param_1 = *(uint *)(uVar3 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -4);
    *(undefined4 *)((int)register0x00000054 + -8) = *(undefined4 *)((int)register0x00000054 + -8);
    *(undefined4 *)((int)register0x00000054 + -0xc) =
         *(undefined4 *)((int)register0x00000054 + -0xc);
    *puVar26 = *puVar26;
    iVar2 = func_0x0229f06c(0x1635,0);
    if (iVar2 != 0) {
      iVar2 = func_0x0229f13c(0x1635,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      unaff_r4 = *puVar26;
      unaff_r5 = *(uint *)((int)register0x00000054 + -0xc);
      unaff_lr = *(undefined4 *)((int)register0x00000054 + -4);
      goto SUB_02173f80;
    }
    uVar3 = 1;
    uVar21 = *puVar26;
    uVar16 = *(uint *)((int)register0x00000054 + -0xc);
    uVar24 = *(uint *)((int)register0x00000054 + -8);
    uVar22 = *(uint *)((int)register0x00000054 + -4);
  }
  else {
    pcVar14 = (char *)(_UNK_01e115fc + 0x1e10f24);
    uStack_24 = unaff_r4;
    uStack_20 = unaff_r5;
    if (*pcVar14 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e11600 + 0x1e10f38));
      func_0x01384978(*(undefined4 *)(_UNK_01e11604 + 0x1e10f44));
      *pcVar14 = '\x01';
    }
    iVar2 = func_0x0229f06c(0xa06f,0);
    if (iVar2 != 0) {
      iVar2 = func_0x0229f13c(0xa06f,0);
      unaff_r4 = uStack_24;
      unaff_r5 = uStack_20;
      if (iVar2 == 0) {
        func_0x01384bf0();
        unaff_r4 = uStack_24;
        unaff_r5 = uStack_20;
      }
      goto SUB_02173f80;
    }
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar21 = func_0x02122ab0(iVar2,0);
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02122f9c(iVar2,0);
    if (iVar2 < 1) {
      func_0x01e12940(param_1,1);
      iVar2 = *(int *)(param_1 + 0x34);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02123058(iVar2,0);
      iVar8 = *(int *)(param_1 + 0x34);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = func_0x02122cc0(iVar8,0);
      if (iVar8 == 0) {
        iVar2 = *(int *)(param_1 + 0x34);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar3 = 0;
        iVar2 = func_0x02122e38(iVar2,0);
        if (iVar2 < 1) {
          uVar24 = 0;
          piVar13 = (int *)0x0;
          uVar16 = 0;
          cVar6 = '\0';
          unaff_r5 = 0;
          piVar11 = (int *)0x0;
          uVar22 = 0;
          if ((int)uVar21 < 1) goto LAB_01e111e8;
          goto LAB_01e11564;
        }
        iVar2 = *(int *)(param_1 + 0x34);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x02122e38(iVar2,0);
        iVar8 = *(int *)(param_1 + 0x34);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iStack_30 = func_0x02123004(iVar8,0);
      }
      else {
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar8 = *(int *)(param_1 + 0x34);
        iVar2 = *(int *)(iVar2 + 0x44);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iStack_30 = func_0x02122c6c(iVar8,0);
        iVar2 = iVar2 * 1000;
      }
      uStack_2c = iStack_30 >> 0x1f;
      uVar19 = func_0x01e125e0(param_1,uStack_2c,iVar2,iVar2 >> 0x1f);
      iVar2 = *(int *)(param_1 + 0x18);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar16 = 0;
      func_0x0244feac(iVar2,uVar19,0);
      cVar6 = '\x01';
      uVar3 = 0;
      unaff_r5 = 0;
      piVar11 = (int *)0x0;
      piVar23 = unaff_r11;
LAB_01e11560:
      uVar22 = 0;
      uVar24 = uVar21;
      piVar13 = piVar23;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x34);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      piVar11 = (int *)func_0x02122d24(iVar2,0);
      piVar13 = (int *)func_0x021566f4(0);
      if (piVar13 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar13;
      piVar23 = *(int **)(_UNK_01e11608 + 0x1e11020);
      uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar9[-1] == *piVar23) {
            puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0x178);
            goto LAB_01e110f0;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar13,*piVar23,0x17);
LAB_01e110f0:
      iVar2 = (*(code *)*puVar4)(piVar13,puVar4[1]);
      bVar20 = 0;
      if (iVar2 != 0) {
        iVar2 = *(int *)(param_1 + 0x34);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x02123058(iVar2,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        bVar20 = *(byte *)(iVar2 + 0x2e);
      }
      func_0x01e12940(param_1,0);
      unaff_r5 = (uint)((bVar20 & 0 < (int)uVar21) != 0) & ((uint)piVar11 ^ 1);
      uVar3 = (uint)((0 < (int)uVar21 & ~bVar20) != 0) & ((uint)piVar11 ^ 1);
      uVar24 = unaff_r5;
      piVar13 = piVar11;
      if (0 < (int)uVar21) {
        if (uVar3 == 0) {
          if (unaff_r5 == 0) {
            bVar25 = piVar11 == (int *)0x0;
            uVar16 = 0;
            cVar6 = '\0';
            uVar3 = 0;
            unaff_r5 = 0;
            piVar11 = (int *)0x0;
            uVar22 = 0;
            uVar24 = uVar21;
            piVar13 = piVar23;
            if (bVar25) goto LAB_01e11564;
            piVar13 = (int *)func_0x021566f4(0);
            if (piVar13 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar2 = *piVar13;
            uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
            if (uVar3 != 0) {
              piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
              do {
                if (piVar11[-1] == *piVar23) {
                  puVar4 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0x160);
                  goto LAB_01e11538;
                }
                uVar3 = uVar3 - 1;
                piVar11 = piVar11 + 2;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar13,*piVar23,0x14);
LAB_01e11538:
            uVar16 = (*(code *)*puVar4)(piVar13,uVar21,puVar4[1]);
            piVar11 = (int *)0x1;
            cVar6 = '\0';
            uVar3 = 0;
            unaff_r5 = 0;
          }
          else {
            piVar13 = (int *)func_0x021566f4(0);
            if (piVar13 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar2 = *piVar13;
            uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
            if (uVar3 != 0) {
              piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
              do {
                if (piVar9[-1] == *piVar23) {
                  puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0x160);
                  goto LAB_01e11504;
                }
                uVar3 = uVar3 - 1;
                piVar9 = piVar9 + 2;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar13,*piVar23,0x14);
LAB_01e11504:
            uVar16 = (*(code *)*puVar4)(piVar13,uVar21,puVar4[1]);
            unaff_r5 = 1;
            cVar6 = '\0';
            uVar3 = 0;
          }
        }
        else {
          piVar13 = (int *)func_0x021566f4(0);
          if (piVar13 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar13;
          uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar3 != 0) {
            piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar9[-1] == *piVar23) {
                puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0x160);
                goto LAB_01e114d4;
              }
              uVar3 = uVar3 - 1;
              piVar9 = piVar9 + 2;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar13,*piVar23,0x14);
LAB_01e114d4:
          uVar16 = (*(code *)*puVar4)(piVar13,uVar21,puVar4[1]);
          uVar3 = 1;
          cVar6 = '\0';
        }
        goto LAB_01e11560;
      }
LAB_01e111e8:
      piVar11 = piVar13;
      unaff_r5 = uVar24;
      iVar2 = *(int *)(param_1 + 0x34);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02123058(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x18);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar2 + 0xc)) {
        func_0x01e12aa0(param_1);
      }
      piVar13 = (int *)func_0x021566f4(0);
      iVar2 = *(int *)(param_1 + 0x34);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02123058(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar19 = *(undefined4 *)(iVar2 + 0x18);
      if (piVar13 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar13;
      uVar21 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar21 != 0) {
        piVar23 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar23[-1] == **(int **)(_UNK_01e1160c + 0x1e1128c)) {
            puVar4 = (undefined4 *)(iVar2 + *piVar23 * 8 + 0x1e8);
            goto LAB_01e1146c;
          }
          uVar21 = uVar21 - 1;
          piVar23 = piVar23 + 2;
        } while (uVar21 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar13,**(int **)(_UNK_01e1160c + 0x1e1128c),0x25);
LAB_01e1146c:
      iVar2 = (*(code *)*puVar4)(piVar13,uVar19,puVar4[1]);
      uVar16 = (uint)(iVar2 != 0);
      uVar22 = 1;
      cVar6 = '\0';
      uVar24 = unaff_r5;
      piVar13 = piVar11;
    }
LAB_01e11564:
    if (*(char *)(param_1 + 0x65) != cVar6) {
      FUN_01e106cc(param_1);
    }
    if (*(byte *)(param_1 + 0x69) != uVar22) {
      func_0x01e12e0c(param_1,uVar22);
    }
    if (*(byte *)(param_1 + 0x67) == uVar3) {
      if (*(byte *)(param_1 + 0x68) != unaff_r5) {
        func_0x01e131ac(param_1,unaff_r5);
      }
      if ((int *)(uint)*(byte *)(param_1 + 0x6a) != piVar11) {
        func_0x01e13234(param_1,piVar11);
      }
      unaff_r4 = uStack_24;
      unaff_r5 = uStack_20;
      if (*(byte *)(param_1 + 0x66) == uVar16) {
        return (uint)*(byte *)(param_1 + 0x66);
      }
      goto SUB_01e126d0;
    }
    unaff_lr = 0x1e115a4;
    unaff_r4 = param_1;
    unaff_r6 = uVar16;
    unaff_r7 = uVar22;
    unaff_r8 = uVar24;
    unaff_r9 = piVar11;
    unaff_r10 = uVar3;
    unaff_r11 = piVar13;
    register0x00000054 = (BADSPACEBASE *)&iStack_30;
SUB_01e12758:
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(uint *)((int)register0x00000054 + -8) = unaff_r6;
    *(uint *)((int)register0x00000054 + -0xc) = unaff_r5;
    puVar26 = (uint *)((int)register0x00000054 + -0x10);
    *puVar26 = unaff_r4;
    iVar2 = func_0x0229f06c(0x163f,0);
    if (iVar2 != 0) {
      iVar2 = func_0x0229f13c(0x163f,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      unaff_r4 = *puVar26;
      unaff_r5 = *(uint *)((int)register0x00000054 + -0xc);
      unaff_r6 = *(uint *)((int)register0x00000054 + -8);
      unaff_lr = *(undefined4 *)((int)register0x00000054 + -4);
      goto SUB_021744a8;
    }
    uVar21 = *(uint *)(param_1 + 0x30);
    *(char *)(param_1 + 0x67) = (char)uVar3;
    if (uVar21 == 0) {
      func_0x01384bf0();
    }
    param_1 = uVar21;
    if (uVar3 == 0) {
      unaff_r6 = *(uint *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -4);
      *(int **)((int)register0x00000054 + -8) = unaff_r11;
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0xc);
      *puVar26 = *puVar26;
      iVar2 = func_0x0229f06c(0x1642,0);
      if (iVar2 != 0) {
        iVar2 = func_0x0229f13c(0x1642);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        unaff_r4 = *puVar26;
        unaff_r5 = *(uint *)((int)register0x00000054 + -0xc);
        unaff_lr = *(undefined4 *)((int)register0x00000054 + -4);
        goto SUB_02173f80;
      }
      param_1 = *(uint *)(uVar21 + 0x20);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -4);
      *(undefined4 *)((int)register0x00000054 + -8) = *(undefined4 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0xc);
      *puVar26 = *puVar26;
      iVar2 = func_0x0229f06c(0x1643,0);
      if (iVar2 != 0) {
        iVar2 = func_0x0229f13c(0x1643,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        unaff_r4 = *puVar26;
        unaff_r5 = *(uint *)((int)register0x00000054 + -0xc);
        unaff_lr = *(undefined4 *)((int)register0x00000054 + -4);
        goto SUB_02173f80;
      }
      uVar3 = 0;
      uVar21 = *puVar26;
      uVar16 = *(uint *)((int)register0x00000054 + -0xc);
      uVar24 = *(uint *)((int)register0x00000054 + -8);
      uVar22 = *(uint *)((int)register0x00000054 + -4);
      goto SUB_01e188e4;
    }
    unaff_r6 = *(uint *)((int)register0x00000054 + -8);
    *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -4);
    *(int **)((int)register0x00000054 + -8) = unaff_r11;
    *(undefined4 *)((int)register0x00000054 + -0xc) =
         *(undefined4 *)((int)register0x00000054 + -0xc);
    *puVar26 = *puVar26;
    iVar2 = func_0x0229f06c(0x1640,0);
    if (iVar2 != 0) {
      iVar2 = func_0x0229f13c(0x1640);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      unaff_r4 = *puVar26;
      unaff_r5 = *(uint *)((int)register0x00000054 + -0xc);
      unaff_lr = *(undefined4 *)((int)register0x00000054 + -4);
      goto SUB_02173f80;
    }
    param_1 = *(uint *)(uVar21 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -4);
    *(undefined4 *)((int)register0x00000054 + -8) = *(undefined4 *)((int)register0x00000054 + -8);
    *(undefined4 *)((int)register0x00000054 + -0xc) =
         *(undefined4 *)((int)register0x00000054 + -0xc);
    *puVar26 = *puVar26;
    iVar2 = func_0x0229f06c(0x1641,0);
    if (iVar2 != 0) {
      iVar2 = func_0x0229f13c(0x1641,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      unaff_r4 = *puVar26;
      unaff_r5 = *(uint *)((int)register0x00000054 + -0xc);
      unaff_lr = *(undefined4 *)((int)register0x00000054 + -4);
      goto SUB_02173f80;
    }
    uVar3 = 0;
    uVar21 = *puVar26;
    uVar16 = *(uint *)((int)register0x00000054 + -0xc);
    uVar24 = *(uint *)((int)register0x00000054 + -8);
    uVar22 = *(uint *)((int)register0x00000054 + -4);
  }
  puVar26[3] = uVar22;
  puVar26[2] = uVar24;
  puVar26[1] = unaff_r10;
  *puVar26 = (uint)unaff_r9;
  puVar26[-1] = unaff_r8;
  puVar26[-2] = unaff_r7;
  puVar26[-3] = unaff_r6;
  puVar26[-4] = uVar16;
  puVar26[-5] = uVar21;
  pcVar14 = (char *)(_UNK_01e1882c + 0x1e18078);
  if (*pcVar14 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
    func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
    func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
    func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
    func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
    func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
    *pcVar14 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x1636,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x1636,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar21 = puVar26[-5];
    uVar16 = puVar26[-4];
    uVar24 = puVar26[-3];
    unaff_r7 = puVar26[-2];
    unaff_r8 = puVar26[-1];
    unaff_r9 = (int *)*puVar26;
    unaff_r10 = puVar26[1];
    uVar22 = puVar26[3];
LAB_021d0928:
    puVar26[3] = uVar22;
    puVar26[2] = unaff_r10;
    puVar26[1] = (uint)unaff_r9;
    *puVar26 = unaff_r8;
    puVar26[-1] = unaff_r7;
    puVar26[-2] = uVar24;
    puVar26[-3] = uVar16;
    puVar26[-4] = uVar21;
    puVar26[-10] = 0;
    puVar26[-9] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    puVar26[-8] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    puVar26[-7] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    puVar26[-6] = 0;
    func_0x0245494c(puVar26 + -0x10,0,uVar3,0);
    iVar8 = *(int *)(iVar2 + 0x10);
    puVar26[-10] = puVar26[-0x10];
    puVar26[-9] = puVar26[-0xf];
    puVar26[-8] = puVar26[-0xe];
    puVar26[-7] = puVar26[-0xd];
    puVar26[-6] = puVar26[-0xc];
    if (iVar8 != 0) {
      func_0x01485278(puVar26 + -10,iVar8,0);
    }
    func_0x01485278(puVar26 + -10,param_1,0);
    func_0x01485238(puVar26 + -10,uVar3,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar19 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar10 = 3;
    if (iVar2 == 0) {
      uVar10 = 2;
    }
    puVar26[-0x12] = 0;
    puVar26[-0x11] = 0;
    uVar3 = func_0x0245495c(iVar8,uVar19,puVar26 + -10,uVar10);
    return uVar3;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar21 = func_0x03dcf4b4(iVar2,uVar3,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
  if (uVar21 != 0) {
    return uVar21;
  }
  iVar2 = func_0x01e1a508(param_1,uVar3);
  pcVar14 = (char *)(_UNK_01e1884c + 0x1e1816c);
  if (uVar3 < 0x12) {
    if ((uVar3 < 3) || (uVar3 == 0xb)) goto LAB_01e183bc;
    if (uVar3 == 0x11) {
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar8 = func_0x024504c0(iVar2,0);
      uVar19 = *(undefined4 *)(param_1 + 0x14);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      func_0x024505b4(iVar8,uVar19,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar8 = func_0x024504c0(iVar2,0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = func_0x02450158(iVar8,0,0);
      if (*pcVar14 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18850 + 0x1e18370));
        *pcVar14 = '\x01';
      }
      puVar4 = *(undefined4 **)(**(int **)(_UNK_01e18854 + 0x1e18388) + 0x5c);
      uVar10 = puVar4[2];
      uVar19 = *puVar4;
      uVar17 = puVar4[1];
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      puVar26[-10] = 0;
      func_0x024503a4(iVar8,uVar19,uVar17,uVar10);
      goto LAB_01e1841c;
    }
LAB_01e183e0:
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar8 = func_0x024504c0(iVar2,0);
    uVar19 = *(undefined4 *)(param_1 + 0x10);
    goto LAB_01e18400;
  }
  switch(uVar3) {
  default:
    goto LAB_01e183e0;
  case 0x17:
  case 0x1f:
  case 0x24:
  case 0x25:
LAB_01e183bc:
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar8 = func_0x024504c0(iVar2,0);
    uVar19 = *(undefined4 *)(param_1 + 0x14);
    break;
  case 0x1c:
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar8 = func_0x024504c0(iVar2,0);
    uVar19 = *(undefined4 *)(param_1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x024505b4(iVar8,uVar19,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar8 = func_0x02fe2a20(iVar2,**(undefined4 **)(&UNK_01e18224 + _UNK_01e18858));
    piVar13 = (int *)func_0x021566f4(0);
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar19 = func_0x0210e2d4(iVar1,0);
    if (piVar13 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar13;
    uVar21 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar21 != 0) {
      piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(&UNK_01e1828c + _UNK_01e1885c)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0x100);
          goto code_r0x01e186ec;
        }
        uVar21 = uVar21 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar21 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar13,**(int **)(&UNK_01e1828c + _UNK_01e1885c),8);
code_r0x01e186ec:
    iVar1 = (*(code *)*puVar4)(piVar13,uVar19,puVar4[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar19 = *(undefined4 *)(iVar1 + 0x1c);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x0267cc24(iVar8,uVar19,0);
    goto LAB_01e1841c;
  case 0x1d:
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar8 = func_0x024504c0(iVar2,0);
    uVar19 = *(undefined4 *)(param_1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x024505b4(iVar8,uVar19,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar8 = func_0x02fe2a20(iVar2,**(undefined4 **)(&UNK_01e18618 + _UNK_01e18860));
    piVar13 = (int *)func_0x021566f4(0);
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar19 = func_0x0210e2d4(iVar1,0);
    if (piVar13 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar13;
    uVar21 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar21 != 0) {
      piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(&UNK_01e18680 + _UNK_01e18864)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0x100);
          goto code_r0x01e18744;
        }
        uVar21 = uVar21 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar21 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar13,**(int **)(&UNK_01e18680 + _UNK_01e18864),8);
code_r0x01e18744:
    iVar1 = (*(code *)*puVar4)(piVar13,uVar19,puVar4[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar19 = *(undefined4 *)(iVar1 + 0x1c);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x0267cc24(iVar8,uVar19,0);
    puVar7 = *(uint **)(&UNK_01e1879c + _UNK_01e18868);
    puVar26[-6] = 0x1d;
    puVar26[-7] = 0xffffffff;
    puVar26[-8] = *puVar7;
    uVar19 = func_0x0244f5f4(puVar26 + -8,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
      func_0x02450840(0,uVar19,0);
      func_0x01384bf0();
    }
    else {
      func_0x02450840(iVar2,uVar19,0);
    }
    iVar8 = func_0x02fe27b8(iVar2,**(undefined4 **)(&UNK_01e187fc + _UNK_01e1886c));
    uVar19 = *(undefined4 *)(param_1 + 0x1c);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x0229f1d0(iVar8,uVar19,0);
    goto LAB_01e1841c;
  case 0x26:
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar8 = func_0x024504c0(iVar2,0);
    uVar19 = *(undefined4 *)(param_1 + 0x18);
  }
LAB_01e18400:
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  func_0x024505b4(iVar8,uVar19,0);
LAB_01e1841c:
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  puVar26[-9] = param_1;
  iVar8 = func_0x024504c0(iVar2,0);
  if (*pcVar14 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e18870 + 0x1e18454));
    *pcVar14 = '\x01';
  }
  piVar13 = *(int **)(_UNK_01e18874 + 0x1e18470);
  puVar4 = *(undefined4 **)(*piVar13 + 0x5c);
  uVar19 = puVar4[2];
  uVar10 = *puVar4;
  uVar17 = puVar4[1];
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  puVar26[-10] = 0;
  func_0x0245068c(iVar8,uVar10,uVar17,uVar19);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar8 = func_0x024504c0(iVar2,0);
  pcVar12 = (char *)(_UNK_01e18878 + 0x1e184c8);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1887c + 0x1e184dc));
    *pcVar12 = '\x01';
  }
  iVar1 = *(int *)(*piVar13 + 0x5c);
  uVar19 = *(undefined4 *)(iVar1 + 0xc);
  uVar10 = *(undefined4 *)(iVar1 + 0x10);
  uVar17 = *(undefined4 *)(iVar1 + 0x14);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  puVar26[-10] = 0;
  func_0x024503a4(iVar8,uVar19,uVar10,uVar17);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar8 = func_0x024504c0(iVar2,0);
  if (*pcVar14 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e18880 + 0x1e18550));
    *pcVar14 = '\x01';
  }
  puVar4 = *(undefined4 **)(*piVar13 + 0x5c);
  uVar19 = *puVar4;
  uVar10 = puVar4[1];
  uVar17 = puVar4[2];
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  puVar26[-10] = 0;
  func_0x02450c24(iVar8,uVar19,uVar10,uVar17);
  iVar8 = *(int *)(puVar26[-9] + 0x20);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar3 = func_0x03dcf268(iVar8,uVar3,iVar2,**(undefined4 **)(_UNK_01e18884 + 0x1e185b4));
  return uVar3;
}



// ===== FAT.MBItemCharge$$_RefreshChest RVA 0x1e00d94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e10d94(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int extraout_r3_00;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  int iStack_28;
  int iStack_24;
  uint uStack_20;
  
  iVar2 = func_0x0229f06c(0xa06c,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa06c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&stack0xffffffb8,0,0);
    uStack_20 = uStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar11 = *(int *)(iVar2 + 8);
    uVar13 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar2 == 0) {
      uVar7 = 1;
    }
    uStack_50 = 0;
    uVar3 = func_0x0245495c(iVar11,uVar13,&iStack_30,uVar7);
    return uVar3;
  }
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = func_0x0211f8ec(iVar2,0);
  if (uVar3 != 0) {
    iVar2 = *(int *)(param_1 + 0x40);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0211fb6c(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(param_1 + 0x40);
    iVar2 = *(int *)(iVar2 + 0x34);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iStack_28 = func_0x0211fbc0(iVar11,0);
    iVar2 = iVar2 * 1000;
    iStack_24 = iStack_28 >> 0x1f;
    uVar13 = func_0x01e125e0(param_1,iStack_24,iVar2,iVar2 >> 0x1f);
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0244feac(iVar2,uVar13,0);
  }
  if (*(byte *)(param_1 + 0x65) != uVar3) {
    FUN_01e106cc(param_1,uVar3);
  }
  uVar12 = (uint)(*(char *)(param_1 + 100) != '\0') & (uVar3 ^ 1);
  if (*(byte *)(param_1 + 0x66) != uVar12) {
    func_0x01e126d0(param_1,uVar12);
  }
  if (*(byte *)(param_1 + 0x67) != uVar12) {
    func_0x01e12758(param_1,uVar12);
  }
  pcVar10 = (char *)(_UNK_01e12934 + 0x1e127f8);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e12938 + 0x1e1280c));
    *pcVar10 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa06e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa06e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,uVar3,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,uVar3,0);
    iVar11 = *(int *)(iVar2 + 8);
    uVar13 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar2 == 0) {
      uVar7 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    uVar3 = func_0x0245495c(iVar11,uVar13,&uStack_38,uVar7);
    return uVar3;
  }
  iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01e1293c + 0x1e12868));
  iVar11 = *(int *)(param_1 + 0x40);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar11 = func_0x02123568(iVar11,0);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar11 = func_0x0210e5f4(iVar11,0);
  if (uVar3 == 0) {
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02123568(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar13 = func_0x0210e2d4(iVar1,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar10 = (char *)(_UNK_01de9ae4 + 0x1de9a40);
    if (*pcVar10 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01de9ae8 + 0x1de9a54),iVar11,uVar13,0);
      *pcVar10 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x9eed,0);
    if (iVar1 == 0) {
      iVar2 = *(int *)(iVar2 + 0x48);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x03d5a8e0(iVar2,iVar11,uVar13,0);
      return uVar3;
    }
    iVar1 = func_0x0229f13c(0x9eed,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar3 = func_0x02179a68(iVar1,iVar2,iVar11,uVar13);
    return uVar3;
  }
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar10 = (char *)(_UNK_01de9a14 + 0x1de9984);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de9a18 + 0x1de9998),iVar11,0);
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1648,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1648,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,iVar11,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485238(&uStack_38,iVar11,0);
    iVar11 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar2 == 0) {
      uVar7 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    uVar3 = func_0x0245495c(iVar11,uVar13,&uStack_38,uVar7);
    return uVar3;
  }
  iVar2 = *(int *)(iVar2 + 0x44);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iStack_34 = **(int **)(_UNK_01de9a1c + 0x1de9a08);
  if (*(int *)(iVar2 + 8) != 0) {
    piVar9 = *(int **)(iVar2 + 0x20);
    iStack_30 = iVar2;
    iStack_28 = iVar11;
    if (piVar9 == (int *)0x0) {
      uVar3 = func_0x04821a00(&iStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc4));
    }
    else {
      iVar2 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x02457d84(iVar2);
      }
      iVar1 = *piVar9;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar2) {
            puVar4 = (undefined4 *)(iVar1 + *piVar8 * 8 + 200);
            goto LAB_03d5b514;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined4 *)func_0x02457d88(piVar9,iVar2,1);
LAB_03d5b514:
      uVar3 = (*(code *)*puVar4)(piVar9,iVar11,puVar4[1]);
      iVar2 = iStack_30;
    }
    uVar14 = *(uint *)(iVar2 + 8);
    uVar12 = uVar14;
    if (uVar14 == 0) {
      func_0x02457d50();
      uVar12 = *(uint *)(iStack_30 + 8);
      if (uVar12 == 0) {
        uVar15 = func_0x02457d50();
        uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
        iVar2 = (int)uVar15;
        uStack_54 = 0;
        if (*(int *)(iVar2 + 8) != 0) {
          piVar9 = *(int **)(iVar2 + 0x20);
          uStack_60 = uVar13;
          uStack_5c = uVar3;
          uStack_58 = uVar12;
          uStack_50 = uVar14;
          if (piVar9 == (int *)0x0) {
            uVar3 = func_0x04821a00(&uStack_60,
                                    *(undefined4 *)
                                     (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0xc4));
          }
          else {
            iVar11 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
              iVar11 = func_0x02457d84(iVar11);
            }
            iVar1 = *piVar9;
            uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar3 != 0) {
              piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar11) {
                  puVar4 = (undefined4 *)(iVar1 + *piVar8 * 8 + 200);
                  goto LAB_03d5b878;
                }
                uVar3 = uVar3 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined4 *)func_0x02457d88(piVar9,iVar11,1);
LAB_03d5b878:
            uVar3 = (*(code *)*puVar4)(piVar9,uVar13,puVar4[1]);
          }
          iVar1 = *(int *)(iVar2 + 8);
          iVar11 = iVar1;
          if (iVar1 == 0) {
            func_0x02457d50();
            iVar11 = *(int *)(iVar2 + 8);
            if (iVar11 == 0) {
              uVar15 = func_0x02457d50();
              uVar3 = func_0x03d5a510((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) + 0x84));
              if ((int)uVar3 < 0) {
                uVar13 = 0;
              }
              else {
                iVar2 = *(int *)((int)uVar15 + 0xc);
                if (iVar2 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar2 + 0xc) <= uVar3) {
                  func_0x02457d5c();
                }
                uVar13 = *(undefined4 *)(iVar2 + uVar3 * 0x10 + 0x1c);
              }
              *extraout_r2_00 = uVar13;
              return ~uVar3 >> 0x1f;
            }
          }
          func_0x02457e94(uVar3 & 0x7fffffff,*(undefined4 *)(iVar1 + 0xc));
          if (*(uint *)(iVar11 + 0xc) <= extraout_r1_00) {
            func_0x02457d5c();
          }
          uVar12 = *(int *)(iVar11 + extraout_r1_00 * 4 + 0x10) - 1;
          if (-1 < (int)uVar12) {
            uVar14 = 0xffffffff;
            do {
              uVar6 = uVar12;
              iVar11 = *(int *)(iVar2 + 0xc);
              if (iVar11 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar11 + 0xc) <= uVar6) {
                func_0x02457d5c();
              }
              uVar13 = uStack_60;
              iVar11 = iVar11 + uVar6 * 0x10;
              if (*(uint *)(iVar11 + 0x10) == (uVar3 & 0x7fffffff)) {
                piVar9 = *(int **)(iVar2 + 0x20);
                if (piVar9 == (int *)0x0) {
                  piVar9 = (int *)func_0x02ecaf98(*(undefined4 *)
                                                   (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) +
                                                   0xc));
                  uVar13 = uStack_60;
                  uVar7 = *(undefined4 *)(iVar11 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50(0,uVar7);
                  }
                  iVar1 = (**(code **)(*piVar9 + 0x100))
                                    (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
                }
                else {
                  uVar7 = *(undefined4 *)(iVar11 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar1 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                    iVar1 = func_0x02457d84(iVar1);
                  }
                  iVar5 = *piVar9;
                  uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
                  if (uVar12 != 0) {
                    piVar8 = (int *)(*(int *)(iVar5 + 0x58) + 4);
                    do {
                      if (piVar8[-1] == iVar1) {
                        puVar4 = (undefined4 *)(iVar5 + *piVar8 * 8 + 0xc0);
                        goto LAB_03d5ba20;
                      }
                      uVar12 = uVar12 - 1;
                      piVar8 = piVar8 + 2;
                    } while (uVar12 != 0);
                  }
                  puVar4 = (undefined4 *)func_0x02457d88(piVar9,iVar1,0);
LAB_03d5ba20:
                  iVar1 = (*(code *)*puVar4)(piVar9,uVar7,uVar13,puVar4[1]);
                }
                if (iVar1 != 0) {
                  if ((int)uVar14 < 0) {
                    iVar1 = *(int *)(iVar2 + 8);
                    iVar5 = *(int *)(iVar11 + 0x14);
                    if (iVar1 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar1 + 0xc) <= extraout_r1_00) {
                      func_0x02457d5c();
                    }
                    *(int *)(iVar1 + extraout_r1_00 * 4 + 0x10) = iVar5 + 1;
                  }
                  else {
                    iVar1 = *(int *)(iVar2 + 0xc);
                    if (iVar1 == 0) {
                      func_0x02457d50();
                    }
                    uVar13 = *(undefined4 *)(iVar11 + 0x14);
                    if (*(uint *)(iVar1 + 0xc) <= uVar14) {
                      func_0x02457d5c();
                    }
                    *(undefined4 *)(iVar1 + uVar14 * 0x10 + 0x14) = uVar13;
                  }
                  *extraout_r2 = *(undefined4 *)(iVar11 + 0x1c);
                  uVar13 = *(undefined4 *)(iVar2 + 0x14);
                  iVar1 = *(int *)(iVar2 + 0x18);
                  iVar5 = *(int *)(iVar2 + 0x1c);
                  *(uint *)(iVar11 + 0x10) = 0xffffffff;
                  *(int *)(iVar2 + 0x18) = iVar1 + 1;
                  *(int *)(iVar2 + 0x1c) = iVar5 + 1;
                  *(uint *)(iVar2 + 0x14) = uVar6;
                  *(undefined4 *)(iVar11 + 0x14) = uVar13;
                  return 1;
                }
              }
              uVar12 = *(uint *)(iVar11 + 0x14);
              uVar14 = uVar6;
            } while (*(uint *)(iVar11 + 0x14) < 0x80000000);
          }
        }
        *extraout_r2 = 0;
        return 0;
      }
    }
    uStack_2c = uVar3 & 0x7fffffff;
    func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
    if (*(uint *)(uVar12 + 0xc) <= extraout_r1) {
      func_0x02457d5c();
    }
    uVar3 = *(int *)(uVar12 + extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar3) {
      iVar2 = iStack_30;
      uVar12 = 0xffffffff;
      uStack_38 = extraout_r1;
      do {
        uVar14 = uVar3;
        iVar11 = *(int *)(iVar2 + 0xc);
        if (iVar11 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar11 + 0xc) <= uVar14) {
          func_0x02457d5c();
        }
        iVar1 = iStack_28;
        iVar11 = iVar11 + uVar14 * 0x10;
        if (*(uint *)(iVar11 + 0x10) == uStack_2c) {
          piVar9 = *(int **)(iVar2 + 0x20);
          if (piVar9 == (int *)0x0) {
            piVar9 = (int *)func_0x02ecaf98(*(undefined4 *)
                                             (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc));
            iVar2 = iStack_28;
            uVar13 = *(undefined4 *)(iVar11 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50(0,uVar13);
            }
            iVar1 = (**(code **)(*piVar9 + 0x100))
                              (piVar9,uVar13,iVar2,*(undefined4 *)(*piVar9 + 0x104));
          }
          else {
            uVar13 = *(undefined4 *)(iVar11 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50();
            }
            iVar2 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
              iVar2 = func_0x02457d84(iVar2);
            }
            iVar5 = *piVar9;
            uVar3 = (uint)*(ushort *)(iVar5 + 0xb6);
            if (uVar3 != 0) {
              piVar8 = (int *)(*(int *)(iVar5 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar2) {
                  puVar4 = (undefined4 *)(iVar5 + *piVar8 * 8 + 0xc0);
                  goto LAB_03d5b6c0;
                }
                uVar3 = uVar3 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined4 *)func_0x02457d88(piVar9,iVar2,0);
LAB_03d5b6c0:
            iVar1 = (*(code *)*puVar4)(piVar9,uVar13,iVar1,puVar4[1]);
          }
          iVar2 = iStack_30;
          if (iVar1 != 0) {
            if ((int)uVar12 < 0) {
              iVar2 = *(int *)(iStack_30 + 8);
              iVar1 = *(int *)(iVar11 + 0x14);
              if (iVar2 == 0) {
                func_0x02457d50();
              }
              uVar3 = uStack_38;
              if (*(uint *)(iVar2 + 0xc) <= uStack_38) {
                func_0x02457d5c();
              }
              *(int *)(iVar2 + uVar3 * 4 + 0x10) = iVar1 + 1;
            }
            else {
              iVar2 = *(int *)(iStack_30 + 0xc);
              if (iVar2 == 0) {
                func_0x02457d50();
              }
              uVar13 = *(undefined4 *)(iVar11 + 0x14);
              if (*(uint *)(iVar2 + 0xc) <= uVar12) {
                func_0x02457d5c();
              }
              *(undefined4 *)(iVar2 + uVar12 * 0x10 + 0x14) = uVar13;
            }
            *(uint *)(iVar11 + 0x10) = 0xffffffff;
            uVar13 = *(undefined4 *)(iStack_30 + 0x14);
            *(int *)(iStack_30 + 0x18) = *(int *)(iStack_30 + 0x18) + 1;
            *(uint *)(iStack_30 + 0x14) = uVar14;
            *(int *)(iStack_30 + 0x1c) = *(int *)(iStack_30 + 0x1c) + 1;
            *(undefined4 *)(iVar11 + 0x14) = uVar13;
            return 1;
          }
        }
        uVar3 = *(uint *)(iVar11 + 0x14);
        uVar12 = uVar14;
      } while (*(uint *)(iVar11 + 0x14) < 0x80000000);
    }
  }
  return 0;
}



// ===== FAT.MBItemCharge$$_RefreshTapSource RVA 0x1e00f0c =====

/* WARNING: Removing unreachable block (ram,0x01e1816c) */
/* WARNING: Removing unreachable block (ram,0x01e182d0) */
/* WARNING: Removing unreachable block (ram,0x01e182d8) */
/* WARNING: Removing unreachable block (ram,0x01e183e0) */
/* WARNING: Removing unreachable block (ram,0x01e183e8) */
/* WARNING: Removing unreachable block (ram,0x01e183ec) */
/* WARNING: Removing unreachable block (ram,0x01e182e0) */
/* WARNING: Removing unreachable block (ram,0x01e182e8) */
/* WARNING: Removing unreachable block (ram,0x01e182ec) */
/* WARNING: Removing unreachable block (ram,0x01e18308) */
/* WARNING: Removing unreachable block (ram,0x01e1830c) */
/* WARNING: Removing unreachable block (ram,0x01e18324) */
/* WARNING: Removing unreachable block (ram,0x01e18328) */
/* WARNING: Removing unreachable block (ram,0x01e18340) */
/* WARNING: Removing unreachable block (ram,0x01e18344) */
/* WARNING: Removing unreachable block (ram,0x01e18364) */
/* WARNING: Removing unreachable block (ram,0x01e18378) */
/* WARNING: Removing unreachable block (ram,0x01e18398) */
/* WARNING: Removing unreachable block (ram,0x01e1839c) */
/* WARNING: Removing unreachable block (ram,0x01e18178) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e10f0c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  int *piVar10;
  undefined4 uVar11;
  int extraout_r3;
  int extraout_r3_00;
  char *pcVar12;
  char *pcVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  byte bVar19;
  char cVar20;
  uint uVar21;
  int *piVar22;
  bool bVar23;
  undefined8 uVar24;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  pcVar13 = (char *)(_UNK_01e115fc + 0x1e10f24);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e11600 + 0x1e10f38));
    func_0x01384978(*(undefined4 *)(_UNK_01e11604 + 0x1e10f44));
    *pcVar13 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa06f,0);
  if (iVar1 != 0) {
    iVar2 = func_0x0229f13c(0xa06f,0);
    iVar1 = param_1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02173f80;
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02122ab0(iVar1,0);
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x02122f9c(iVar2,0);
  if (iVar2 < 1) {
    func_0x01e12940(param_1,1);
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02123058(iVar2,0);
    iVar15 = *(int *)(param_1 + 0x34);
    if (iVar15 == 0) {
      func_0x01384bf0();
    }
    iVar15 = func_0x02122cc0(iVar15,0);
    if (iVar15 == 0) {
      iVar2 = *(int *)(param_1 + 0x34);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar7 = 0;
      iVar2 = func_0x02122e38(iVar2,0);
      if (iVar2 < 1) {
        uVar6 = 0;
        cVar9 = '\0';
        uVar14 = 0;
        uVar3 = 0;
        cVar20 = '\0';
        uVar16 = 0;
        uVar21 = 0;
        if (iVar1 < 1) goto LAB_01e111e8;
        goto LAB_01e11564;
      }
      iVar1 = *(int *)(param_1 + 0x34);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02122e38(iVar1,0);
      iVar2 = *(int *)(param_1 + 0x34);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iStack_30 = func_0x02123004(iVar2,0);
    }
    else {
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar15 = *(int *)(param_1 + 0x34);
      iVar1 = *(int *)(iVar2 + 0x44);
      if (iVar15 == 0) {
        func_0x01384bf0();
      }
      iStack_30 = func_0x02122c6c(iVar15,0);
      iVar1 = iVar1 * 1000;
    }
    uStack_2c = iStack_30 >> 0x1f;
    uVar18 = func_0x01e125e0(param_1,uStack_2c,iVar1,iVar1 >> 0x1f);
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 0;
    func_0x0244feac(iVar1,uVar18,0);
    cVar9 = '\x01';
    uVar7 = 0;
    uVar14 = 0;
    uVar3 = 0;
LAB_01e11560:
    cVar20 = '\0';
  }
  else {
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02122d24(iVar2,0);
    piVar4 = (int *)func_0x021566f4(0);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar4;
    piVar22 = *(int **)(_UNK_01e11608 + 0x1e11020);
    uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar10[-1] == *piVar22) {
          puVar5 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0x178);
          goto LAB_01e110f0;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar4,*piVar22,0x17);
LAB_01e110f0:
    iVar2 = (*(code *)*puVar5)(piVar4,puVar5[1]);
    bVar19 = 0;
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0x34);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02123058(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      bVar19 = *(byte *)(iVar2 + 0x2e);
    }
    func_0x01e12940(param_1,0);
    uVar14 = (uint)((bVar19 & 0 < iVar1) != 0) & (uVar3 ^ 1);
    uVar7 = (uint)((0 < iVar1 & ~bVar19) != 0) & (uVar3 ^ 1);
    uVar16 = uVar14;
    uVar21 = uVar3;
    if (0 < iVar1) {
      if (uVar7 == 0) {
        if (uVar14 == 0) {
          bVar23 = uVar3 == 0;
          uVar6 = 0;
          cVar9 = '\0';
          uVar7 = 0;
          uVar14 = 0;
          uVar3 = 0;
          cVar20 = '\0';
          if (bVar23) goto LAB_01e11564;
          piVar4 = (int *)func_0x021566f4(0);
          if (piVar4 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar4;
          uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar7 != 0) {
            piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar10[-1] == *piVar22) {
                puVar5 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0x160);
                goto LAB_01e11538;
              }
              uVar7 = uVar7 - 1;
              piVar10 = piVar10 + 2;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined4 *)func_0x014002dc(piVar4,*piVar22,0x14);
LAB_01e11538:
          uVar6 = (*(code *)*puVar5)(piVar4,iVar1,puVar5[1]);
          uVar3 = 1;
          cVar9 = '\0';
          uVar7 = 0;
          uVar14 = 0;
        }
        else {
          piVar4 = (int *)func_0x021566f4(0);
          if (piVar4 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar4;
          uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar7 != 0) {
            piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar10[-1] == *piVar22) {
                puVar5 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0x160);
                goto LAB_01e11504;
              }
              uVar7 = uVar7 - 1;
              piVar10 = piVar10 + 2;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined4 *)func_0x014002dc(piVar4,*piVar22,0x14);
LAB_01e11504:
          uVar6 = (*(code *)*puVar5)(piVar4,iVar1,puVar5[1]);
          uVar14 = 1;
          cVar9 = '\0';
          uVar7 = 0;
        }
      }
      else {
        piVar4 = (int *)func_0x021566f4(0);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar4;
        uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar10[-1] == *piVar22) {
              puVar5 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0x160);
              goto LAB_01e114d4;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar4,*piVar22,0x14);
LAB_01e114d4:
        uVar6 = (*(code *)*puVar5)(piVar4,iVar1,puVar5[1]);
        uVar7 = 1;
        cVar9 = '\0';
      }
      goto LAB_01e11560;
    }
LAB_01e111e8:
    uVar3 = uVar21;
    uVar14 = uVar16;
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02123058(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar1 + 0xc)) {
      func_0x01e12aa0(param_1);
    }
    piVar4 = (int *)func_0x021566f4(0);
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02123058(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar18 = *(undefined4 *)(iVar1 + 0x18);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar4;
    uVar16 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar16 != 0) {
      piVar22 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar22[-1] == **(int **)(_UNK_01e1160c + 0x1e1128c)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar22 * 8 + 0x1e8);
          goto LAB_01e1146c;
        }
        uVar16 = uVar16 - 1;
        piVar22 = piVar22 + 2;
      } while (uVar16 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01e1160c + 0x1e1128c),0x25);
LAB_01e1146c:
    iVar1 = (*(code *)*puVar5)(piVar4,uVar18,puVar5[1]);
    uVar6 = (uint)(iVar1 != 0);
    cVar20 = '\x01';
    cVar9 = '\0';
  }
LAB_01e11564:
  if (*(char *)(param_1 + 0x65) != cVar9) {
    FUN_01e106cc(param_1);
  }
  if (*(char *)(param_1 + 0x69) != cVar20) {
    func_0x01e12e0c(param_1,cVar20);
  }
  if (*(byte *)(param_1 + 0x67) != uVar7) {
    func_0x01e12758(param_1,uVar7);
  }
  if (*(byte *)(param_1 + 0x68) != uVar14) {
    func_0x01e131ac(param_1,uVar14);
  }
  if (*(byte *)(param_1 + 0x6a) != uVar3) {
    func_0x01e13234(param_1,uVar3);
  }
  if (*(byte *)(param_1 + 0x66) == uVar6) {
    return (uint)*(byte *)(param_1 + 0x66);
  }
  iVar1 = func_0x0229f06c(0x1632,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1632,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,uVar6,0);
    uStack_38 = uStack_50;
    iStack_34 = uStack_4c;
    iStack_30 = iStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,uVar6,0);
    iVar2 = *(int *)(iVar1 + 8);
    uVar18 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar11 = 3;
    if (iVar1 == 0) {
      uVar11 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    uVar7 = func_0x0245495c(iVar2,uVar18,&uStack_38,uVar11);
    return uVar7;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  *(char *)(param_1 + 0x66) = (char)uVar6;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (uVar6 == 0) {
    iVar2 = func_0x0229f06c(0x163a,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar1 + 0x1c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      FUN_01e0fd60(iVar2,1,0);
      iVar1 = *(int *)(iVar1 + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0229f06c(0x163c,0);
      if (iVar2 == 0) {
        pcVar13 = (char *)(_UNK_01e18a0c + 0x1e188fc);
        if (*pcVar13 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
          func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
          func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
          *pcVar13 = '\x01';
        }
        iVar2 = func_0x0229f06c(0x163d,0);
        if (iVar2 == 0) {
          iVar2 = *(int *)(iVar1 + 0x20);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x03dcf4b4(iVar2,1,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
          if (iVar2 == 0) {
            return 0;
          }
          iVar2 = *(int *)(iVar1 + 0x20);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar18 = func_0x03dcf1b0(iVar2,1,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
          func_0x01e1a604(iVar1,1,uVar18);
          iVar1 = *(int *)(iVar1 + 0x20);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iStack_34 = **(int **)(_UNK_01e18a24 + 0x1e18a00);
          uStack_28 = 1;
          if (*(int *)(iVar1 + 8) != 0) {
            piVar4 = *(int **)(iVar1 + 0x20);
            iStack_30 = iVar1;
            if (piVar4 == (int *)0x0) {
              uVar7 = func_0x04821a00(&uStack_28,0);
            }
            else {
              iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
              if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                iVar1 = func_0x02457d84(iVar1);
              }
              iVar2 = *piVar4;
              uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
              if (uVar7 != 0) {
                piVar22 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                do {
                  if (piVar22[-1] == iVar1) {
                    puVar5 = (undefined4 *)(iVar2 + *piVar22 * 8 + 200);
                    goto LAB_03dd0a60;
                  }
                  uVar7 = uVar7 - 1;
                  piVar22 = piVar22 + 2;
                } while (uVar7 != 0);
              }
              puVar5 = (undefined4 *)func_0x02457d88(piVar4,iVar1,1);
LAB_03dd0a60:
              uVar7 = (*(code *)*puVar5)(piVar4,1,puVar5[1]);
              iVar1 = iStack_30;
            }
            uVar21 = *(uint *)(iVar1 + 8);
            uVar16 = uVar21;
            if (uVar21 == 0) {
              func_0x02457d50();
              uVar16 = *(uint *)(iStack_30 + 8);
              if (uVar16 == 0) {
                uVar24 = func_0x02457d50();
                uVar18 = (undefined4)((ulonglong)uVar24 >> 0x20);
                iVar1 = (int)uVar24;
                uStack_3c = 0x3dd0d04;
                uStack_54 = 0;
                if (*(int *)(iVar1 + 8) != 0) {
                  piVar4 = *(int **)(iVar1 + 0x20);
                  uStack_60 = uVar18;
                  uStack_5c = uVar7;
                  uStack_58 = uVar16;
                  uStack_50 = uVar21;
                  if (piVar4 == (int *)0x0) {
                    uVar7 = func_0x04821a00(&uStack_60,0);
                  }
                  else {
                    iVar2 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                      iVar2 = func_0x02457d84(iVar2);
                    }
                    iVar15 = *piVar4;
                    uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
                    if (uVar7 != 0) {
                      piVar22 = (int *)(*(int *)(iVar15 + 0x58) + 4);
                      do {
                        if (piVar22[-1] == iVar2) {
                          puVar5 = (undefined4 *)(iVar15 + *piVar22 * 8 + 200);
                          goto LAB_03dd0dc4;
                        }
                        uVar7 = uVar7 - 1;
                        piVar22 = piVar22 + 2;
                      } while (uVar7 != 0);
                    }
                    puVar5 = (undefined4 *)func_0x02457d88(piVar4,iVar2,1);
LAB_03dd0dc4:
                    uVar7 = (*(code *)*puVar5)(piVar4,uVar18,puVar5[1]);
                  }
                  iVar15 = *(int *)(iVar1 + 8);
                  iVar2 = iVar15;
                  if (iVar15 == 0) {
                    func_0x02457d50();
                    iVar2 = *(int *)(iVar1 + 8);
                    if (iVar2 == 0) {
                      uVar24 = func_0x02457d50();
                      uVar7 = func_0x03dcfa64((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),
                                              *(undefined4 *)
                                               (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) +
                                               0x84));
                      if ((int)uVar7 < 0) {
                        uVar18 = 0;
                      }
                      else {
                        iVar1 = *(int *)((int)uVar24 + 0xc);
                        if (iVar1 == 0) {
                          func_0x02457d50();
                        }
                        if (*(uint *)(iVar1 + 0xc) <= uVar7) {
                          func_0x02457d5c();
                        }
                        uVar18 = *(undefined4 *)(iVar1 + uVar7 * 0x10 + 0x1c);
                      }
                      *extraout_r2_00 = uVar18;
                      return ~uVar7 >> 0x1f;
                    }
                  }
                  func_0x02457e94(uVar7 & 0x7fffffff,*(undefined4 *)(iVar15 + 0xc));
                  if (*(uint *)(iVar2 + 0xc) <= extraout_r1_00) {
                    func_0x02457d5c();
                  }
                  uVar16 = *(int *)(iVar2 + extraout_r1_00 * 4 + 0x10) - 1;
                  if (-1 < (int)uVar16) {
                    uVar21 = 0xffffffff;
                    do {
                      uVar3 = uVar16;
                      iVar2 = *(int *)(iVar1 + 0xc);
                      if (iVar2 == 0) {
                        func_0x02457d50();
                      }
                      if (*(uint *)(iVar2 + 0xc) <= uVar3) {
                        func_0x02457d5c();
                      }
                      uVar18 = uStack_60;
                      iVar2 = iVar2 + uVar3 * 0x10;
                      if (*(uint *)(iVar2 + 0x10) == (uVar7 & 0x7fffffff)) {
                        piVar4 = *(int **)(iVar1 + 0x20);
                        if (piVar4 == (int *)0x0) {
                          piVar4 = (int *)func_0x02ecb070(*(undefined4 *)
                                                           (*(int *)(*(int *)(extraout_r3 + 0x10) +
                                                                    0x60) + 0xc));
                          uVar18 = uStack_60;
                          uVar11 = *(undefined4 *)(iVar2 + 0x18);
                          if (piVar4 == (int *)0x0) {
                            func_0x02457d50(0,uVar11);
                          }
                          iVar15 = (**(code **)(*piVar4 + 0x100))
                                             (piVar4,uVar11,uVar18,*(undefined4 *)(*piVar4 + 0x104))
                          ;
                        }
                        else {
                          uVar11 = *(undefined4 *)(iVar2 + 0x18);
                          if (piVar4 == (int *)0x0) {
                            func_0x02457d50();
                          }
                          iVar15 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                          if ((*(ushort *)(iVar15 + 0xbd) & 1) == 0) {
                            iVar15 = func_0x02457d84(iVar15);
                          }
                          iVar8 = *piVar4;
                          uVar16 = (uint)*(ushort *)(iVar8 + 0xb6);
                          if (uVar16 != 0) {
                            piVar22 = (int *)(*(int *)(iVar8 + 0x58) + 4);
                            do {
                              if (piVar22[-1] == iVar15) {
                                puVar5 = (undefined4 *)(iVar8 + *piVar22 * 8 + 0xc0);
                                goto LAB_03dd0f6c;
                              }
                              uVar16 = uVar16 - 1;
                              piVar22 = piVar22 + 2;
                            } while (uVar16 != 0);
                          }
                          puVar5 = (undefined4 *)func_0x02457d88(piVar4,iVar15,0);
LAB_03dd0f6c:
                          iVar15 = (*(code *)*puVar5)(piVar4,uVar11,uVar18,puVar5[1]);
                        }
                        if (iVar15 != 0) {
                          if ((int)uVar21 < 0) {
                            iVar15 = *(int *)(iVar1 + 8);
                            iVar8 = *(int *)(iVar2 + 0x14);
                            if (iVar15 == 0) {
                              func_0x02457d50();
                            }
                            if (*(uint *)(iVar15 + 0xc) <= extraout_r1_00) {
                              func_0x02457d5c();
                            }
                            *(int *)(iVar15 + extraout_r1_00 * 4 + 0x10) = iVar8 + 1;
                          }
                          else {
                            iVar15 = *(int *)(iVar1 + 0xc);
                            if (iVar15 == 0) {
                              func_0x02457d50();
                            }
                            uVar18 = *(undefined4 *)(iVar2 + 0x14);
                            if (*(uint *)(iVar15 + 0xc) <= uVar21) {
                              func_0x02457d5c();
                            }
                            *(undefined4 *)(iVar15 + uVar21 * 0x10 + 0x14) = uVar18;
                          }
                          *extraout_r2 = *(undefined4 *)(iVar2 + 0x1c);
                          uVar18 = *(undefined4 *)(iVar1 + 0x14);
                          *(undefined4 *)(iVar2 + 0x1c) = 0;
                          iVar8 = *(int *)(iVar1 + 0x1c);
                          iVar15 = *(int *)(iVar1 + 0x18);
                          *(undefined4 *)(iVar2 + 0x14) = uVar18;
                          *(uint *)(iVar2 + 0x10) = 0xffffffff;
                          *(int *)(iVar1 + 0x1c) = iVar8 + 1;
                          *(uint *)(iVar1 + 0x14) = uVar3;
                          *(int *)(iVar1 + 0x18) = iVar15 + 1;
                          return 1;
                        }
                      }
                      uVar16 = *(uint *)(iVar2 + 0x14);
                      uVar21 = uVar3;
                    } while (*(uint *)(iVar2 + 0x14) < 0x80000000);
                  }
                }
                *extraout_r2 = 0;
                return 0;
              }
            }
            uStack_2c = uVar7 & 0x7fffffff;
            func_0x02457e94(uStack_2c,*(undefined4 *)(uVar21 + 0xc));
            if (*(uint *)(uVar16 + 0xc) <= extraout_r1) {
              func_0x02457d5c();
            }
            uVar7 = *(int *)(uVar16 + extraout_r1 * 4 + 0x10) - 1;
            if (-1 < (int)uVar7) {
              iVar1 = iStack_30;
              uVar16 = 0xffffffff;
              uStack_38 = extraout_r1;
              do {
                uVar21 = uVar7;
                iVar2 = *(int *)(iVar1 + 0xc);
                if (iVar2 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar2 + 0xc) <= uVar21) {
                  func_0x02457d5c();
                }
                uVar18 = uStack_28;
                iVar2 = iVar2 + uVar21 * 0x10;
                if (*(uint *)(iVar2 + 0x10) == uStack_2c) {
                  piVar4 = *(int **)(iVar1 + 0x20);
                  if (piVar4 == (int *)0x0) {
                    piVar4 = (int *)func_0x02ecb070(*(undefined4 *)
                                                     (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) +
                                                     0xc));
                    uVar18 = uStack_28;
                    uVar11 = *(undefined4 *)(iVar2 + 0x18);
                    if (piVar4 == (int *)0x0) {
                      func_0x02457d50(0,uVar11);
                    }
                    iVar15 = (**(code **)(*piVar4 + 0x100))
                                       (piVar4,uVar11,uVar18,*(undefined4 *)(*piVar4 + 0x104));
                  }
                  else {
                    uVar11 = *(undefined4 *)(iVar2 + 0x18);
                    if (piVar4 == (int *)0x0) {
                      func_0x02457d50();
                    }
                    iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                      iVar1 = func_0x02457d84(iVar1);
                    }
                    iVar15 = *piVar4;
                    uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
                    if (uVar7 != 0) {
                      piVar22 = (int *)(*(int *)(iVar15 + 0x58) + 4);
                      do {
                        if (piVar22[-1] == iVar1) {
                          puVar5 = (undefined4 *)(iVar15 + *piVar22 * 8 + 0xc0);
                          goto LAB_03dd0c0c;
                        }
                        uVar7 = uVar7 - 1;
                        piVar22 = piVar22 + 2;
                      } while (uVar7 != 0);
                    }
                    puVar5 = (undefined4 *)func_0x02457d88(piVar4,iVar1,0);
LAB_03dd0c0c:
                    iVar15 = (*(code *)*puVar5)(piVar4,uVar11,uVar18,puVar5[1]);
                  }
                  iVar1 = iStack_30;
                  if (iVar15 != 0) {
                    if ((int)uVar16 < 0) {
                      iVar1 = *(int *)(iStack_30 + 8);
                      iVar15 = *(int *)(iVar2 + 0x14);
                      if (iVar1 == 0) {
                        func_0x02457d50();
                      }
                      uVar7 = uStack_38;
                      if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                        func_0x02457d5c();
                      }
                      *(int *)(iVar1 + uVar7 * 4 + 0x10) = iVar15 + 1;
                    }
                    else {
                      iVar1 = *(int *)(iStack_30 + 0xc);
                      if (iVar1 == 0) {
                        func_0x02457d50();
                      }
                      uVar18 = *(undefined4 *)(iVar2 + 0x14);
                      if (*(uint *)(iVar1 + 0xc) <= uVar16) {
                        func_0x02457d5c();
                      }
                      *(undefined4 *)(iVar1 + uVar16 * 0x10 + 0x14) = uVar18;
                    }
                    uVar18 = *(undefined4 *)(iStack_30 + 0x14);
                    *(undefined4 *)(iVar2 + 0x1c) = 0;
                    iVar1 = *(int *)(iStack_30 + 0x18);
                    iVar15 = *(int *)(iStack_30 + 0x1c);
                    *(uint *)(iVar2 + 0x10) = 0xffffffff;
                    *(undefined4 *)(iVar2 + 0x14) = uVar18;
                    *(uint *)(iStack_30 + 0x14) = uVar21;
                    *(int *)(iStack_30 + 0x18) = iVar1 + 1;
                    *(int *)(iStack_30 + 0x1c) = iVar15 + 1;
                    return 1;
                  }
                }
                uVar7 = *(uint *)(iVar2 + 0x14);
                uVar16 = uVar21;
              } while (*(uint *)(iVar2 + 0x14) < 0x80000000);
            }
          }
          return 0;
        }
        iVar2 = func_0x0229f13c(0x163d,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        goto LAB_021d0928;
      }
      iVar2 = func_0x0229f13c(0x163c,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar2 = func_0x0229f13c(0x163a);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar2 = func_0x0229f06c(0x1633,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar1 + 0x1c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      FUN_01e0f95c(iVar2,1,0);
      iVar1 = *(int *)(iVar1 + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0229f06c(0x1635,0);
      if (iVar2 == 0) {
        pcVar13 = (char *)(_UNK_01e1882c + 0x1e18078);
        if (*pcVar13 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
          func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
          func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
          func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
          func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
          func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
          *pcVar13 = '\x01';
        }
        iVar2 = func_0x0229f06c(0x1636,0);
        if (iVar2 == 0) {
          iVar2 = *(int *)(iVar1 + 0x20);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar7 = func_0x03dcf4b4(iVar2,1,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
          if (uVar7 == 0) {
            iVar2 = func_0x01e1a508(iVar1,1);
            pcVar13 = (char *)(_UNK_01e1884c + 0x1e1816c);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar15 = func_0x024504c0(iVar2,0);
            uVar18 = *(undefined4 *)(iVar1 + 0x14);
            if (iVar15 == 0) {
              func_0x01384bf0();
            }
            func_0x024505b4(iVar15,uVar18,0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iStack_34 = iVar1;
            iVar1 = func_0x024504c0(iVar2,0);
            if (*pcVar13 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01e18870 + 0x1e18454));
              *pcVar13 = '\x01';
            }
            piVar4 = *(int **)(_UNK_01e18874 + 0x1e18470);
            puVar5 = *(undefined4 **)(*piVar4 + 0x5c);
            uVar18 = puVar5[2];
            uVar11 = *puVar5;
            uVar17 = puVar5[1];
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uStack_38 = 0;
            func_0x0245068c(iVar1,uVar11,uVar17,uVar18);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x024504c0(iVar2,0);
            pcVar12 = (char *)(_UNK_01e18878 + 0x1e184c8);
            if (*pcVar12 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01e1887c + 0x1e184dc));
              *pcVar12 = '\x01';
            }
            iVar15 = *(int *)(*piVar4 + 0x5c);
            uVar18 = *(undefined4 *)(iVar15 + 0xc);
            uVar11 = *(undefined4 *)(iVar15 + 0x10);
            uVar17 = *(undefined4 *)(iVar15 + 0x14);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uStack_38 = 0;
            func_0x024503a4(iVar1,uVar18,uVar11,uVar17);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x024504c0(iVar2,0);
            if (*pcVar13 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01e18880 + 0x1e18550));
              *pcVar13 = '\x01';
            }
            puVar5 = *(undefined4 **)(*piVar4 + 0x5c);
            uVar18 = *puVar5;
            uVar11 = puVar5[1];
            uVar17 = puVar5[2];
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uStack_38 = 0;
            func_0x02450c24(iVar1,uVar18,uVar11,uVar17);
            iVar1 = *(int *)(iStack_34 + 0x20);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar7 = func_0x03dcf268(iVar1,1,iVar2,**(undefined4 **)(_UNK_01e18884 + 0x1e185b4));
          }
          return uVar7;
        }
        iVar2 = func_0x0229f13c(0x1636,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
LAB_021d0928:
        iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,1,0);
        uStack_38 = uStack_50;
        iStack_34 = uStack_4c;
        iStack_30 = iStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar2 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar1,0);
        func_0x01485238(&uStack_38,1,0);
        iVar15 = *(int *)(iVar2 + 8);
        uVar18 = *(undefined4 *)(iVar2 + 0xc);
        iVar1 = *(int *)(iVar2 + 0x10);
        if (iVar15 == 0) {
          func_0x01384bf0();
        }
        uVar11 = 3;
        if (iVar1 == 0) {
          uVar11 = 2;
        }
        uStack_58 = 0;
        uStack_54 = 0;
        uVar7 = func_0x0245495c(iVar15,uVar18,&uStack_38,uVar11);
        return uVar7;
      }
      iVar2 = func_0x0229f13c(0x1635,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar2 = func_0x0229f13c(0x1633);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
  }
SUB_02173f80:
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_30 = 0;
  func_0x0245494c(&iStack_48,0,0);
  iStack_30 = iStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&iStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&iStack_30,iVar1,0);
  iVar15 = *(int *)(iVar2 + 8);
  uVar18 = *(undefined4 *)(iVar2 + 0xc);
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar15 == 0) {
    func_0x01384bf0();
  }
  uVar11 = 2;
  if (iVar1 == 0) {
    uVar11 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  uVar7 = func_0x0245495c(iVar15,uVar18,&iStack_30,uVar11);
  return uVar7;
}



// ===== FAT.MBItemCharge$$_RefreshMixSource RVA 0x1e01610 =====

void FUN_01e11610(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  byte bVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xa07d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa07d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    iStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar6,uVar9,&uStack_30,uVar5,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = func_0x0212fa48(iVar1,0);
  iVar7 = *(int *)(param_1 + 0x30);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar7 + 0x2c) == 0xf) {
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x0212f8d4(iVar1,0);
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
    bVar10 = 0;
    iVar7 = func_0x0212f990(0,0);
    if (0 < iVar7) goto LAB_01e11818;
    func_0x01384bf0();
    bVar10 = 0;
    iVar7 = func_0x0212f734(0,0);
    func_0x01384bf0();
    if (iVar7 == 0) {
      iVar7 = func_0x0212f82c(0,0);
      if (iVar7 < 1) goto LAB_01e11818;
      func_0x01384bf0();
      iVar7 = func_0x0212f82c(0,0);
      func_0x01384bf0();
      goto LAB_01e117cc;
    }
LAB_01e1175c:
    iVar7 = func_0x0212fb30(iVar1,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar7 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_28 = func_0x0212f6e0(iVar1,0);
    iVar7 = iVar7 * 1000;
  }
  else {
    bVar10 = 0;
    iVar7 = func_0x0212f990(iVar1,0);
    if (0 < iVar7) goto LAB_01e11818;
    bVar10 = 0;
    iVar7 = func_0x0212f734(iVar1,0);
    if (iVar7 != 0) goto LAB_01e1175c;
    iVar7 = func_0x0212f82c(iVar1,0);
    if (iVar7 < 1) goto LAB_01e11818;
    iVar7 = func_0x0212f82c(iVar1,0);
LAB_01e117cc:
    iStack_28 = func_0x0212f9e4(iVar1,0);
  }
  iStack_24 = iStack_28 >> 0x1f;
  uVar9 = func_0x01e125e0(param_1,iStack_24,iVar7,iVar7 >> 0x1f);
  iVar7 = *(int *)(param_1 + 0x18);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  func_0x0244feac(iVar7,uVar9,0);
  bVar10 = 1;
LAB_01e11818:
  if (*(byte *)(param_1 + 0x65) != bVar10) {
    FUN_01e106cc(param_1,bVar10);
  }
  if (*(char *)(param_1 + 0x66) != '\0') {
    func_0x01e126d0(param_1,0);
  }
  if (iVar6 != *(int *)(param_1 + 0x80)) {
    func_0x01e132bc(param_1,bVar10 ^ 1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar1 + 0x38);
    iVar8 = 0;
    iVar1 = func_0x0229f06c(0xa081,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x2c);
      do {
        if (iVar1 == 0) {
          func_0x01384bf0();
          iVar2 = func_0x02450148(0,0);
          if (iVar2 <= iVar8) {
            return;
          }
          func_0x01384bf0();
        }
        else {
          iVar2 = func_0x02450148(iVar1,0);
          if (iVar2 <= iVar8) {
            return;
          }
        }
        iVar2 = func_0x02450158(iVar1,iVar8,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x0244ffd4(iVar2,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        if (iVar8 < iVar7) {
          func_0x0244ffe4(iVar3,1,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x02450158(iVar2,0,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x0244ffd4(iVar2,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          bVar4 = iVar8 < iVar6;
        }
        else {
          bVar4 = false;
        }
        func_0x0244ffe4(iVar3,bVar4,0);
        iVar8 = iVar8 + 1;
      } while( true );
    }
    iVar1 = func_0x0229f13c(0xa081,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_28 = 0;
    func_0x02179a68(iVar1,param_1,iVar6,iVar7);
    return;
  }
  return;
}



// ===== FAT.MBItemCharge$$_RefreshAutoSource RVA 0x1e01888 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e11888(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int extraout_r3_00;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar2 = func_0x0229f06c(0xa082,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa082,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_30 = 0;
    func_0x0245494c(&iStack_48,0,0);
    iStack_30 = iStack_48;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar11 = *(int *)(iVar2 + 8);
    uVar14 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar2 == 0) {
      uVar7 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    uVar3 = func_0x0245495c(iVar11,uVar14,&iStack_30,uVar7);
    return uVar3;
  }
  iVar2 = *(int *)(param_1 + 0x3c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0211bf04(iVar2,0);
  if (iVar2 < 1) {
    iVar11 = *(int *)(param_1 + 0x3c);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar16 = func_0x0211bfcc(iVar11,0);
    iVar11 = *(int *)(param_1 + 0x3c);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iStack_30 = func_0x0211be60(iVar11,0);
    uStack_2c = iStack_30 >> 0x1f;
    uVar14 = func_0x01e125e0(param_1,uStack_2c,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
    iVar11 = *(int *)(param_1 + 0x18);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    func_0x0244feac(iVar11,uVar14,0);
  }
  if ((bool)*(char *)(param_1 + 0x65) != iVar2 < 1) {
    FUN_01e106cc(param_1,iVar2 < 1);
  }
  if ((bool)*(char *)(param_1 + 0x66) != 0 < iVar2) {
    func_0x01e126d0(param_1,0 < iVar2);
  }
  bVar1 = iVar2 < 1;
  pcVar10 = (char *)(_UNK_01e13650 + 0x1e13514);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e13654 + 0x1e13528));
    *pcVar10 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa083,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa083,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,bVar1,0);
    uStack_38 = uStack_50;
    iStack_34 = uStack_4c;
    iStack_30 = iStack_48;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,bVar1,0);
    iVar11 = *(int *)(iVar2 + 8);
    uVar14 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar2 == 0) {
      uVar7 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    uVar3 = func_0x0245495c(iVar11,uVar14,&uStack_38,uVar7);
    return uVar3;
  }
  iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01e13658 + 0x1e13584));
  iVar11 = *(int *)(param_1 + 0x3c);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar11 = func_0x02123568(iVar11,0);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar14 = func_0x0210e5f4(iVar11,0);
  if (!bVar1) {
    iVar11 = *(int *)(param_1 + 0x3c);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = func_0x02123568(iVar11,0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x0210e2d4(iVar11,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar10 = (char *)(_UNK_01de9c68 + 0x1de9bc4);
    if (*pcVar10 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01de9c6c + 0x1de9bd8),uVar14,uVar7,0);
      *pcVar10 = '\x01';
    }
    iVar11 = func_0x0229f06c(0x9eef,0);
    if (iVar11 == 0) {
      iVar2 = *(int *)(iVar2 + 0x4c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x03d5a8e0(iVar2,uVar14,uVar7,0);
      return uVar3;
    }
    iVar11 = func_0x0229f13c(0x9eef,0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02179a68(iVar11,iVar2,uVar14,uVar7);
    return uVar3;
  }
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar10 = (char *)(_UNK_01de9d1c + 0x1de9c8c);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de9d20 + 0x1de9ca0),uVar14,0);
    *pcVar10 = '\x01';
  }
  iVar11 = func_0x0229f06c(0x9ef0,0);
  if (iVar11 != 0) {
    iVar11 = func_0x0229f13c(0x9ef0,0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,uVar14,0);
    uStack_38 = uStack_50;
    iStack_34 = uStack_4c;
    iStack_30 = iStack_48;
    if (*(int *)(iVar11 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar11 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485238(&uStack_38,uVar14,0);
    iVar12 = *(int *)(iVar11 + 8);
    uVar14 = *(undefined4 *)(iVar11 + 0xc);
    iVar2 = *(int *)(iVar11 + 0x10);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar2 == 0) {
      uVar7 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    uVar3 = func_0x0245495c(iVar12,uVar14,&uStack_38,uVar7);
    return uVar3;
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iStack_34 = **(int **)(_UNK_01de9d24 + 0x1de9d10);
  if (*(int *)(iVar2 + 8) != 0) {
    piVar9 = *(int **)(iVar2 + 0x20);
    iStack_30 = iVar2;
    uStack_28 = uVar14;
    if (piVar9 == (int *)0x0) {
      uVar3 = func_0x04821a00(&uStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc4));
    }
    else {
      iVar2 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x02457d84(iVar2);
      }
      iVar11 = *piVar9;
      uVar3 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar2) {
            puVar4 = (undefined4 *)(iVar11 + *piVar8 * 8 + 200);
            goto LAB_03d5b514;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined4 *)func_0x02457d88(piVar9,iVar2,1);
LAB_03d5b514:
      uVar3 = (*(code *)*puVar4)(piVar9,uVar14,puVar4[1]);
      iVar2 = iStack_30;
    }
    uVar15 = *(uint *)(iVar2 + 8);
    uVar13 = uVar15;
    if (uVar15 == 0) {
      func_0x02457d50();
      uVar13 = *(uint *)(iStack_30 + 8);
      if (uVar13 == 0) {
        uVar16 = func_0x02457d50();
        uVar14 = (undefined4)((ulonglong)uVar16 >> 0x20);
        iVar2 = (int)uVar16;
        uStack_54 = 0;
        if (*(int *)(iVar2 + 8) != 0) {
          piVar9 = *(int **)(iVar2 + 0x20);
          uStack_60 = uVar14;
          uStack_5c = uVar3;
          uStack_58 = uVar13;
          uStack_50 = uVar15;
          if (piVar9 == (int *)0x0) {
            uVar3 = func_0x04821a00(&uStack_60,
                                    *(undefined4 *)
                                     (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0xc4));
          }
          else {
            iVar11 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
              iVar11 = func_0x02457d84(iVar11);
            }
            iVar12 = *piVar9;
            uVar3 = (uint)*(ushort *)(iVar12 + 0xb6);
            if (uVar3 != 0) {
              piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar11) {
                  puVar4 = (undefined4 *)(iVar12 + *piVar8 * 8 + 200);
                  goto LAB_03d5b878;
                }
                uVar3 = uVar3 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined4 *)func_0x02457d88(piVar9,iVar11,1);
LAB_03d5b878:
            uVar3 = (*(code *)*puVar4)(piVar9,uVar14,puVar4[1]);
          }
          iVar12 = *(int *)(iVar2 + 8);
          iVar11 = iVar12;
          if (iVar12 == 0) {
            func_0x02457d50();
            iVar11 = *(int *)(iVar2 + 8);
            if (iVar11 == 0) {
              uVar16 = func_0x02457d50();
              uVar3 = func_0x03d5a510((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) + 0x84));
              if ((int)uVar3 < 0) {
                uVar14 = 0;
              }
              else {
                iVar2 = *(int *)((int)uVar16 + 0xc);
                if (iVar2 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar2 + 0xc) <= uVar3) {
                  func_0x02457d5c();
                }
                uVar14 = *(undefined4 *)(iVar2 + uVar3 * 0x10 + 0x1c);
              }
              *extraout_r2_00 = uVar14;
              return ~uVar3 >> 0x1f;
            }
          }
          func_0x02457e94(uVar3 & 0x7fffffff,*(undefined4 *)(iVar12 + 0xc));
          if (*(uint *)(iVar11 + 0xc) <= extraout_r1_00) {
            func_0x02457d5c();
          }
          uVar13 = *(int *)(iVar11 + extraout_r1_00 * 4 + 0x10) - 1;
          if (-1 < (int)uVar13) {
            uVar15 = 0xffffffff;
            do {
              uVar5 = uVar13;
              iVar11 = *(int *)(iVar2 + 0xc);
              if (iVar11 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar11 + 0xc) <= uVar5) {
                func_0x02457d5c();
              }
              uVar14 = uStack_60;
              iVar11 = iVar11 + uVar5 * 0x10;
              if (*(uint *)(iVar11 + 0x10) == (uVar3 & 0x7fffffff)) {
                piVar9 = *(int **)(iVar2 + 0x20);
                if (piVar9 == (int *)0x0) {
                  piVar9 = (int *)func_0x02ecaf98(*(undefined4 *)
                                                   (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) +
                                                   0xc));
                  uVar14 = uStack_60;
                  uVar7 = *(undefined4 *)(iVar11 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50(0,uVar7);
                  }
                  iVar12 = (**(code **)(*piVar9 + 0x100))
                                     (piVar9,uVar7,uVar14,*(undefined4 *)(*piVar9 + 0x104));
                }
                else {
                  uVar7 = *(undefined4 *)(iVar11 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar12 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar12 + 0xbd) & 1) == 0) {
                    iVar12 = func_0x02457d84(iVar12);
                  }
                  iVar6 = *piVar9;
                  uVar13 = (uint)*(ushort *)(iVar6 + 0xb6);
                  if (uVar13 != 0) {
                    piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                    do {
                      if (piVar8[-1] == iVar12) {
                        puVar4 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
                        goto LAB_03d5ba20;
                      }
                      uVar13 = uVar13 - 1;
                      piVar8 = piVar8 + 2;
                    } while (uVar13 != 0);
                  }
                  puVar4 = (undefined4 *)func_0x02457d88(piVar9,iVar12,0);
LAB_03d5ba20:
                  iVar12 = (*(code *)*puVar4)(piVar9,uVar7,uVar14,puVar4[1]);
                }
                if (iVar12 != 0) {
                  if ((int)uVar15 < 0) {
                    iVar12 = *(int *)(iVar2 + 8);
                    iVar6 = *(int *)(iVar11 + 0x14);
                    if (iVar12 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar12 + 0xc) <= extraout_r1_00) {
                      func_0x02457d5c();
                    }
                    *(int *)(iVar12 + extraout_r1_00 * 4 + 0x10) = iVar6 + 1;
                  }
                  else {
                    iVar12 = *(int *)(iVar2 + 0xc);
                    if (iVar12 == 0) {
                      func_0x02457d50();
                    }
                    uVar14 = *(undefined4 *)(iVar11 + 0x14);
                    if (*(uint *)(iVar12 + 0xc) <= uVar15) {
                      func_0x02457d5c();
                    }
                    *(undefined4 *)(iVar12 + uVar15 * 0x10 + 0x14) = uVar14;
                  }
                  *extraout_r2 = *(undefined4 *)(iVar11 + 0x1c);
                  uVar14 = *(undefined4 *)(iVar2 + 0x14);
                  iVar12 = *(int *)(iVar2 + 0x18);
                  iVar6 = *(int *)(iVar2 + 0x1c);
                  *(uint *)(iVar11 + 0x10) = 0xffffffff;
                  *(int *)(iVar2 + 0x18) = iVar12 + 1;
                  *(int *)(iVar2 + 0x1c) = iVar6 + 1;
                  *(uint *)(iVar2 + 0x14) = uVar5;
                  *(undefined4 *)(iVar11 + 0x14) = uVar14;
                  return 1;
                }
              }
              uVar13 = *(uint *)(iVar11 + 0x14);
              uVar15 = uVar5;
            } while (*(uint *)(iVar11 + 0x14) < 0x80000000);
          }
        }
        *extraout_r2 = 0;
        return 0;
      }
    }
    uStack_2c = uVar3 & 0x7fffffff;
    func_0x02457e94(uStack_2c,*(undefined4 *)(uVar15 + 0xc));
    if (*(uint *)(uVar13 + 0xc) <= extraout_r1) {
      func_0x02457d5c();
    }
    uVar3 = *(int *)(uVar13 + extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar3) {
      iVar2 = iStack_30;
      uVar13 = 0xffffffff;
      uStack_38 = extraout_r1;
      do {
        uVar15 = uVar3;
        iVar11 = *(int *)(iVar2 + 0xc);
        if (iVar11 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar11 + 0xc) <= uVar15) {
          func_0x02457d5c();
        }
        uVar14 = uStack_28;
        iVar11 = iVar11 + uVar15 * 0x10;
        if (*(uint *)(iVar11 + 0x10) == uStack_2c) {
          piVar9 = *(int **)(iVar2 + 0x20);
          if (piVar9 == (int *)0x0) {
            piVar9 = (int *)func_0x02ecaf98(*(undefined4 *)
                                             (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc));
            uVar14 = uStack_28;
            uVar7 = *(undefined4 *)(iVar11 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50(0,uVar7);
            }
            iVar12 = (**(code **)(*piVar9 + 0x100))
                               (piVar9,uVar7,uVar14,*(undefined4 *)(*piVar9 + 0x104));
          }
          else {
            uVar7 = *(undefined4 *)(iVar11 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50();
            }
            iVar2 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
              iVar2 = func_0x02457d84(iVar2);
            }
            iVar12 = *piVar9;
            uVar3 = (uint)*(ushort *)(iVar12 + 0xb6);
            if (uVar3 != 0) {
              piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar2) {
                  puVar4 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
                  goto LAB_03d5b6c0;
                }
                uVar3 = uVar3 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined4 *)func_0x02457d88(piVar9,iVar2,0);
LAB_03d5b6c0:
            iVar12 = (*(code *)*puVar4)(piVar9,uVar7,uVar14,puVar4[1]);
          }
          iVar2 = iStack_30;
          if (iVar12 != 0) {
            if ((int)uVar13 < 0) {
              iVar2 = *(int *)(iStack_30 + 8);
              iVar12 = *(int *)(iVar11 + 0x14);
              if (iVar2 == 0) {
                func_0x02457d50();
              }
              uVar3 = uStack_38;
              if (*(uint *)(iVar2 + 0xc) <= uStack_38) {
                func_0x02457d5c();
              }
              *(int *)(iVar2 + uVar3 * 4 + 0x10) = iVar12 + 1;
            }
            else {
              iVar2 = *(int *)(iStack_30 + 0xc);
              if (iVar2 == 0) {
                func_0x02457d50();
              }
              uVar14 = *(undefined4 *)(iVar11 + 0x14);
              if (*(uint *)(iVar2 + 0xc) <= uVar13) {
                func_0x02457d5c();
              }
              *(undefined4 *)(iVar2 + uVar13 * 0x10 + 0x14) = uVar14;
            }
            *(uint *)(iVar11 + 0x10) = 0xffffffff;
            uVar14 = *(undefined4 *)(iStack_30 + 0x14);
            *(int *)(iStack_30 + 0x18) = *(int *)(iStack_30 + 0x18) + 1;
            *(uint *)(iStack_30 + 0x14) = uVar15;
            *(int *)(iStack_30 + 0x1c) = *(int *)(iStack_30 + 0x1c) + 1;
            *(undefined4 *)(iVar11 + 0x14) = uVar14;
            return 1;
          }
        }
        uVar3 = *(uint *)(iVar11 + 0x14);
        uVar13 = uVar15;
      } while (*(uint *)(iVar11 + 0x14) < 0x80000000);
    }
  }
  return 0;
}



// ===== FAT.MBItemCharge$$_RefreshToolSource RVA 0x1e019ec =====

/* WARNING: Removing unreachable block (ram,0x01e1816c) */
/* WARNING: Removing unreachable block (ram,0x01e182d0) */
/* WARNING: Removing unreachable block (ram,0x01e182d8) */
/* WARNING: Removing unreachable block (ram,0x01e183e0) */
/* WARNING: Removing unreachable block (ram,0x01e183e8) */
/* WARNING: Removing unreachable block (ram,0x01e183ec) */
/* WARNING: Removing unreachable block (ram,0x01e182e0) */
/* WARNING: Removing unreachable block (ram,0x01e182e8) */
/* WARNING: Removing unreachable block (ram,0x01e182ec) */
/* WARNING: Removing unreachable block (ram,0x01e18308) */
/* WARNING: Removing unreachable block (ram,0x01e1830c) */
/* WARNING: Removing unreachable block (ram,0x01e18324) */
/* WARNING: Removing unreachable block (ram,0x01e18328) */
/* WARNING: Removing unreachable block (ram,0x01e18340) */
/* WARNING: Removing unreachable block (ram,0x01e18344) */
/* WARNING: Removing unreachable block (ram,0x01e18364) */
/* WARNING: Removing unreachable block (ram,0x01e18378) */
/* WARNING: Removing unreachable block (ram,0x01e18398) */
/* WARNING: Removing unreachable block (ram,0x01e1839c) */
/* WARNING: Removing unreachable block (ram,0x01e18178) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e119ec(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar8;
  int *piVar9;
  int extraout_r3;
  int extraout_r3_00;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  iVar1 = func_0x0229f06c(0xa084,0);
  if (iVar1 == 0) {
    uVar4 = func_0x01e1365c(param_1);
    uVar7 = uVar4 ^ 1;
    if (*(byte *)(param_1 + 0x66) == uVar7) {
      return uVar4;
    }
    iVar1 = func_0x0229f06c(0x1632,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0x1632,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,uVar7,0);
      uStack_38 = uStack_50;
      if (*(int *)(iVar1 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485228(&uStack_38,uVar7,0);
      iVar2 = *(int *)(iVar1 + 8);
      uVar14 = *(undefined4 *)(iVar1 + 0xc);
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar8 = 3;
      if (iVar1 == 0) {
        uVar8 = 2;
      }
      uStack_58 = 0;
      uStack_54 = 0;
      uVar4 = func_0x0245495c(iVar2,uVar14,&uStack_38,uVar8);
      return uVar4;
    }
    iVar1 = *(int *)(param_1 + 0x30);
    *(char *)(param_1 + 0x66) = (char)uVar7;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (uVar7 == 0) {
      iVar2 = func_0x0229f06c(0x163a,0);
      if (iVar2 == 0) {
        iVar2 = *(int *)(iVar1 + 0x1c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        FUN_01e0fd60(iVar2,1,0);
        iVar1 = *(int *)(iVar1 + 0x20);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0229f06c(0x163c,0);
        if (iVar2 == 0) {
          pcVar10 = (char *)(_UNK_01e18a0c + 0x1e188fc);
          if (*pcVar10 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
            func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
            func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
            *pcVar10 = '\x01';
          }
          iVar2 = func_0x0229f06c(0x163d,0);
          if (iVar2 == 0) {
            iVar2 = *(int *)(iVar1 + 0x20);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x03dcf4b4(iVar2,1,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
            if (iVar2 == 0) {
              return 0;
            }
            iVar2 = *(int *)(iVar1 + 0x20);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            uVar14 = func_0x03dcf1b0(iVar2,1,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
            func_0x01e1a604(iVar1,1,uVar14);
            iVar1 = *(int *)(iVar1 + 0x20);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iStack_34 = **(int **)(_UNK_01e18a24 + 0x1e18a00);
            uStack_28 = 1;
            if (*(int *)(iVar1 + 8) != 0) {
              piVar16 = *(int **)(iVar1 + 0x20);
              iStack_30 = iVar1;
              if (piVar16 == (int *)0x0) {
                uVar4 = func_0x04821a00(&uStack_28,0);
              }
              else {
                iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                  iVar1 = func_0x02457d84(iVar1);
                }
                iVar2 = *piVar16;
                uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
                if (uVar4 != 0) {
                  piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                  do {
                    if (piVar9[-1] == iVar1) {
                      puVar3 = (undefined4 *)(iVar2 + *piVar9 * 8 + 200);
                      goto LAB_03dd0a60;
                    }
                    uVar4 = uVar4 - 1;
                    piVar9 = piVar9 + 2;
                  } while (uVar4 != 0);
                }
                puVar3 = (undefined4 *)func_0x02457d88(piVar16,iVar1,1);
LAB_03dd0a60:
                uVar4 = (*(code *)*puVar3)(piVar16,1,puVar3[1]);
                iVar1 = iStack_30;
              }
              uVar15 = *(uint *)(iVar1 + 8);
              uVar7 = uVar15;
              if (uVar15 == 0) {
                func_0x02457d50();
                uVar7 = *(uint *)(iStack_30 + 8);
                if (uVar7 == 0) {
                  uVar17 = func_0x02457d50();
                  uVar14 = (undefined4)((ulonglong)uVar17 >> 0x20);
                  iVar1 = (int)uVar17;
                  uStack_54 = 0;
                  if (*(int *)(iVar1 + 8) != 0) {
                    piVar16 = *(int **)(iVar1 + 0x20);
                    uStack_60 = uVar14;
                    uStack_5c = uVar4;
                    uStack_58 = uVar7;
                    uStack_50 = uVar15;
                    if (piVar16 == (int *)0x0) {
                      uVar4 = func_0x04821a00(&uStack_60,0);
                    }
                    else {
                      iVar2 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                        iVar2 = func_0x02457d84(iVar2);
                      }
                      iVar12 = *piVar16;
                      uVar4 = (uint)*(ushort *)(iVar12 + 0xb6);
                      if (uVar4 != 0) {
                        piVar9 = (int *)(*(int *)(iVar12 + 0x58) + 4);
                        do {
                          if (piVar9[-1] == iVar2) {
                            puVar3 = (undefined4 *)(iVar12 + *piVar9 * 8 + 200);
                            goto LAB_03dd0dc4;
                          }
                          uVar4 = uVar4 - 1;
                          piVar9 = piVar9 + 2;
                        } while (uVar4 != 0);
                      }
                      puVar3 = (undefined4 *)func_0x02457d88(piVar16,iVar2,1);
LAB_03dd0dc4:
                      uVar4 = (*(code *)*puVar3)(piVar16,uVar14,puVar3[1]);
                    }
                    iVar12 = *(int *)(iVar1 + 8);
                    iVar2 = iVar12;
                    if (iVar12 == 0) {
                      func_0x02457d50();
                      iVar2 = *(int *)(iVar1 + 8);
                      if (iVar2 == 0) {
                        uVar17 = func_0x02457d50();
                        uVar4 = func_0x03dcfa64((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),
                                                *(undefined4 *)
                                                 (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) +
                                                 0x84));
                        if ((int)uVar4 < 0) {
                          uVar14 = 0;
                        }
                        else {
                          iVar1 = *(int *)((int)uVar17 + 0xc);
                          if (iVar1 == 0) {
                            func_0x02457d50();
                          }
                          if (*(uint *)(iVar1 + 0xc) <= uVar4) {
                            func_0x02457d5c();
                          }
                          uVar14 = *(undefined4 *)(iVar1 + uVar4 * 0x10 + 0x1c);
                        }
                        *extraout_r2_00 = uVar14;
                        return ~uVar4 >> 0x1f;
                      }
                    }
                    func_0x02457e94(uVar4 & 0x7fffffff,*(undefined4 *)(iVar12 + 0xc));
                    if (*(uint *)(iVar2 + 0xc) <= extraout_r1_00) {
                      func_0x02457d5c();
                    }
                    uVar7 = *(int *)(iVar2 + extraout_r1_00 * 4 + 0x10) - 1;
                    if (-1 < (int)uVar7) {
                      uVar15 = 0xffffffff;
                      do {
                        uVar5 = uVar7;
                        iVar2 = *(int *)(iVar1 + 0xc);
                        if (iVar2 == 0) {
                          func_0x02457d50();
                        }
                        if (*(uint *)(iVar2 + 0xc) <= uVar5) {
                          func_0x02457d5c();
                        }
                        uVar14 = uStack_60;
                        iVar2 = iVar2 + uVar5 * 0x10;
                        if (*(uint *)(iVar2 + 0x10) == (uVar4 & 0x7fffffff)) {
                          piVar16 = *(int **)(iVar1 + 0x20);
                          if (piVar16 == (int *)0x0) {
                            piVar16 = (int *)func_0x02ecb070(*(undefined4 *)
                                                              (*(int *)(*(int *)(extraout_r3 + 0x10)
                                                                       + 0x60) + 0xc));
                            uVar14 = uStack_60;
                            uVar8 = *(undefined4 *)(iVar2 + 0x18);
                            if (piVar16 == (int *)0x0) {
                              func_0x02457d50(0,uVar8);
                            }
                            iVar12 = (**(code **)(*piVar16 + 0x100))
                                               (piVar16,uVar8,uVar14,
                                                *(undefined4 *)(*piVar16 + 0x104));
                          }
                          else {
                            uVar8 = *(undefined4 *)(iVar2 + 0x18);
                            if (piVar16 == (int *)0x0) {
                              func_0x02457d50();
                            }
                            iVar12 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                            if ((*(ushort *)(iVar12 + 0xbd) & 1) == 0) {
                              iVar12 = func_0x02457d84(iVar12);
                            }
                            iVar6 = *piVar16;
                            uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
                            if (uVar7 != 0) {
                              piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                              do {
                                if (piVar9[-1] == iVar12) {
                                  puVar3 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0xc0);
                                  goto LAB_03dd0f6c;
                                }
                                uVar7 = uVar7 - 1;
                                piVar9 = piVar9 + 2;
                              } while (uVar7 != 0);
                            }
                            puVar3 = (undefined4 *)func_0x02457d88(piVar16,iVar12,0);
LAB_03dd0f6c:
                            iVar12 = (*(code *)*puVar3)(piVar16,uVar8,uVar14,puVar3[1]);
                          }
                          if (iVar12 != 0) {
                            if ((int)uVar15 < 0) {
                              iVar12 = *(int *)(iVar1 + 8);
                              iVar6 = *(int *)(iVar2 + 0x14);
                              if (iVar12 == 0) {
                                func_0x02457d50();
                              }
                              if (*(uint *)(iVar12 + 0xc) <= extraout_r1_00) {
                                func_0x02457d5c();
                              }
                              *(int *)(iVar12 + extraout_r1_00 * 4 + 0x10) = iVar6 + 1;
                            }
                            else {
                              iVar12 = *(int *)(iVar1 + 0xc);
                              if (iVar12 == 0) {
                                func_0x02457d50();
                              }
                              uVar14 = *(undefined4 *)(iVar2 + 0x14);
                              if (*(uint *)(iVar12 + 0xc) <= uVar15) {
                                func_0x02457d5c();
                              }
                              *(undefined4 *)(iVar12 + uVar15 * 0x10 + 0x14) = uVar14;
                            }
                            *extraout_r2 = *(undefined4 *)(iVar2 + 0x1c);
                            uVar14 = *(undefined4 *)(iVar1 + 0x14);
                            *(undefined4 *)(iVar2 + 0x1c) = 0;
                            iVar6 = *(int *)(iVar1 + 0x1c);
                            iVar12 = *(int *)(iVar1 + 0x18);
                            *(undefined4 *)(iVar2 + 0x14) = uVar14;
                            *(uint *)(iVar2 + 0x10) = 0xffffffff;
                            *(int *)(iVar1 + 0x1c) = iVar6 + 1;
                            *(uint *)(iVar1 + 0x14) = uVar5;
                            *(int *)(iVar1 + 0x18) = iVar12 + 1;
                            return 1;
                          }
                        }
                        uVar7 = *(uint *)(iVar2 + 0x14);
                        uVar15 = uVar5;
                      } while (*(uint *)(iVar2 + 0x14) < 0x80000000);
                    }
                  }
                  *extraout_r2 = 0;
                  return 0;
                }
              }
              uStack_2c = uVar4 & 0x7fffffff;
              func_0x02457e94(uStack_2c,*(undefined4 *)(uVar15 + 0xc));
              if (*(uint *)(uVar7 + 0xc) <= extraout_r1) {
                func_0x02457d5c();
              }
              uVar4 = *(int *)(uVar7 + extraout_r1 * 4 + 0x10) - 1;
              if (-1 < (int)uVar4) {
                iVar1 = iStack_30;
                uVar7 = 0xffffffff;
                uStack_38 = extraout_r1;
                do {
                  uVar15 = uVar4;
                  iVar2 = *(int *)(iVar1 + 0xc);
                  if (iVar2 == 0) {
                    func_0x02457d50();
                  }
                  if (*(uint *)(iVar2 + 0xc) <= uVar15) {
                    func_0x02457d5c();
                  }
                  uVar14 = uStack_28;
                  iVar2 = iVar2 + uVar15 * 0x10;
                  if (*(uint *)(iVar2 + 0x10) == uStack_2c) {
                    piVar16 = *(int **)(iVar1 + 0x20);
                    if (piVar16 == (int *)0x0) {
                      piVar16 = (int *)func_0x02ecb070(*(undefined4 *)
                                                        (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60)
                                                        + 0xc));
                      uVar14 = uStack_28;
                      uVar8 = *(undefined4 *)(iVar2 + 0x18);
                      if (piVar16 == (int *)0x0) {
                        func_0x02457d50(0,uVar8);
                      }
                      iVar12 = (**(code **)(*piVar16 + 0x100))
                                         (piVar16,uVar8,uVar14,*(undefined4 *)(*piVar16 + 0x104));
                    }
                    else {
                      uVar8 = *(undefined4 *)(iVar2 + 0x18);
                      if (piVar16 == (int *)0x0) {
                        func_0x02457d50();
                      }
                      iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                        iVar1 = func_0x02457d84(iVar1);
                      }
                      iVar12 = *piVar16;
                      uVar4 = (uint)*(ushort *)(iVar12 + 0xb6);
                      if (uVar4 != 0) {
                        piVar9 = (int *)(*(int *)(iVar12 + 0x58) + 4);
                        do {
                          if (piVar9[-1] == iVar1) {
                            puVar3 = (undefined4 *)(iVar12 + *piVar9 * 8 + 0xc0);
                            goto LAB_03dd0c0c;
                          }
                          uVar4 = uVar4 - 1;
                          piVar9 = piVar9 + 2;
                        } while (uVar4 != 0);
                      }
                      puVar3 = (undefined4 *)func_0x02457d88(piVar16,iVar1,0);
LAB_03dd0c0c:
                      iVar12 = (*(code *)*puVar3)(piVar16,uVar8,uVar14,puVar3[1]);
                    }
                    iVar1 = iStack_30;
                    if (iVar12 != 0) {
                      if ((int)uVar7 < 0) {
                        iVar1 = *(int *)(iStack_30 + 8);
                        iVar12 = *(int *)(iVar2 + 0x14);
                        if (iVar1 == 0) {
                          func_0x02457d50();
                        }
                        uVar4 = uStack_38;
                        if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                          func_0x02457d5c();
                        }
                        *(int *)(iVar1 + uVar4 * 4 + 0x10) = iVar12 + 1;
                      }
                      else {
                        iVar1 = *(int *)(iStack_30 + 0xc);
                        if (iVar1 == 0) {
                          func_0x02457d50();
                        }
                        uVar14 = *(undefined4 *)(iVar2 + 0x14);
                        if (*(uint *)(iVar1 + 0xc) <= uVar7) {
                          func_0x02457d5c();
                        }
                        *(undefined4 *)(iVar1 + uVar7 * 0x10 + 0x14) = uVar14;
                      }
                      uVar14 = *(undefined4 *)(iStack_30 + 0x14);
                      *(undefined4 *)(iVar2 + 0x1c) = 0;
                      iVar1 = *(int *)(iStack_30 + 0x18);
                      iVar12 = *(int *)(iStack_30 + 0x1c);
                      *(uint *)(iVar2 + 0x10) = 0xffffffff;
                      *(undefined4 *)(iVar2 + 0x14) = uVar14;
                      *(uint *)(iStack_30 + 0x14) = uVar15;
                      *(int *)(iStack_30 + 0x18) = iVar1 + 1;
                      *(int *)(iStack_30 + 0x1c) = iVar12 + 1;
                      return 1;
                    }
                  }
                  uVar4 = *(uint *)(iVar2 + 0x14);
                  uVar7 = uVar15;
                } while (*(uint *)(iVar2 + 0x14) < 0x80000000);
              }
            }
            return 0;
          }
          iVar2 = func_0x0229f13c(0x163d,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          goto LAB_021d0928;
        }
        iVar2 = func_0x0229f13c(0x163c,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar2 = func_0x0229f13c(0x163a);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
    }
    else {
      iVar2 = func_0x0229f06c(0x1633,0);
      if (iVar2 == 0) {
        iVar2 = *(int *)(iVar1 + 0x1c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        FUN_01e0f95c(iVar2,1,0);
        iVar1 = *(int *)(iVar1 + 0x20);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0229f06c(0x1635,0);
        if (iVar2 == 0) {
          pcVar10 = (char *)(_UNK_01e1882c + 0x1e18078);
          if (*pcVar10 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
            func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
            func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
            func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
            func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
            func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
            *pcVar10 = '\x01';
          }
          iVar2 = func_0x0229f06c(0x1636,0);
          if (iVar2 == 0) {
            iVar2 = *(int *)(iVar1 + 0x20);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            uVar4 = func_0x03dcf4b4(iVar2,1,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
            if (uVar4 == 0) {
              iVar2 = func_0x01e1a508(iVar1,1);
              pcVar10 = (char *)(_UNK_01e1884c + 0x1e1816c);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar12 = func_0x024504c0(iVar2,0);
              uVar14 = *(undefined4 *)(iVar1 + 0x14);
              if (iVar12 == 0) {
                func_0x01384bf0();
              }
              func_0x024505b4(iVar12,uVar14,0);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iStack_34 = iVar1;
              iVar1 = func_0x024504c0(iVar2,0);
              if (*pcVar10 == '\0') {
                func_0x01384978(*(undefined4 *)(_UNK_01e18870 + 0x1e18454));
                *pcVar10 = '\x01';
              }
              piVar16 = *(int **)(_UNK_01e18874 + 0x1e18470);
              puVar3 = *(undefined4 **)(*piVar16 + 0x5c);
              uVar14 = puVar3[2];
              uVar8 = *puVar3;
              uVar13 = puVar3[1];
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uStack_38 = 0;
              func_0x0245068c(iVar1,uVar8,uVar13,uVar14);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar1 = func_0x024504c0(iVar2,0);
              pcVar11 = (char *)(_UNK_01e18878 + 0x1e184c8);
              if (*pcVar11 == '\0') {
                func_0x01384978(*(undefined4 *)(_UNK_01e1887c + 0x1e184dc));
                *pcVar11 = '\x01';
              }
              iVar12 = *(int *)(*piVar16 + 0x5c);
              uVar14 = *(undefined4 *)(iVar12 + 0xc);
              uVar8 = *(undefined4 *)(iVar12 + 0x10);
              uVar13 = *(undefined4 *)(iVar12 + 0x14);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uStack_38 = 0;
              func_0x024503a4(iVar1,uVar14,uVar8,uVar13);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar1 = func_0x024504c0(iVar2,0);
              if (*pcVar10 == '\0') {
                func_0x01384978(*(undefined4 *)(_UNK_01e18880 + 0x1e18550));
                *pcVar10 = '\x01';
              }
              puVar3 = *(undefined4 **)(*piVar16 + 0x5c);
              uVar14 = *puVar3;
              uVar8 = puVar3[1];
              uVar13 = puVar3[2];
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uStack_38 = 0;
              func_0x02450c24(iVar1,uVar14,uVar8,uVar13);
              iVar1 = *(int *)(iStack_34 + 0x20);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uVar4 = func_0x03dcf268(iVar1,1,iVar2,**(undefined4 **)(_UNK_01e18884 + 0x1e185b4));
            }
            return uVar4;
          }
          iVar2 = func_0x0229f13c(0x1636,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
LAB_021d0928:
          iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_38 = 0;
          uStack_28 = 0;
          func_0x0245494c(&uStack_50,0,1,0);
          uStack_38 = uStack_50;
          if (*(int *)(iVar2 + 0x10) != 0) {
            func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
          }
          func_0x01485278(&uStack_38,iVar1,0);
          func_0x01485238(&uStack_38,1,0);
          iVar12 = *(int *)(iVar2 + 8);
          uVar14 = *(undefined4 *)(iVar2 + 0xc);
          iVar1 = *(int *)(iVar2 + 0x10);
          if (iVar12 == 0) {
            func_0x01384bf0();
          }
          uVar8 = 3;
          if (iVar1 == 0) {
            uVar8 = 2;
          }
          uStack_58 = 0;
          uStack_54 = 0;
          uVar4 = func_0x0245495c(iVar12,uVar14,&uStack_38,uVar8);
          return uVar4;
        }
        iVar2 = func_0x0229f13c(0x1635,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar2 = func_0x0229f13c(0x1633);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa084,0);
    iVar1 = param_1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&stack0xffffffb8,0,0);
  uStack_20 = uStack_38;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&iStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&iStack_30,iVar1,0);
  iVar12 = *(int *)(iVar2 + 8);
  uVar14 = *(undefined4 *)(iVar2 + 0xc);
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  uVar8 = 2;
  if (iVar1 == 0) {
    uVar8 = 1;
  }
  uStack_50 = 0;
  uVar4 = func_0x0245495c(iVar12,uVar14,&iStack_30,uVar8);
  return uVar4;
}



// ===== FAT.MBItemCharge$$_RefreshEater RVA 0x1e01a5c =====

/* WARNING: Removing unreachable block (ram,0x01e1816c) */
/* WARNING: Removing unreachable block (ram,0x01e182d0) */
/* WARNING: Removing unreachable block (ram,0x01e182d8) */
/* WARNING: Removing unreachable block (ram,0x01e183e0) */
/* WARNING: Removing unreachable block (ram,0x01e183e8) */
/* WARNING: Removing unreachable block (ram,0x01e183ec) */
/* WARNING: Removing unreachable block (ram,0x01e182e0) */
/* WARNING: Removing unreachable block (ram,0x01e182e8) */
/* WARNING: Removing unreachable block (ram,0x01e182ec) */
/* WARNING: Removing unreachable block (ram,0x01e18308) */
/* WARNING: Removing unreachable block (ram,0x01e1830c) */
/* WARNING: Removing unreachable block (ram,0x01e18324) */
/* WARNING: Removing unreachable block (ram,0x01e18328) */
/* WARNING: Removing unreachable block (ram,0x01e18340) */
/* WARNING: Removing unreachable block (ram,0x01e18344) */
/* WARNING: Removing unreachable block (ram,0x01e18364) */
/* WARNING: Removing unreachable block (ram,0x01e18378) */
/* WARNING: Removing unreachable block (ram,0x01e18398) */
/* WARNING: Removing unreachable block (ram,0x01e1839c) */
/* WARNING: Removing unreachable block (ram,0x01e18178) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e11a5c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int extraout_r3_00;
  int unaff_r4;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  char cVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  char cVar16;
  uint uVar17;
  int *piVar18;
  undefined8 uVar19;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  int iStack_28;
  int iStack_24;
  uint uStack_20;
  
  iVar1 = func_0x0229f06c(0xa086,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0212bdd0(iVar1,0);
    if (iVar1 == 1) {
      iVar1 = *(int *)(param_1 + 0x44);
      iVar2 = *(int *)(param_1 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0212c014(iVar1,0);
      iVar11 = *(int *)(param_1 + 0x44);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      uVar4 = 0;
      iStack_28 = func_0x0212bf60(iVar11,0);
      iStack_24 = iStack_28 >> 0x1f;
      uVar15 = func_0x01e125e0(param_1,iStack_24,iVar1,iVar1 >> 0x1f);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0244feac(iVar2,uVar15,0);
      cVar13 = '\x01';
      cVar16 = '\0';
    }
    else {
      iVar1 = *(int *)(param_1 + 0x44);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      cVar13 = '\0';
      iVar1 = func_0x0212bdd0(iVar1,0);
      uVar4 = 0;
      cVar16 = '\0';
      if (iVar1 == 2) {
        iVar1 = *(int *)(param_1 + 0x44);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        cVar13 = '\0';
        iVar1 = func_0x0212c0d0(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar4 = 0;
        cVar16 = '\x01';
        if (0 < *(int *)(iVar1 + 0x24)) {
          uVar4 = 1;
        }
      }
    }
    if (*(char *)(param_1 + 0x65) != cVar13) {
      FUN_01e106cc(param_1,cVar13);
    }
    if (*(char *)(param_1 + 0x66) != cVar16) {
      func_0x01e126d0(param_1,cVar16);
    }
    if (*(byte *)(param_1 + 0x67) == uVar4) {
      return (uint)*(byte *)(param_1 + 0x67);
    }
    iVar1 = func_0x0229f06c(0x163f,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0x163f,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      iStack_28 = 0;
      func_0x0245494c(&uStack_50,0,uVar4,0);
      uStack_38 = uStack_50;
      iStack_34 = uStack_4c;
      if (*(int *)(iVar1 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485228(&uStack_38,uVar4,0);
      iVar2 = *(int *)(iVar1 + 8);
      uVar15 = *(undefined4 *)(iVar1 + 0xc);
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar7 = 3;
      if (iVar1 == 0) {
        uVar7 = 2;
      }
      uStack_58 = 0;
      uStack_54 = 0;
      uVar4 = func_0x0245495c(iVar2,uVar15,&uStack_38,uVar7);
      return uVar4;
    }
    iVar1 = *(int *)(param_1 + 0x30);
    *(char *)(param_1 + 0x67) = (char)uVar4;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (uVar4 == 0) {
      iVar2 = func_0x0229f06c(0x1642,0);
      if (iVar2 == 0) {
        iVar1 = *(int *)(iVar1 + 0x20);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0229f06c(0x1643,0);
        if (iVar2 == 0) {
          pcVar9 = (char *)(_UNK_01e18a0c + 0x1e188fc);
          if (*pcVar9 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
            func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
            func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
            *pcVar9 = '\x01';
          }
          iVar2 = func_0x0229f06c(0x163d,0);
          if (iVar2 == 0) {
            iVar2 = *(int *)(iVar1 + 0x20);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x03dcf4b4(iVar2,0,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
            if (iVar2 == 0) {
              return 0;
            }
            iVar2 = *(int *)(iVar1 + 0x20);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            uVar15 = func_0x03dcf1b0(iVar2,0,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
            func_0x01e1a604(iVar1,0,uVar15);
            iVar1 = *(int *)(iVar1 + 0x20);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iStack_34 = **(int **)(_UNK_01e18a24 + 0x1e18a00);
            iStack_28 = 0;
            if (*(int *)(iVar1 + 8) != 0) {
              piVar18 = *(int **)(iVar1 + 0x20);
              iStack_30 = iVar1;
              if (piVar18 == (int *)0x0) {
                uVar4 = func_0x04821a00(&iStack_28,0);
              }
              else {
                iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                  iVar1 = func_0x02457d84(iVar1);
                }
                iVar2 = *piVar18;
                uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
                if (uVar4 != 0) {
                  piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                  do {
                    if (piVar8[-1] == iVar1) {
                      puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 200);
                      goto LAB_03dd0a60;
                    }
                    uVar4 = uVar4 - 1;
                    piVar8 = piVar8 + 2;
                  } while (uVar4 != 0);
                }
                puVar3 = (undefined4 *)func_0x02457d88(piVar18,iVar1,1);
LAB_03dd0a60:
                uVar4 = (*(code *)*puVar3)(piVar18,0,puVar3[1]);
                iVar1 = iStack_30;
              }
              uVar17 = *(uint *)(iVar1 + 8);
              uVar12 = uVar17;
              if (uVar17 == 0) {
                func_0x02457d50();
                uVar12 = *(uint *)(iStack_30 + 8);
                if (uVar12 == 0) {
                  uVar19 = func_0x02457d50();
                  uVar15 = (undefined4)((ulonglong)uVar19 >> 0x20);
                  iVar1 = (int)uVar19;
                  uStack_54 = 0;
                  if (*(int *)(iVar1 + 8) != 0) {
                    piVar18 = *(int **)(iVar1 + 0x20);
                    uStack_60 = uVar15;
                    uStack_5c = uVar4;
                    uStack_58 = uVar12;
                    uStack_50 = uVar17;
                    if (piVar18 == (int *)0x0) {
                      uVar4 = func_0x04821a00(&uStack_60,0);
                    }
                    else {
                      iVar2 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                        iVar2 = func_0x02457d84(iVar2);
                      }
                      iVar11 = *piVar18;
                      uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
                      if (uVar4 != 0) {
                        piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
                        do {
                          if (piVar8[-1] == iVar2) {
                            puVar3 = (undefined4 *)(iVar11 + *piVar8 * 8 + 200);
                            goto LAB_03dd0dc4;
                          }
                          uVar4 = uVar4 - 1;
                          piVar8 = piVar8 + 2;
                        } while (uVar4 != 0);
                      }
                      puVar3 = (undefined4 *)func_0x02457d88(piVar18,iVar2,1);
LAB_03dd0dc4:
                      uVar4 = (*(code *)*puVar3)(piVar18,uVar15,puVar3[1]);
                    }
                    iVar11 = *(int *)(iVar1 + 8);
                    iVar2 = iVar11;
                    if (iVar11 == 0) {
                      func_0x02457d50();
                      iVar2 = *(int *)(iVar1 + 8);
                      if (iVar2 == 0) {
                        uVar19 = func_0x02457d50();
                        uVar4 = func_0x03dcfa64((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),
                                                *(undefined4 *)
                                                 (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) +
                                                 0x84));
                        if ((int)uVar4 < 0) {
                          uVar15 = 0;
                        }
                        else {
                          iVar1 = *(int *)((int)uVar19 + 0xc);
                          if (iVar1 == 0) {
                            func_0x02457d50();
                          }
                          if (*(uint *)(iVar1 + 0xc) <= uVar4) {
                            func_0x02457d5c();
                          }
                          uVar15 = *(undefined4 *)(iVar1 + uVar4 * 0x10 + 0x1c);
                        }
                        *extraout_r2_00 = uVar15;
                        return ~uVar4 >> 0x1f;
                      }
                    }
                    func_0x02457e94(uVar4 & 0x7fffffff,*(undefined4 *)(iVar11 + 0xc));
                    if (*(uint *)(iVar2 + 0xc) <= extraout_r1_00) {
                      func_0x02457d5c();
                    }
                    uVar12 = *(int *)(iVar2 + extraout_r1_00 * 4 + 0x10) - 1;
                    if (-1 < (int)uVar12) {
                      uVar17 = 0xffffffff;
                      do {
                        uVar6 = uVar12;
                        iVar2 = *(int *)(iVar1 + 0xc);
                        if (iVar2 == 0) {
                          func_0x02457d50();
                        }
                        if (*(uint *)(iVar2 + 0xc) <= uVar6) {
                          func_0x02457d5c();
                        }
                        uVar15 = uStack_60;
                        iVar2 = iVar2 + uVar6 * 0x10;
                        if (*(uint *)(iVar2 + 0x10) == (uVar4 & 0x7fffffff)) {
                          piVar18 = *(int **)(iVar1 + 0x20);
                          if (piVar18 == (int *)0x0) {
                            piVar18 = (int *)func_0x02ecb070(*(undefined4 *)
                                                              (*(int *)(*(int *)(extraout_r3 + 0x10)
                                                                       + 0x60) + 0xc));
                            uVar15 = uStack_60;
                            uVar7 = *(undefined4 *)(iVar2 + 0x18);
                            if (piVar18 == (int *)0x0) {
                              func_0x02457d50(0,uVar7);
                            }
                            iVar11 = (**(code **)(*piVar18 + 0x100))
                                               (piVar18,uVar7,uVar15,
                                                *(undefined4 *)(*piVar18 + 0x104));
                          }
                          else {
                            uVar7 = *(undefined4 *)(iVar2 + 0x18);
                            if (piVar18 == (int *)0x0) {
                              func_0x02457d50();
                            }
                            iVar11 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                            if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
                              iVar11 = func_0x02457d84(iVar11);
                            }
                            iVar5 = *piVar18;
                            uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
                            if (uVar12 != 0) {
                              piVar8 = (int *)(*(int *)(iVar5 + 0x58) + 4);
                              do {
                                if (piVar8[-1] == iVar11) {
                                  puVar3 = (undefined4 *)(iVar5 + *piVar8 * 8 + 0xc0);
                                  goto LAB_03dd0f6c;
                                }
                                uVar12 = uVar12 - 1;
                                piVar8 = piVar8 + 2;
                              } while (uVar12 != 0);
                            }
                            puVar3 = (undefined4 *)func_0x02457d88(piVar18,iVar11,0);
LAB_03dd0f6c:
                            iVar11 = (*(code *)*puVar3)(piVar18,uVar7,uVar15,puVar3[1]);
                          }
                          if (iVar11 != 0) {
                            if ((int)uVar17 < 0) {
                              iVar11 = *(int *)(iVar1 + 8);
                              iVar5 = *(int *)(iVar2 + 0x14);
                              if (iVar11 == 0) {
                                func_0x02457d50();
                              }
                              if (*(uint *)(iVar11 + 0xc) <= extraout_r1_00) {
                                func_0x02457d5c();
                              }
                              *(int *)(iVar11 + extraout_r1_00 * 4 + 0x10) = iVar5 + 1;
                            }
                            else {
                              iVar11 = *(int *)(iVar1 + 0xc);
                              if (iVar11 == 0) {
                                func_0x02457d50();
                              }
                              uVar15 = *(undefined4 *)(iVar2 + 0x14);
                              if (*(uint *)(iVar11 + 0xc) <= uVar17) {
                                func_0x02457d5c();
                              }
                              *(undefined4 *)(iVar11 + uVar17 * 0x10 + 0x14) = uVar15;
                            }
                            *extraout_r2 = *(undefined4 *)(iVar2 + 0x1c);
                            uVar15 = *(undefined4 *)(iVar1 + 0x14);
                            *(undefined4 *)(iVar2 + 0x1c) = 0;
                            iVar5 = *(int *)(iVar1 + 0x1c);
                            iVar11 = *(int *)(iVar1 + 0x18);
                            *(undefined4 *)(iVar2 + 0x14) = uVar15;
                            *(uint *)(iVar2 + 0x10) = 0xffffffff;
                            *(int *)(iVar1 + 0x1c) = iVar5 + 1;
                            *(uint *)(iVar1 + 0x14) = uVar6;
                            *(int *)(iVar1 + 0x18) = iVar11 + 1;
                            return 1;
                          }
                        }
                        uVar12 = *(uint *)(iVar2 + 0x14);
                        uVar17 = uVar6;
                      } while (*(uint *)(iVar2 + 0x14) < 0x80000000);
                    }
                  }
                  *extraout_r2 = 0;
                  return 0;
                }
              }
              uStack_2c = uVar4 & 0x7fffffff;
              func_0x02457e94(uStack_2c,*(undefined4 *)(uVar17 + 0xc));
              if (*(uint *)(uVar12 + 0xc) <= extraout_r1) {
                func_0x02457d5c();
              }
              uVar4 = *(int *)(uVar12 + extraout_r1 * 4 + 0x10) - 1;
              if (-1 < (int)uVar4) {
                iVar1 = iStack_30;
                uVar12 = 0xffffffff;
                uStack_38 = extraout_r1;
                do {
                  uVar17 = uVar4;
                  iVar2 = *(int *)(iVar1 + 0xc);
                  if (iVar2 == 0) {
                    func_0x02457d50();
                  }
                  if (*(uint *)(iVar2 + 0xc) <= uVar17) {
                    func_0x02457d5c();
                  }
                  iVar11 = iStack_28;
                  iVar2 = iVar2 + uVar17 * 0x10;
                  if (*(uint *)(iVar2 + 0x10) == uStack_2c) {
                    piVar18 = *(int **)(iVar1 + 0x20);
                    if (piVar18 == (int *)0x0) {
                      piVar18 = (int *)func_0x02ecb070(*(undefined4 *)
                                                        (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60)
                                                        + 0xc));
                      iVar1 = iStack_28;
                      uVar15 = *(undefined4 *)(iVar2 + 0x18);
                      if (piVar18 == (int *)0x0) {
                        func_0x02457d50(0,uVar15);
                      }
                      iVar11 = (**(code **)(*piVar18 + 0x100))
                                         (piVar18,uVar15,iVar1,*(undefined4 *)(*piVar18 + 0x104));
                    }
                    else {
                      uVar15 = *(undefined4 *)(iVar2 + 0x18);
                      if (piVar18 == (int *)0x0) {
                        func_0x02457d50();
                      }
                      iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                        iVar1 = func_0x02457d84(iVar1);
                      }
                      iVar5 = *piVar18;
                      uVar4 = (uint)*(ushort *)(iVar5 + 0xb6);
                      if (uVar4 != 0) {
                        piVar8 = (int *)(*(int *)(iVar5 + 0x58) + 4);
                        do {
                          if (piVar8[-1] == iVar1) {
                            puVar3 = (undefined4 *)(iVar5 + *piVar8 * 8 + 0xc0);
                            goto LAB_03dd0c0c;
                          }
                          uVar4 = uVar4 - 1;
                          piVar8 = piVar8 + 2;
                        } while (uVar4 != 0);
                      }
                      puVar3 = (undefined4 *)func_0x02457d88(piVar18,iVar1,0);
LAB_03dd0c0c:
                      iVar11 = (*(code *)*puVar3)(piVar18,uVar15,iVar11,puVar3[1]);
                    }
                    iVar1 = iStack_30;
                    if (iVar11 != 0) {
                      if ((int)uVar12 < 0) {
                        iVar1 = *(int *)(iStack_30 + 8);
                        iVar11 = *(int *)(iVar2 + 0x14);
                        if (iVar1 == 0) {
                          func_0x02457d50();
                        }
                        uVar4 = uStack_38;
                        if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                          func_0x02457d5c();
                        }
                        *(int *)(iVar1 + uVar4 * 4 + 0x10) = iVar11 + 1;
                      }
                      else {
                        iVar1 = *(int *)(iStack_30 + 0xc);
                        if (iVar1 == 0) {
                          func_0x02457d50();
                        }
                        uVar15 = *(undefined4 *)(iVar2 + 0x14);
                        if (*(uint *)(iVar1 + 0xc) <= uVar12) {
                          func_0x02457d5c();
                        }
                        *(undefined4 *)(iVar1 + uVar12 * 0x10 + 0x14) = uVar15;
                      }
                      uVar15 = *(undefined4 *)(iStack_30 + 0x14);
                      *(undefined4 *)(iVar2 + 0x1c) = 0;
                      iVar1 = *(int *)(iStack_30 + 0x18);
                      iVar11 = *(int *)(iStack_30 + 0x1c);
                      *(uint *)(iVar2 + 0x10) = 0xffffffff;
                      *(undefined4 *)(iVar2 + 0x14) = uVar15;
                      *(uint *)(iStack_30 + 0x14) = uVar17;
                      *(int *)(iStack_30 + 0x18) = iVar1 + 1;
                      *(int *)(iStack_30 + 0x1c) = iVar11 + 1;
                      return 1;
                    }
                  }
                  uVar4 = *(uint *)(iVar2 + 0x14);
                  uVar12 = uVar17;
                } while (*(uint *)(iVar2 + 0x14) < 0x80000000);
              }
            }
            return 0;
          }
          iVar2 = func_0x0229f13c(0x163d,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          goto LAB_021d0928;
        }
        iVar2 = func_0x0229f13c(0x1643,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar2 = func_0x0229f13c(0x1642);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
    }
    else {
      iVar2 = func_0x0229f06c(0x1640,0);
      if (iVar2 == 0) {
        iVar1 = *(int *)(iVar1 + 0x20);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0229f06c(0x1641,0);
        if (iVar2 == 0) {
          pcVar9 = (char *)(_UNK_01e1882c + 0x1e18078);
          iStack_24 = unaff_r4;
          if (*pcVar9 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
            func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
            func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
            func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
            func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
            func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
            *pcVar9 = '\x01';
          }
          iVar2 = func_0x0229f06c(0x1636,0);
          if (iVar2 == 0) {
            iVar2 = *(int *)(iVar1 + 0x20);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            uVar4 = func_0x03dcf4b4(iVar2,0,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
            if (uVar4 == 0) {
              iVar2 = func_0x01e1a508(iVar1,0);
              pcVar9 = (char *)(_UNK_01e1884c + 0x1e1816c);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar11 = func_0x024504c0(iVar2,0);
              uVar15 = *(undefined4 *)(iVar1 + 0x14);
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              func_0x024505b4(iVar11,uVar15,0);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iStack_34 = iVar1;
              iVar1 = func_0x024504c0(iVar2,0);
              if (*pcVar9 == '\0') {
                func_0x01384978(*(undefined4 *)(_UNK_01e18870 + 0x1e18454));
                *pcVar9 = '\x01';
              }
              piVar18 = *(int **)(_UNK_01e18874 + 0x1e18470);
              puVar3 = *(undefined4 **)(*piVar18 + 0x5c);
              uVar15 = puVar3[2];
              uVar7 = *puVar3;
              uVar14 = puVar3[1];
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uStack_38 = 0;
              func_0x0245068c(iVar1,uVar7,uVar14,uVar15);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar1 = func_0x024504c0(iVar2,0);
              pcVar10 = (char *)(_UNK_01e18878 + 0x1e184c8);
              if (*pcVar10 == '\0') {
                func_0x01384978(*(undefined4 *)(_UNK_01e1887c + 0x1e184dc));
                *pcVar10 = '\x01';
              }
              iVar11 = *(int *)(*piVar18 + 0x5c);
              uVar15 = *(undefined4 *)(iVar11 + 0xc);
              uVar7 = *(undefined4 *)(iVar11 + 0x10);
              uVar14 = *(undefined4 *)(iVar11 + 0x14);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uStack_38 = 0;
              func_0x024503a4(iVar1,uVar15,uVar7,uVar14);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar1 = func_0x024504c0(iVar2,0);
              if (*pcVar9 == '\0') {
                func_0x01384978(*(undefined4 *)(_UNK_01e18880 + 0x1e18550));
                *pcVar9 = '\x01';
              }
              puVar3 = *(undefined4 **)(*piVar18 + 0x5c);
              uVar15 = *puVar3;
              uVar7 = puVar3[1];
              uVar14 = puVar3[2];
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uStack_38 = 0;
              func_0x02450c24(iVar1,uVar15,uVar7,uVar14);
              iVar1 = *(int *)(iStack_34 + 0x20);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uVar4 = func_0x03dcf268(iVar1,0,iVar2,**(undefined4 **)(_UNK_01e18884 + 0x1e185b4));
            }
            return uVar4;
          }
          iVar2 = func_0x0229f13c(0x1636,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
LAB_021d0928:
          iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_38 = 0;
          iStack_28 = 0;
          func_0x0245494c(&uStack_50,0,0,0);
          uStack_38 = uStack_50;
          iStack_34 = uStack_4c;
          if (*(int *)(iVar2 + 0x10) != 0) {
            func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
          }
          func_0x01485278(&uStack_38,iVar1,0);
          func_0x01485238(&uStack_38,0,0);
          iVar11 = *(int *)(iVar2 + 8);
          uVar15 = *(undefined4 *)(iVar2 + 0xc);
          iVar1 = *(int *)(iVar2 + 0x10);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          uVar7 = 3;
          if (iVar1 == 0) {
            uVar7 = 2;
          }
          uStack_58 = 0;
          uStack_54 = 0;
          uVar4 = func_0x0245495c(iVar11,uVar15,&uStack_38,uVar7);
          return uVar4;
        }
        iVar2 = func_0x0229f13c(0x1641,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar2 = func_0x0229f13c(0x1640);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa086,0);
    iVar1 = param_1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&stack0xffffffb8,0,0);
  uStack_20 = uStack_38;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&iStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&iStack_30,iVar1,0);
  iVar11 = *(int *)(iVar2 + 8);
  uVar15 = *(undefined4 *)(iVar2 + 0xc);
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar1 == 0) {
    uVar7 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  uVar4 = func_0x0245495c(iVar11,uVar15,&iStack_30,uVar7);
  return uVar4;
}



// ===== FAT.MBItemCharge$$_RefreshSkillCountdownMini RVA 0x1e01c28 =====

void FUN_01e11c28(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xa08a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa08a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    iStack_24 = uStack_3c;
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
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x021326c4(iVar1,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    iVar4 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0213273c(iVar1,0);
    iVar6 = *(int *)(param_1 + 0x4c);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x0213273c(iVar6,0);
    iVar3 = *(int *)(param_1 + 0x4c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iStack_28 = func_0x0213284c(iVar3,0);
    iStack_28 = iVar6 - iStack_28;
    iStack_24 = iStack_28 >> 0x1f;
    uVar5 = func_0x01e125e0(param_1,iStack_24,iVar1,iVar1 >> 0x1f);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x0244feac(iVar4,uVar5,0);
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    (*(code *)&UNK_05189da8)(iVar1,1,0);
    return;
  }
  return;
}



// ===== FAT.MBItemCharge$$_RefreshJumpCD RVA 0x1e01d6c =====

/* WARNING: Possible PIC construction at 0x01e11fd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e1206c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e1209c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e12070) */
/* WARNING: Removing unreachable block (ram,0x01e1207c) */
/* WARNING: Removing unreachable block (ram,0x01e12080) */
/* WARNING: Removing unreachable block (ram,0x01e1208c) */
/* WARNING: Removing unreachable block (ram,0x01e12090) */
/* WARNING: Removing unreachable block (ram,0x01e11fdc) */
/* WARNING: Removing unreachable block (ram,0x01e120a0) */
/* WARNING: Removing unreachable block (ram,0x01e120a4) */
/* WARNING: Removing unreachable block (ram,0x01e120ac) */
/* WARNING: Removing unreachable block (ram,0x01e120b0) */
/* WARNING: Removing unreachable block (ram,0x01e120bc) */
/* WARNING: Removing unreachable block (ram,0x01e120c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e11d6c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
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
  
  pcVar3 = (char *)(_UNK_01e120d8 + 0x1e11d84);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e120dc + 0x1e11d98));
    func_0x01384978(*(undefined4 *)(_UNK_01e120e0 + 0x1e11da4));
    func_0x01384978(*(undefined4 *)(_UNK_01e120e4 + 0x1e11db0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa08b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa08b,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
    iVar5 = func_0x0212eec0(0,0);
    if (iVar5 != 0) {
      func_0x01384bf0();
      goto LAB_01e11e40;
    }
  }
  else {
    iVar5 = func_0x0212eec0(iVar1,0);
    if (iVar5 != 0) {
LAB_01e11e40:
      iVar5 = func_0x0212f04c(iVar1,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar7 = *(int *)(param_1 + 0x28);
      iVar5 = *(int *)(iVar5 + 0x18);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      if (iVar5 == -1) {
        piVar4 = *(int **)(iVar7 + 0x10);
        if (*(int *)(**(int **)(_UNK_01e120e8 + 0x1e11ff0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar6 = func_0x028c1350(**(undefined4 **)(_UNK_01e120ec + 0x1e12014),0);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        (**(code **)(*piVar4 + 0x2d0))(piVar4,uVar6,*(undefined4 *)(*piVar4 + 0x2d4));
      }
      else {
        uVar6 = *(undefined4 *)(iVar7 + 0x10);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0212efa0(iVar1,0);
        if (*(int *)(**(int **)(_UNK_01e120f0 + 0x1e11ea8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uStack_20 = 0;
        uStack_1c = 0;
        iVar5 = iVar1 / 1000 + (iVar1 >> 0x1f);
        iVar1 = iVar5 - (iVar1 >> 0x1f);
        func_0x02089060(uVar6,iVar5,iVar1,iVar1 >> 0x1f);
      }
      iVar1 = *(int *)(param_1 + 0x28);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar6 = 0;
      goto SUB_0244ffe4;
    }
  }
  iVar5 = *(int *)(param_1 + 0x24);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x02450114(iVar5,0);
  if (iVar5 != 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x24);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar6 = *(undefined4 *)(iVar5 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0212f04c(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  if (*(int *)(**(int **)(_UNK_01e120f4 + 0x1e11f68) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uStack_1c = 0;
  uStack_20 = 1;
  iVar5 = iVar1 >> 0x1f;
  iVar1 = iVar1 / 1000 + iVar5;
  iVar5 = iVar1 - iVar5;
  func_0x02089060(uVar6,iVar1,iVar5,iVar5 >> 0x1f);
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 1;
SUB_0244ffe4:
  (*(code *)&UNK_05189da8)(iVar1,uVar6,0);
  return;
}



// ===== FAT.MBItemCharge$$_RefreshFrozenItemTime RVA 0x1e020f8 =====

/* WARNING: Possible PIC construction at 0x01e12224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e12254: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e12228) */
/* WARNING: Removing unreachable block (ram,0x01e12234) */
/* WARNING: Removing unreachable block (ram,0x01e12238) */
/* WARNING: Removing unreachable block (ram,0x01e12244) */
/* WARNING: Removing unreachable block (ram,0x01e12248) */
/* WARNING: Removing unreachable block (ram,0x01e12258) */
/* WARNING: Removing unreachable block (ram,0x01e12264) */
/* WARNING: Removing unreachable block (ram,0x01e12268) */
/* WARNING: Removing unreachable block (ram,0x01e12274) */
/* WARNING: Removing unreachable block (ram,0x01e12278) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e120f8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
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
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01e12290 + 0x1e12110);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e12294 + 0x1e12124));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa08c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa08c,0);
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
  iVar1 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x0211e5f0(iVar4,0);
  if (*(int *)(**(int **)(_UNK_01e12298 + 0x1e121bc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar6 = func_0x01458584((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
  uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_20 = 0;
  uStack_1c = 0;
  func_0x02089060(uVar5,uVar2,(int)uVar6,uVar2);
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar1,0,0);
  return;
}



// ===== FAT.MBItemCharge$$_RefreshTokenMulti RVA 0x1e0229c =====

/* WARNING: Possible PIC construction at 0x01e123e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e12410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e12510: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e12414) */
/* WARNING: Removing unreachable block (ram,0x01e123e4) */
/* WARNING: Removing unreachable block (ram,0x01e123f0) */
/* WARNING: Removing unreachable block (ram,0x01e123f4) */
/* WARNING: Removing unreachable block (ram,0x01e12400) */
/* WARNING: Removing unreachable block (ram,0x01e12404) */
/* WARNING: Removing unreachable block (ram,0x01e12514) */
/* WARNING: Removing unreachable block (ram,0x01e12518) */
/* WARNING: Removing unreachable block (ram,0x01e12520) */
/* WARNING: Removing unreachable block (ram,0x01e12524) */
/* WARNING: Removing unreachable block (ram,0x01e12530) */
/* WARNING: Removing unreachable block (ram,0x01e12534) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1229c(int param_1)

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
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01e1254c + 0x1e122b4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e12550 + 0x1e122c8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa08d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa08d,0);
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
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x02137748(iVar1,0);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x24);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 8);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x02450114(iVar4,0);
    if (iVar4 != 0) {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x24);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar5 = *(undefined4 *)(iVar4 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x021378d4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (*(int *)(**(int **)(_UNK_01e12558 + 0x1e124a0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uStack_1c = 0;
    uStack_20 = 1;
    iVar4 = iVar1 >> 0x1f;
    iVar1 = iVar1 / 1000 + iVar4;
    iVar4 = iVar1 - iVar4;
    func_0x02089060(uVar5,iVar1,iVar4,iVar4 >> 0x1f);
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 1;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar5 = *(undefined4 *)(iVar4 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02137828(iVar1,0);
    if (*(int *)(**(int **)(_UNK_01e12554 + 0x1e1237c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uStack_20 = 0;
    uStack_1c = 0;
    iVar4 = iVar1 / 1000 + (iVar1 >> 0x1f);
    iVar1 = iVar4 - (iVar1 >> 0x1f);
    func_0x02089060(uVar5,iVar4,iVar1,iVar1 >> 0x1f);
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 0;
  }
  (*(code *)&UNK_05189da8)(iVar1,uVar5,0);
  return;
}



// ===== FAT.MBItemCharge$$_RefreshSpecialBox RVA 0x1e0255c =====

/* WARNING: Removing unreachable block (ram,0x01e1816c) */
/* WARNING: Removing unreachable block (ram,0x01e182d0) */
/* WARNING: Removing unreachable block (ram,0x01e182d8) */
/* WARNING: Removing unreachable block (ram,0x01e183e0) */
/* WARNING: Removing unreachable block (ram,0x01e183e8) */
/* WARNING: Removing unreachable block (ram,0x01e183ec) */
/* WARNING: Removing unreachable block (ram,0x01e182e0) */
/* WARNING: Removing unreachable block (ram,0x01e182e8) */
/* WARNING: Removing unreachable block (ram,0x01e182ec) */
/* WARNING: Removing unreachable block (ram,0x01e18308) */
/* WARNING: Removing unreachable block (ram,0x01e1830c) */
/* WARNING: Removing unreachable block (ram,0x01e18324) */
/* WARNING: Removing unreachable block (ram,0x01e18328) */
/* WARNING: Removing unreachable block (ram,0x01e18340) */
/* WARNING: Removing unreachable block (ram,0x01e18344) */
/* WARNING: Removing unreachable block (ram,0x01e18364) */
/* WARNING: Removing unreachable block (ram,0x01e18378) */
/* WARNING: Removing unreachable block (ram,0x01e18398) */
/* WARNING: Removing unreachable block (ram,0x01e1839c) */
/* WARNING: Removing unreachable block (ram,0x01e18178) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e1255c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int extraout_r3_00;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  iVar1 = func_0x0229f06c(0xa091,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x60);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x02136cb8(iVar1,0);
    if (*(byte *)(param_1 + 0x66) == uVar4) {
      return (uint)*(byte *)(param_1 + 0x66);
    }
    iVar1 = func_0x0229f06c(0x1632,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0x1632,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,uVar4,0);
      uStack_38 = uStack_50;
      if (*(int *)(iVar1 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485228(&uStack_38,uVar4,0);
      iVar2 = *(int *)(iVar1 + 8);
      uVar14 = *(undefined4 *)(iVar1 + 0xc);
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar7 = 3;
      if (iVar1 == 0) {
        uVar7 = 2;
      }
      uStack_58 = 0;
      uStack_54 = 0;
      uVar4 = func_0x0245495c(iVar2,uVar14,&uStack_38,uVar7);
      return uVar4;
    }
    iVar1 = *(int *)(param_1 + 0x30);
    *(char *)(param_1 + 0x66) = (char)uVar4;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (uVar4 == 0) {
      iVar2 = func_0x0229f06c(0x163a,0);
      if (iVar2 == 0) {
        iVar2 = *(int *)(iVar1 + 0x1c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        FUN_01e0fd60(iVar2,1,0);
        iVar1 = *(int *)(iVar1 + 0x20);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0229f06c(0x163c,0);
        if (iVar2 == 0) {
          pcVar9 = (char *)(_UNK_01e18a0c + 0x1e188fc);
          if (*pcVar9 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
            func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
            func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
            *pcVar9 = '\x01';
          }
          iVar2 = func_0x0229f06c(0x163d,0);
          if (iVar2 == 0) {
            iVar2 = *(int *)(iVar1 + 0x20);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x03dcf4b4(iVar2,1,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
            if (iVar2 == 0) {
              return 0;
            }
            iVar2 = *(int *)(iVar1 + 0x20);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            uVar14 = func_0x03dcf1b0(iVar2,1,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
            func_0x01e1a604(iVar1,1,uVar14);
            iVar1 = *(int *)(iVar1 + 0x20);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iStack_34 = **(int **)(_UNK_01e18a24 + 0x1e18a00);
            uStack_28 = 1;
            if (*(int *)(iVar1 + 8) != 0) {
              piVar16 = *(int **)(iVar1 + 0x20);
              iStack_30 = iVar1;
              if (piVar16 == (int *)0x0) {
                uVar4 = func_0x04821a00(&uStack_28,0);
              }
              else {
                iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                  iVar1 = func_0x02457d84(iVar1);
                }
                iVar2 = *piVar16;
                uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
                if (uVar4 != 0) {
                  piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                  do {
                    if (piVar8[-1] == iVar1) {
                      puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 200);
                      goto LAB_03dd0a60;
                    }
                    uVar4 = uVar4 - 1;
                    piVar8 = piVar8 + 2;
                  } while (uVar4 != 0);
                }
                puVar3 = (undefined4 *)func_0x02457d88(piVar16,iVar1,1);
LAB_03dd0a60:
                uVar4 = (*(code *)*puVar3)(piVar16,1,puVar3[1]);
                iVar1 = iStack_30;
              }
              uVar15 = *(uint *)(iVar1 + 8);
              uVar12 = uVar15;
              if (uVar15 == 0) {
                func_0x02457d50();
                uVar12 = *(uint *)(iStack_30 + 8);
                if (uVar12 == 0) {
                  uVar17 = func_0x02457d50();
                  uVar14 = (undefined4)((ulonglong)uVar17 >> 0x20);
                  iVar1 = (int)uVar17;
                  uStack_54 = 0;
                  if (*(int *)(iVar1 + 8) != 0) {
                    piVar16 = *(int **)(iVar1 + 0x20);
                    uStack_60 = uVar14;
                    uStack_5c = uVar4;
                    uStack_58 = uVar12;
                    uStack_50 = uVar15;
                    if (piVar16 == (int *)0x0) {
                      uVar4 = func_0x04821a00(&uStack_60,0);
                    }
                    else {
                      iVar2 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                        iVar2 = func_0x02457d84(iVar2);
                      }
                      iVar11 = *piVar16;
                      uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
                      if (uVar4 != 0) {
                        piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
                        do {
                          if (piVar8[-1] == iVar2) {
                            puVar3 = (undefined4 *)(iVar11 + *piVar8 * 8 + 200);
                            goto LAB_03dd0dc4;
                          }
                          uVar4 = uVar4 - 1;
                          piVar8 = piVar8 + 2;
                        } while (uVar4 != 0);
                      }
                      puVar3 = (undefined4 *)func_0x02457d88(piVar16,iVar2,1);
LAB_03dd0dc4:
                      uVar4 = (*(code *)*puVar3)(piVar16,uVar14,puVar3[1]);
                    }
                    iVar11 = *(int *)(iVar1 + 8);
                    iVar2 = iVar11;
                    if (iVar11 == 0) {
                      func_0x02457d50();
                      iVar2 = *(int *)(iVar1 + 8);
                      if (iVar2 == 0) {
                        uVar17 = func_0x02457d50();
                        uVar4 = func_0x03dcfa64((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),
                                                *(undefined4 *)
                                                 (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) +
                                                 0x84));
                        if ((int)uVar4 < 0) {
                          uVar14 = 0;
                        }
                        else {
                          iVar1 = *(int *)((int)uVar17 + 0xc);
                          if (iVar1 == 0) {
                            func_0x02457d50();
                          }
                          if (*(uint *)(iVar1 + 0xc) <= uVar4) {
                            func_0x02457d5c();
                          }
                          uVar14 = *(undefined4 *)(iVar1 + uVar4 * 0x10 + 0x1c);
                        }
                        *extraout_r2_00 = uVar14;
                        return ~uVar4 >> 0x1f;
                      }
                    }
                    func_0x02457e94(uVar4 & 0x7fffffff,*(undefined4 *)(iVar11 + 0xc));
                    if (*(uint *)(iVar2 + 0xc) <= extraout_r1_00) {
                      func_0x02457d5c();
                    }
                    uVar12 = *(int *)(iVar2 + extraout_r1_00 * 4 + 0x10) - 1;
                    if (-1 < (int)uVar12) {
                      uVar15 = 0xffffffff;
                      do {
                        uVar5 = uVar12;
                        iVar2 = *(int *)(iVar1 + 0xc);
                        if (iVar2 == 0) {
                          func_0x02457d50();
                        }
                        if (*(uint *)(iVar2 + 0xc) <= uVar5) {
                          func_0x02457d5c();
                        }
                        uVar14 = uStack_60;
                        iVar2 = iVar2 + uVar5 * 0x10;
                        if (*(uint *)(iVar2 + 0x10) == (uVar4 & 0x7fffffff)) {
                          piVar16 = *(int **)(iVar1 + 0x20);
                          if (piVar16 == (int *)0x0) {
                            piVar16 = (int *)func_0x02ecb070(*(undefined4 *)
                                                              (*(int *)(*(int *)(extraout_r3 + 0x10)
                                                                       + 0x60) + 0xc));
                            uVar14 = uStack_60;
                            uVar7 = *(undefined4 *)(iVar2 + 0x18);
                            if (piVar16 == (int *)0x0) {
                              func_0x02457d50(0,uVar7);
                            }
                            iVar11 = (**(code **)(*piVar16 + 0x100))
                                               (piVar16,uVar7,uVar14,
                                                *(undefined4 *)(*piVar16 + 0x104));
                          }
                          else {
                            uVar7 = *(undefined4 *)(iVar2 + 0x18);
                            if (piVar16 == (int *)0x0) {
                              func_0x02457d50();
                            }
                            iVar11 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                            if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
                              iVar11 = func_0x02457d84(iVar11);
                            }
                            iVar6 = *piVar16;
                            uVar12 = (uint)*(ushort *)(iVar6 + 0xb6);
                            if (uVar12 != 0) {
                              piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                              do {
                                if (piVar8[-1] == iVar11) {
                                  puVar3 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
                                  goto LAB_03dd0f6c;
                                }
                                uVar12 = uVar12 - 1;
                                piVar8 = piVar8 + 2;
                              } while (uVar12 != 0);
                            }
                            puVar3 = (undefined4 *)func_0x02457d88(piVar16,iVar11,0);
LAB_03dd0f6c:
                            iVar11 = (*(code *)*puVar3)(piVar16,uVar7,uVar14,puVar3[1]);
                          }
                          if (iVar11 != 0) {
                            if ((int)uVar15 < 0) {
                              iVar11 = *(int *)(iVar1 + 8);
                              iVar6 = *(int *)(iVar2 + 0x14);
                              if (iVar11 == 0) {
                                func_0x02457d50();
                              }
                              if (*(uint *)(iVar11 + 0xc) <= extraout_r1_00) {
                                func_0x02457d5c();
                              }
                              *(int *)(iVar11 + extraout_r1_00 * 4 + 0x10) = iVar6 + 1;
                            }
                            else {
                              iVar11 = *(int *)(iVar1 + 0xc);
                              if (iVar11 == 0) {
                                func_0x02457d50();
                              }
                              uVar14 = *(undefined4 *)(iVar2 + 0x14);
                              if (*(uint *)(iVar11 + 0xc) <= uVar15) {
                                func_0x02457d5c();
                              }
                              *(undefined4 *)(iVar11 + uVar15 * 0x10 + 0x14) = uVar14;
                            }
                            *extraout_r2 = *(undefined4 *)(iVar2 + 0x1c);
                            uVar14 = *(undefined4 *)(iVar1 + 0x14);
                            *(undefined4 *)(iVar2 + 0x1c) = 0;
                            iVar6 = *(int *)(iVar1 + 0x1c);
                            iVar11 = *(int *)(iVar1 + 0x18);
                            *(undefined4 *)(iVar2 + 0x14) = uVar14;
                            *(uint *)(iVar2 + 0x10) = 0xffffffff;
                            *(int *)(iVar1 + 0x1c) = iVar6 + 1;
                            *(uint *)(iVar1 + 0x14) = uVar5;
                            *(int *)(iVar1 + 0x18) = iVar11 + 1;
                            return 1;
                          }
                        }
                        uVar12 = *(uint *)(iVar2 + 0x14);
                        uVar15 = uVar5;
                      } while (*(uint *)(iVar2 + 0x14) < 0x80000000);
                    }
                  }
                  *extraout_r2 = 0;
                  return 0;
                }
              }
              uStack_2c = uVar4 & 0x7fffffff;
              func_0x02457e94(uStack_2c,*(undefined4 *)(uVar15 + 0xc));
              if (*(uint *)(uVar12 + 0xc) <= extraout_r1) {
                func_0x02457d5c();
              }
              uVar4 = *(int *)(uVar12 + extraout_r1 * 4 + 0x10) - 1;
              if (-1 < (int)uVar4) {
                iVar1 = iStack_30;
                uVar12 = 0xffffffff;
                uStack_38 = extraout_r1;
                do {
                  uVar15 = uVar4;
                  iVar2 = *(int *)(iVar1 + 0xc);
                  if (iVar2 == 0) {
                    func_0x02457d50();
                  }
                  if (*(uint *)(iVar2 + 0xc) <= uVar15) {
                    func_0x02457d5c();
                  }
                  uVar14 = uStack_28;
                  iVar2 = iVar2 + uVar15 * 0x10;
                  if (*(uint *)(iVar2 + 0x10) == uStack_2c) {
                    piVar16 = *(int **)(iVar1 + 0x20);
                    if (piVar16 == (int *)0x0) {
                      piVar16 = (int *)func_0x02ecb070(*(undefined4 *)
                                                        (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60)
                                                        + 0xc));
                      uVar14 = uStack_28;
                      uVar7 = *(undefined4 *)(iVar2 + 0x18);
                      if (piVar16 == (int *)0x0) {
                        func_0x02457d50(0,uVar7);
                      }
                      iVar11 = (**(code **)(*piVar16 + 0x100))
                                         (piVar16,uVar7,uVar14,*(undefined4 *)(*piVar16 + 0x104));
                    }
                    else {
                      uVar7 = *(undefined4 *)(iVar2 + 0x18);
                      if (piVar16 == (int *)0x0) {
                        func_0x02457d50();
                      }
                      iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                        iVar1 = func_0x02457d84(iVar1);
                      }
                      iVar11 = *piVar16;
                      uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
                      if (uVar4 != 0) {
                        piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
                        do {
                          if (piVar8[-1] == iVar1) {
                            puVar3 = (undefined4 *)(iVar11 + *piVar8 * 8 + 0xc0);
                            goto LAB_03dd0c0c;
                          }
                          uVar4 = uVar4 - 1;
                          piVar8 = piVar8 + 2;
                        } while (uVar4 != 0);
                      }
                      puVar3 = (undefined4 *)func_0x02457d88(piVar16,iVar1,0);
LAB_03dd0c0c:
                      iVar11 = (*(code *)*puVar3)(piVar16,uVar7,uVar14,puVar3[1]);
                    }
                    iVar1 = iStack_30;
                    if (iVar11 != 0) {
                      if ((int)uVar12 < 0) {
                        iVar1 = *(int *)(iStack_30 + 8);
                        iVar11 = *(int *)(iVar2 + 0x14);
                        if (iVar1 == 0) {
                          func_0x02457d50();
                        }
                        uVar4 = uStack_38;
                        if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                          func_0x02457d5c();
                        }
                        *(int *)(iVar1 + uVar4 * 4 + 0x10) = iVar11 + 1;
                      }
                      else {
                        iVar1 = *(int *)(iStack_30 + 0xc);
                        if (iVar1 == 0) {
                          func_0x02457d50();
                        }
                        uVar14 = *(undefined4 *)(iVar2 + 0x14);
                        if (*(uint *)(iVar1 + 0xc) <= uVar12) {
                          func_0x02457d5c();
                        }
                        *(undefined4 *)(iVar1 + uVar12 * 0x10 + 0x14) = uVar14;
                      }
                      uVar14 = *(undefined4 *)(iStack_30 + 0x14);
                      *(undefined4 *)(iVar2 + 0x1c) = 0;
                      iVar1 = *(int *)(iStack_30 + 0x18);
                      iVar11 = *(int *)(iStack_30 + 0x1c);
                      *(uint *)(iVar2 + 0x10) = 0xffffffff;
                      *(undefined4 *)(iVar2 + 0x14) = uVar14;
                      *(uint *)(iStack_30 + 0x14) = uVar15;
                      *(int *)(iStack_30 + 0x18) = iVar1 + 1;
                      *(int *)(iStack_30 + 0x1c) = iVar11 + 1;
                      return 1;
                    }
                  }
                  uVar4 = *(uint *)(iVar2 + 0x14);
                  uVar12 = uVar15;
                } while (*(uint *)(iVar2 + 0x14) < 0x80000000);
              }
            }
            return 0;
          }
          iVar2 = func_0x0229f13c(0x163d,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          goto LAB_021d0928;
        }
        iVar2 = func_0x0229f13c(0x163c,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar2 = func_0x0229f13c(0x163a);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
    }
    else {
      iVar2 = func_0x0229f06c(0x1633,0);
      if (iVar2 == 0) {
        iVar2 = *(int *)(iVar1 + 0x1c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        FUN_01e0f95c(iVar2,1,0);
        iVar1 = *(int *)(iVar1 + 0x20);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0229f06c(0x1635,0);
        if (iVar2 == 0) {
          pcVar9 = (char *)(_UNK_01e1882c + 0x1e18078);
          if (*pcVar9 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
            func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
            func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
            func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
            func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
            func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
            *pcVar9 = '\x01';
          }
          iVar2 = func_0x0229f06c(0x1636,0);
          if (iVar2 == 0) {
            iVar2 = *(int *)(iVar1 + 0x20);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            uVar4 = func_0x03dcf4b4(iVar2,1,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
            if (uVar4 == 0) {
              iVar2 = func_0x01e1a508(iVar1,1);
              pcVar9 = (char *)(_UNK_01e1884c + 0x1e1816c);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar11 = func_0x024504c0(iVar2,0);
              uVar14 = *(undefined4 *)(iVar1 + 0x14);
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              func_0x024505b4(iVar11,uVar14,0);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iStack_34 = iVar1;
              iVar1 = func_0x024504c0(iVar2,0);
              if (*pcVar9 == '\0') {
                func_0x01384978(*(undefined4 *)(_UNK_01e18870 + 0x1e18454));
                *pcVar9 = '\x01';
              }
              piVar16 = *(int **)(_UNK_01e18874 + 0x1e18470);
              puVar3 = *(undefined4 **)(*piVar16 + 0x5c);
              uVar14 = puVar3[2];
              uVar7 = *puVar3;
              uVar13 = puVar3[1];
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uStack_38 = 0;
              func_0x0245068c(iVar1,uVar7,uVar13,uVar14);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar1 = func_0x024504c0(iVar2,0);
              pcVar10 = (char *)(_UNK_01e18878 + 0x1e184c8);
              if (*pcVar10 == '\0') {
                func_0x01384978(*(undefined4 *)(_UNK_01e1887c + 0x1e184dc));
                *pcVar10 = '\x01';
              }
              iVar11 = *(int *)(*piVar16 + 0x5c);
              uVar14 = *(undefined4 *)(iVar11 + 0xc);
              uVar7 = *(undefined4 *)(iVar11 + 0x10);
              uVar13 = *(undefined4 *)(iVar11 + 0x14);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uStack_38 = 0;
              func_0x024503a4(iVar1,uVar14,uVar7,uVar13);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar1 = func_0x024504c0(iVar2,0);
              if (*pcVar9 == '\0') {
                func_0x01384978(*(undefined4 *)(_UNK_01e18880 + 0x1e18550));
                *pcVar9 = '\x01';
              }
              puVar3 = *(undefined4 **)(*piVar16 + 0x5c);
              uVar14 = *puVar3;
              uVar7 = puVar3[1];
              uVar13 = puVar3[2];
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uStack_38 = 0;
              func_0x02450c24(iVar1,uVar14,uVar7,uVar13);
              iVar1 = *(int *)(iStack_34 + 0x20);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uVar4 = func_0x03dcf268(iVar1,1,iVar2,**(undefined4 **)(_UNK_01e18884 + 0x1e185b4));
            }
            return uVar4;
          }
          iVar2 = func_0x0229f13c(0x1636,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
LAB_021d0928:
          iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_38 = 0;
          uStack_28 = 0;
          func_0x0245494c(&uStack_50,0,1,0);
          uStack_38 = uStack_50;
          if (*(int *)(iVar2 + 0x10) != 0) {
            func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
          }
          func_0x01485278(&uStack_38,iVar1,0);
          func_0x01485238(&uStack_38,1,0);
          iVar11 = *(int *)(iVar2 + 8);
          uVar14 = *(undefined4 *)(iVar2 + 0xc);
          iVar1 = *(int *)(iVar2 + 0x10);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          uVar7 = 3;
          if (iVar1 == 0) {
            uVar7 = 2;
          }
          uStack_58 = 0;
          uStack_54 = 0;
          uVar4 = func_0x0245495c(iVar11,uVar14,&uStack_38,uVar7);
          return uVar4;
        }
        iVar2 = func_0x0229f13c(0x1635,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar2 = func_0x0229f13c(0x1633);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa091,0);
    iVar1 = param_1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&stack0xffffffb8,0,0);
  uStack_20 = uStack_38;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&iStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&iStack_30,iVar1,0);
  iVar11 = *(int *)(iVar2 + 8);
  uVar14 = *(undefined4 *)(iVar2 + 0xc);
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar1 == 0) {
    uVar7 = 1;
  }
  uStack_50 = 0;
  uVar4 = func_0x0245495c(iVar11,uVar14,&iStack_30,uVar7);
  return uVar4;
}



// ===== FAT.MBItemCharge$$_CalcProgress RVA 0x1e025e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_01e125e0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = func_0x0229f06c(0xa06d,0);
  if (iVar1 == 0) {
    fVar3 = (float)func_0x01457e28(param_3,param_4);
    fVar2 = _UNK_01e126c8;
    if (param_3 != 0 || param_4 != 0) {
      fVar2 = (float)func_0x01457e28(param_5,param_6);
      fVar3 = (fVar2 - fVar3) / (_UNK_01e126c8 - fVar3);
      fVar2 = _UNK_01e126c8;
      if (0.0 <= fVar3) {
        if (1.0 < fVar3) {
          fVar3 = 1.0;
        }
        fVar2 = fVar3 * _UNK_01e126cc;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa06d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    fVar2 = (float)func_0x0228b830(iVar1,param_1,param_3,param_4,param_5,param_6,0);
  }
  return fVar2;
}



// ===== FAT.MBItemCharge$$_RefreshOutput RVA 0x1e026d0 =====

/* WARNING: Removing unreachable block (ram,0x01e1816c) */
/* WARNING: Removing unreachable block (ram,0x01e182d0) */
/* WARNING: Removing unreachable block (ram,0x01e182d8) */
/* WARNING: Removing unreachable block (ram,0x01e183e0) */
/* WARNING: Removing unreachable block (ram,0x01e183e8) */
/* WARNING: Removing unreachable block (ram,0x01e183ec) */
/* WARNING: Removing unreachable block (ram,0x01e182e0) */
/* WARNING: Removing unreachable block (ram,0x01e182e8) */
/* WARNING: Removing unreachable block (ram,0x01e182ec) */
/* WARNING: Removing unreachable block (ram,0x01e18308) */
/* WARNING: Removing unreachable block (ram,0x01e1830c) */
/* WARNING: Removing unreachable block (ram,0x01e18324) */
/* WARNING: Removing unreachable block (ram,0x01e18328) */
/* WARNING: Removing unreachable block (ram,0x01e18340) */
/* WARNING: Removing unreachable block (ram,0x01e18344) */
/* WARNING: Removing unreachable block (ram,0x01e18364) */
/* WARNING: Removing unreachable block (ram,0x01e18378) */
/* WARNING: Removing unreachable block (ram,0x01e18398) */
/* WARNING: Removing unreachable block (ram,0x01e1839c) */
/* WARNING: Removing unreachable block (ram,0x01e18178) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e126d0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar6;
  int *piVar7;
  int extraout_r3;
  int extraout_r3_00;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  iVar1 = func_0x0229f06c(0x1632,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1632,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,param_2,0);
    iVar11 = *(int *)(iVar1 + 8);
    uVar14 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    uVar3 = func_0x0245495c(iVar11,uVar14,&uStack_38,uVar6);
    return uVar3;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  *(char *)(param_1 + 0x66) = (char)param_2;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (param_2 == 0) {
    iVar11 = func_0x0229f06c(0x163a,0);
    if (iVar11 == 0) {
      iVar11 = *(int *)(iVar1 + 0x1c);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      FUN_01e0fd60(iVar11,1,0);
      iVar1 = *(int *)(iVar1 + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar11 = func_0x0229f06c(0x163c,0);
      if (iVar11 == 0) {
        pcVar8 = (char *)(_UNK_01e18a0c + 0x1e188fc);
        if (*pcVar8 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
          func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
          func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
          *pcVar8 = '\x01';
        }
        iVar11 = func_0x0229f06c(0x163d,0);
        if (iVar11 == 0) {
          iVar11 = *(int *)(iVar1 + 0x20);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = func_0x03dcf4b4(iVar11,1,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
          if (iVar11 == 0) {
            return 0;
          }
          iVar11 = *(int *)(iVar1 + 0x20);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          uVar14 = func_0x03dcf1b0(iVar11,1,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
          func_0x01e1a604(iVar1,1,uVar14);
          iVar1 = *(int *)(iVar1 + 0x20);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iStack_34 = **(int **)(_UNK_01e18a24 + 0x1e18a00);
          uStack_28 = 1;
          if (*(int *)(iVar1 + 8) != 0) {
            piVar16 = *(int **)(iVar1 + 0x20);
            iStack_30 = iVar1;
            if (piVar16 == (int *)0x0) {
              uVar3 = func_0x04821a00(&uStack_28,0);
            }
            else {
              iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
              if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                iVar1 = func_0x02457d84(iVar1);
              }
              iVar11 = *piVar16;
              uVar3 = (uint)*(ushort *)(iVar11 + 0xb6);
              if (uVar3 != 0) {
                piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
                do {
                  if (piVar7[-1] == iVar1) {
                    puVar2 = (undefined4 *)(iVar11 + *piVar7 * 8 + 200);
                    goto LAB_03dd0a60;
                  }
                  uVar3 = uVar3 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar3 != 0);
              }
              puVar2 = (undefined4 *)func_0x02457d88(piVar16,iVar1,1);
LAB_03dd0a60:
              uVar3 = (*(code *)*puVar2)(piVar16,1,puVar2[1]);
              iVar1 = iStack_30;
            }
            uVar15 = *(uint *)(iVar1 + 8);
            uVar12 = uVar15;
            if (uVar15 == 0) {
              func_0x02457d50();
              uVar12 = *(uint *)(iStack_30 + 8);
              if (uVar12 == 0) {
                uVar17 = func_0x02457d50();
                uVar14 = (undefined4)((ulonglong)uVar17 >> 0x20);
                iVar1 = (int)uVar17;
                uStack_54 = 0;
                if (*(int *)(iVar1 + 8) != 0) {
                  piVar16 = *(int **)(iVar1 + 0x20);
                  uStack_60 = uVar14;
                  uStack_5c = uVar3;
                  uStack_58 = uVar12;
                  uStack_50 = uVar15;
                  if (piVar16 == (int *)0x0) {
                    uVar3 = func_0x04821a00(&uStack_60,0);
                  }
                  else {
                    iVar11 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                    if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
                      iVar11 = func_0x02457d84(iVar11);
                    }
                    iVar10 = *piVar16;
                    uVar3 = (uint)*(ushort *)(iVar10 + 0xb6);
                    if (uVar3 != 0) {
                      piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
                      do {
                        if (piVar7[-1] == iVar11) {
                          puVar2 = (undefined4 *)(iVar10 + *piVar7 * 8 + 200);
                          goto LAB_03dd0dc4;
                        }
                        uVar3 = uVar3 - 1;
                        piVar7 = piVar7 + 2;
                      } while (uVar3 != 0);
                    }
                    puVar2 = (undefined4 *)func_0x02457d88(piVar16,iVar11,1);
LAB_03dd0dc4:
                    uVar3 = (*(code *)*puVar2)(piVar16,uVar14,puVar2[1]);
                  }
                  iVar10 = *(int *)(iVar1 + 8);
                  iVar11 = iVar10;
                  if (iVar10 == 0) {
                    func_0x02457d50();
                    iVar11 = *(int *)(iVar1 + 8);
                    if (iVar11 == 0) {
                      uVar17 = func_0x02457d50();
                      uVar3 = func_0x03dcfa64((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),
                                              *(undefined4 *)
                                               (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) +
                                               0x84));
                      if ((int)uVar3 < 0) {
                        uVar14 = 0;
                      }
                      else {
                        iVar1 = *(int *)((int)uVar17 + 0xc);
                        if (iVar1 == 0) {
                          func_0x02457d50();
                        }
                        if (*(uint *)(iVar1 + 0xc) <= uVar3) {
                          func_0x02457d5c();
                        }
                        uVar14 = *(undefined4 *)(iVar1 + uVar3 * 0x10 + 0x1c);
                      }
                      *extraout_r2_00 = uVar14;
                      return ~uVar3 >> 0x1f;
                    }
                  }
                  func_0x02457e94(uVar3 & 0x7fffffff,*(undefined4 *)(iVar10 + 0xc));
                  if (*(uint *)(iVar11 + 0xc) <= extraout_r1_00) {
                    func_0x02457d5c();
                  }
                  uVar12 = *(int *)(iVar11 + extraout_r1_00 * 4 + 0x10) - 1;
                  if (-1 < (int)uVar12) {
                    uVar15 = 0xffffffff;
                    do {
                      uVar4 = uVar12;
                      iVar11 = *(int *)(iVar1 + 0xc);
                      if (iVar11 == 0) {
                        func_0x02457d50();
                      }
                      if (*(uint *)(iVar11 + 0xc) <= uVar4) {
                        func_0x02457d5c();
                      }
                      uVar14 = uStack_60;
                      iVar11 = iVar11 + uVar4 * 0x10;
                      if (*(uint *)(iVar11 + 0x10) == (uVar3 & 0x7fffffff)) {
                        piVar16 = *(int **)(iVar1 + 0x20);
                        if (piVar16 == (int *)0x0) {
                          piVar16 = (int *)func_0x02ecb070(*(undefined4 *)
                                                            (*(int *)(*(int *)(extraout_r3 + 0x10) +
                                                                     0x60) + 0xc));
                          uVar14 = uStack_60;
                          uVar6 = *(undefined4 *)(iVar11 + 0x18);
                          if (piVar16 == (int *)0x0) {
                            func_0x02457d50(0,uVar6);
                          }
                          iVar10 = (**(code **)(*piVar16 + 0x100))
                                             (piVar16,uVar6,uVar14,*(undefined4 *)(*piVar16 + 0x104)
                                             );
                        }
                        else {
                          uVar6 = *(undefined4 *)(iVar11 + 0x18);
                          if (piVar16 == (int *)0x0) {
                            func_0x02457d50();
                          }
                          iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                          if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
                            iVar10 = func_0x02457d84(iVar10);
                          }
                          iVar5 = *piVar16;
                          uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
                          if (uVar12 != 0) {
                            piVar7 = (int *)(*(int *)(iVar5 + 0x58) + 4);
                            do {
                              if (piVar7[-1] == iVar10) {
                                puVar2 = (undefined4 *)(iVar5 + *piVar7 * 8 + 0xc0);
                                goto LAB_03dd0f6c;
                              }
                              uVar12 = uVar12 - 1;
                              piVar7 = piVar7 + 2;
                            } while (uVar12 != 0);
                          }
                          puVar2 = (undefined4 *)func_0x02457d88(piVar16,iVar10,0);
LAB_03dd0f6c:
                          iVar10 = (*(code *)*puVar2)(piVar16,uVar6,uVar14,puVar2[1]);
                        }
                        if (iVar10 != 0) {
                          if ((int)uVar15 < 0) {
                            iVar10 = *(int *)(iVar1 + 8);
                            iVar5 = *(int *)(iVar11 + 0x14);
                            if (iVar10 == 0) {
                              func_0x02457d50();
                            }
                            if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
                              func_0x02457d5c();
                            }
                            *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) = iVar5 + 1;
                          }
                          else {
                            iVar10 = *(int *)(iVar1 + 0xc);
                            if (iVar10 == 0) {
                              func_0x02457d50();
                            }
                            uVar14 = *(undefined4 *)(iVar11 + 0x14);
                            if (*(uint *)(iVar10 + 0xc) <= uVar15) {
                              func_0x02457d5c();
                            }
                            *(undefined4 *)(iVar10 + uVar15 * 0x10 + 0x14) = uVar14;
                          }
                          *extraout_r2 = *(undefined4 *)(iVar11 + 0x1c);
                          uVar14 = *(undefined4 *)(iVar1 + 0x14);
                          *(undefined4 *)(iVar11 + 0x1c) = 0;
                          iVar5 = *(int *)(iVar1 + 0x1c);
                          iVar10 = *(int *)(iVar1 + 0x18);
                          *(undefined4 *)(iVar11 + 0x14) = uVar14;
                          *(uint *)(iVar11 + 0x10) = 0xffffffff;
                          *(int *)(iVar1 + 0x1c) = iVar5 + 1;
                          *(uint *)(iVar1 + 0x14) = uVar4;
                          *(int *)(iVar1 + 0x18) = iVar10 + 1;
                          return 1;
                        }
                      }
                      uVar12 = *(uint *)(iVar11 + 0x14);
                      uVar15 = uVar4;
                    } while (*(uint *)(iVar11 + 0x14) < 0x80000000);
                  }
                }
                *extraout_r2 = 0;
                return 0;
              }
            }
            uStack_2c = uVar3 & 0x7fffffff;
            func_0x02457e94(uStack_2c,*(undefined4 *)(uVar15 + 0xc));
            if (*(uint *)(uVar12 + 0xc) <= extraout_r1) {
              func_0x02457d5c();
            }
            uVar3 = *(int *)(uVar12 + extraout_r1 * 4 + 0x10) - 1;
            if (-1 < (int)uVar3) {
              iVar1 = iStack_30;
              uVar12 = 0xffffffff;
              uStack_38 = extraout_r1;
              do {
                uVar15 = uVar3;
                iVar11 = *(int *)(iVar1 + 0xc);
                if (iVar11 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar11 + 0xc) <= uVar15) {
                  func_0x02457d5c();
                }
                uVar14 = uStack_28;
                iVar11 = iVar11 + uVar15 * 0x10;
                if (*(uint *)(iVar11 + 0x10) == uStack_2c) {
                  piVar16 = *(int **)(iVar1 + 0x20);
                  if (piVar16 == (int *)0x0) {
                    piVar16 = (int *)func_0x02ecb070(*(undefined4 *)
                                                      (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) +
                                                      0xc));
                    uVar14 = uStack_28;
                    uVar6 = *(undefined4 *)(iVar11 + 0x18);
                    if (piVar16 == (int *)0x0) {
                      func_0x02457d50(0,uVar6);
                    }
                    iVar10 = (**(code **)(*piVar16 + 0x100))
                                       (piVar16,uVar6,uVar14,*(undefined4 *)(*piVar16 + 0x104));
                  }
                  else {
                    uVar6 = *(undefined4 *)(iVar11 + 0x18);
                    if (piVar16 == (int *)0x0) {
                      func_0x02457d50();
                    }
                    iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                      iVar1 = func_0x02457d84(iVar1);
                    }
                    iVar10 = *piVar16;
                    uVar3 = (uint)*(ushort *)(iVar10 + 0xb6);
                    if (uVar3 != 0) {
                      piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
                      do {
                        if (piVar7[-1] == iVar1) {
                          puVar2 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xc0);
                          goto LAB_03dd0c0c;
                        }
                        uVar3 = uVar3 - 1;
                        piVar7 = piVar7 + 2;
                      } while (uVar3 != 0);
                    }
                    puVar2 = (undefined4 *)func_0x02457d88(piVar16,iVar1,0);
LAB_03dd0c0c:
                    iVar10 = (*(code *)*puVar2)(piVar16,uVar6,uVar14,puVar2[1]);
                  }
                  iVar1 = iStack_30;
                  if (iVar10 != 0) {
                    if ((int)uVar12 < 0) {
                      iVar1 = *(int *)(iStack_30 + 8);
                      iVar10 = *(int *)(iVar11 + 0x14);
                      if (iVar1 == 0) {
                        func_0x02457d50();
                      }
                      uVar3 = uStack_38;
                      if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                        func_0x02457d5c();
                      }
                      *(int *)(iVar1 + uVar3 * 4 + 0x10) = iVar10 + 1;
                    }
                    else {
                      iVar1 = *(int *)(iStack_30 + 0xc);
                      if (iVar1 == 0) {
                        func_0x02457d50();
                      }
                      uVar14 = *(undefined4 *)(iVar11 + 0x14);
                      if (*(uint *)(iVar1 + 0xc) <= uVar12) {
                        func_0x02457d5c();
                      }
                      *(undefined4 *)(iVar1 + uVar12 * 0x10 + 0x14) = uVar14;
                    }
                    uVar14 = *(undefined4 *)(iStack_30 + 0x14);
                    *(undefined4 *)(iVar11 + 0x1c) = 0;
                    iVar1 = *(int *)(iStack_30 + 0x18);
                    iVar10 = *(int *)(iStack_30 + 0x1c);
                    *(uint *)(iVar11 + 0x10) = 0xffffffff;
                    *(undefined4 *)(iVar11 + 0x14) = uVar14;
                    *(uint *)(iStack_30 + 0x14) = uVar15;
                    *(int *)(iStack_30 + 0x18) = iVar1 + 1;
                    *(int *)(iStack_30 + 0x1c) = iVar10 + 1;
                    return 1;
                  }
                }
                uVar3 = *(uint *)(iVar11 + 0x14);
                uVar12 = uVar15;
              } while (*(uint *)(iVar11 + 0x14) < 0x80000000);
            }
          }
          return 0;
        }
        iVar11 = func_0x0229f13c(0x163d,0);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        goto LAB_021d0928;
      }
      iVar11 = func_0x0229f13c(0x163c,0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar11 = func_0x0229f13c(0x163a);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar11 = func_0x0229f06c(0x1633,0);
    if (iVar11 == 0) {
      iVar11 = *(int *)(iVar1 + 0x1c);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      FUN_01e0f95c(iVar11,1,0);
      iVar1 = *(int *)(iVar1 + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar11 = func_0x0229f06c(0x1635,0);
      if (iVar11 == 0) {
        pcVar8 = (char *)(_UNK_01e1882c + 0x1e18078);
        if (*pcVar8 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
          func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
          func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
          func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
          func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
          func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
          *pcVar8 = '\x01';
        }
        iVar11 = func_0x0229f06c(0x1636,0);
        if (iVar11 == 0) {
          iVar11 = *(int *)(iVar1 + 0x20);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          uVar3 = func_0x03dcf4b4(iVar11,1,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
          if (uVar3 == 0) {
            iVar11 = func_0x01e1a508(iVar1,1);
            pcVar8 = (char *)(_UNK_01e1884c + 0x1e1816c);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar10 = func_0x024504c0(iVar11,0);
            uVar14 = *(undefined4 *)(iVar1 + 0x14);
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            func_0x024505b4(iVar10,uVar14,0);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iStack_34 = iVar1;
            iVar1 = func_0x024504c0(iVar11,0);
            if (*pcVar8 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01e18870 + 0x1e18454));
              *pcVar8 = '\x01';
            }
            piVar16 = *(int **)(_UNK_01e18874 + 0x1e18470);
            puVar2 = *(undefined4 **)(*piVar16 + 0x5c);
            uVar14 = puVar2[2];
            uVar6 = *puVar2;
            uVar13 = puVar2[1];
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uStack_38 = 0;
            func_0x0245068c(iVar1,uVar6,uVar13,uVar14);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x024504c0(iVar11,0);
            pcVar9 = (char *)(_UNK_01e18878 + 0x1e184c8);
            if (*pcVar9 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01e1887c + 0x1e184dc));
              *pcVar9 = '\x01';
            }
            iVar10 = *(int *)(*piVar16 + 0x5c);
            uVar14 = *(undefined4 *)(iVar10 + 0xc);
            uVar6 = *(undefined4 *)(iVar10 + 0x10);
            uVar13 = *(undefined4 *)(iVar10 + 0x14);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uStack_38 = 0;
            func_0x024503a4(iVar1,uVar14,uVar6,uVar13);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x024504c0(iVar11,0);
            if (*pcVar8 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01e18880 + 0x1e18550));
              *pcVar8 = '\x01';
            }
            puVar2 = *(undefined4 **)(*piVar16 + 0x5c);
            uVar14 = *puVar2;
            uVar6 = puVar2[1];
            uVar13 = puVar2[2];
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uStack_38 = 0;
            func_0x02450c24(iVar1,uVar14,uVar6,uVar13);
            iVar1 = *(int *)(iStack_34 + 0x20);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar3 = func_0x03dcf268(iVar1,1,iVar11,**(undefined4 **)(_UNK_01e18884 + 0x1e185b4));
          }
          return uVar3;
        }
        iVar11 = func_0x0229f13c(0x1636,0);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
LAB_021d0928:
        iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,1,0);
        uStack_38 = uStack_50;
        if (*(int *)(iVar11 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar11 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar1,0);
        func_0x01485238(&uStack_38,1,0);
        iVar10 = *(int *)(iVar11 + 8);
        uVar14 = *(undefined4 *)(iVar11 + 0xc);
        iVar1 = *(int *)(iVar11 + 0x10);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uVar6 = 3;
        if (iVar1 == 0) {
          uVar6 = 2;
        }
        uStack_58 = 0;
        uStack_54 = 0;
        uVar3 = func_0x0245495c(iVar10,uVar14,&uStack_38,uVar6);
        return uVar3;
      }
      iVar11 = func_0x0229f13c(0x1635,0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar11 = func_0x0229f13c(0x1633);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
    }
  }
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&stack0xffffffb8,0,0);
  uStack_20 = uStack_38;
  if (*(int *)(iVar11 + 0x10) != 0) {
    func_0x01485278(&iStack_30,*(int *)(iVar11 + 0x10),0);
  }
  func_0x01485278(&iStack_30,iVar1,0);
  iVar10 = *(int *)(iVar11 + 8);
  uVar14 = *(undefined4 *)(iVar11 + 0xc);
  iVar1 = *(int *)(iVar11 + 0x10);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 2;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  uStack_50 = 0;
  uVar3 = func_0x0245495c(iVar10,uVar14,&iStack_30,uVar6);
  return uVar3;
}



// ===== FAT.MBItemCharge$$_RefreshEnergy RVA 0x1e02758 =====

/* WARNING: Removing unreachable block (ram,0x01e1816c) */
/* WARNING: Removing unreachable block (ram,0x01e182d0) */
/* WARNING: Removing unreachable block (ram,0x01e182d8) */
/* WARNING: Removing unreachable block (ram,0x01e183e0) */
/* WARNING: Removing unreachable block (ram,0x01e183e8) */
/* WARNING: Removing unreachable block (ram,0x01e183ec) */
/* WARNING: Removing unreachable block (ram,0x01e182e0) */
/* WARNING: Removing unreachable block (ram,0x01e182e8) */
/* WARNING: Removing unreachable block (ram,0x01e182ec) */
/* WARNING: Removing unreachable block (ram,0x01e18308) */
/* WARNING: Removing unreachable block (ram,0x01e1830c) */
/* WARNING: Removing unreachable block (ram,0x01e18324) */
/* WARNING: Removing unreachable block (ram,0x01e18328) */
/* WARNING: Removing unreachable block (ram,0x01e18340) */
/* WARNING: Removing unreachable block (ram,0x01e18344) */
/* WARNING: Removing unreachable block (ram,0x01e18364) */
/* WARNING: Removing unreachable block (ram,0x01e18378) */
/* WARNING: Removing unreachable block (ram,0x01e18398) */
/* WARNING: Removing unreachable block (ram,0x01e1839c) */
/* WARNING: Removing unreachable block (ram,0x01e18178) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e12758(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar6;
  int *piVar7;
  int extraout_r3;
  int extraout_r3_00;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  iVar1 = func_0x0229f06c(0x163f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x163f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,param_2,0);
    iVar11 = *(int *)(iVar1 + 8);
    uVar14 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    uVar3 = func_0x0245495c(iVar11,uVar14,&uStack_38,uVar6);
    return uVar3;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  *(char *)(param_1 + 0x67) = (char)param_2;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (param_2 == 0) {
    iVar11 = func_0x0229f06c(0x1642,0);
    if (iVar11 == 0) {
      iVar1 = *(int *)(iVar1 + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar11 = func_0x0229f06c(0x1643,0);
      if (iVar11 == 0) {
        pcVar8 = (char *)(_UNK_01e18a0c + 0x1e188fc);
        if (*pcVar8 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
          func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
          func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
          *pcVar8 = '\x01';
        }
        iVar11 = func_0x0229f06c(0x163d,0);
        if (iVar11 == 0) {
          iVar11 = *(int *)(iVar1 + 0x20);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = func_0x03dcf4b4(iVar11,0,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
          if (iVar11 == 0) {
            return 0;
          }
          iVar11 = *(int *)(iVar1 + 0x20);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          uVar14 = func_0x03dcf1b0(iVar11,0,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
          func_0x01e1a604(iVar1,0,uVar14);
          iVar1 = *(int *)(iVar1 + 0x20);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iStack_34 = **(int **)(_UNK_01e18a24 + 0x1e18a00);
          uStack_28 = 0;
          if (*(int *)(iVar1 + 8) != 0) {
            piVar16 = *(int **)(iVar1 + 0x20);
            iStack_30 = iVar1;
            if (piVar16 == (int *)0x0) {
              uVar3 = func_0x04821a00(&uStack_28,0);
            }
            else {
              iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
              if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                iVar1 = func_0x02457d84(iVar1);
              }
              iVar11 = *piVar16;
              uVar3 = (uint)*(ushort *)(iVar11 + 0xb6);
              if (uVar3 != 0) {
                piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
                do {
                  if (piVar7[-1] == iVar1) {
                    puVar2 = (undefined4 *)(iVar11 + *piVar7 * 8 + 200);
                    goto LAB_03dd0a60;
                  }
                  uVar3 = uVar3 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar3 != 0);
              }
              puVar2 = (undefined4 *)func_0x02457d88(piVar16,iVar1,1);
LAB_03dd0a60:
              uVar3 = (*(code *)*puVar2)(piVar16,0,puVar2[1]);
              iVar1 = iStack_30;
            }
            uVar15 = *(uint *)(iVar1 + 8);
            uVar12 = uVar15;
            if (uVar15 == 0) {
              func_0x02457d50();
              uVar12 = *(uint *)(iStack_30 + 8);
              if (uVar12 == 0) {
                uVar17 = func_0x02457d50();
                uVar14 = (undefined4)((ulonglong)uVar17 >> 0x20);
                iVar1 = (int)uVar17;
                uStack_54 = 0;
                if (*(int *)(iVar1 + 8) != 0) {
                  piVar16 = *(int **)(iVar1 + 0x20);
                  uStack_60 = uVar14;
                  uStack_5c = uVar3;
                  uStack_58 = uVar12;
                  uStack_50 = uVar15;
                  if (piVar16 == (int *)0x0) {
                    uVar3 = func_0x04821a00(&uStack_60,0);
                  }
                  else {
                    iVar11 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                    if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
                      iVar11 = func_0x02457d84(iVar11);
                    }
                    iVar10 = *piVar16;
                    uVar3 = (uint)*(ushort *)(iVar10 + 0xb6);
                    if (uVar3 != 0) {
                      piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
                      do {
                        if (piVar7[-1] == iVar11) {
                          puVar2 = (undefined4 *)(iVar10 + *piVar7 * 8 + 200);
                          goto LAB_03dd0dc4;
                        }
                        uVar3 = uVar3 - 1;
                        piVar7 = piVar7 + 2;
                      } while (uVar3 != 0);
                    }
                    puVar2 = (undefined4 *)func_0x02457d88(piVar16,iVar11,1);
LAB_03dd0dc4:
                    uVar3 = (*(code *)*puVar2)(piVar16,uVar14,puVar2[1]);
                  }
                  iVar10 = *(int *)(iVar1 + 8);
                  iVar11 = iVar10;
                  if (iVar10 == 0) {
                    func_0x02457d50();
                    iVar11 = *(int *)(iVar1 + 8);
                    if (iVar11 == 0) {
                      uVar17 = func_0x02457d50();
                      uVar3 = func_0x03dcfa64((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),
                                              *(undefined4 *)
                                               (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) +
                                               0x84));
                      if ((int)uVar3 < 0) {
                        uVar14 = 0;
                      }
                      else {
                        iVar1 = *(int *)((int)uVar17 + 0xc);
                        if (iVar1 == 0) {
                          func_0x02457d50();
                        }
                        if (*(uint *)(iVar1 + 0xc) <= uVar3) {
                          func_0x02457d5c();
                        }
                        uVar14 = *(undefined4 *)(iVar1 + uVar3 * 0x10 + 0x1c);
                      }
                      *extraout_r2_00 = uVar14;
                      return ~uVar3 >> 0x1f;
                    }
                  }
                  func_0x02457e94(uVar3 & 0x7fffffff,*(undefined4 *)(iVar10 + 0xc));
                  if (*(uint *)(iVar11 + 0xc) <= extraout_r1_00) {
                    func_0x02457d5c();
                  }
                  uVar12 = *(int *)(iVar11 + extraout_r1_00 * 4 + 0x10) - 1;
                  if (-1 < (int)uVar12) {
                    uVar15 = 0xffffffff;
                    do {
                      uVar4 = uVar12;
                      iVar11 = *(int *)(iVar1 + 0xc);
                      if (iVar11 == 0) {
                        func_0x02457d50();
                      }
                      if (*(uint *)(iVar11 + 0xc) <= uVar4) {
                        func_0x02457d5c();
                      }
                      uVar14 = uStack_60;
                      iVar11 = iVar11 + uVar4 * 0x10;
                      if (*(uint *)(iVar11 + 0x10) == (uVar3 & 0x7fffffff)) {
                        piVar16 = *(int **)(iVar1 + 0x20);
                        if (piVar16 == (int *)0x0) {
                          piVar16 = (int *)func_0x02ecb070(*(undefined4 *)
                                                            (*(int *)(*(int *)(extraout_r3 + 0x10) +
                                                                     0x60) + 0xc));
                          uVar14 = uStack_60;
                          uVar6 = *(undefined4 *)(iVar11 + 0x18);
                          if (piVar16 == (int *)0x0) {
                            func_0x02457d50(0,uVar6);
                          }
                          iVar10 = (**(code **)(*piVar16 + 0x100))
                                             (piVar16,uVar6,uVar14,*(undefined4 *)(*piVar16 + 0x104)
                                             );
                        }
                        else {
                          uVar6 = *(undefined4 *)(iVar11 + 0x18);
                          if (piVar16 == (int *)0x0) {
                            func_0x02457d50();
                          }
                          iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                          if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
                            iVar10 = func_0x02457d84(iVar10);
                          }
                          iVar5 = *piVar16;
                          uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
                          if (uVar12 != 0) {
                            piVar7 = (int *)(*(int *)(iVar5 + 0x58) + 4);
                            do {
                              if (piVar7[-1] == iVar10) {
                                puVar2 = (undefined4 *)(iVar5 + *piVar7 * 8 + 0xc0);
                                goto LAB_03dd0f6c;
                              }
                              uVar12 = uVar12 - 1;
                              piVar7 = piVar7 + 2;
                            } while (uVar12 != 0);
                          }
                          puVar2 = (undefined4 *)func_0x02457d88(piVar16,iVar10,0);
LAB_03dd0f6c:
                          iVar10 = (*(code *)*puVar2)(piVar16,uVar6,uVar14,puVar2[1]);
                        }
                        if (iVar10 != 0) {
                          if ((int)uVar15 < 0) {
                            iVar10 = *(int *)(iVar1 + 8);
                            iVar5 = *(int *)(iVar11 + 0x14);
                            if (iVar10 == 0) {
                              func_0x02457d50();
                            }
                            if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
                              func_0x02457d5c();
                            }
                            *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) = iVar5 + 1;
                          }
                          else {
                            iVar10 = *(int *)(iVar1 + 0xc);
                            if (iVar10 == 0) {
                              func_0x02457d50();
                            }
                            uVar14 = *(undefined4 *)(iVar11 + 0x14);
                            if (*(uint *)(iVar10 + 0xc) <= uVar15) {
                              func_0x02457d5c();
                            }
                            *(undefined4 *)(iVar10 + uVar15 * 0x10 + 0x14) = uVar14;
                          }
                          *extraout_r2 = *(undefined4 *)(iVar11 + 0x1c);
                          uVar14 = *(undefined4 *)(iVar1 + 0x14);
                          *(undefined4 *)(iVar11 + 0x1c) = 0;
                          iVar5 = *(int *)(iVar1 + 0x1c);
                          iVar10 = *(int *)(iVar1 + 0x18);
                          *(undefined4 *)(iVar11 + 0x14) = uVar14;
                          *(uint *)(iVar11 + 0x10) = 0xffffffff;
                          *(int *)(iVar1 + 0x1c) = iVar5 + 1;
                          *(uint *)(iVar1 + 0x14) = uVar4;
                          *(int *)(iVar1 + 0x18) = iVar10 + 1;
                          return 1;
                        }
                      }
                      uVar12 = *(uint *)(iVar11 + 0x14);
                      uVar15 = uVar4;
                    } while (*(uint *)(iVar11 + 0x14) < 0x80000000);
                  }
                }
                *extraout_r2 = 0;
                return 0;
              }
            }
            uStack_2c = uVar3 & 0x7fffffff;
            func_0x02457e94(uStack_2c,*(undefined4 *)(uVar15 + 0xc));
            if (*(uint *)(uVar12 + 0xc) <= extraout_r1) {
              func_0x02457d5c();
            }
            uVar3 = *(int *)(uVar12 + extraout_r1 * 4 + 0x10) - 1;
            if (-1 < (int)uVar3) {
              iVar1 = iStack_30;
              uVar12 = 0xffffffff;
              uStack_38 = extraout_r1;
              do {
                uVar15 = uVar3;
                iVar11 = *(int *)(iVar1 + 0xc);
                if (iVar11 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar11 + 0xc) <= uVar15) {
                  func_0x02457d5c();
                }
                uVar14 = uStack_28;
                iVar11 = iVar11 + uVar15 * 0x10;
                if (*(uint *)(iVar11 + 0x10) == uStack_2c) {
                  piVar16 = *(int **)(iVar1 + 0x20);
                  if (piVar16 == (int *)0x0) {
                    piVar16 = (int *)func_0x02ecb070(*(undefined4 *)
                                                      (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) +
                                                      0xc));
                    uVar14 = uStack_28;
                    uVar6 = *(undefined4 *)(iVar11 + 0x18);
                    if (piVar16 == (int *)0x0) {
                      func_0x02457d50(0,uVar6);
                    }
                    iVar10 = (**(code **)(*piVar16 + 0x100))
                                       (piVar16,uVar6,uVar14,*(undefined4 *)(*piVar16 + 0x104));
                  }
                  else {
                    uVar6 = *(undefined4 *)(iVar11 + 0x18);
                    if (piVar16 == (int *)0x0) {
                      func_0x02457d50();
                    }
                    iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                      iVar1 = func_0x02457d84(iVar1);
                    }
                    iVar10 = *piVar16;
                    uVar3 = (uint)*(ushort *)(iVar10 + 0xb6);
                    if (uVar3 != 0) {
                      piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
                      do {
                        if (piVar7[-1] == iVar1) {
                          puVar2 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xc0);
                          goto LAB_03dd0c0c;
                        }
                        uVar3 = uVar3 - 1;
                        piVar7 = piVar7 + 2;
                      } while (uVar3 != 0);
                    }
                    puVar2 = (undefined4 *)func_0x02457d88(piVar16,iVar1,0);
LAB_03dd0c0c:
                    iVar10 = (*(code *)*puVar2)(piVar16,uVar6,uVar14,puVar2[1]);
                  }
                  iVar1 = iStack_30;
                  if (iVar10 != 0) {
                    if ((int)uVar12 < 0) {
                      iVar1 = *(int *)(iStack_30 + 8);
                      iVar10 = *(int *)(iVar11 + 0x14);
                      if (iVar1 == 0) {
                        func_0x02457d50();
                      }
                      uVar3 = uStack_38;
                      if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                        func_0x02457d5c();
                      }
                      *(int *)(iVar1 + uVar3 * 4 + 0x10) = iVar10 + 1;
                    }
                    else {
                      iVar1 = *(int *)(iStack_30 + 0xc);
                      if (iVar1 == 0) {
                        func_0x02457d50();
                      }
                      uVar14 = *(undefined4 *)(iVar11 + 0x14);
                      if (*(uint *)(iVar1 + 0xc) <= uVar12) {
                        func_0x02457d5c();
                      }
                      *(undefined4 *)(iVar1 + uVar12 * 0x10 + 0x14) = uVar14;
                    }
                    uVar14 = *(undefined4 *)(iStack_30 + 0x14);
                    *(undefined4 *)(iVar11 + 0x1c) = 0;
                    iVar1 = *(int *)(iStack_30 + 0x18);
                    iVar10 = *(int *)(iStack_30 + 0x1c);
                    *(uint *)(iVar11 + 0x10) = 0xffffffff;
                    *(undefined4 *)(iVar11 + 0x14) = uVar14;
                    *(uint *)(iStack_30 + 0x14) = uVar15;
                    *(int *)(iStack_30 + 0x18) = iVar1 + 1;
                    *(int *)(iStack_30 + 0x1c) = iVar10 + 1;
                    return 1;
                  }
                }
                uVar3 = *(uint *)(iVar11 + 0x14);
                uVar12 = uVar15;
              } while (*(uint *)(iVar11 + 0x14) < 0x80000000);
            }
          }
          return 0;
        }
        iVar11 = func_0x0229f13c(0x163d,0);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        goto LAB_021d0928;
      }
      iVar11 = func_0x0229f13c(0x1643,0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar11 = func_0x0229f13c(0x1642);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar11 = func_0x0229f06c(0x1640,0);
    if (iVar11 == 0) {
      iVar1 = *(int *)(iVar1 + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar11 = func_0x0229f06c(0x1641,0);
      if (iVar11 == 0) {
        pcVar8 = (char *)(_UNK_01e1882c + 0x1e18078);
        if (*pcVar8 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
          func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
          func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
          func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
          func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
          func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
          *pcVar8 = '\x01';
        }
        iVar11 = func_0x0229f06c(0x1636,0);
        if (iVar11 == 0) {
          iVar11 = *(int *)(iVar1 + 0x20);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          uVar3 = func_0x03dcf4b4(iVar11,0,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
          if (uVar3 == 0) {
            iVar11 = func_0x01e1a508(iVar1,0);
            pcVar8 = (char *)(_UNK_01e1884c + 0x1e1816c);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar10 = func_0x024504c0(iVar11,0);
            uVar14 = *(undefined4 *)(iVar1 + 0x14);
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            func_0x024505b4(iVar10,uVar14,0);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iStack_34 = iVar1;
            iVar1 = func_0x024504c0(iVar11,0);
            if (*pcVar8 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01e18870 + 0x1e18454));
              *pcVar8 = '\x01';
            }
            piVar16 = *(int **)(_UNK_01e18874 + 0x1e18470);
            puVar2 = *(undefined4 **)(*piVar16 + 0x5c);
            uVar14 = puVar2[2];
            uVar6 = *puVar2;
            uVar13 = puVar2[1];
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uStack_38 = 0;
            func_0x0245068c(iVar1,uVar6,uVar13,uVar14);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x024504c0(iVar11,0);
            pcVar9 = (char *)(_UNK_01e18878 + 0x1e184c8);
            if (*pcVar9 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01e1887c + 0x1e184dc));
              *pcVar9 = '\x01';
            }
            iVar10 = *(int *)(*piVar16 + 0x5c);
            uVar14 = *(undefined4 *)(iVar10 + 0xc);
            uVar6 = *(undefined4 *)(iVar10 + 0x10);
            uVar13 = *(undefined4 *)(iVar10 + 0x14);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uStack_38 = 0;
            func_0x024503a4(iVar1,uVar14,uVar6,uVar13);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x024504c0(iVar11,0);
            if (*pcVar8 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01e18880 + 0x1e18550));
              *pcVar8 = '\x01';
            }
            puVar2 = *(undefined4 **)(*piVar16 + 0x5c);
            uVar14 = *puVar2;
            uVar6 = puVar2[1];
            uVar13 = puVar2[2];
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uStack_38 = 0;
            func_0x02450c24(iVar1,uVar14,uVar6,uVar13);
            iVar1 = *(int *)(iStack_34 + 0x20);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar3 = func_0x03dcf268(iVar1,0,iVar11,**(undefined4 **)(_UNK_01e18884 + 0x1e185b4));
          }
          return uVar3;
        }
        iVar11 = func_0x0229f13c(0x1636,0);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
LAB_021d0928:
        iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,0,0);
        uStack_38 = uStack_50;
        if (*(int *)(iVar11 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar11 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar1,0);
        func_0x01485238(&uStack_38,0,0);
        iVar10 = *(int *)(iVar11 + 8);
        uVar14 = *(undefined4 *)(iVar11 + 0xc);
        iVar1 = *(int *)(iVar11 + 0x10);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uVar6 = 3;
        if (iVar1 == 0) {
          uVar6 = 2;
        }
        uStack_58 = 0;
        uStack_54 = 0;
        uVar3 = func_0x0245495c(iVar10,uVar14,&uStack_38,uVar6);
        return uVar3;
      }
      iVar11 = func_0x0229f13c(0x1641,0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar11 = func_0x0229f13c(0x1640);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
    }
  }
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&stack0xffffffb8,0,0);
  uStack_20 = uStack_38;
  if (*(int *)(iVar11 + 0x10) != 0) {
    func_0x01485278(&iStack_30,*(int *)(iVar11 + 0x10),0);
  }
  func_0x01485278(&iStack_30,iVar1,0);
  iVar10 = *(int *)(iVar11 + 8);
  uVar14 = *(undefined4 *)(iVar11 + 0xc);
  iVar1 = *(int *)(iVar11 + 0x10);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 2;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  uStack_50 = 0;
  uVar3 = func_0x0245495c(iVar10,uVar14,&iStack_30,uVar6);
  return uVar3;
}



// ===== FAT.MBItemCharge$$_TryRefreshChest RVA 0x1e027e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e127e0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar6;
  int *piVar7;
  int extraout_r3;
  int extraout_r3_00;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 auStack_28 [2];
  undefined4 uStack_20;
  
  pcVar9 = (char *)(_UNK_01e12934 + 0x1e127f8);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e12938 + 0x1e1280c));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa06e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa06e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,param_2,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    uVar2 = func_0x0245495c(iVar10,uVar13,&uStack_38,uVar6);
    return uVar2;
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e1293c + 0x1e12868));
  iVar10 = *(int *)(param_1 + 0x40);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  iVar10 = func_0x02123568(iVar10,0);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar13 = func_0x0210e5f4(iVar10,0);
  if (param_2 == 0) {
    iVar10 = *(int *)(param_1 + 0x40);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = func_0x02123568(iVar10,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x0210e2d4(iVar10,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar9 = (char *)(_UNK_01de9ae4 + 0x1de9a40);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01de9ae8 + 0x1de9a54),uVar13,uVar6,0);
      *pcVar9 = '\x01';
    }
    iVar10 = func_0x0229f06c(0x9eed,0);
    if (iVar10 == 0) {
      iVar1 = *(int *)(iVar1 + 0x48);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x03d5a8e0(iVar1,uVar13,uVar6,0);
      return uVar2;
    }
    iVar10 = func_0x0229f13c(0x9eed,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar2 = func_0x02179a68(iVar10,iVar1,uVar13,uVar6);
    return uVar2;
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar9 = (char *)(_UNK_01de9a14 + 0x1de9984);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de9a18 + 0x1de9998),uVar13,0);
    *pcVar9 = '\x01';
  }
  iVar10 = func_0x0229f06c(0x1648,0);
  if (iVar10 != 0) {
    iVar10 = func_0x0229f13c(0x1648,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0,uVar13,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar10 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar10 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485238(&uStack_38,uVar13,0);
    iVar11 = *(int *)(iVar10 + 8);
    uVar13 = *(undefined4 *)(iVar10 + 0xc);
    iVar1 = *(int *)(iVar10 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    uVar2 = func_0x0245495c(iVar11,uVar13,&uStack_38,uVar6);
    return uVar2;
  }
  iVar1 = *(int *)(iVar1 + 0x44);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_34 = **(int **)(_UNK_01de9a1c + 0x1de9a08);
  if (*(int *)(iVar1 + 8) != 0) {
    piVar8 = *(int **)(iVar1 + 0x20);
    iStack_30 = iVar1;
    auStack_28[0] = uVar13;
    if (piVar8 == (int *)0x0) {
      uVar2 = func_0x04821a00(auStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc4));
    }
    else {
      iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x02457d84(iVar1);
      }
      iVar10 = *piVar8;
      uVar2 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar10 + *piVar7 * 8 + 200);
            goto LAB_03d5b514;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined4 *)func_0x02457d88(piVar8,iVar1,1);
LAB_03d5b514:
      uVar2 = (*(code *)*puVar3)(piVar8,uVar13,puVar3[1]);
      iVar1 = iStack_30;
    }
    uVar14 = *(uint *)(iVar1 + 8);
    uVar12 = uVar14;
    if (uVar14 == 0) {
      func_0x02457d50();
      uVar12 = *(uint *)(iStack_30 + 8);
      if (uVar12 == 0) {
        uVar15 = func_0x02457d50();
        uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
        iVar1 = (int)uVar15;
        uStack_54 = 0;
        if (*(int *)(iVar1 + 8) != 0) {
          piVar8 = *(int **)(iVar1 + 0x20);
          uStack_60 = uVar13;
          uStack_5c = uVar2;
          uStack_58 = uVar12;
          uStack_50 = uVar14;
          if (piVar8 == (int *)0x0) {
            uVar2 = func_0x04821a00(&uStack_60,
                                    *(undefined4 *)
                                     (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0xc4));
          }
          else {
            iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
              iVar10 = func_0x02457d84(iVar10);
            }
            iVar11 = *piVar8;
            uVar2 = (uint)*(ushort *)(iVar11 + 0xb6);
            if (uVar2 != 0) {
              piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar7[-1] == iVar10) {
                  puVar3 = (undefined4 *)(iVar11 + *piVar7 * 8 + 200);
                  goto LAB_03d5b878;
                }
                uVar2 = uVar2 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar8,iVar10,1);
LAB_03d5b878:
            uVar2 = (*(code *)*puVar3)(piVar8,uVar13,puVar3[1]);
          }
          iVar11 = *(int *)(iVar1 + 8);
          iVar10 = iVar11;
          if (iVar11 == 0) {
            func_0x02457d50();
            iVar10 = *(int *)(iVar1 + 8);
            if (iVar10 == 0) {
              uVar15 = func_0x02457d50();
              uVar2 = func_0x03d5a510((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) + 0x84));
              if ((int)uVar2 < 0) {
                uVar13 = 0;
              }
              else {
                iVar1 = *(int *)((int)uVar15 + 0xc);
                if (iVar1 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                  func_0x02457d5c();
                }
                uVar13 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
              }
              *extraout_r2_00 = uVar13;
              return ~uVar2 >> 0x1f;
            }
          }
          func_0x02457e94(uVar2 & 0x7fffffff,*(undefined4 *)(iVar11 + 0xc));
          if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
            func_0x02457d5c();
          }
          uVar12 = *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) - 1;
          if (-1 < (int)uVar12) {
            uVar14 = 0xffffffff;
            do {
              uVar4 = uVar12;
              iVar10 = *(int *)(iVar1 + 0xc);
              if (iVar10 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar10 + 0xc) <= uVar4) {
                func_0x02457d5c();
              }
              uVar13 = uStack_60;
              iVar10 = iVar10 + uVar4 * 0x10;
              if (*(uint *)(iVar10 + 0x10) == (uVar2 & 0x7fffffff)) {
                piVar8 = *(int **)(iVar1 + 0x20);
                if (piVar8 == (int *)0x0) {
                  piVar8 = (int *)func_0x02ecaf98(*(undefined4 *)
                                                   (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) +
                                                   0xc));
                  uVar13 = uStack_60;
                  uVar6 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar8 == (int *)0x0) {
                    func_0x02457d50(0,uVar6);
                  }
                  iVar11 = (**(code **)(*piVar8 + 0x100))
                                     (piVar8,uVar6,uVar13,*(undefined4 *)(*piVar8 + 0x104));
                }
                else {
                  uVar6 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar8 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar11 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
                    iVar11 = func_0x02457d84(iVar11);
                  }
                  iVar5 = *piVar8;
                  uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
                  if (uVar12 != 0) {
                    piVar7 = (int *)(*(int *)(iVar5 + 0x58) + 4);
                    do {
                      if (piVar7[-1] == iVar11) {
                        puVar3 = (undefined4 *)(iVar5 + *piVar7 * 8 + 0xc0);
                        goto LAB_03d5ba20;
                      }
                      uVar12 = uVar12 - 1;
                      piVar7 = piVar7 + 2;
                    } while (uVar12 != 0);
                  }
                  puVar3 = (undefined4 *)func_0x02457d88(piVar8,iVar11,0);
LAB_03d5ba20:
                  iVar11 = (*(code *)*puVar3)(piVar8,uVar6,uVar13,puVar3[1]);
                }
                if (iVar11 != 0) {
                  if ((int)uVar14 < 0) {
                    iVar11 = *(int *)(iVar1 + 8);
                    iVar5 = *(int *)(iVar10 + 0x14);
                    if (iVar11 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar11 + 0xc) <= extraout_r1_00) {
                      func_0x02457d5c();
                    }
                    *(int *)(iVar11 + extraout_r1_00 * 4 + 0x10) = iVar5 + 1;
                  }
                  else {
                    iVar11 = *(int *)(iVar1 + 0xc);
                    if (iVar11 == 0) {
                      func_0x02457d50();
                    }
                    uVar13 = *(undefined4 *)(iVar10 + 0x14);
                    if (*(uint *)(iVar11 + 0xc) <= uVar14) {
                      func_0x02457d5c();
                    }
                    *(undefined4 *)(iVar11 + uVar14 * 0x10 + 0x14) = uVar13;
                  }
                  *extraout_r2 = *(undefined4 *)(iVar10 + 0x1c);
                  uVar13 = *(undefined4 *)(iVar1 + 0x14);
                  iVar11 = *(int *)(iVar1 + 0x18);
                  iVar5 = *(int *)(iVar1 + 0x1c);
                  *(uint *)(iVar10 + 0x10) = 0xffffffff;
                  *(int *)(iVar1 + 0x18) = iVar11 + 1;
                  *(int *)(iVar1 + 0x1c) = iVar5 + 1;
                  *(uint *)(iVar1 + 0x14) = uVar4;
                  *(undefined4 *)(iVar10 + 0x14) = uVar13;
                  return 1;
                }
              }
              uVar12 = *(uint *)(iVar10 + 0x14);
              uVar14 = uVar4;
            } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
          }
        }
        *extraout_r2 = 0;
        return 0;
      }
    }
    uStack_2c = uVar2 & 0x7fffffff;
    func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
    if (*(uint *)(uVar12 + 0xc) <= extraout_r1) {
      func_0x02457d5c();
    }
    uVar2 = *(int *)(uVar12 + extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar2) {
      iVar1 = iStack_30;
      uVar12 = 0xffffffff;
      uStack_38 = extraout_r1;
      do {
        uVar14 = uVar2;
        iVar10 = *(int *)(iVar1 + 0xc);
        if (iVar10 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar14) {
          func_0x02457d5c();
        }
        uVar13 = auStack_28[0];
        iVar10 = iVar10 + uVar14 * 0x10;
        if (*(uint *)(iVar10 + 0x10) == uStack_2c) {
          piVar8 = *(int **)(iVar1 + 0x20);
          if (piVar8 == (int *)0x0) {
            piVar8 = (int *)func_0x02ecaf98(*(undefined4 *)
                                             (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc));
            uVar13 = auStack_28[0];
            uVar6 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar8 == (int *)0x0) {
              func_0x02457d50(0,uVar6);
            }
            iVar11 = (**(code **)(*piVar8 + 0x100))
                               (piVar8,uVar6,uVar13,*(undefined4 *)(*piVar8 + 0x104));
          }
          else {
            uVar6 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar8 == (int *)0x0) {
              func_0x02457d50();
            }
            iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x02457d84(iVar1);
            }
            iVar11 = *piVar8;
            uVar2 = (uint)*(ushort *)(iVar11 + 0xb6);
            if (uVar2 != 0) {
              piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar7[-1] == iVar1) {
                  puVar3 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
                  goto LAB_03d5b6c0;
                }
                uVar2 = uVar2 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar8,iVar1,0);
LAB_03d5b6c0:
            iVar11 = (*(code *)*puVar3)(piVar8,uVar6,uVar13,puVar3[1]);
          }
          iVar1 = iStack_30;
          if (iVar11 != 0) {
            if ((int)uVar12 < 0) {
              iVar1 = *(int *)(iStack_30 + 8);
              iVar11 = *(int *)(iVar10 + 0x14);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar2 = uStack_38;
              if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                func_0x02457d5c();
              }
              *(int *)(iVar1 + uVar2 * 4 + 0x10) = iVar11 + 1;
            }
            else {
              iVar1 = *(int *)(iStack_30 + 0xc);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar13 = *(undefined4 *)(iVar10 + 0x14);
              if (*(uint *)(iVar1 + 0xc) <= uVar12) {
                func_0x02457d5c();
              }
              *(undefined4 *)(iVar1 + uVar12 * 0x10 + 0x14) = uVar13;
            }
            *(uint *)(iVar10 + 0x10) = 0xffffffff;
            uVar13 = *(undefined4 *)(iStack_30 + 0x14);
            *(int *)(iStack_30 + 0x18) = *(int *)(iStack_30 + 0x18) + 1;
            *(uint *)(iStack_30 + 0x14) = uVar14;
            *(int *)(iStack_30 + 0x1c) = *(int *)(iStack_30 + 0x1c) + 1;
            *(undefined4 *)(iVar10 + 0x14) = uVar13;
            return 1;
          }
        }
        uVar2 = *(uint *)(iVar10 + 0x14);
        uVar12 = uVar14;
      } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
    }
  }
  return 0;
}



// ===== FAT.MBItemCharge$$_TryRefreshTapSource RVA 0x1e02940 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e12940(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar6;
  int *piVar7;
  int extraout_r3;
  int extraout_r3_00;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 auStack_28 [2];
  undefined4 uStack_20;
  
  pcVar9 = (char *)(_UNK_01e12a94 + 0x1e12958);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e12a98 + 0x1e1296c));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa070,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa070,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,param_2,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    uVar2 = func_0x0245495c(iVar10,uVar13,&uStack_38,uVar6);
    return uVar2;
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e12a9c + 0x1e129c8));
  iVar10 = *(int *)(param_1 + 0x34);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  iVar10 = func_0x02123568(iVar10,0);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar13 = func_0x0210e5f4(iVar10,0);
  if (param_2 == 0) {
    iVar10 = *(int *)(param_1 + 0x34);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = func_0x02123568(iVar10,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x0210e2d4(iVar10,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar9 = (char *)(_UNK_01de9dec + 0x1de9d48);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01de9df0 + 0x1de9d5c),uVar13,uVar6,0);
      *pcVar9 = '\x01';
    }
    iVar10 = func_0x0229f06c(0x9ef1,0);
    if (iVar10 == 0) {
      iVar1 = *(int *)(iVar1 + 0x50);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x03d5a8e0(iVar1,uVar13,uVar6,0);
      return uVar2;
    }
    iVar10 = func_0x0229f13c(0x9ef1,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar2 = func_0x02179a68(iVar10,iVar1,uVar13,uVar6);
    return uVar2;
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar9 = (char *)(_UNK_01de9ea0 + 0x1de9e10);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de9ea4 + 0x1de9e24),uVar13,0);
    *pcVar9 = '\x01';
  }
  iVar10 = func_0x0229f06c(0x9ef2,0);
  if (iVar10 != 0) {
    iVar10 = func_0x0229f13c(0x9ef2,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0,uVar13,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar10 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar10 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485238(&uStack_38,uVar13,0);
    iVar11 = *(int *)(iVar10 + 8);
    uVar13 = *(undefined4 *)(iVar10 + 0xc);
    iVar1 = *(int *)(iVar10 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    uVar2 = func_0x0245495c(iVar11,uVar13,&uStack_38,uVar6);
    return uVar2;
  }
  iVar1 = *(int *)(iVar1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_34 = **(int **)(_UNK_01de9ea8 + 0x1de9e94);
  if (*(int *)(iVar1 + 8) != 0) {
    piVar8 = *(int **)(iVar1 + 0x20);
    iStack_30 = iVar1;
    auStack_28[0] = uVar13;
    if (piVar8 == (int *)0x0) {
      uVar2 = func_0x04821a00(auStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc4));
    }
    else {
      iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x02457d84(iVar1);
      }
      iVar10 = *piVar8;
      uVar2 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar10 + *piVar7 * 8 + 200);
            goto LAB_03d5b514;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined4 *)func_0x02457d88(piVar8,iVar1,1);
LAB_03d5b514:
      uVar2 = (*(code *)*puVar3)(piVar8,uVar13,puVar3[1]);
      iVar1 = iStack_30;
    }
    uVar14 = *(uint *)(iVar1 + 8);
    uVar12 = uVar14;
    if (uVar14 == 0) {
      func_0x02457d50();
      uVar12 = *(uint *)(iStack_30 + 8);
      if (uVar12 == 0) {
        uVar15 = func_0x02457d50();
        uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
        iVar1 = (int)uVar15;
        uStack_54 = 0;
        if (*(int *)(iVar1 + 8) != 0) {
          piVar8 = *(int **)(iVar1 + 0x20);
          uStack_60 = uVar13;
          uStack_5c = uVar2;
          uStack_58 = uVar12;
          uStack_50 = uVar14;
          if (piVar8 == (int *)0x0) {
            uVar2 = func_0x04821a00(&uStack_60,
                                    *(undefined4 *)
                                     (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0xc4));
          }
          else {
            iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
              iVar10 = func_0x02457d84(iVar10);
            }
            iVar11 = *piVar8;
            uVar2 = (uint)*(ushort *)(iVar11 + 0xb6);
            if (uVar2 != 0) {
              piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar7[-1] == iVar10) {
                  puVar3 = (undefined4 *)(iVar11 + *piVar7 * 8 + 200);
                  goto LAB_03d5b878;
                }
                uVar2 = uVar2 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar8,iVar10,1);
LAB_03d5b878:
            uVar2 = (*(code *)*puVar3)(piVar8,uVar13,puVar3[1]);
          }
          iVar11 = *(int *)(iVar1 + 8);
          iVar10 = iVar11;
          if (iVar11 == 0) {
            func_0x02457d50();
            iVar10 = *(int *)(iVar1 + 8);
            if (iVar10 == 0) {
              uVar15 = func_0x02457d50();
              uVar2 = func_0x03d5a510((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) + 0x84));
              if ((int)uVar2 < 0) {
                uVar13 = 0;
              }
              else {
                iVar1 = *(int *)((int)uVar15 + 0xc);
                if (iVar1 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                  func_0x02457d5c();
                }
                uVar13 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
              }
              *extraout_r2_00 = uVar13;
              return ~uVar2 >> 0x1f;
            }
          }
          func_0x02457e94(uVar2 & 0x7fffffff,*(undefined4 *)(iVar11 + 0xc));
          if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
            func_0x02457d5c();
          }
          uVar12 = *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) - 1;
          if (-1 < (int)uVar12) {
            uVar14 = 0xffffffff;
            do {
              uVar4 = uVar12;
              iVar10 = *(int *)(iVar1 + 0xc);
              if (iVar10 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar10 + 0xc) <= uVar4) {
                func_0x02457d5c();
              }
              uVar13 = uStack_60;
              iVar10 = iVar10 + uVar4 * 0x10;
              if (*(uint *)(iVar10 + 0x10) == (uVar2 & 0x7fffffff)) {
                piVar8 = *(int **)(iVar1 + 0x20);
                if (piVar8 == (int *)0x0) {
                  piVar8 = (int *)func_0x02ecaf98(*(undefined4 *)
                                                   (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) +
                                                   0xc));
                  uVar13 = uStack_60;
                  uVar6 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar8 == (int *)0x0) {
                    func_0x02457d50(0,uVar6);
                  }
                  iVar11 = (**(code **)(*piVar8 + 0x100))
                                     (piVar8,uVar6,uVar13,*(undefined4 *)(*piVar8 + 0x104));
                }
                else {
                  uVar6 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar8 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar11 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
                    iVar11 = func_0x02457d84(iVar11);
                  }
                  iVar5 = *piVar8;
                  uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
                  if (uVar12 != 0) {
                    piVar7 = (int *)(*(int *)(iVar5 + 0x58) + 4);
                    do {
                      if (piVar7[-1] == iVar11) {
                        puVar3 = (undefined4 *)(iVar5 + *piVar7 * 8 + 0xc0);
                        goto LAB_03d5ba20;
                      }
                      uVar12 = uVar12 - 1;
                      piVar7 = piVar7 + 2;
                    } while (uVar12 != 0);
                  }
                  puVar3 = (undefined4 *)func_0x02457d88(piVar8,iVar11,0);
LAB_03d5ba20:
                  iVar11 = (*(code *)*puVar3)(piVar8,uVar6,uVar13,puVar3[1]);
                }
                if (iVar11 != 0) {
                  if ((int)uVar14 < 0) {
                    iVar11 = *(int *)(iVar1 + 8);
                    iVar5 = *(int *)(iVar10 + 0x14);
                    if (iVar11 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar11 + 0xc) <= extraout_r1_00) {
                      func_0x02457d5c();
                    }
                    *(int *)(iVar11 + extraout_r1_00 * 4 + 0x10) = iVar5 + 1;
                  }
                  else {
                    iVar11 = *(int *)(iVar1 + 0xc);
                    if (iVar11 == 0) {
                      func_0x02457d50();
                    }
                    uVar13 = *(undefined4 *)(iVar10 + 0x14);
                    if (*(uint *)(iVar11 + 0xc) <= uVar14) {
                      func_0x02457d5c();
                    }
                    *(undefined4 *)(iVar11 + uVar14 * 0x10 + 0x14) = uVar13;
                  }
                  *extraout_r2 = *(undefined4 *)(iVar10 + 0x1c);
                  uVar13 = *(undefined4 *)(iVar1 + 0x14);
                  iVar11 = *(int *)(iVar1 + 0x18);
                  iVar5 = *(int *)(iVar1 + 0x1c);
                  *(uint *)(iVar10 + 0x10) = 0xffffffff;
                  *(int *)(iVar1 + 0x18) = iVar11 + 1;
                  *(int *)(iVar1 + 0x1c) = iVar5 + 1;
                  *(uint *)(iVar1 + 0x14) = uVar4;
                  *(undefined4 *)(iVar10 + 0x14) = uVar13;
                  return 1;
                }
              }
              uVar12 = *(uint *)(iVar10 + 0x14);
              uVar14 = uVar4;
            } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
          }
        }
        *extraout_r2 = 0;
        return 0;
      }
    }
    uStack_2c = uVar2 & 0x7fffffff;
    func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
    if (*(uint *)(uVar12 + 0xc) <= extraout_r1) {
      func_0x02457d5c();
    }
    uVar2 = *(int *)(uVar12 + extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar2) {
      iVar1 = iStack_30;
      uVar12 = 0xffffffff;
      uStack_38 = extraout_r1;
      do {
        uVar14 = uVar2;
        iVar10 = *(int *)(iVar1 + 0xc);
        if (iVar10 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar14) {
          func_0x02457d5c();
        }
        uVar13 = auStack_28[0];
        iVar10 = iVar10 + uVar14 * 0x10;
        if (*(uint *)(iVar10 + 0x10) == uStack_2c) {
          piVar8 = *(int **)(iVar1 + 0x20);
          if (piVar8 == (int *)0x0) {
            piVar8 = (int *)func_0x02ecaf98(*(undefined4 *)
                                             (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc));
            uVar13 = auStack_28[0];
            uVar6 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar8 == (int *)0x0) {
              func_0x02457d50(0,uVar6);
            }
            iVar11 = (**(code **)(*piVar8 + 0x100))
                               (piVar8,uVar6,uVar13,*(undefined4 *)(*piVar8 + 0x104));
          }
          else {
            uVar6 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar8 == (int *)0x0) {
              func_0x02457d50();
            }
            iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x02457d84(iVar1);
            }
            iVar11 = *piVar8;
            uVar2 = (uint)*(ushort *)(iVar11 + 0xb6);
            if (uVar2 != 0) {
              piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar7[-1] == iVar1) {
                  puVar3 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
                  goto LAB_03d5b6c0;
                }
                uVar2 = uVar2 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar8,iVar1,0);
LAB_03d5b6c0:
            iVar11 = (*(code *)*puVar3)(piVar8,uVar6,uVar13,puVar3[1]);
          }
          iVar1 = iStack_30;
          if (iVar11 != 0) {
            if ((int)uVar12 < 0) {
              iVar1 = *(int *)(iStack_30 + 8);
              iVar11 = *(int *)(iVar10 + 0x14);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar2 = uStack_38;
              if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                func_0x02457d5c();
              }
              *(int *)(iVar1 + uVar2 * 4 + 0x10) = iVar11 + 1;
            }
            else {
              iVar1 = *(int *)(iStack_30 + 0xc);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar13 = *(undefined4 *)(iVar10 + 0x14);
              if (*(uint *)(iVar1 + 0xc) <= uVar12) {
                func_0x02457d5c();
              }
              *(undefined4 *)(iVar1 + uVar12 * 0x10 + 0x14) = uVar13;
            }
            *(uint *)(iVar10 + 0x10) = 0xffffffff;
            uVar13 = *(undefined4 *)(iStack_30 + 0x14);
            *(int *)(iStack_30 + 0x18) = *(int *)(iStack_30 + 0x18) + 1;
            *(uint *)(iStack_30 + 0x14) = uVar14;
            *(int *)(iStack_30 + 0x1c) = *(int *)(iStack_30 + 0x1c) + 1;
            *(undefined4 *)(iVar10 + 0x14) = uVar13;
            return 1;
          }
        }
        uVar2 = *(uint *)(iVar10 + 0x14);
        uVar12 = uVar14;
      } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
    }
  }
  return 0;
}



// ===== FAT.MBItemCharge$$_TryShowNextTapCost RVA 0x1e02aa0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e12aa0(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  float fVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  float fStack_2c;
  
  pcVar6 = (char *)(_UNK_01e12dec + 0x1e12abc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e12df0 + 0x1e12ad0));
    func_0x01384978(*(undefined4 *)(_UNK_01e12df4 + 0x1e12adc));
    func_0x01384978(*(undefined4 *)(_UNK_01e12df8 + 0x1e12ae8));
    func_0x01384978(*(undefined4 *)(_UNK_01e12dfc + 0x1e12af4));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa071,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa071,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    fStack_2c = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    fStack_2c = (float)uStack_44;
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
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar1 = func_0x02123058(*(int *)(param_1 + 0x34),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) < 2) {
      return;
    }
  }
  fVar11 = *(float *)(param_1 + 0x70);
  fVar2 = (float)func_0x024503b4(0);
  fVar11 = fVar11 - fVar2;
  *(float *)(param_1 + 0x70) = fVar11;
  if (fVar11 < 0.0) {
    iVar1 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x6c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02123058(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (1 < iVar1) {
      iVar7 = 0;
      puVar10 = *(undefined4 **)(_UNK_01e12e00 + 0x1e12c14);
      while( true ) {
        iVar9 = *(int *)(param_1 + 0x10);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x02450148(iVar9,0);
        iVar9 = 0;
        if (iVar3 <= iVar7) break;
        iVar9 = *(int *)(param_1 + 0x10);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        iVar9 = func_0x02450158(iVar9,iVar7,0);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        piVar4 = (int *)func_0x02f67194(iVar9,*puVar10);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        (**(code **)(*piVar4 + 0x170))(auStack_38,piVar4,*(undefined4 *)(*piVar4 + 0x174));
        iVar9 = iVar7;
        if (0.5 < fStack_2c) break;
        iVar7 = iVar7 + 1;
      }
      func_0x01458344(iVar9 + 1,iVar1);
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02450158(iVar1,iVar9,0);
      iVar7 = *(int *)(param_1 + 0x10);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x02450158(iVar7,extraout_r1,0);
      if (*(int *)(**(int **)(_UNK_01e12e04 + 0x1e12d1c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar8 = func_0x02ce71fc(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x02f67194(iVar1,*puVar10);
      uVar5 = func_0x019884a4(uVar5,0,0x3f000000,0);
      uVar5 = func_0x02cfd4d4(uVar5,0x3f800000,1,0);
      func_0x02cf668c(uVar8,uVar5,0);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x02f67194(iVar7,*puVar10);
      uVar5 = func_0x019884a4(uVar5,0x3f800000,0x3f000000,0);
      uVar5 = func_0x02cfd4d4(uVar5,0,1,0);
      func_0x02cf66d8(uVar8,uVar5,0);
      func_0x03074b50(uVar8,**(undefined4 **)(_UNK_01e12e08 + 0x1e12dd4));
      *(undefined4 *)(param_1 + 0x7c) = uVar8;
    }
  }
  return;
}



// ===== FAT.MBItemCharge$$_RefreshTapCost RVA 0x1e02e0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e12e0c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
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
  
  pcVar9 = (char *)(_UNK_01e1318c + 0x1e12e28);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e13190 + 0x1e12e3c));
    func_0x01384978(*(undefined4 *)(_UNK_01e13194 + 0x1e12e48));
    func_0x01384978(*(undefined4 *)(_UNK_01e13198 + 0x1e12e54));
    func_0x01384978(*(undefined4 *)(_UNK_01e1319c + 0x1e12e60));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa072,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa072,0);
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
    iVar11 = *(int *)(iVar1 + 8);
    uVar12 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar1 == 0) {
      uVar8 = 2;
    }
    func_0x0245495c(iVar11,uVar12,&uStack_38,uVar8,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(char *)(param_1 + 0x69) = (char)param_2;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,param_2,0);
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar11 = 0;
    iVar1 = func_0x02123058(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    piVar13 = *(int **)(_UNK_01e131a0 + 0x1e12f3c);
    while( true ) {
      iVar10 = *(int *)(param_1 + 0x10);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      iVar10 = func_0x02450148(iVar10,0);
      if (iVar10 <= iVar11) break;
      iVar10 = *(int *)(param_1 + 0x10);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      iVar10 = func_0x02450158(iVar10,iVar11,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (iVar11 < *(int *)(iVar1 + 0xc)) {
        piVar2 = (int *)func_0x021566f4(0);
        uVar12 = func_0x0364c9b8(iVar1,iVar11,**(undefined4 **)(_UNK_01e131a4 + 0x1e12fb4));
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar2;
        iVar5 = *piVar13;
        uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar7[-1] == iVar5) {
              puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0x1e0);
              goto LAB_01e1302c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar5,0x24);
LAB_01e1302c:
        iVar3 = (*(code *)*puVar4)(piVar2,uVar12,puVar4[1]);
        uVar12 = 0;
        piVar2 = (int *)func_0x021566f4(0);
        if (iVar3 != 0) {
          uVar12 = *(undefined4 *)(iVar3 + 0x14);
        }
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar2;
        iVar5 = *piVar13;
        uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar7[-1] == iVar5) {
              puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0x100);
              goto LAB_01e130b8;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar5,8);
LAB_01e130b8:
        iVar3 = (*(code *)*puVar4)(piVar2,uVar12,puVar4[1]);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        if (iVar3 == 0) goto LAB_01e13150;
        iVar5 = func_0x02f67194(iVar10,**(undefined4 **)(_UNK_01e131a8 + 0x1e130f0));
        uVar12 = *(undefined4 *)(iVar3 + 0x20);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x0267cc24(iVar5,uVar12,0);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x0244ffd4(iVar10,0);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uVar12 = 1;
      }
      else {
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
LAB_01e13150:
        iVar10 = func_0x0244ffd4(iVar10,0);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uVar12 = 0;
      }
      func_0x0244ffe4(iVar10,uVar12,0);
      iVar11 = iVar11 + 1;
    }
  }
  return;
}



// ===== FAT.MBItemCharge$$_RefreshBoostEnergy RVA 0x1e031ac =====

/* WARNING: Removing unreachable block (ram,0x01e1816c) */
/* WARNING: Removing unreachable block (ram,0x01e182d8) */
/* WARNING: Removing unreachable block (ram,0x01e183e0) */
/* WARNING: Removing unreachable block (ram,0x01e183e8) */
/* WARNING: Removing unreachable block (ram,0x01e183ec) */
/* WARNING: Removing unreachable block (ram,0x01e182e0) */
/* WARNING: Removing unreachable block (ram,0x01e182e8) */
/* WARNING: Removing unreachable block (ram,0x01e182ec) */
/* WARNING: Removing unreachable block (ram,0x01e18308) */
/* WARNING: Removing unreachable block (ram,0x01e1830c) */
/* WARNING: Removing unreachable block (ram,0x01e18324) */
/* WARNING: Removing unreachable block (ram,0x01e18328) */
/* WARNING: Removing unreachable block (ram,0x01e18340) */
/* WARNING: Removing unreachable block (ram,0x01e18344) */
/* WARNING: Removing unreachable block (ram,0x01e18364) */
/* WARNING: Removing unreachable block (ram,0x01e18378) */
/* WARNING: Removing unreachable block (ram,0x01e18398) */
/* WARNING: Removing unreachable block (ram,0x01e1839c) */
/* WARNING: Removing unreachable block (ram,0x01e18178) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e131ac(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar6;
  int *piVar7;
  int extraout_r3;
  int extraout_r3_00;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  iVar1 = func_0x0229f06c(0xa073,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa073,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,param_2,0);
    iVar11 = *(int *)(iVar1 + 8);
    uVar14 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    uVar3 = func_0x0245495c(iVar11,uVar14,&uStack_38,uVar6);
    return uVar3;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  *(char *)(param_1 + 0x68) = (char)param_2;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (param_2 == 0) {
    iVar11 = func_0x0229f06c(0xa076,0);
    if (iVar11 == 0) {
      iVar1 = *(int *)(iVar1 + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar11 = func_0x0229f06c(0xa077,0);
      if (iVar11 == 0) {
        pcVar8 = (char *)(_UNK_01e18a0c + 0x1e188fc);
        if (*pcVar8 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
          func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
          func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
          *pcVar8 = '\x01';
        }
        iVar11 = func_0x0229f06c(0x163d,0);
        if (iVar11 == 0) {
          iVar11 = *(int *)(iVar1 + 0x20);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = func_0x03dcf4b4(iVar11,0xb,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
          if (iVar11 == 0) {
            return 0;
          }
          iVar11 = *(int *)(iVar1 + 0x20);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          uVar14 = func_0x03dcf1b0(iVar11,0xb,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
          func_0x01e1a604(iVar1,0xb,uVar14);
          iVar1 = *(int *)(iVar1 + 0x20);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iStack_34 = **(int **)(_UNK_01e18a24 + 0x1e18a00);
          uStack_28 = 0xb;
          if (*(int *)(iVar1 + 8) != 0) {
            piVar16 = *(int **)(iVar1 + 0x20);
            iStack_30 = iVar1;
            if (piVar16 == (int *)0x0) {
              uVar3 = func_0x04821a00(&uStack_28,0);
            }
            else {
              iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
              if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                iVar1 = func_0x02457d84(iVar1);
              }
              iVar11 = *piVar16;
              uVar3 = (uint)*(ushort *)(iVar11 + 0xb6);
              if (uVar3 != 0) {
                piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
                do {
                  if (piVar7[-1] == iVar1) {
                    puVar2 = (undefined4 *)(iVar11 + *piVar7 * 8 + 200);
                    goto LAB_03dd0a60;
                  }
                  uVar3 = uVar3 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar3 != 0);
              }
              puVar2 = (undefined4 *)func_0x02457d88(piVar16,iVar1,1);
LAB_03dd0a60:
              uVar3 = (*(code *)*puVar2)(piVar16,0xb,puVar2[1]);
              iVar1 = iStack_30;
            }
            uVar15 = *(uint *)(iVar1 + 8);
            uVar12 = uVar15;
            if (uVar15 == 0) {
              func_0x02457d50();
              uVar12 = *(uint *)(iStack_30 + 8);
              if (uVar12 == 0) {
                uVar17 = func_0x02457d50();
                uVar14 = (undefined4)((ulonglong)uVar17 >> 0x20);
                iVar1 = (int)uVar17;
                uStack_54 = 0;
                if (*(int *)(iVar1 + 8) != 0) {
                  piVar16 = *(int **)(iVar1 + 0x20);
                  uStack_60 = uVar14;
                  uStack_5c = uVar3;
                  uStack_58 = uVar12;
                  uStack_50 = uVar15;
                  if (piVar16 == (int *)0x0) {
                    uVar3 = func_0x04821a00(&uStack_60,0);
                  }
                  else {
                    iVar11 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                    if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
                      iVar11 = func_0x02457d84(iVar11);
                    }
                    iVar10 = *piVar16;
                    uVar3 = (uint)*(ushort *)(iVar10 + 0xb6);
                    if (uVar3 != 0) {
                      piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
                      do {
                        if (piVar7[-1] == iVar11) {
                          puVar2 = (undefined4 *)(iVar10 + *piVar7 * 8 + 200);
                          goto LAB_03dd0dc4;
                        }
                        uVar3 = uVar3 - 1;
                        piVar7 = piVar7 + 2;
                      } while (uVar3 != 0);
                    }
                    puVar2 = (undefined4 *)func_0x02457d88(piVar16,iVar11,1);
LAB_03dd0dc4:
                    uVar3 = (*(code *)*puVar2)(piVar16,uVar14,puVar2[1]);
                  }
                  iVar10 = *(int *)(iVar1 + 8);
                  iVar11 = iVar10;
                  if (iVar10 == 0) {
                    func_0x02457d50();
                    iVar11 = *(int *)(iVar1 + 8);
                    if (iVar11 == 0) {
                      uVar17 = func_0x02457d50();
                      uVar3 = func_0x03dcfa64((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),
                                              *(undefined4 *)
                                               (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) +
                                               0x84));
                      if ((int)uVar3 < 0) {
                        uVar14 = 0;
                      }
                      else {
                        iVar1 = *(int *)((int)uVar17 + 0xc);
                        if (iVar1 == 0) {
                          func_0x02457d50();
                        }
                        if (*(uint *)(iVar1 + 0xc) <= uVar3) {
                          func_0x02457d5c();
                        }
                        uVar14 = *(undefined4 *)(iVar1 + uVar3 * 0x10 + 0x1c);
                      }
                      *extraout_r2_00 = uVar14;
                      return ~uVar3 >> 0x1f;
                    }
                  }
                  func_0x02457e94(uVar3 & 0x7fffffff,*(undefined4 *)(iVar10 + 0xc));
                  if (*(uint *)(iVar11 + 0xc) <= extraout_r1_00) {
                    func_0x02457d5c();
                  }
                  uVar12 = *(int *)(iVar11 + extraout_r1_00 * 4 + 0x10) - 1;
                  if (-1 < (int)uVar12) {
                    uVar15 = 0xffffffff;
                    do {
                      uVar4 = uVar12;
                      iVar11 = *(int *)(iVar1 + 0xc);
                      if (iVar11 == 0) {
                        func_0x02457d50();
                      }
                      if (*(uint *)(iVar11 + 0xc) <= uVar4) {
                        func_0x02457d5c();
                      }
                      uVar14 = uStack_60;
                      iVar11 = iVar11 + uVar4 * 0x10;
                      if (*(uint *)(iVar11 + 0x10) == (uVar3 & 0x7fffffff)) {
                        piVar16 = *(int **)(iVar1 + 0x20);
                        if (piVar16 == (int *)0x0) {
                          piVar16 = (int *)func_0x02ecb070(*(undefined4 *)
                                                            (*(int *)(*(int *)(extraout_r3 + 0x10) +
                                                                     0x60) + 0xc));
                          uVar14 = uStack_60;
                          uVar6 = *(undefined4 *)(iVar11 + 0x18);
                          if (piVar16 == (int *)0x0) {
                            func_0x02457d50(0,uVar6);
                          }
                          iVar10 = (**(code **)(*piVar16 + 0x100))
                                             (piVar16,uVar6,uVar14,*(undefined4 *)(*piVar16 + 0x104)
                                             );
                        }
                        else {
                          uVar6 = *(undefined4 *)(iVar11 + 0x18);
                          if (piVar16 == (int *)0x0) {
                            func_0x02457d50();
                          }
                          iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                          if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
                            iVar10 = func_0x02457d84(iVar10);
                          }
                          iVar5 = *piVar16;
                          uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
                          if (uVar12 != 0) {
                            piVar7 = (int *)(*(int *)(iVar5 + 0x58) + 4);
                            do {
                              if (piVar7[-1] == iVar10) {
                                puVar2 = (undefined4 *)(iVar5 + *piVar7 * 8 + 0xc0);
                                goto LAB_03dd0f6c;
                              }
                              uVar12 = uVar12 - 1;
                              piVar7 = piVar7 + 2;
                            } while (uVar12 != 0);
                          }
                          puVar2 = (undefined4 *)func_0x02457d88(piVar16,iVar10,0);
LAB_03dd0f6c:
                          iVar10 = (*(code *)*puVar2)(piVar16,uVar6,uVar14,puVar2[1]);
                        }
                        if (iVar10 != 0) {
                          if ((int)uVar15 < 0) {
                            iVar10 = *(int *)(iVar1 + 8);
                            iVar5 = *(int *)(iVar11 + 0x14);
                            if (iVar10 == 0) {
                              func_0x02457d50();
                            }
                            if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
                              func_0x02457d5c();
                            }
                            *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) = iVar5 + 1;
                          }
                          else {
                            iVar10 = *(int *)(iVar1 + 0xc);
                            if (iVar10 == 0) {
                              func_0x02457d50();
                            }
                            uVar14 = *(undefined4 *)(iVar11 + 0x14);
                            if (*(uint *)(iVar10 + 0xc) <= uVar15) {
                              func_0x02457d5c();
                            }
                            *(undefined4 *)(iVar10 + uVar15 * 0x10 + 0x14) = uVar14;
                          }
                          *extraout_r2 = *(undefined4 *)(iVar11 + 0x1c);
                          uVar14 = *(undefined4 *)(iVar1 + 0x14);
                          *(undefined4 *)(iVar11 + 0x1c) = 0;
                          iVar5 = *(int *)(iVar1 + 0x1c);
                          iVar10 = *(int *)(iVar1 + 0x18);
                          *(undefined4 *)(iVar11 + 0x14) = uVar14;
                          *(uint *)(iVar11 + 0x10) = 0xffffffff;
                          *(int *)(iVar1 + 0x1c) = iVar5 + 1;
                          *(uint *)(iVar1 + 0x14) = uVar4;
                          *(int *)(iVar1 + 0x18) = iVar10 + 1;
                          return 1;
                        }
                      }
                      uVar12 = *(uint *)(iVar11 + 0x14);
                      uVar15 = uVar4;
                    } while (*(uint *)(iVar11 + 0x14) < 0x80000000);
                  }
                }
                *extraout_r2 = 0;
                return 0;
              }
            }
            uStack_2c = uVar3 & 0x7fffffff;
            func_0x02457e94(uStack_2c,*(undefined4 *)(uVar15 + 0xc));
            if (*(uint *)(uVar12 + 0xc) <= extraout_r1) {
              func_0x02457d5c();
            }
            uVar3 = *(int *)(uVar12 + extraout_r1 * 4 + 0x10) - 1;
            if (-1 < (int)uVar3) {
              iVar1 = iStack_30;
              uVar12 = 0xffffffff;
              uStack_38 = extraout_r1;
              do {
                uVar15 = uVar3;
                iVar11 = *(int *)(iVar1 + 0xc);
                if (iVar11 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar11 + 0xc) <= uVar15) {
                  func_0x02457d5c();
                }
                uVar14 = uStack_28;
                iVar11 = iVar11 + uVar15 * 0x10;
                if (*(uint *)(iVar11 + 0x10) == uStack_2c) {
                  piVar16 = *(int **)(iVar1 + 0x20);
                  if (piVar16 == (int *)0x0) {
                    piVar16 = (int *)func_0x02ecb070(*(undefined4 *)
                                                      (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) +
                                                      0xc));
                    uVar14 = uStack_28;
                    uVar6 = *(undefined4 *)(iVar11 + 0x18);
                    if (piVar16 == (int *)0x0) {
                      func_0x02457d50(0,uVar6);
                    }
                    iVar10 = (**(code **)(*piVar16 + 0x100))
                                       (piVar16,uVar6,uVar14,*(undefined4 *)(*piVar16 + 0x104));
                  }
                  else {
                    uVar6 = *(undefined4 *)(iVar11 + 0x18);
                    if (piVar16 == (int *)0x0) {
                      func_0x02457d50();
                    }
                    iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                      iVar1 = func_0x02457d84(iVar1);
                    }
                    iVar10 = *piVar16;
                    uVar3 = (uint)*(ushort *)(iVar10 + 0xb6);
                    if (uVar3 != 0) {
                      piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
                      do {
                        if (piVar7[-1] == iVar1) {
                          puVar2 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xc0);
                          goto LAB_03dd0c0c;
                        }
                        uVar3 = uVar3 - 1;
                        piVar7 = piVar7 + 2;
                      } while (uVar3 != 0);
                    }
                    puVar2 = (undefined4 *)func_0x02457d88(piVar16,iVar1,0);
LAB_03dd0c0c:
                    iVar10 = (*(code *)*puVar2)(piVar16,uVar6,uVar14,puVar2[1]);
                  }
                  iVar1 = iStack_30;
                  if (iVar10 != 0) {
                    if ((int)uVar12 < 0) {
                      iVar1 = *(int *)(iStack_30 + 8);
                      iVar10 = *(int *)(iVar11 + 0x14);
                      if (iVar1 == 0) {
                        func_0x02457d50();
                      }
                      uVar3 = uStack_38;
                      if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                        func_0x02457d5c();
                      }
                      *(int *)(iVar1 + uVar3 * 4 + 0x10) = iVar10 + 1;
                    }
                    else {
                      iVar1 = *(int *)(iStack_30 + 0xc);
                      if (iVar1 == 0) {
                        func_0x02457d50();
                      }
                      uVar14 = *(undefined4 *)(iVar11 + 0x14);
                      if (*(uint *)(iVar1 + 0xc) <= uVar12) {
                        func_0x02457d5c();
                      }
                      *(undefined4 *)(iVar1 + uVar12 * 0x10 + 0x14) = uVar14;
                    }
                    uVar14 = *(undefined4 *)(iStack_30 + 0x14);
                    *(undefined4 *)(iVar11 + 0x1c) = 0;
                    iVar1 = *(int *)(iStack_30 + 0x18);
                    iVar10 = *(int *)(iStack_30 + 0x1c);
                    *(uint *)(iVar11 + 0x10) = 0xffffffff;
                    *(undefined4 *)(iVar11 + 0x14) = uVar14;
                    *(uint *)(iStack_30 + 0x14) = uVar15;
                    *(int *)(iStack_30 + 0x18) = iVar1 + 1;
                    *(int *)(iStack_30 + 0x1c) = iVar10 + 1;
                    return 1;
                  }
                }
                uVar3 = *(uint *)(iVar11 + 0x14);
                uVar12 = uVar15;
              } while (*(uint *)(iVar11 + 0x14) < 0x80000000);
            }
          }
          return 0;
        }
        iVar11 = func_0x0229f13c(0x163d,0);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        goto LAB_021d0928;
      }
      iVar11 = func_0x0229f13c(0xa077,0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar11 = func_0x0229f13c(0xa076);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar11 = func_0x0229f06c(0xa074,0);
    if (iVar11 == 0) {
      iVar1 = *(int *)(iVar1 + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar11 = func_0x0229f06c(0xa075,0);
      if (iVar11 == 0) {
        pcVar8 = (char *)(_UNK_01e1882c + 0x1e18078);
        if (*pcVar8 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
          func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
          func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
          func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
          func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
          func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
          *pcVar8 = '\x01';
        }
        iVar11 = func_0x0229f06c(0x1636,0);
        if (iVar11 == 0) {
          iVar11 = *(int *)(iVar1 + 0x20);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          uVar3 = func_0x03dcf4b4(iVar11,0xb,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
          if (uVar3 == 0) {
            iVar11 = func_0x01e1a508(iVar1,0xb);
            pcVar8 = (char *)(_UNK_01e1884c + 0x1e1816c);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar10 = func_0x024504c0(iVar11,0);
            uVar14 = *(undefined4 *)(iVar1 + 0x14);
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            func_0x024505b4(iVar10,uVar14,0);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iStack_34 = iVar1;
            iVar1 = func_0x024504c0(iVar11,0);
            if (*pcVar8 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01e18870 + 0x1e18454));
              *pcVar8 = '\x01';
            }
            piVar16 = *(int **)(_UNK_01e18874 + 0x1e18470);
            puVar2 = *(undefined4 **)(*piVar16 + 0x5c);
            uVar14 = puVar2[2];
            uVar6 = *puVar2;
            uVar13 = puVar2[1];
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uStack_38 = 0;
            func_0x0245068c(iVar1,uVar6,uVar13,uVar14);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x024504c0(iVar11,0);
            pcVar9 = (char *)(_UNK_01e18878 + 0x1e184c8);
            if (*pcVar9 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01e1887c + 0x1e184dc));
              *pcVar9 = '\x01';
            }
            iVar10 = *(int *)(*piVar16 + 0x5c);
            uVar14 = *(undefined4 *)(iVar10 + 0xc);
            uVar6 = *(undefined4 *)(iVar10 + 0x10);
            uVar13 = *(undefined4 *)(iVar10 + 0x14);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uStack_38 = 0;
            func_0x024503a4(iVar1,uVar14,uVar6,uVar13);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x024504c0(iVar11,0);
            if (*pcVar8 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01e18880 + 0x1e18550));
              *pcVar8 = '\x01';
            }
            puVar2 = *(undefined4 **)(*piVar16 + 0x5c);
            uVar14 = *puVar2;
            uVar6 = puVar2[1];
            uVar13 = puVar2[2];
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uStack_38 = 0;
            func_0x02450c24(iVar1,uVar14,uVar6,uVar13);
            iVar1 = *(int *)(iStack_34 + 0x20);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar3 = func_0x03dcf268(iVar1,0xb,iVar11,**(undefined4 **)(_UNK_01e18884 + 0x1e185b4));
          }
          return uVar3;
        }
        iVar11 = func_0x0229f13c(0x1636,0);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
LAB_021d0928:
        iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,0xb,0);
        uStack_38 = uStack_50;
        if (*(int *)(iVar11 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar11 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar1,0);
        func_0x01485238(&uStack_38,0xb,0);
        iVar10 = *(int *)(iVar11 + 8);
        uVar14 = *(undefined4 *)(iVar11 + 0xc);
        iVar1 = *(int *)(iVar11 + 0x10);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uVar6 = 3;
        if (iVar1 == 0) {
          uVar6 = 2;
        }
        uStack_58 = 0;
        uStack_54 = 0;
        uVar3 = func_0x0245495c(iVar10,uVar14,&uStack_38,uVar6);
        return uVar3;
      }
      iVar11 = func_0x0229f13c(0xa075,0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar11 = func_0x0229f13c(0xa074);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
    }
  }
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&stack0xffffffb8,0,0);
  uStack_20 = uStack_38;
  if (*(int *)(iVar11 + 0x10) != 0) {
    func_0x01485278(&iStack_30,*(int *)(iVar11 + 0x10),0);
  }
  func_0x01485278(&iStack_30,iVar1,0);
  iVar10 = *(int *)(iVar11 + 8);
  uVar14 = *(undefined4 *)(iVar11 + 0xc);
  iVar1 = *(int *)(iVar11 + 0x10);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 2;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  uStack_50 = 0;
  uVar3 = func_0x0245495c(iVar10,uVar14,&iStack_30,uVar6);
  return uVar3;
}



// ===== FAT.MBItemCharge$$_RefreshLightbulb RVA 0x1e03234 =====

/* WARNING: Removing unreachable block (ram,0x01e182e0) */
/* WARNING: Removing unreachable block (ram,0x01e182e8) */
/* WARNING: Removing unreachable block (ram,0x01e182ec) */
/* WARNING: Removing unreachable block (ram,0x01e18308) */
/* WARNING: Removing unreachable block (ram,0x01e1830c) */
/* WARNING: Removing unreachable block (ram,0x01e18324) */
/* WARNING: Removing unreachable block (ram,0x01e18328) */
/* WARNING: Removing unreachable block (ram,0x01e18340) */
/* WARNING: Removing unreachable block (ram,0x01e18344) */
/* WARNING: Removing unreachable block (ram,0x01e18364) */
/* WARNING: Removing unreachable block (ram,0x01e18378) */
/* WARNING: Removing unreachable block (ram,0x01e18398) */
/* WARNING: Removing unreachable block (ram,0x01e1839c) */
/* WARNING: Removing unreachable block (ram,0x01e182c8) */
/* WARNING: Removing unreachable block (ram,0x01e182d0) */
/* WARNING: Removing unreachable block (ram,0x01e182d8) */
/* WARNING: Removing unreachable block (ram,0x01e183e0) */
/* WARNING: Removing unreachable block (ram,0x01e183e8) */
/* WARNING: Removing unreachable block (ram,0x01e183ec) */
/* WARNING: Removing unreachable block (ram,0x01e183bc) */
/* WARNING: Removing unreachable block (ram,0x01e183c4) */
/* WARNING: Removing unreachable block (ram,0x01e183c8) */
/* WARNING: Removing unreachable block (ram,0x01e18400) */
/* WARNING: Removing unreachable block (ram,0x01e18408) */
/* WARNING: Removing unreachable block (ram,0x01e1840c) */
/* WARNING: Removing unreachable block (ram,0x01e1841c) */
/* WARNING: Removing unreachable block (ram,0x01e18424) */
/* WARNING: Removing unreachable block (ram,0x01e18428) */
/* WARNING: Removing unreachable block (ram,0x01e18448) */
/* WARNING: Removing unreachable block (ram,0x01e1845c) */
/* WARNING: Removing unreachable block (ram,0x01e18480) */
/* WARNING: Removing unreachable block (ram,0x01e18484) */
/* WARNING: Removing unreachable block (ram,0x01e184a8) */
/* WARNING: Removing unreachable block (ram,0x01e184ac) */
/* WARNING: Removing unreachable block (ram,0x01e184d0) */
/* WARNING: Removing unreachable block (ram,0x01e184e4) */
/* WARNING: Removing unreachable block (ram,0x01e184fc) */
/* WARNING: Removing unreachable block (ram,0x01e18500) */
/* WARNING: Removing unreachable block (ram,0x01e18524) */
/* WARNING: Removing unreachable block (ram,0x01e18528) */
/* WARNING: Removing unreachable block (ram,0x01e18544) */
/* WARNING: Removing unreachable block (ram,0x01e18558) */
/* WARNING: Removing unreachable block (ram,0x01e1856c) */
/* WARNING: Removing unreachable block (ram,0x01e18570) */
/* WARNING: Removing unreachable block (ram,0x01e1859c) */
/* WARNING: Removing unreachable block (ram,0x01e185a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e13234(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar6;
  int *piVar7;
  int extraout_r3;
  int extraout_r3_00;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  iVar1 = func_0x0229f06c(0xa078,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa078,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,param_2,0);
    iVar11 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    uVar2 = func_0x0245495c(iVar11,uVar13,&uStack_38,uVar6);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  *(char *)(param_1 + 0x6a) = (char)param_2;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (param_2 == 0) {
    iVar11 = func_0x0229f06c(0xa07b,0);
    if (iVar11 == 0) {
      iVar1 = *(int *)(iVar1 + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar11 = func_0x0229f06c(0xa07c,0);
      if (iVar11 == 0) {
        pcVar8 = (char *)(_UNK_01e18a0c + 0x1e188fc);
        if (*pcVar8 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
          func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
          func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
          *pcVar8 = '\x01';
        }
        iVar11 = func_0x0229f06c(0x163d,0);
        if (iVar11 == 0) {
          iVar11 = *(int *)(iVar1 + 0x20);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = func_0x03dcf4b4(iVar11,0x17,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
          if (iVar11 == 0) {
            return 0;
          }
          iVar11 = *(int *)(iVar1 + 0x20);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          uVar13 = func_0x03dcf1b0(iVar11,0x17,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
          func_0x01e1a604(iVar1,0x17,uVar13);
          iVar1 = *(int *)(iVar1 + 0x20);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iStack_34 = **(int **)(_UNK_01e18a24 + 0x1e18a00);
          uStack_28 = 0x17;
          if (*(int *)(iVar1 + 8) != 0) {
            piVar9 = *(int **)(iVar1 + 0x20);
            iStack_30 = iVar1;
            if (piVar9 == (int *)0x0) {
              uVar2 = func_0x04821a00(&uStack_28,0);
            }
            else {
              iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
              if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                iVar1 = func_0x02457d84(iVar1);
              }
              iVar11 = *piVar9;
              uVar2 = (uint)*(ushort *)(iVar11 + 0xb6);
              if (uVar2 != 0) {
                piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
                do {
                  if (piVar7[-1] == iVar1) {
                    puVar3 = (undefined4 *)(iVar11 + *piVar7 * 8 + 200);
                    goto LAB_03dd0a60;
                  }
                  uVar2 = uVar2 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar2 != 0);
              }
              puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,1);
LAB_03dd0a60:
              uVar2 = (*(code *)*puVar3)(piVar9,0x17,puVar3[1]);
              iVar1 = iStack_30;
            }
            uVar14 = *(uint *)(iVar1 + 8);
            uVar12 = uVar14;
            if (uVar14 == 0) {
              func_0x02457d50();
              uVar12 = *(uint *)(iStack_30 + 8);
              if (uVar12 == 0) {
                uVar15 = func_0x02457d50();
                uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
                iVar1 = (int)uVar15;
                uStack_54 = 0;
                if (*(int *)(iVar1 + 8) != 0) {
                  piVar9 = *(int **)(iVar1 + 0x20);
                  uStack_60 = uVar13;
                  uStack_5c = uVar2;
                  uStack_58 = uVar12;
                  uStack_50 = uVar14;
                  if (piVar9 == (int *)0x0) {
                    uVar2 = func_0x04821a00(&uStack_60,0);
                  }
                  else {
                    iVar11 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                    if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
                      iVar11 = func_0x02457d84(iVar11);
                    }
                    iVar10 = *piVar9;
                    uVar2 = (uint)*(ushort *)(iVar10 + 0xb6);
                    if (uVar2 != 0) {
                      piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
                      do {
                        if (piVar7[-1] == iVar11) {
                          puVar3 = (undefined4 *)(iVar10 + *piVar7 * 8 + 200);
                          goto LAB_03dd0dc4;
                        }
                        uVar2 = uVar2 - 1;
                        piVar7 = piVar7 + 2;
                      } while (uVar2 != 0);
                    }
                    puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar11,1);
LAB_03dd0dc4:
                    uVar2 = (*(code *)*puVar3)(piVar9,uVar13,puVar3[1]);
                  }
                  iVar10 = *(int *)(iVar1 + 8);
                  iVar11 = iVar10;
                  if (iVar10 == 0) {
                    func_0x02457d50();
                    iVar11 = *(int *)(iVar1 + 8);
                    if (iVar11 == 0) {
                      uVar15 = func_0x02457d50();
                      uVar2 = func_0x03dcfa64((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                              *(undefined4 *)
                                               (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) +
                                               0x84));
                      if ((int)uVar2 < 0) {
                        uVar13 = 0;
                      }
                      else {
                        iVar1 = *(int *)((int)uVar15 + 0xc);
                        if (iVar1 == 0) {
                          func_0x02457d50();
                        }
                        if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                          func_0x02457d5c();
                        }
                        uVar13 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
                      }
                      *extraout_r2_00 = uVar13;
                      return ~uVar2 >> 0x1f;
                    }
                  }
                  func_0x02457e94(uVar2 & 0x7fffffff,*(undefined4 *)(iVar10 + 0xc));
                  if (*(uint *)(iVar11 + 0xc) <= extraout_r1_00) {
                    func_0x02457d5c();
                  }
                  uVar12 = *(int *)(iVar11 + extraout_r1_00 * 4 + 0x10) - 1;
                  if (-1 < (int)uVar12) {
                    uVar14 = 0xffffffff;
                    do {
                      uVar4 = uVar12;
                      iVar11 = *(int *)(iVar1 + 0xc);
                      if (iVar11 == 0) {
                        func_0x02457d50();
                      }
                      if (*(uint *)(iVar11 + 0xc) <= uVar4) {
                        func_0x02457d5c();
                      }
                      uVar13 = uStack_60;
                      iVar11 = iVar11 + uVar4 * 0x10;
                      if (*(uint *)(iVar11 + 0x10) == (uVar2 & 0x7fffffff)) {
                        piVar9 = *(int **)(iVar1 + 0x20);
                        if (piVar9 == (int *)0x0) {
                          piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                                           (*(int *)(*(int *)(extraout_r3 + 0x10) +
                                                                    0x60) + 0xc));
                          uVar13 = uStack_60;
                          uVar6 = *(undefined4 *)(iVar11 + 0x18);
                          if (piVar9 == (int *)0x0) {
                            func_0x02457d50(0,uVar6);
                          }
                          iVar10 = (**(code **)(*piVar9 + 0x100))
                                             (piVar9,uVar6,uVar13,*(undefined4 *)(*piVar9 + 0x104));
                        }
                        else {
                          uVar6 = *(undefined4 *)(iVar11 + 0x18);
                          if (piVar9 == (int *)0x0) {
                            func_0x02457d50();
                          }
                          iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                          if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
                            iVar10 = func_0x02457d84(iVar10);
                          }
                          iVar5 = *piVar9;
                          uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
                          if (uVar12 != 0) {
                            piVar7 = (int *)(*(int *)(iVar5 + 0x58) + 4);
                            do {
                              if (piVar7[-1] == iVar10) {
                                puVar3 = (undefined4 *)(iVar5 + *piVar7 * 8 + 0xc0);
                                goto LAB_03dd0f6c;
                              }
                              uVar12 = uVar12 - 1;
                              piVar7 = piVar7 + 2;
                            } while (uVar12 != 0);
                          }
                          puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar10,0);
LAB_03dd0f6c:
                          iVar10 = (*(code *)*puVar3)(piVar9,uVar6,uVar13,puVar3[1]);
                        }
                        if (iVar10 != 0) {
                          if ((int)uVar14 < 0) {
                            iVar10 = *(int *)(iVar1 + 8);
                            iVar5 = *(int *)(iVar11 + 0x14);
                            if (iVar10 == 0) {
                              func_0x02457d50();
                            }
                            if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
                              func_0x02457d5c();
                            }
                            *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) = iVar5 + 1;
                          }
                          else {
                            iVar10 = *(int *)(iVar1 + 0xc);
                            if (iVar10 == 0) {
                              func_0x02457d50();
                            }
                            uVar13 = *(undefined4 *)(iVar11 + 0x14);
                            if (*(uint *)(iVar10 + 0xc) <= uVar14) {
                              func_0x02457d5c();
                            }
                            *(undefined4 *)(iVar10 + uVar14 * 0x10 + 0x14) = uVar13;
                          }
                          *extraout_r2 = *(undefined4 *)(iVar11 + 0x1c);
                          uVar13 = *(undefined4 *)(iVar1 + 0x14);
                          *(undefined4 *)(iVar11 + 0x1c) = 0;
                          iVar5 = *(int *)(iVar1 + 0x1c);
                          iVar10 = *(int *)(iVar1 + 0x18);
                          *(undefined4 *)(iVar11 + 0x14) = uVar13;
                          *(uint *)(iVar11 + 0x10) = 0xffffffff;
                          *(int *)(iVar1 + 0x1c) = iVar5 + 1;
                          *(uint *)(iVar1 + 0x14) = uVar4;
                          *(int *)(iVar1 + 0x18) = iVar10 + 1;
                          return 1;
                        }
                      }
                      uVar12 = *(uint *)(iVar11 + 0x14);
                      uVar14 = uVar4;
                    } while (*(uint *)(iVar11 + 0x14) < 0x80000000);
                  }
                }
                *extraout_r2 = 0;
                return 0;
              }
            }
            uStack_2c = uVar2 & 0x7fffffff;
            func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
            if (*(uint *)(uVar12 + 0xc) <= extraout_r1) {
              func_0x02457d5c();
            }
            uVar2 = *(int *)(uVar12 + extraout_r1 * 4 + 0x10) - 1;
            if (-1 < (int)uVar2) {
              iVar1 = iStack_30;
              uVar12 = 0xffffffff;
              uStack_38 = extraout_r1;
              do {
                uVar14 = uVar2;
                iVar11 = *(int *)(iVar1 + 0xc);
                if (iVar11 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar11 + 0xc) <= uVar14) {
                  func_0x02457d5c();
                }
                uVar13 = uStack_28;
                iVar11 = iVar11 + uVar14 * 0x10;
                if (*(uint *)(iVar11 + 0x10) == uStack_2c) {
                  piVar9 = *(int **)(iVar1 + 0x20);
                  if (piVar9 == (int *)0x0) {
                    piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                                     (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) +
                                                     0xc));
                    uVar13 = uStack_28;
                    uVar6 = *(undefined4 *)(iVar11 + 0x18);
                    if (piVar9 == (int *)0x0) {
                      func_0x02457d50(0,uVar6);
                    }
                    iVar10 = (**(code **)(*piVar9 + 0x100))
                                       (piVar9,uVar6,uVar13,*(undefined4 *)(*piVar9 + 0x104));
                  }
                  else {
                    uVar6 = *(undefined4 *)(iVar11 + 0x18);
                    if (piVar9 == (int *)0x0) {
                      func_0x02457d50();
                    }
                    iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                      iVar1 = func_0x02457d84(iVar1);
                    }
                    iVar10 = *piVar9;
                    uVar2 = (uint)*(ushort *)(iVar10 + 0xb6);
                    if (uVar2 != 0) {
                      piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
                      do {
                        if (piVar7[-1] == iVar1) {
                          puVar3 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xc0);
                          goto LAB_03dd0c0c;
                        }
                        uVar2 = uVar2 - 1;
                        piVar7 = piVar7 + 2;
                      } while (uVar2 != 0);
                    }
                    puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,0);
LAB_03dd0c0c:
                    iVar10 = (*(code *)*puVar3)(piVar9,uVar6,uVar13,puVar3[1]);
                  }
                  iVar1 = iStack_30;
                  if (iVar10 != 0) {
                    if ((int)uVar12 < 0) {
                      iVar1 = *(int *)(iStack_30 + 8);
                      iVar10 = *(int *)(iVar11 + 0x14);
                      if (iVar1 == 0) {
                        func_0x02457d50();
                      }
                      uVar2 = uStack_38;
                      if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                        func_0x02457d5c();
                      }
                      *(int *)(iVar1 + uVar2 * 4 + 0x10) = iVar10 + 1;
                    }
                    else {
                      iVar1 = *(int *)(iStack_30 + 0xc);
                      if (iVar1 == 0) {
                        func_0x02457d50();
                      }
                      uVar13 = *(undefined4 *)(iVar11 + 0x14);
                      if (*(uint *)(iVar1 + 0xc) <= uVar12) {
                        func_0x02457d5c();
                      }
                      *(undefined4 *)(iVar1 + uVar12 * 0x10 + 0x14) = uVar13;
                    }
                    uVar13 = *(undefined4 *)(iStack_30 + 0x14);
                    *(undefined4 *)(iVar11 + 0x1c) = 0;
                    iVar1 = *(int *)(iStack_30 + 0x18);
                    iVar10 = *(int *)(iStack_30 + 0x1c);
                    *(uint *)(iVar11 + 0x10) = 0xffffffff;
                    *(undefined4 *)(iVar11 + 0x14) = uVar13;
                    *(uint *)(iStack_30 + 0x14) = uVar14;
                    *(int *)(iStack_30 + 0x18) = iVar1 + 1;
                    *(int *)(iStack_30 + 0x1c) = iVar10 + 1;
                    return 1;
                  }
                }
                uVar2 = *(uint *)(iVar11 + 0x14);
                uVar12 = uVar14;
              } while (*(uint *)(iVar11 + 0x14) < 0x80000000);
            }
          }
          return 0;
        }
        iVar11 = func_0x0229f13c(0x163d,0);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        goto LAB_021d0928;
      }
      iVar11 = func_0x0229f13c(0xa07c,0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar11 = func_0x0229f13c(0xa07b);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar11 = func_0x0229f06c(0xa079,0);
    if (iVar11 == 0) {
      iVar1 = *(int *)(iVar1 + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar11 = func_0x0229f06c(0xa07a,0);
      if (iVar11 == 0) {
        pcVar8 = (char *)(_UNK_01e1882c + 0x1e18078);
        if (*pcVar8 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
          func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
          func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
          func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
          func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
          func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
          *pcVar8 = '\x01';
        }
        iVar11 = func_0x0229f06c(0x1636,0);
        if (iVar11 == 0) {
          iVar11 = *(int *)(iVar1 + 0x20);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          uVar2 = func_0x03dcf4b4(iVar11,0x17,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
          if (uVar2 != 0) {
            return uVar2;
          }
          func_0x01e1a508(iVar1,0x17);
                    /* WARNING: Could not recover jumptable at 0x01e18180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (*(code *)(&UNK_01e18184 + _UNK_01e1818c))();
          return uVar2;
        }
        iVar11 = func_0x0229f13c(0x1636,0);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
LAB_021d0928:
        iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,0x17,0);
        uStack_38 = uStack_50;
        if (*(int *)(iVar11 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar11 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar1,0);
        func_0x01485238(&uStack_38,0x17,0);
        iVar10 = *(int *)(iVar11 + 8);
        uVar13 = *(undefined4 *)(iVar11 + 0xc);
        iVar1 = *(int *)(iVar11 + 0x10);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uVar6 = 3;
        if (iVar1 == 0) {
          uVar6 = 2;
        }
        uStack_58 = 0;
        uStack_54 = 0;
        uVar2 = func_0x0245495c(iVar10,uVar13,&uStack_38,uVar6);
        return uVar2;
      }
      iVar11 = func_0x0229f13c(0xa07a,0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar11 = func_0x0229f13c(0xa079);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
    }
  }
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&stack0xffffffb8,0,0);
  uStack_20 = uStack_38;
  if (*(int *)(iVar11 + 0x10) != 0) {
    func_0x01485278(&iStack_30,*(int *)(iVar11 + 0x10),0);
  }
  func_0x01485278(&iStack_30,iVar1,0);
  iVar10 = *(int *)(iVar11 + 8);
  uVar13 = *(undefined4 *)(iVar11 + 0xc);
  iVar1 = *(int *)(iVar11 + 0x10);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 2;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  uStack_50 = 0;
  uVar2 = func_0x0245495c(iVar10,uVar13,&iStack_30,uVar6);
  return uVar2;
}



// ===== FAT.MBItemCharge$$_RefreshMixProgressShow RVA 0x1e032bc =====

void FUN_01e132bc(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0xa07f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa07f,0);
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
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0244ffd4(iVar1,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x02450114(iVar3,0);
  if (iVar3 == param_2) {
    return;
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar1,param_2,0);
  return;
}



// ===== FAT.MBItemCharge$$_RefreshMixProgress RVA 0x1e0338c =====

void FUN_01e1338c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar1 = func_0x0229f06c(0xa081,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa081,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  do {
    if (iVar1 == 0) {
      func_0x01384bf0();
      iVar2 = func_0x02450148(0,0);
      if (iVar2 <= iVar5) {
        return;
      }
      func_0x01384bf0();
    }
    else {
      iVar2 = func_0x02450148(iVar1,0);
      if (iVar2 <= iVar5) {
        return;
      }
    }
    iVar2 = func_0x02450158(iVar1,iVar5,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0244ffd4(iVar2,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (iVar5 < param_3) {
      func_0x0244ffe4(iVar3,1,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02450158(iVar2,0,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0244ffd4(iVar2,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      bVar4 = iVar5 < param_2;
    }
    else {
      bVar4 = false;
    }
    func_0x0244ffe4(iVar3,bVar4,0);
    iVar5 = iVar5 + 1;
  } while( true );
}



// ===== FAT.MBItemCharge$$_TryRefreshAutoSource RVA 0x1e034fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e134fc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar6;
  int *piVar7;
  int extraout_r3;
  int extraout_r3_00;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 auStack_28 [2];
  undefined4 uStack_20;
  
  pcVar9 = (char *)(_UNK_01e13650 + 0x1e13514);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e13654 + 0x1e13528));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa083,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa083,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,param_2,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    uVar2 = func_0x0245495c(iVar10,uVar13,&uStack_38,uVar6);
    return uVar2;
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e13658 + 0x1e13584));
  iVar10 = *(int *)(param_1 + 0x3c);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  iVar10 = func_0x02123568(iVar10,0);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar13 = func_0x0210e5f4(iVar10,0);
  if (param_2 == 0) {
    iVar10 = *(int *)(param_1 + 0x3c);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = func_0x02123568(iVar10,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x0210e2d4(iVar10,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar9 = (char *)(_UNK_01de9c68 + 0x1de9bc4);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01de9c6c + 0x1de9bd8),uVar13,uVar6,0);
      *pcVar9 = '\x01';
    }
    iVar10 = func_0x0229f06c(0x9eef,0);
    if (iVar10 == 0) {
      iVar1 = *(int *)(iVar1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x03d5a8e0(iVar1,uVar13,uVar6,0);
      return uVar2;
    }
    iVar10 = func_0x0229f13c(0x9eef,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar2 = func_0x02179a68(iVar10,iVar1,uVar13,uVar6);
    return uVar2;
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar9 = (char *)(_UNK_01de9d1c + 0x1de9c8c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de9d20 + 0x1de9ca0),uVar13,0);
    *pcVar9 = '\x01';
  }
  iVar10 = func_0x0229f06c(0x9ef0,0);
  if (iVar10 != 0) {
    iVar10 = func_0x0229f13c(0x9ef0,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0,uVar13,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar10 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar10 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485238(&uStack_38,uVar13,0);
    iVar11 = *(int *)(iVar10 + 8);
    uVar13 = *(undefined4 *)(iVar10 + 0xc);
    iVar1 = *(int *)(iVar10 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    uVar2 = func_0x0245495c(iVar11,uVar13,&uStack_38,uVar6);
    return uVar2;
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_34 = **(int **)(_UNK_01de9d24 + 0x1de9d10);
  if (*(int *)(iVar1 + 8) != 0) {
    piVar8 = *(int **)(iVar1 + 0x20);
    iStack_30 = iVar1;
    auStack_28[0] = uVar13;
    if (piVar8 == (int *)0x0) {
      uVar2 = func_0x04821a00(auStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc4));
    }
    else {
      iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x02457d84(iVar1);
      }
      iVar10 = *piVar8;
      uVar2 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar10 + *piVar7 * 8 + 200);
            goto LAB_03d5b514;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined4 *)func_0x02457d88(piVar8,iVar1,1);
LAB_03d5b514:
      uVar2 = (*(code *)*puVar3)(piVar8,uVar13,puVar3[1]);
      iVar1 = iStack_30;
    }
    uVar14 = *(uint *)(iVar1 + 8);
    uVar12 = uVar14;
    if (uVar14 == 0) {
      func_0x02457d50();
      uVar12 = *(uint *)(iStack_30 + 8);
      if (uVar12 == 0) {
        uVar15 = func_0x02457d50();
        uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
        iVar1 = (int)uVar15;
        uStack_54 = 0;
        if (*(int *)(iVar1 + 8) != 0) {
          piVar8 = *(int **)(iVar1 + 0x20);
          uStack_60 = uVar13;
          uStack_5c = uVar2;
          uStack_58 = uVar12;
          uStack_50 = uVar14;
          if (piVar8 == (int *)0x0) {
            uVar2 = func_0x04821a00(&uStack_60,
                                    *(undefined4 *)
                                     (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0xc4));
          }
          else {
            iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
              iVar10 = func_0x02457d84(iVar10);
            }
            iVar11 = *piVar8;
            uVar2 = (uint)*(ushort *)(iVar11 + 0xb6);
            if (uVar2 != 0) {
              piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar7[-1] == iVar10) {
                  puVar3 = (undefined4 *)(iVar11 + *piVar7 * 8 + 200);
                  goto LAB_03d5b878;
                }
                uVar2 = uVar2 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar8,iVar10,1);
LAB_03d5b878:
            uVar2 = (*(code *)*puVar3)(piVar8,uVar13,puVar3[1]);
          }
          iVar11 = *(int *)(iVar1 + 8);
          iVar10 = iVar11;
          if (iVar11 == 0) {
            func_0x02457d50();
            iVar10 = *(int *)(iVar1 + 8);
            if (iVar10 == 0) {
              uVar15 = func_0x02457d50();
              uVar2 = func_0x03d5a510((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) + 0x84));
              if ((int)uVar2 < 0) {
                uVar13 = 0;
              }
              else {
                iVar1 = *(int *)((int)uVar15 + 0xc);
                if (iVar1 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                  func_0x02457d5c();
                }
                uVar13 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
              }
              *extraout_r2_00 = uVar13;
              return ~uVar2 >> 0x1f;
            }
          }
          func_0x02457e94(uVar2 & 0x7fffffff,*(undefined4 *)(iVar11 + 0xc));
          if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
            func_0x02457d5c();
          }
          uVar12 = *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) - 1;
          if (-1 < (int)uVar12) {
            uVar14 = 0xffffffff;
            do {
              uVar4 = uVar12;
              iVar10 = *(int *)(iVar1 + 0xc);
              if (iVar10 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar10 + 0xc) <= uVar4) {
                func_0x02457d5c();
              }
              uVar13 = uStack_60;
              iVar10 = iVar10 + uVar4 * 0x10;
              if (*(uint *)(iVar10 + 0x10) == (uVar2 & 0x7fffffff)) {
                piVar8 = *(int **)(iVar1 + 0x20);
                if (piVar8 == (int *)0x0) {
                  piVar8 = (int *)func_0x02ecaf98(*(undefined4 *)
                                                   (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) +
                                                   0xc));
                  uVar13 = uStack_60;
                  uVar6 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar8 == (int *)0x0) {
                    func_0x02457d50(0,uVar6);
                  }
                  iVar11 = (**(code **)(*piVar8 + 0x100))
                                     (piVar8,uVar6,uVar13,*(undefined4 *)(*piVar8 + 0x104));
                }
                else {
                  uVar6 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar8 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar11 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
                    iVar11 = func_0x02457d84(iVar11);
                  }
                  iVar5 = *piVar8;
                  uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
                  if (uVar12 != 0) {
                    piVar7 = (int *)(*(int *)(iVar5 + 0x58) + 4);
                    do {
                      if (piVar7[-1] == iVar11) {
                        puVar3 = (undefined4 *)(iVar5 + *piVar7 * 8 + 0xc0);
                        goto LAB_03d5ba20;
                      }
                      uVar12 = uVar12 - 1;
                      piVar7 = piVar7 + 2;
                    } while (uVar12 != 0);
                  }
                  puVar3 = (undefined4 *)func_0x02457d88(piVar8,iVar11,0);
LAB_03d5ba20:
                  iVar11 = (*(code *)*puVar3)(piVar8,uVar6,uVar13,puVar3[1]);
                }
                if (iVar11 != 0) {
                  if ((int)uVar14 < 0) {
                    iVar11 = *(int *)(iVar1 + 8);
                    iVar5 = *(int *)(iVar10 + 0x14);
                    if (iVar11 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar11 + 0xc) <= extraout_r1_00) {
                      func_0x02457d5c();
                    }
                    *(int *)(iVar11 + extraout_r1_00 * 4 + 0x10) = iVar5 + 1;
                  }
                  else {
                    iVar11 = *(int *)(iVar1 + 0xc);
                    if (iVar11 == 0) {
                      func_0x02457d50();
                    }
                    uVar13 = *(undefined4 *)(iVar10 + 0x14);
                    if (*(uint *)(iVar11 + 0xc) <= uVar14) {
                      func_0x02457d5c();
                    }
                    *(undefined4 *)(iVar11 + uVar14 * 0x10 + 0x14) = uVar13;
                  }
                  *extraout_r2 = *(undefined4 *)(iVar10 + 0x1c);
                  uVar13 = *(undefined4 *)(iVar1 + 0x14);
                  iVar11 = *(int *)(iVar1 + 0x18);
                  iVar5 = *(int *)(iVar1 + 0x1c);
                  *(uint *)(iVar10 + 0x10) = 0xffffffff;
                  *(int *)(iVar1 + 0x18) = iVar11 + 1;
                  *(int *)(iVar1 + 0x1c) = iVar5 + 1;
                  *(uint *)(iVar1 + 0x14) = uVar4;
                  *(undefined4 *)(iVar10 + 0x14) = uVar13;
                  return 1;
                }
              }
              uVar12 = *(uint *)(iVar10 + 0x14);
              uVar14 = uVar4;
            } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
          }
        }
        *extraout_r2 = 0;
        return 0;
      }
    }
    uStack_2c = uVar2 & 0x7fffffff;
    func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
    if (*(uint *)(uVar12 + 0xc) <= extraout_r1) {
      func_0x02457d5c();
    }
    uVar2 = *(int *)(uVar12 + extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar2) {
      iVar1 = iStack_30;
      uVar12 = 0xffffffff;
      uStack_38 = extraout_r1;
      do {
        uVar14 = uVar2;
        iVar10 = *(int *)(iVar1 + 0xc);
        if (iVar10 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar14) {
          func_0x02457d5c();
        }
        uVar13 = auStack_28[0];
        iVar10 = iVar10 + uVar14 * 0x10;
        if (*(uint *)(iVar10 + 0x10) == uStack_2c) {
          piVar8 = *(int **)(iVar1 + 0x20);
          if (piVar8 == (int *)0x0) {
            piVar8 = (int *)func_0x02ecaf98(*(undefined4 *)
                                             (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc));
            uVar13 = auStack_28[0];
            uVar6 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar8 == (int *)0x0) {
              func_0x02457d50(0,uVar6);
            }
            iVar11 = (**(code **)(*piVar8 + 0x100))
                               (piVar8,uVar6,uVar13,*(undefined4 *)(*piVar8 + 0x104));
          }
          else {
            uVar6 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar8 == (int *)0x0) {
              func_0x02457d50();
            }
            iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x02457d84(iVar1);
            }
            iVar11 = *piVar8;
            uVar2 = (uint)*(ushort *)(iVar11 + 0xb6);
            if (uVar2 != 0) {
              piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar7[-1] == iVar1) {
                  puVar3 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
                  goto LAB_03d5b6c0;
                }
                uVar2 = uVar2 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar8,iVar1,0);
LAB_03d5b6c0:
            iVar11 = (*(code *)*puVar3)(piVar8,uVar6,uVar13,puVar3[1]);
          }
          iVar1 = iStack_30;
          if (iVar11 != 0) {
            if ((int)uVar12 < 0) {
              iVar1 = *(int *)(iStack_30 + 8);
              iVar11 = *(int *)(iVar10 + 0x14);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar2 = uStack_38;
              if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                func_0x02457d5c();
              }
              *(int *)(iVar1 + uVar2 * 4 + 0x10) = iVar11 + 1;
            }
            else {
              iVar1 = *(int *)(iStack_30 + 0xc);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar13 = *(undefined4 *)(iVar10 + 0x14);
              if (*(uint *)(iVar1 + 0xc) <= uVar12) {
                func_0x02457d5c();
              }
              *(undefined4 *)(iVar1 + uVar12 * 0x10 + 0x14) = uVar13;
            }
            *(uint *)(iVar10 + 0x10) = 0xffffffff;
            uVar13 = *(undefined4 *)(iStack_30 + 0x14);
            *(int *)(iStack_30 + 0x18) = *(int *)(iStack_30 + 0x18) + 1;
            *(uint *)(iStack_30 + 0x14) = uVar14;
            *(int *)(iStack_30 + 0x1c) = *(int *)(iStack_30 + 0x1c) + 1;
            *(undefined4 *)(iVar10 + 0x14) = uVar13;
            return 1;
          }
        }
        uVar2 = *(uint *)(iVar10 + 0x14);
        uVar12 = uVar14;
      } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
    }
  }
  return 0;
}



// ===== FAT.MBItemCharge$$NeedHideToolSourceOutputEffect RVA 0x1e0365c =====

/* WARNING: Removing unreachable block (ram,0x01cc08fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e1365c(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
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
  
  iVar3 = func_0x0229f06c(0xa085,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xa085,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar10 = *(int *)(iVar3 + 8);
    uVar12 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 2;
    if (iVar3 == 0) {
      uVar8 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar10,uVar12,&uStack_30,uVar8);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    return 0;
  }
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x60);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar10 = func_0x0229f06c(0xf6,0,0);
  if (iVar10 == 0) {
    iVar10 = func_0x0229f06c(0xf7,0);
    if (iVar10 == 0) {
      iVar10 = func_0x01cc0400(iVar3,0x98);
      if (iVar10 != 0) {
        return 0;
      }
      pcVar9 = (char *)(_UNK_01cc09d4 + 0x1cc0538);
      if (*pcVar9 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01cc09d8 + 0x1cc054c));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09dc + 0x1cc0558));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e0 + 0x1cc0564));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e4 + 0x1cc0570));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e8 + 0x1cc057c));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09ec + 0x1cc0588));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09f0 + 0x1cc0594));
        *pcVar9 = '\x01';
      }
      iVar10 = func_0x0229f06c(0xf9,0);
      if (iVar10 == 0) {
        iVar10 = *(int *)(iVar3 + 8);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x02451990(iVar10,0x98,**(undefined4 **)(_UNK_01cc09f4 + 0x1cc0604));
        uVar4 = 1;
        if (iVar10 != 0) {
          iVar10 = func_0x01c24918(0);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 8);
          iVar10 = *(int *)(iVar10 + 0x68);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x02451948(iVar3,0x98,**(undefined4 **)(_UNK_01cc09f8 + 0x1cc0654));
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (0 < *(int *)(iVar3 + 0x28)) {
            iVar11 = func_0x01c24918(0);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = *(int *)(iVar11 + 0x9c);
            uVar12 = *(undefined4 *)(iVar3 + 0x28);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = func_0x01c77708(iVar11,uVar12,0);
            if (iVar11 != 0) {
              return 1;
            }
          }
          iVar11 = func_0x01c24918(0);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(iVar11 + 0x48);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          uVar4 = 0;
          iVar11 = func_0x01dd2b98(iVar11,0);
          iVar5 = *(int *)(iVar3 + 0x18);
          if (iVar5 <= iVar11) {
            iVar5 = *(int *)(iVar3 + 0x3c);
          }
          if (iVar5 <= iVar11) {
            iVar11 = *(int *)(iVar3 + 0x40);
            if (iVar11 == 0) {
              func_0x01384bf0();
              iVar5 = iRam0000000c;
              iVar11 = *(int *)(iVar3 + 0x40);
              if (iVar11 == 0) {
                func_0x01384bf0();
                iVar11 = 0;
              }
            }
            else {
              iVar5 = *(int *)(iVar11 + 0xc);
            }
            uVar4 = (uint)(iVar5 < 1);
            piVar1 = (int *)func_0x0364c2b4(iVar11,**(undefined4 **)(_UNK_01cc09fc + 0x1cc0758));
            piVar13 = *(int **)(_UNK_01cc0a00 + 0x1cc0770);
            piVar14 = *(int **)(_UNK_01cc0a04 + 0x1cc0778);
            do {
              if (piVar1 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar3 = *piVar1;
              uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                do {
                  if (piVar7[-1] == *piVar13) {
                    puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
                    goto LAB_01cc07d0;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar6 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(piVar1,*piVar13,0);
LAB_01cc07d0:
              iVar3 = (*(code *)*puVar2)(piVar1,puVar2[1]);
              if (iVar3 == 0) goto LAB_01cc0884;
              if (piVar1 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar3 = *piVar1;
              uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                do {
                  if (piVar7[-1] == *piVar14) {
                    puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
                    goto LAB_01cc0848;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar6 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(piVar1,*piVar14,0);
LAB_01cc0848:
              uVar12 = (*(code *)*puVar2)(piVar1,puVar2[1]);
              if (iVar10 == 0) {
                func_0x01384bf0();
              }
              iVar3 = func_0x01e6c0b0(iVar10,uVar12,0);
            } while (iVar3 == 0);
            uVar4 = 1;
LAB_01cc0884:
            if (piVar1 != (int *)0x0) {
              iVar3 = *piVar1;
              uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
              if (uVar6 != 0) {
                piVar13 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                do {
                  if (piVar13[-1] == **(int **)(_UNK_01cc0a08 + 0x1cc089c)) {
                    puVar2 = (undefined4 *)(iVar3 + *piVar13 * 8 + 0xc0);
                    goto LAB_01cc08e4;
                  }
                  uVar6 = uVar6 - 1;
                  piVar13 = piVar13 + 2;
                } while (uVar6 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01cc0a08 + 0x1cc089c),0)
              ;
LAB_01cc08e4:
              (*(code *)*puVar2)(piVar1,puVar2[1]);
            }
          }
        }
        return uVar4;
      }
      iVar10 = func_0x0229f13c(0xf9,0);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar10 = func_0x0229f13c(0xf7,0);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar10 = func_0x0229f13c(0xf6,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,0x98,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar10 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar10 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar3,0);
  func_0x01485238(&uStack_38,0x98,0);
  iVar11 = *(int *)(iVar10 + 8);
  uVar12 = *(undefined4 *)(iVar10 + 0xc);
  iVar3 = *(int *)(iVar10 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar8 = 3;
  if (iVar3 == 0) {
    uVar8 = 2;
  }
  func_0x0245495c(iVar11,uVar12,&uStack_38,uVar8,0,0);
  uVar4 = func_0x0245496c(&uStack_38,0,0);
  return uVar4;
}



// ===== FAT.MBItemCharge$$.ctor RVA 0x1e036f8 =====

void FUN_01e136f8(int param_1)

{
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0x40000000;
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}



// ===== FAT.MBItemCharge.TimeWithLock$$.ctor RVA 0x1e03718 =====

void FUN_01e13718(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}


