/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ObjectMan$$GetBasicConfig RVA 0x1cba5b0 =====

undefined4 FUN_01cca5b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0xae,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if ((*(int *)(iVar1 + 0x54) == 0) ||
       (iVar1 = func_0x01cae7f4(*(int *)(iVar1 + 0x54),param_2,&uStack_14,0), iVar1 == 0)) {
      uStack_14 = func_0x01cd2880(param_1,param_2);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xae,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x021776d0(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.ObjectMan$$GetMergeItemConfig RVA 0x1cbcae0 =====

undefined4 FUN_01cccae0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x353,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if ((*(int *)(iVar1 + 0x54) == 0) ||
       (iVar1 = func_0x01caeb8c(*(int *)(iVar1 + 0x54),param_2,&uStack_14,0), iVar1 == 0)) {
      uStack_14 = func_0x01cd2a78(param_1,param_2);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x353,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02185a38(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.ObjectMan$$GetItemConfig RVA 0x1cc0298 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cd0298(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01cd0334 + 0x1cd02b0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd0338 + 0x1cd02c4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9729,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9729,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02276058 + 0x2275f64);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0227605c + 0x2275f78),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
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
    uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02276060 + 0x2276048));
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  iVar3 = **(int **)(_UNK_01cd033c + 0x1cd0324);
  if (*(int *)(iVar3 + 0x1c) == 0) {
    func_0x0140024c(iVar3);
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d66780(iVar1,param_2,&stack0xffffffec,*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 8));
  return 0;
}



// ===== FAT.ObjectMan$$GetRandomBoxConfig RVA 0x1cc0340 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cd0340(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01cd03dc + 0x1cd0358);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd03e0 + 0x1cd036c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x819,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x819,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02197ae0 + 0x21979ec);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02197ae4 + 0x2197a00),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
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
    uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02197ae8 + 0x2197ad0));
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  iVar3 = **(int **)(_UNK_01cd03e4 + 0x1cd03cc);
  if (*(int *)(iVar3 + 0x1c) == 0) {
    func_0x0140024c(iVar3);
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d66780(iVar1,param_2,&stack0xffffffec,*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 8));
  return 0;
}



// ===== FAT.ObjectMan$$_OnConfigLoaded RVA 0x1cc044c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cd044c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar8 = (char *)(_UNK_01cd1040 + 0x1cd0464);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd1044 + 0x1cd0478));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1048 + 0x1cd0484));
    func_0x01384978(*(undefined4 *)(_UNK_01cd104c + 0x1cd0490));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1050 + 0x1cd049c));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1054 + 0x1cd04a8));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1058 + 0x1cd04b4));
    func_0x01384978(*(undefined4 *)(_UNK_01cd14b4 + 0x1cd04c0));
    func_0x01384978(*(undefined4 *)(_UNK_01cd14b8 + 0x1cd04cc));
    func_0x01384978(*(undefined4 *)(_UNK_01cd14bc + 0x1cd04d8));
    func_0x01384978(*(undefined4 *)(_UNK_01cd14dc + 0x1cd04e4));
    func_0x01384978(*(undefined4 *)(_UNK_01cd14e0 + 0x1cd04f0));
    func_0x01384978(*(undefined4 *)(_UNK_01cd14e4 + 0x1cd04fc));
    func_0x01384978(*(undefined4 *)(_UNK_01cd14e8 + 0x1cd0508));
    func_0x01384978(*(undefined4 *)(_UNK_01cd150c + 0x1cd0514));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1514 + 0x1cd0520));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1518 + 0x1cd052c));
    func_0x01384978(*(undefined4 *)(_UNK_01cd151c + 0x1cd0538));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1520 + 0x1cd0544));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1524 + 0x1cd0550));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1528 + 0x1cd055c));
    func_0x01384978(*(undefined4 *)(_UNK_01cd152c + 0x1cd0568));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1530 + 0x1cd0574));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1578 + 0x1cd0580));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1584 + 0x1cd058c));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1588 + 0x1cd0598));
    func_0x01384978(*(undefined4 *)(_UNK_01cd158c + 0x1cd05a4));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1590 + 0x1cd05b0));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1594 + 0x1cd05bc));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1598 + 0x1cd05c8));
    func_0x01384978(*(undefined4 *)(_UNK_01cd15cc + 0x1cd05d4));
    func_0x01384978(*(undefined4 *)(_UNK_01cd15d4 + 0x1cd05e0));
    func_0x01384978(*(undefined4 *)(_UNK_01cd15d8 + 0x1cd05ec));
    func_0x01384978(*(undefined4 *)(_UNK_01cd15dc + 0x1cd05f8));
    func_0x01384978(*(undefined4 *)(_UNK_01cd15e0 + 0x1cd0604));
    func_0x01384978(*(undefined4 *)(_UNK_01cd15e4 + 0x1cd0610));
    func_0x01384978(*(undefined4 *)(_UNK_01cd15e8 + 0x1cd061c));
    func_0x01384978(*(undefined4 *)(_UNK_01cd15ec + 0x1cd0628));
    func_0x01384978(*(undefined4 *)(_UNK_01cd15f0 + 0x1cd0634));
    func_0x01384978(*(undefined4 *)(_UNK_01cd15f4 + 0x1cd0640));
    func_0x01384978(*(undefined4 *)(_UNK_01cd15f8 + 0x1cd064c));
    func_0x01384978(*(undefined4 *)(_UNK_01cd15fc + 0x1cd0658));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1600 + 0x1cd0664));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1604 + 0x1cd0670));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1608 + 0x1cd067c));
    func_0x01384978(*(undefined4 *)(_UNK_01cd160c + 0x1cd0688));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1610 + 0x1cd0694));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1614 + 0x1cd06a0));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1618 + 0x1cd06ac));
    func_0x01384978(*(undefined4 *)(_UNK_01cd161c + 0x1cd06b8));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1620 + 0x1cd06c4));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1624 + 0x1cd06d0));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1628 + 0x1cd06dc));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x9712,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    uVar11 = *(undefined4 *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_01ca4394(iVar1,0);
    piVar12 = *(int **)(_UNK_01cd162c + 0x1cd077c);
    iVar3 = *piVar12;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar12;
    }
    iVar9 = *(int *)(*(int *)(iVar3 + 0x5c) + 4);
    if (iVar9 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar12;
      }
      uVar10 = **(undefined4 **)(iVar3 + 0x5c);
      iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd1630 + 0x1cd07c4));
      func_0x024519f0(iVar9,uVar10,**(undefined4 **)(_UNK_01cd1634 + 0x1cd07e4),0);
      *(int *)(*(int *)(*piVar12 + 0x5c) + 4) = iVar9;
    }
    func_0x03017ffc(param_1,uVar11,uVar2,iVar9,1,**(undefined4 **)(_UNK_01cd1638 + 0x1cd0810));
    uVar11 = *(undefined4 *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar4 = (int *)FUN_01ca7780(iVar1,0);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar4;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01cd163c + 0x1cd0860)) {
          puVar5 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xd8);
          goto LAB_01cd08a8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01cd163c + 0x1cd0860),3);
LAB_01cd08a8:
    uVar2 = (*(code *)*puVar5)(piVar4,puVar5[1]);
    iVar3 = *piVar12;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar12;
    }
    iVar9 = *(int *)(*(int *)(iVar3 + 0x5c) + 8);
    if (iVar9 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar12;
      }
      uVar10 = **(undefined4 **)(iVar3 + 0x5c);
      iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd1640 + 0x1cd0908));
      func_0x024519f0(iVar9,uVar10,**(undefined4 **)(_UNK_01cd1644 + 0x1cd0928),0);
      *(int *)(*(int *)(*piVar12 + 0x5c) + 8) = iVar9;
    }
    func_0x03017ffc(param_1,uVar11,uVar2,iVar9,0x200000,**(undefined4 **)(_UNK_01cd1648 + 0x1cd0954)
                   );
    uVar11 = *(undefined4 *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_01ca3e14(iVar1,0);
    iVar3 = *piVar12;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar12;
    }
    iVar9 = *(int *)(*(int *)(iVar3 + 0x5c) + 0xc);
    if (iVar9 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar12;
      }
      uVar10 = **(undefined4 **)(iVar3 + 0x5c);
      iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd164c + 0x1cd09d4));
      func_0x024519f0(iVar9,uVar10,**(undefined4 **)(_UNK_01cd1650 + 0x1cd09f4),0);
      *(int *)(*(int *)(*piVar12 + 0x5c) + 0xc) = iVar9;
    }
    func_0x03017ffc(param_1,uVar11,uVar2,iVar9,0x200,**(undefined4 **)(_UNK_01cd1654 + 0x1cd0a20));
    uVar11 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_01ca3ec4(iVar1,0);
    iVar3 = *piVar12;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar12;
    }
    iVar9 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x10);
    if (iVar9 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar12;
      }
      uVar10 = **(undefined4 **)(iVar3 + 0x5c);
      iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd1658 + 0x1cd0aa0));
      func_0x024519f0(iVar9,uVar10,**(undefined4 **)(_UNK_01cd165c + 0x1cd0ac0),0);
      *(int *)(*(int *)(*piVar12 + 0x5c) + 0x10) = iVar9;
    }
    func_0x03017ffc(param_1,uVar11,uVar2,iVar9,0x400,**(undefined4 **)(_UNK_01cd1660 + 0x1cd0aec));
    uVar11 = *(undefined4 *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_01ca3f5c(iVar1,0);
    iVar3 = *piVar12;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar12;
    }
    iVar9 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x14);
    if (iVar9 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar12;
      }
      uVar10 = **(undefined4 **)(iVar3 + 0x5c);
      iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd1664 + 0x1cd0b6c));
      func_0x024519f0(iVar9,uVar10,**(undefined4 **)(_UNK_01cd1668 + 0x1cd0b8c),0);
      *(int *)(*(int *)(*piVar12 + 0x5c) + 0x14) = iVar9;
    }
    func_0x03017ffc(param_1,uVar11,uVar2,iVar9,0x1000,**(undefined4 **)(_UNK_01cd166c + 0x1cd0bb8));
    uVar11 = *(undefined4 *)(param_1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_01ca7d10(iVar1,0);
    iVar3 = *piVar12;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar12;
    }
    iVar9 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x18);
    if (iVar9 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar12;
      }
      uVar10 = **(undefined4 **)(iVar3 + 0x5c);
      iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd1670 + 0x1cd0c38));
      func_0x024519f0(iVar9,uVar10,**(undefined4 **)(_UNK_01cd1674 + 0x1cd0c58),0);
      *(int *)(*(int *)(*piVar12 + 0x5c) + 0x18) = iVar9;
    }
    func_0x03017ffc(param_1,uVar11,uVar2,iVar9,0x4000,**(undefined4 **)(_UNK_01cd1678 + 0x1cd0c84));
    uVar11 = *(undefined4 *)(param_1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_01ca7dc0(iVar1,0);
    iVar3 = *piVar12;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar12;
    }
    iVar9 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x1c);
    if (iVar9 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar12;
      }
      uVar10 = **(undefined4 **)(iVar3 + 0x5c);
      iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd167c + 0x1cd0d04));
      func_0x024519f0(iVar9,uVar10,**(undefined4 **)(_UNK_01cd1680 + 0x1cd0d24),0);
      *(int *)(*(int *)(*piVar12 + 0x5c) + 0x1c) = iVar9;
    }
    func_0x03017ffc(param_1,uVar11,uVar2,iVar9,0x8000,**(undefined4 **)(_UNK_01cd1684 + 0x1cd0d50));
    uVar11 = *(undefined4 *)(param_1 + 0x28);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_01ca7f38(iVar1,0);
    iVar3 = *piVar12;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar12;
    }
    iVar9 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x20);
    if (iVar9 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar12;
      }
      uVar10 = **(undefined4 **)(iVar3 + 0x5c);
      iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd1688 + 0x1cd0dd0));
      func_0x024519f0(iVar9,uVar10,**(undefined4 **)(_UNK_01cd168c + 0x1cd0df0),0);
      *(int *)(*(int *)(*piVar12 + 0x5c) + 0x20) = iVar9;
    }
    func_0x03017ffc(param_1,uVar11,uVar2,iVar9,0x400000,**(undefined4 **)(_UNK_01cd1690 + 0x1cd0e1c)
                   );
    uVar11 = *(undefined4 *)(param_1 + 0x2c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_01ca449c(iVar1,0);
    iVar3 = *piVar12;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar12;
    }
    iVar9 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x24);
    if (iVar9 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar12;
      }
      uVar10 = **(undefined4 **)(iVar3 + 0x5c);
      iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd1694 + 0x1cd0e9c));
      func_0x024519f0(iVar9,uVar10,**(undefined4 **)(_UNK_01cd1698 + 0x1cd0ebc),0);
      *(int *)(*(int *)(*piVar12 + 0x5c) + 0x24) = iVar9;
    }
    func_0x03017ffc(param_1,uVar11,uVar2,iVar9,0x800000,**(undefined4 **)(_UNK_01cd169c + 0x1cd0ee8)
                   );
    uVar11 = *(undefined4 *)(param_1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_01ca4070(iVar1,0);
    iVar3 = *piVar12;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar12;
    }
    iVar9 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x28);
    if (iVar9 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar12;
      }
      uVar10 = **(undefined4 **)(iVar3 + 0x5c);
      iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd16a0 + 0x1cd0f68));
      func_0x024519f0(iVar9,uVar10,**(undefined4 **)(_UNK_01cd16a4 + 0x1cd0f88),0);
      *(int *)(*(int *)(*piVar12 + 0x5c) + 0x28) = iVar9;
    }
    func_0x03017ffc(param_1,uVar11,uVar2,iVar9,0x1000000,
                    **(undefined4 **)(_UNK_01cd16a8 + 0x1cd0fb4));
    uVar11 = *(undefined4 *)(param_1 + 0x34);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar4 = (int *)FUN_01ca4444(iVar1,0);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar4;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01cd16ac + 0x1cd1004)) {
          puVar5 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xd8);
          goto LAB_01cd1068;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01cd16ac + 0x1cd1004),3);
LAB_01cd1068:
    uVar2 = (*(code *)*puVar5)(piVar4,puVar5[1]);
    iVar3 = *piVar12;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar12;
    }
    iVar9 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x2c);
    if (iVar9 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar12;
      }
      uVar10 = **(undefined4 **)(iVar3 + 0x5c);
      iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd16b0 + 0x1cd10c8));
      func_0x024519f0(iVar9,uVar10,**(undefined4 **)(_UNK_01cd16b4 + 0x1cd10e8),0);
      *(int *)(*(int *)(*piVar12 + 0x5c) + 0x2c) = iVar9;
    }
    func_0x03017ffc(param_1,uVar11,uVar2,iVar9,1,**(undefined4 **)(_UNK_01cd16b8 + 0x1cd1114));
    iVar3 = *(int *)(param_1 + 0x38);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x024519f4(iVar3,**(undefined4 **)(_UNK_01cd16bc + 0x1cd1144));
    uVar11 = *(undefined4 *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_01cabb84(iVar1,0);
    iVar3 = *piVar12;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar12;
    }
    iVar9 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x30);
    if (iVar9 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar12;
      }
      uVar10 = **(undefined4 **)(iVar3 + 0x5c);
      iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd16c0 + 0x1cd11b8));
      func_0x024519f0(iVar9,uVar10,**(undefined4 **)(_UNK_01cd16c4 + 0x1cd11d8),0);
      *(int *)(*(int *)(*piVar12 + 0x5c) + 0x30) = iVar9;
    }
    func_0x03017ffc(param_1,uVar11,uVar2,iVar9,0x2000000,
                    **(undefined4 **)(_UNK_01cd16c8 + 0x1cd1204));
    uVar11 = *(undefined4 *)(param_1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_01ca4120(iVar1,0);
    iVar3 = *piVar12;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar12;
    }
    iVar9 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x34);
    if (iVar9 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar12;
      }
      uVar10 = **(undefined4 **)(iVar3 + 0x5c);
      iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd16cc + 0x1cd1284));
      func_0x024519f0(iVar9,uVar10,**(undefined4 **)(_UNK_01cd16d0 + 0x1cd12a4),0);
      *(int *)(*(int *)(*piVar12 + 0x5c) + 0x34) = iVar9;
    }
    func_0x03017ffc(param_1,uVar11,uVar2,iVar9,0x4000000,
                    **(undefined4 **)(_UNK_01cd16d4 + 0x1cd12d0));
    uVar11 = *(undefined4 *)(param_1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_01ca41d0(iVar1,0);
    iVar1 = *piVar12;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar12;
    }
    iVar3 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x38);
    if (iVar3 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar12;
      }
      uVar10 = **(undefined4 **)(iVar1 + 0x5c);
      iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01cd16d8 + 0x1cd1350));
      func_0x024519f0(iVar3,uVar10,**(undefined4 **)(_UNK_01cd16dc + 0x1cd1370),0);
      *(int *)(*(int *)(*piVar12 + 0x5c) + 0x38) = iVar3;
    }
    func_0x03017ffc(param_1,uVar11,uVar2,iVar3,0x20000,**(undefined4 **)(_UNK_01cd16e0 + 0x1cd139c))
    ;
    func_0x01cd1700(param_1,0);
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450870(iVar1,**(undefined4 **)(_UNK_01cd16e4 + 0x1cd13dc));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0382ab5c(&uStack_38,iVar1,**(undefined4 **)(_UNK_01cd16e8 + 0x1cd1408));
    puVar5 = *(undefined4 **)(_UNK_01cd16ec + 0x1cd141c);
    while (iVar3 = func_0x01475908(&uStack_38,*puVar5), iVar1 = iStack_2c, iVar3 != 0) {
      if (iStack_2c == 0) {
        func_0x01384bf0();
      }
      if ((*(int *)(iVar1 + 0x28) < 1) && (*(int *)(iVar1 + 0x2c) != 0)) {
        iVar3 = *(int *)(param_1 + 0x50);
        uVar11 = *(undefined4 *)(iVar1 + 0xc);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar3 + 8);
        uVar6 = *(uint *)(iVar3 + 0xc);
        piVar12 = *(int **)(_UNK_01cd16f0 + 0x1cd1488);
        *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
        iVar9 = *piVar12;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (uVar6 < *(uint *)(iVar1 + 0xc)) {
          *(uint *)(iVar3 + 0xc) = uVar6 + 1;
          *(undefined4 *)(iVar1 + uVar6 * 4 + 0x10) = uVar11;
        }
        else {
          func_0x0325970c(iVar3,uVar11,
                          *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
        }
      }
    }
    func_0x02450874(&uStack_38,**(undefined4 **)(_UNK_01cd16f4 + 0x1cd14f8));
  }
  else {
    iVar1 = func_0x0229f13c(0x9712,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ObjectMan$$OnMergeBoardVersionUpdate RVA 0x1cc1700 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cd1700(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_01cd19fc + 0x1cd171c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd1a00 + 0x1cd1730));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1a04 + 0x1cd173c));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1a08 + 0x1cd1748));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1a0c + 0x1cd1754));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1a10 + 0x1cd1760));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1a14 + 0x1cd176c));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1a18 + 0x1cd1778));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1a1c + 0x1cd1784));
    *pcVar4 = '\x01';
  }
  iStack_24 = 0;
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x9725,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_01ca454c(iVar1,param_2,&iStack_24,0);
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02451920(iVar1,0x2000,&iStack_28,**(undefined4 **)(_UNK_01cd1a20 + 0x1cd1844));
    if ((iVar1 == 0) || (iStack_24 != iStack_28)) {
      piVar7 = *(int **)(_UNK_01cd1a24 + 0x1cd1870);
      uVar5 = *(undefined4 *)(param_1 + 0x18);
      iVar1 = *piVar7;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar7;
      }
      iVar6 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x3c);
      if (iVar6 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar7;
        }
        uVar3 = **(undefined4 **)(iVar1 + 0x5c);
        iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01cd1a28 + 0x1cd18bc));
        func_0x024519f0(iVar6,uVar3,**(undefined4 **)(_UNK_01cd1a2c + 0x1cd18dc),0);
        *(int *)(*(int *)(*piVar7 + 0x5c) + 0x3c) = iVar6;
      }
      func_0x03017784(param_1,uVar5,iVar6,0x2000,**(undefined4 **)(_UNK_01cd1a30 + 0x1cd1908));
      iVar1 = *piVar7;
      uVar5 = *(undefined4 *)(param_1 + 0x18);
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar7;
      }
      iVar6 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x40);
      if (iVar6 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar7;
        }
        uVar3 = **(undefined4 **)(iVar1 + 0x5c);
        iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01cd1a34 + 0x1cd1964));
        func_0x024519f0(iVar6,uVar3,**(undefined4 **)(_UNK_01cd1a38 + 0x1cd1984),0);
        *(int *)(*(int *)(*piVar7 + 0x5c) + 0x40) = iVar6;
      }
      func_0x03017ffc(param_1,uVar5,uVar2,iVar6,0x2000,**(undefined4 **)(_UNK_01cd1a3c + 0x1cd19b0))
      ;
      iVar1 = iStack_24;
      iVar6 = *(int *)(param_1 + 0x58);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x02451928(iVar6,0x2000,iVar1,**(undefined4 **)(_UNK_01cd1a40 + 0x1cd19ec));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9725,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ObjectMan$$_TryGetRplcReplaceInfo RVA 0x1cc1a44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cd1a44(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  float extraout_s0;
  undefined8 uVar12;
  undefined4 uStack_40;
  uint uStack_3c;
  float fStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_01cd1ef0 + 0x1cd1a64);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd1ef4 + 0x1cd1a7c));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1ef8 + 0x1cd1a88));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1efc + 0x1cd1a94));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1f00 + 0x1cd1aa0));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1f04 + 0x1cd1aac));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1f08 + 0x1cd1ab8));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1f0c + 0x1cd1ac4));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1f10 + 0x1cd1ad0));
    func_0x01384978(*(undefined4 *)(_UNK_01cd1f14 + 0x1cd1adc));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  fStack_34 = 0.0;
  iVar2 = func_0x0229f06c(0x99,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x38);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x024519f8(iVar2,param_2,param_4,**(undefined4 **)(_UNK_01cd1f18 + 0x1cd1b74));
    if (iVar2 == 0) {
      param_4[1] = 0;
      *param_4 = 0;
      if (param_3 == 0) {
        iVar2 = *(int *)(param_1 + 0x38);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar3 = 0;
        func_0x024519fc(iVar2,param_2,0,0,**(undefined4 **)(_UNK_01cd1f1c + 0x1cd1c38));
      }
      else {
        iVar10 = *(int *)(param_3 + 0x18);
        iVar2 = func_0x01489db8(iVar10,0);
        if (iVar2 == 0) {
          pcVar8 = (char *)(_UNK_01cd1f24 + 0x1cd1bd0);
          if (*pcVar8 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01cd1f28 + 0x1cd1be4));
            *pcVar8 = '\x01';
          }
          if (iVar10 == 0) {
            uVar3 = 0;
            iVar2 = 0;
          }
          else {
            iVar2 = func_0x0148d698(iVar10,0);
            uVar3 = *(uint *)(iVar10 + 8);
          }
          uVar12 = func_0x01adfe1c(iVar2,uVar3,0x3a,**(undefined4 **)(_UNK_01cd1f2c + 0x1cd1c64));
          uVar4 = (uint)uVar12;
          uVar5 = uVar3;
          if (-1 < (int)uVar4) {
            iVar10 = **(int **)(_UNK_01cd1f30 + 0x1cd1c8c);
            if (uVar3 < uVar4) {
              func_0x0145b368(0,(int)((ulonglong)uVar12 >> 0x20),uVar3);
            }
            uVar5 = uVar4;
            if ((*(ushort *)(*(int *)(iVar10 + 0x10) + 0xbd) & 1) == 0) {
              func_0x014001f0();
            }
          }
          func_0x02451a00(&uStack_40,iVar2,uVar5,0);
          iVar10 = func_0x024509d0(uStack_40,uStack_3c,&iStack_28,0);
          if ((((iVar10 != 0) && (0 < iStack_28)) && (-1 < (int)uVar4)) &&
             (iVar10 = uVar4 + 1, iVar10 < (int)uVar3)) {
            iVar9 = **(int **)(_UNK_01cd1f34 + 0x1cd1d0c);
            if (uVar3 <= uVar4) {
              func_0x0145b368(0);
            }
            if ((*(ushort *)(*(int *)(iVar9 + 0x10) + 0xbd) & 1) == 0) {
              func_0x014001f0();
            }
            func_0x02451a00(&uStack_40,iVar2 + iVar10 * 2,uVar3 - iVar10,0);
            uVar3 = uStack_3c;
            uVar6 = uStack_40;
            uStack_2c = uStack_3c;
            uStack_30 = uStack_40;
            uVar5 = func_0x01adfe1c(uStack_40,uStack_3c,0x3a,
                                    **(undefined4 **)(_UNK_01cd1f38 + 0x1cd1d5c));
            if (-1 < (int)uVar5) {
              iVar2 = **(int **)(_UNK_01cd1f3c + 0x1cd1d88);
              if (uVar3 < uVar5) {
                func_0x0145b368(0);
                uVar6 = uStack_30;
              }
              if ((*(ushort *)(*(int *)(iVar2 + 0x10) + 0xbd) & 1) == 0) {
                func_0x014001f0();
              }
              func_0x02451a00(&uStack_40,uVar6,uVar5,0);
              uStack_2c = uStack_3c;
              uStack_30 = uStack_40;
            }
            iVar2 = func_0x0362c8c8(&uStack_30,**(undefined4 **)(_UNK_01cd1f40 + 0x1cd1ddc));
            if (iVar2 == 0) {
              uVar6 = func_0x0362c518(&uStack_30,**(undefined4 **)(_UNK_01cd1f44 + 0x1cd1df8));
              if (*(int *)(**(int **)(_UNK_01cd1f48 + 0x1cd1e10) + 0x74) == 0) {
                func_0x01384ab4();
              }
              uVar7 = func_0x024506d0(0);
              iVar10 = func_0x024506e0(uVar6,0xa7,uVar7,&fStack_34,0);
              iVar2 = iStack_28;
              bVar11 = iVar10 != 0;
              fVar1 = extraout_s0;
              if (bVar11) {
                fVar1 = fStack_34;
              }
              if ((!bVar11 || 0.0 <= fStack_34) && (bVar11 && fStack_34 != 0.0)) {
                param_4[1] = (int)fVar1;
                *param_4 = iStack_28;
                iVar10 = *(int *)(param_1 + 0x38);
                if (iVar10 == 0) {
                  func_0x01384bf0();
                }
                func_0x024519fc(iVar10,param_2,iVar2,fVar1,
                                **(undefined4 **)(_UNK_01cd1f4c + 0x1cd1edc));
                return 1;
              }
            }
          }
        }
        iVar9 = *param_4;
        iVar2 = *(int *)(param_1 + 0x38);
        iVar10 = param_4[1];
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x024519fc(iVar2,param_2,iVar9,iVar10,**(undefined4 **)(_UNK_01cd1f20 + 0x1cd1e88));
        uVar3 = 0;
      }
    }
    else {
      uVar3 = (uint)(0 < *param_4);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x99,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02176bc4(iVar2,param_1,param_2,param_3,param_4,0);
  }
  return uVar3;
}



// ===== FAT.ObjectMan$$WalkAllFreeItem RVA 0x1cc1f50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cd1f50(int param_1)

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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_01cd2030 + 0x1cd1f68);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd2034 + 0x1cd1f7c));
    func_0x01384978(*(undefined4 *)(_UNK_01cd2038 + 0x1cd1f88));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9726,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9726,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_02275e18 + 0x2275d38);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02275e1c + 0x2275d4c),param_1,0);
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
    func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02275e20 + 0x2275e08));
    return;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0325a3b4(&uStack_30,iVar1,**(undefined4 **)(_UNK_01cd203c + 0x1cd1ffc));
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  uStack_18 = uStack_28;
  uStack_14 = uStack_24;
  func_0x01384abc(**(undefined4 **)(_UNK_01cd2040 + 0x1cd2018),&uStack_30);
  return;
}



// ===== FAT.ObjectMan$$WalkAllIdWithType RVA 0x1cc2044 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01cd2044(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
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
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x95b1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x95b1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_0226b488 + 0x226b394);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0226b48c + 0x226b3a8),param_1,param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
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
    iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0226b490 + 0x226b478));
    return iVar1;
  }
  pcVar5 = (char *)(_UNK_01cd2158 + 0x1cd20c0);
  uStack_18 = unaff_r4;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd215c + 0x1cd20d4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x95b2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x95b2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = uStack_18;
    pcVar5 = (char *)(_UNK_0226b368 + 0x226b274);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0226b36c + 0x226b288),param_1,param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
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
    iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0226b370 + 0x226b358));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01cd2160 + 0x1cd2134));
  func_0x0244f5a0(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ===== FAT.ObjectMan$$WalkAllIdWithMask RVA 0x1cc20a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01cd20a8(undefined4 param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01cd2158 + 0x1cd20c0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd215c + 0x1cd20d4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x95b2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x95b2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0226b368 + 0x226b274);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0226b36c + 0x226b288),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
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
    iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0226b370 + 0x226b358));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01cd2160 + 0x1cd2134));
  func_0x0244f5a0(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ===== FAT.ObjectMan.<WalkAllIdWithMask>d__28$$.ctor RVA 0x1cc2164 =====

void FUN_01cd2164(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.ObjectMan$$IsObject RVA 0x1cc2180 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cd2180(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
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
  
  pcVar5 = (char *)(_UNK_01cd2228 + 0x1cd2198);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd222c + 0x1cd21ac));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9727,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9727,0);
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
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03d5a510(iVar1,param_2,
                          *(undefined4 *)
                           (*(int *)(*(int *)(**(int **)(_UNK_01cd2230 + 0x1cd221c) + 0x10) + 0x60)
                           + 0x84));
  return ~uVar2 >> 0x1f;
}



// ===== FAT.ObjectMan$$IsOneOfType RVA 0x1cc2234 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cd2234(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uStack_1c;
  
  pcVar3 = (char *)(_UNK_01cd2308 + 0x1cd2254);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd230c + 0x1cd2268));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x83a,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x48);
    uStack_1c = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02450590(iVar1,param_2,&uStack_1c,**(undefined4 **)(_UNK_01cd2310 + 0x1cd22ec));
    uVar2 = 0;
    if ((uStack_1c & param_3) != 0) {
      uVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x83a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217a5ac(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.ObjectMan$$IsType RVA 0x1cc2314 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cd2314(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uStack_1c;
  
  pcVar3 = (char *)(_UNK_01cd23f0 + 0x1cd2334);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd23f4 + 0x1cd2348));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1813,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x48);
    uStack_1c = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02450590(iVar1,param_2,&uStack_1c,**(undefined4 **)(_UNK_01cd23f8 + 0x1cd23cc));
    uVar2 = (uint)((uStack_1c & param_3) == param_3);
  }
  else {
    iVar1 = func_0x0229f13c(0x1813,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217a5ac(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.ObjectMan$$IsType RVA 0x1cc23fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cd23fc(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uStack_1c;
  
  pcVar3 = (char *)(_UNK_01cd24d8 + 0x1cd241c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd24dc + 0x1cd2430));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x343,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x48);
    uStack_1c = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02450590(iVar1,param_2,&uStack_1c,**(undefined4 **)(_UNK_01cd24e0 + 0x1cd24b4));
    uVar2 = (uint)((uStack_1c & param_3) == param_3);
  }
  else {
    iVar1 = func_0x0229f13c(0x343,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021855fc(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.ObjectMan$$DeduceTypeForId RVA 0x1cc24e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cd24e4(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  uint uStack_1c;
  
  pcVar3 = (char *)(_UNK_01cd2700 + 0x1cd2500);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd2704 + 0x1cd2514));
    func_0x01384978(*(undefined4 *)(_UNK_01cd2708 + 0x1cd2520));
    func_0x01384978(*(undefined4 *)(_UNK_01cd270c + 0x1cd252c));
    func_0x01384978(*(undefined4 *)(_UNK_01cd2710 + 0x1cd2538));
    func_0x01384978(*(undefined4 *)(_UNK_01cd2714 + 0x1cd2544));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x9b,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x48);
    uStack_1c = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450590(iVar1,param_2,&uStack_1c,**(undefined4 **)(_UNK_01cd2718 + 0x1cd25d0));
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x54);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0325cf6c(&uStack_30,iVar1,**(undefined4 **)(_UNK_01cd271c + 0x1cd2608));
      puVar4 = *(undefined4 **)(_UNK_01cd2720 + 0x1cd261c);
      do {
        iVar1 = func_0x01470268(&uStack_30,*puVar4);
        uVar2 = uStack_24;
        if (iVar1 == 0) {
          func_0x02451a10(&uStack_30,**(undefined4 **)(_UNK_01cd2724 + 0x1cd2668));
          return 0;
        }
      } while ((uStack_1c & uStack_24) != uStack_24);
      func_0x02451a10(&uStack_30,**(undefined4 **)(_UNK_01cd2730 + 0x1cd264c));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02176e80(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.ObjectMan$$GetFullConfig RVA 0x1cc2734 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cd2734(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01cd2864 + 0x1cd2750);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd2868 + 0x1cd2764));
    func_0x01384978(*(undefined4 *)(_UNK_01cd286c + 0x1cd2770));
    func_0x01384978(*(undefined4 *)(_UNK_01cd2870 + 0x1cd277c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9728,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    uStack_1c = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450cc8(iVar1,param_2,&uStack_1c,**(undefined4 **)(_UNK_01cd2874 + 0x1cd27f8));
    if (iVar1 == 0) {
      uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01cd2878 + 0x1cd2814));
      func_0x01cd01ec(uVar2,param_2,param_1);
      iVar1 = *(int *)(param_1 + 0x1c);
      uStack_1c = uVar2;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02450824(iVar1,param_2,uVar2,**(undefined4 **)(_UNK_01cd287c + 0x1cd2850));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9728,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = func_0x02275e24(iVar1,param_1,param_2,0);
  }
  return uStack_1c;
}



// ===== FAT.ObjectMan$$GetBasicConfigRaw RVA 0x1cc2880 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cd2880(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01cd291c + 0x1cd2898);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd2920 + 0x1cd28ac));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021777e4 + 0x21776f0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021777e8 + 0x2177704),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
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
    uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021777ec + 0x21777d4));
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar3 = **(int **)(_UNK_01cd2924 + 0x1cd290c);
  if (*(int *)(iVar3 + 0x1c) == 0) {
    func_0x0140024c(iVar3);
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d66780(iVar1,param_2,&stack0xffffffec,*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 8));
  return 0;
}



// ===== FAT.ObjectMan$$GetCoinConfig RVA 0x1cc2928 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cd2928(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01cd29c4 + 0x1cd2940);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd29c8 + 0x1cd2954));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021737c4 + 0x21736d0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021737c8 + 0x21736e4),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
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
    uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021737cc + 0x21737b4));
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  iVar3 = **(int **)(_UNK_01cd29cc + 0x1cd29b4);
  if (*(int *)(iVar3 + 0x1c) == 0) {
    func_0x0140024c(iVar3);
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d66780(iVar1,param_2,&stack0xffffffec,*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 8));
  return 0;
}



// ===== FAT.ObjectMan$$GetExpressConfig RVA 0x1cc29d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cd29d0(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01cd2a6c + 0x1cd29e8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd2a70 + 0x1cd29fc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x81a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x81a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02197d64 + 0x2197c70);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02197d68 + 0x2197c84),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
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
    uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02197d6c + 0x2197d54));
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  iVar3 = **(int **)(_UNK_01cd2a74 + 0x1cd2a5c);
  if (*(int *)(iVar3 + 0x1c) == 0) {
    func_0x0140024c(iVar3);
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d66780(iVar1,param_2,&stack0xffffffec,*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 8));
  return 0;
}



// ===== FAT.ObjectMan$$GetMergeItemConfigRaw RVA 0x1cc2a78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cd2a78(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01cd2b14 + 0x1cd2a90);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd2b18 + 0x1cd2aa4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x356,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x356,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02185b4c + 0x2185a58);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02185b50 + 0x2185a6c),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
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
    uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02185b54 + 0x2185b3c));
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  iVar3 = **(int **)(_UNK_01cd2b1c + 0x1cd2b04);
  if (*(int *)(iVar3 + 0x1c) == 0) {
    func_0x0140024c(iVar3);
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d66780(iVar1,param_2,&stack0xffffffec,*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 8));
  return 0;
}



// ===== FAT.ObjectMan$$GetTokenConfig RVA 0x1cc2b20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cd2b20(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01cd2bbc + 0x1cd2b38);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd2bc0 + 0x1cd2b4c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021738e4 + 0x21737f0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021738e8 + 0x2173804),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
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
    uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021738ec + 0x21738d4));
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  iVar3 = **(int **)(_UNK_01cd2bc4 + 0x1cd2bac);
  if (*(int *)(iVar3 + 0x1c) == 0) {
    func_0x0140024c(iVar3);
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d66780(iVar1,param_2,&stack0xffffffec,*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 8));
  return 0;
}



// ===== FAT.ObjectMan$$GetAvatarConfig RVA 0x1cc2bc8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cd2bc8(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01cd2c64 + 0x1cd2be0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd2c68 + 0x1cd2bf4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x972a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x972a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02276178 + 0x2276084);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0227617c + 0x2276098),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
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
    uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02276180 + 0x2276168));
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x40);
  iVar3 = **(int **)(_UNK_01cd2c6c + 0x1cd2c54);
  if (*(int *)(iVar3 + 0x1c) == 0) {
    func_0x0140024c(iVar3);
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d66780(iVar1,param_2,&stack0xffffffec,*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 8));
  return 0;
}



// ===== FAT.ObjectMan$$GetAvatarFrameConfig RVA 0x1cc2c70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cd2c70(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01cd2d0c + 0x1cd2c88);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd2d10 + 0x1cd2c9c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x972b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x972b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02276298 + 0x22761a4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0227629c + 0x22761b8),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
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
    uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_022762a0 + 0x2276288));
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x44);
  iVar3 = **(int **)(_UNK_01cd2d14 + 0x1cd2cfc);
  if (*(int *)(iVar3 + 0x1c) == 0) {
    func_0x0140024c(iVar3);
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d66780(iVar1,param_2,&stack0xffffffec,*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 8));
  return 0;
}



// ===== FAT.ObjectMan$$GetCardPackConfig RVA 0x1cc2d18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cd2d18(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01cd2db4 + 0x1cd2d30);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd2db8 + 0x1cd2d44));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02173a04 + 0x2173910);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173a08 + 0x2173924),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
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
    uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02173a0c + 0x21739f4));
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  iVar3 = **(int **)(_UNK_01cd2dbc + 0x1cd2da4);
  if (*(int *)(iVar3 + 0x1c) == 0) {
    func_0x0140024c(iVar3);
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d66780(iVar1,param_2,&stack0xffffffec,*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 8));
  return 0;
}



// ===== FAT.ObjectMan$$GetCardConfig RVA 0x1cc2dc0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cd2dc0(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01cd2e5c + 0x1cd2dd8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd2e60 + 0x1cd2dec));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7b6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02195398 + 0x21952a4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0219539c + 0x21952b8),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
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
    uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021953a0 + 0x2195388));
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x24);
  iVar3 = **(int **)(_UNK_01cd2e64 + 0x1cd2e4c);
  if (*(int *)(iVar3 + 0x1c) == 0) {
    func_0x0140024c(iVar3);
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d66780(iVar1,param_2,&stack0xffffffec,*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 8));
  return 0;
}



// ===== FAT.ObjectMan$$GetCardJokerConfig RVA 0x1cc2e68 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cd2e68(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01cd2f04 + 0x1cd2e80);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd2f08 + 0x1cd2e94));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8e69,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8e69,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02263244 + 0x2263150);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02263248 + 0x2263164),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
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
    uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0226324c + 0x2263234));
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  iVar3 = **(int **)(_UNK_01cd2f0c + 0x1cd2ef4);
  if (*(int *)(iVar3 + 0x1c) == 0) {
    func_0x0140024c(iVar3);
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d66780(iVar1,param_2,&stack0xffffffec,*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 8));
  return 0;
}



// ===== FAT.ObjectMan$$GetSeasonItemConfig RVA 0x1cc2f10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cd2f10(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01cd2fac + 0x1cd2f28);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd2fb0 + 0x1cd2f3c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x972c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x972c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_022763b8 + 0x22762c4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022763bc + 0x22762d8),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
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
    uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_022763c0 + 0x22763a8));
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar3 = **(int **)(_UNK_01cd2fb4 + 0x1cd2f9c);
  if (*(int *)(iVar3 + 0x1c) == 0) {
    func_0x0140024c(iVar3);
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d66780(iVar1,param_2,&stack0xffffffec,*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 8));
  return 0;
}



// ===== FAT.ObjectMan$$GetSpinConfig RVA 0x1cc2fb8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cd2fb8(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01cd3054 + 0x1cd2fd0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd3058 + 0x1cd2fe4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x81d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x81d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02197e84 + 0x2197d90);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02197e88 + 0x2197da4),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
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
    uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02197e8c + 0x2197e74));
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  iVar3 = **(int **)(_UNK_01cd305c + 0x1cd3044);
  if (*(int *)(iVar3 + 0x1c) == 0) {
    func_0x0140024c(iVar3);
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d66780(iVar1,param_2,&stack0xffffffec,*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 8));
  return 0;
}



// ===== FAT.ObjectMan$$TryGetCurrentCardRoundIdForSeasonItem RVA 0x1cc3060 =====

/* WARNING: Removing unreachable block (ram,0x01cd3498) */
/* WARNING: Removing unreachable block (ram,0x01cd34ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cd3060(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  
  pcVar9 = (char *)(_UNK_01cd35a8 + 0x1cd307c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd35ac + 0x1cd3090));
    func_0x01384978(*(undefined4 *)(_UNK_01cd35b0 + 0x1cd309c));
    func_0x01384978(*(undefined4 *)(_UNK_01cd35b4 + 0x1cd30a8));
    func_0x01384978(*(undefined4 *)(_UNK_01cd35b8 + 0x1cd30b4));
    func_0x01384978(*(undefined4 *)(_UNK_01cd35bc + 0x1cd30c0));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x972d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x972d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    piStack_28 = (int *)0x0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    piStack_28 = (int *)uStack_40;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    func_0x01485238(&uStack_38,0,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x014852b8(&uStack_38,0,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar1 == 0) {
      uVar8 = 2;
    }
    func_0x0245495c(iVar10,uVar11,&uStack_38,uVar8,1,0);
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    *param_2 = iVar1;
    uVar4 = func_0x0245496c(&uStack_38,1,0);
    return uVar4;
  }
  *param_2 = 0;
  iVar1 = FUN_01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xac);
  if (iVar1 == 0) {
    func_0x01384bf0();
    iVar10 = FUN_01b9f79c(0,0);
    func_0x01384bf0();
  }
  else {
    iVar10 = FUN_01b9f79c(iVar1,0);
  }
  if (iVar10 == 0) {
    iVar1 = FUN_01b9e420(iVar1,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01cd35c0 + 0x1cd31c0));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar13 = FUN_01c359e8(iVar1,0);
    iVar10 = (int)((ulonglong)uVar13 >> 0x20);
    uVar4 = (uint)uVar13;
    iVar1 = FUN_01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)FUN_01ca799c(iVar1,9,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    piStack_28 = param_2;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01cd35c4 + 0x1cd3240)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_01cd328c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cd35c4 + 0x1cd3240),0);
LAB_01cd328c:
    piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
    do {
      do {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar2;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_01cd35c8 + 0x1cd32c4)) {
              puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
              goto LAB_01cd330c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cd35c8 + 0x1cd32c4),0);
LAB_01cd330c:
        iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
        if (iVar1 == 0) goto LAB_01cd3420;
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar2;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_01cd35cc + 0x1cd3340)) {
              puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
              goto LAB_01cd3388;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cd35cc + 0x1cd3340),0);
LAB_01cd3388:
        iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar1 + 0x44);
        bVar12 = uVar4 < *(uint *)(iVar1 + 0x40);
      } while (((int)(iVar10 - (iVar5 + (uint)bVar12)) < 0 !=
                (SBORROW4(iVar10,iVar5) != SBORROW4(iVar10 - iVar5,(uint)bVar12))) ||
              (iVar5 = *(int *)(iVar1 + 0x24), bVar12 = uVar4 < *(uint *)(iVar1 + 0x20),
              (int)(iVar10 - (iVar5 + (uint)bVar12)) < 0 ==
              (SBORROW4(iVar10,iVar5) != SBORROW4(iVar10 - iVar5,(uint)bVar12))));
      iVar5 = FUN_01c24918(0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 0xc);
      uVar11 = *(undefined4 *)(iVar1 + 0x10);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = FUN_01ca7be4(iVar5,uVar11,0);
    } while (iVar5 == 0);
    *piStack_28 = *(int *)(iVar1 + 0x10);
LAB_01cd3420:
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_01cd35d0 + 0x1cd3438)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
            goto LAB_01cd3480;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cd35d0 + 0x1cd3438),0);
LAB_01cd3480:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
    iVar1 = *piStack_28;
  }
  else {
    iVar10 = FUN_01b9c6c0(iVar1,0);
    iVar1 = 0;
    if (iVar10 != 0) {
      iVar1 = *(int *)(iVar10 + 0x14);
    }
    *param_2 = iVar1;
  }
  return (uint)(0 < iVar1);
}



// ===== FAT.ObjectMan$$TransSeasonItemToRealId RVA 0x1cc35d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01cd35d8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_01cd3728 + 0x1cd35f4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd372c + 0x1cd3608));
    *pcVar4 = '\x01';
  }
  iStack_1c = 0;
  iStack_20 = 0;
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0x972e,0);
  if (iVar1 == 0) {
    iVar2 = FUN_01cd2f10(param_1,param_2);
    iVar1 = param_2;
    if (iVar2 != 0) {
      iVar1 = FUN_01cd3060(param_1,&iStack_1c);
      iVar5 = *(int *)(iVar2 + 0x14);
      iVar3 = iStack_1c;
      if (iVar1 == 0) {
        iVar3 = 0;
      }
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      puVar6 = *(undefined4 **)(_UNK_01cd3730 + 0x1cd36c0);
      iVar5 = func_0x0345efbc(iVar5,iVar3,&iStack_20,*puVar6);
      if (((iStack_20 < 1) || (iVar1 = iStack_20, iVar5 == 0)) && (iVar1 = param_2, iVar3 != 0)) {
        iVar1 = *(int *)(iVar2 + 0x14);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0345efbc(iVar1,0,&iStack_24,*puVar6);
        iVar1 = param_2;
        if ((iVar2 != 0) && (0 < iStack_24)) {
          iVar1 = iStack_24;
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x972e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02175ef0(iVar1,param_1,param_2,0);
  }
  return iVar1;
}



// ===== FAT.ObjectMan$$TransRplcItemToReal RVA 0x1cc3734 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cd3734(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint in_fpscr;
  float fVar8;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  float fStack_34;
  
  pcVar7 = (char *)(_UNK_01cd394c + 0x1cd3758);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd3950 + 0x1cd3770));
    func_0x01384978(*(undefined4 *)(_UNK_01cd3954 + 0x1cd377c));
    *pcVar7 = '\x01';
  }
  fStack_34 = 0.0;
  iStack_38 = 0;
  iVar2 = func_0x0229f06c(0x91,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x91,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02176d3c(&uStack_40,iVar2,param_2,param_3,param_4,0);
    *param_1 = uStack_40;
    param_1[1] = uStack_3c;
    return;
  }
  iVar2 = func_0x03017e90(param_2,*(undefined4 *)(param_2 + 0x34),param_3,
                          **(undefined4 **)(_UNK_01cd3958 + 0x1cd37fc));
  if (iVar2 == 0) {
    uVar6 = **(undefined4 **)(_UNK_01cd395c + 0x1cd3920);
  }
  else {
    iVar3 = func_0x01cd3974(param_2,iVar2);
    if ((iVar3 != 0) &&
       (iVar3 = FUN_01cd1a44(param_2,param_3,iVar2,&iStack_38), fVar4 = fStack_34, iVar3 != 0)) {
      fVar8 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
      pcVar7 = (char *)(_UNK_01cd3960 + 0x1cd385c);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01cd3964 + 0x1cd3870));
        *pcVar7 = '\x01';
      }
      if (*(int *)(**(int **)(_UNK_01cd3968 + 0x1cd3888) + 0x74) == 0) {
        func_0x01384ab4();
      }
      fVar4 = (float)func_0x02450364(fVar4 * fVar8);
      bVar1 = fVar4 == _UNK_01cd3948;
      iVar3 = (int)fVar4;
      puVar5 = *(undefined4 **)(_UNK_01cd396c + 0x1cd38c4);
      *param_1 = 0;
      param_1[1] = 0;
      uVar6 = *puVar5;
      if (bVar1) {
        iVar3 = -0x80000000;
      }
      iVar2 = iVar3;
      if (iVar3 < 1) {
        iVar2 = 1;
      }
      param_3 = iStack_38;
      if (param_4 < 1) {
        iVar2 = iVar3;
      }
      goto LAB_01cd3938;
    }
    uVar6 = **(undefined4 **)(_UNK_01cd3970 + 0x1cd3900);
    if (*(int *)(iVar2 + 0x14) != 0) {
      param_3 = *(int *)(iVar2 + 0x14);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = param_4;
LAB_01cd3938:
  func_0x038fd264(param_1,param_3,iVar2,uVar6);
  return;
}



// ===== FAT.ObjectMan$$IsInRplcReplacePeriod RVA 0x1cc3974 =====

/* WARNING: Removing unreachable block (ram,0x01cd3c28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01cd3974(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  ulonglong uVar13;
  ulonglong uVar14;
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
  
  pcVar8 = (char *)(_UNK_01cd3d00 + 0x1cd398c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd3d04 + 0x1cd39a0));
    func_0x01384978(*(undefined4 *)(_UNK_01cd3d08 + 0x1cd39ac));
    func_0x01384978(*(undefined4 *)(_UNK_01cd3d0c + 0x1cd39b8));
    func_0x01384978(*(undefined4 *)(_UNK_01cd3d10 + 0x1cd39c4));
    func_0x01384978(*(undefined4 *)(_UNK_01cd3d14 + 0x1cd39d0));
    *pcVar8 = '\x01';
  }
  iVar9 = 0;
  iVar1 = func_0x0229f06c(0x92,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x92,0);
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
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_38,uVar7,0,0);
    iVar1 = func_0x0245496c(&uStack_38,0,0);
    return iVar1;
  }
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + 0x1c);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0xc);
    }
    if (iVar2 != 0 && iVar1 != 0) {
      iVar1 = FUN_01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(param_2 + 0x1c);
      iVar1 = *(int *)(iVar1 + 0xd8);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar13 = func_0x0364c2b4(iVar9,**(undefined4 **)(_UNK_01cd3d18 + 0x1cd3a80));
      piVar3 = (int *)uVar13;
      piVar12 = *(int **)(_UNK_01cd3d1c + 0x1cd3a98);
      piVar11 = *(int **)(_UNK_01cd3d20 + 0x1cd3aa0);
      do {
        do {
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0((int)uVar13,(int)(uVar13 >> 0x20));
          }
          iVar9 = *piVar3;
          uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar12) {
                puVar4 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0xc0);
                goto LAB_01cd3af8;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar12,0);
LAB_01cd3af8:
          iVar9 = (*(code *)*puVar4)(piVar3,puVar4[1]);
          if (iVar9 == 0) {
            iVar9 = 0;
            goto LAB_01cd3bb0;
          }
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar3;
          uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar11) {
                puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
                goto LAB_01cd3b70;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar11,0);
LAB_01cd3b70:
          uVar10 = (*(code *)*puVar4)(piVar3,puVar4[1]);
          uVar13 = CONCAT44(uVar10,uVar10);
        } while (iVar1 == 0);
        uVar14 = func_0x02b3bf9c(iVar1,uVar10,0);
        uVar13 = uVar14 & 0xffffffff00000000;
      } while ((int)uVar14 == 0);
LAB_01cd3bb0:
      if (piVar3 != (int *)0x0) {
        iVar1 = *piVar3;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar11[-1] == **(int **)(_UNK_01cd3d24 + 0x1cd3bc8)) {
              puVar4 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
              goto LAB_01cd3c10;
            }
            uVar5 = uVar5 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01cd3d24 + 0x1cd3bc8),0);
LAB_01cd3c10:
        (*(code *)*puVar4)(piVar3,puVar4[1]);
      }
    }
  }
  return iVar9;
}



// ===== FAT.ObjectMan$$GetItemDesc RVA 0x1cc3d2c =====

/* WARNING: Possible PIC construction at 0x02171da0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02171ebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x028c1238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02171ec0) */
/* WARNING: Removing unreachable block (ram,0x02171da4) */
/* WARNING: Removing unreachable block (ram,0x02171db0) */
/* WARNING: Removing unreachable block (ram,0x02171dbc) */
/* WARNING: Removing unreachable block (ram,0x02171dd0) */
/* WARNING: Removing unreachable block (ram,0x02171dd4) */
/* WARNING: Removing unreachable block (ram,0x02171de0) */
/* WARNING: Removing unreachable block (ram,0x02171de4) */
/* WARNING: Removing unreachable block (ram,0x02171df8) */
/* WARNING: Removing unreachable block (ram,0x02171e00) */
/* WARNING: Removing unreachable block (ram,0x02171e28) */
/* WARNING: Removing unreachable block (ram,0x02171e0c) */
/* WARNING: Removing unreachable block (ram,0x02171e18) */
/* WARNING: Removing unreachable block (ram,0x02171e34) */
/* WARNING: Removing unreachable block (ram,0x02171e64) */
/* WARNING: Removing unreachable block (ram,0x02171e68) */
/* WARNING: Removing unreachable block (ram,0x02171ec4) */
/* WARNING: Removing unreachable block (ram,0x02171ed0) */
/* WARNING: Removing unreachable block (ram,0x02171ed4) */
/* WARNING: Removing unreachable block (ram,0x02171ee0) */
/* WARNING: Removing unreachable block (ram,0x02171eec) */
/* WARNING: Removing unreachable block (ram,0x02171ef0) */
/* WARNING: Removing unreachable block (ram,0x02171f14) */
/* WARNING: Removing unreachable block (ram,0x02171f18) */
/* WARNING: Removing unreachable block (ram,0x02171f30) */
/* WARNING: Removing unreachable block (ram,0x02171f34) */
/* WARNING: Removing unreachable block (ram,0x02171f60) */
/* WARNING: Removing unreachable block (ram,0x02171f64) */
/* WARNING: Removing unreachable block (ram,0x02171f8c) */
/* WARNING: Removing unreachable block (ram,0x02171f90) */
/* WARNING: Removing unreachable block (ram,0x02171fb0) */
/* WARNING: Removing unreachable block (ram,0x02171fbc) */
/* WARNING: Removing unreachable block (ram,0x02171ff0) */
/* WARNING: Removing unreachable block (ram,0x02171ff4) */
/* WARNING: Removing unreachable block (ram,0x02172014) */
/* WARNING: Removing unreachable block (ram,0x02172020) */
/* WARNING: Removing unreachable block (ram,0x02172038) */
/* WARNING: Removing unreachable block (ram,0x02172048) */
/* WARNING: Removing unreachable block (ram,0x02172058) */
/* WARNING: Removing unreachable block (ram,0x0217205c) */
/* WARNING: Removing unreachable block (ram,0x02171e9c) */
/* WARNING: Removing unreachable block (ram,0x02171eb0) */
/* WARNING: Removing unreachable block (ram,0x02171eb4) */
/* WARNING: Removing unreachable block (ram,0x028c123c) */
/* WARNING: Removing unreachable block (ram,0x028c124c) */
/* WARNING: Removing unreachable block (ram,0x028c1250) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cd3d2c(undefined4 param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *unaff_r4;
  int *unaff_r5;
  int iVar6;
  char *pcVar7;
  char *unaff_r6;
  char *pcVar8;
  undefined4 uVar9;
  char *unaff_r7;
  undefined4 *unaff_r8;
  int *unaff_r9;
  char *unaff_r10;
  undefined4 *unaff_r11;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
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
  
  pcVar8 = (char *)(_UNK_01cd3e64 + 0x1cd3d44);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd3e68 + 0x1cd3d58));
    func_0x01384978(*(undefined4 *)(_UNK_01cd3e6c + 0x1cd3d64));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x972f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x972f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02198f18 + 0x2198e24);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02198f1c + 0x2198e38),param_1,param_2,0);
      *pcVar8 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar6,uVar9,&uStack_38,uVar5,0,0);
    uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02198f20 + 0x2198f08));
    return uVar9;
  }
  iVar1 = FUN_01cca5b0(param_1,param_2);
  if (iVar1 == 0) {
    return **(undefined4 **)(_UNK_01cd3e74 + 0x1cd3e34);
  }
  iVar6 = FUN_01c24918(0);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar6 + 0x38);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar6 = FUN_01cd23fc(iVar6,param_2,0x2000);
  pcVar8 = *(char **)(iVar1 + 0x18);
  if (iVar6 == 0) {
    if (*(int *)(**(int **)(_UNK_01cd3e70 + 0x1cd3e44) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar17 = ZEXT48(pcVar8);
    puVar2 = (undefined4 *)register0x00000054;
SUB_028c1350:
    pcVar8 = (char *)uVar17;
    *(undefined4 *)((int)puVar2 + -4) = unaff_lr;
    *(undefined4 **)((int)puVar2 + -8) = unaff_r11;
    *(int **)((int)puVar2 + -0xc) = unaff_r5;
    puVar16 = (undefined4 *)((int)puVar2 + -0x10);
    *puVar16 = unaff_r4;
    pcVar7 = (char *)(_UNK_028c13f0 + 0x28c1364);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_028c13f4 + 0x28c1378),(int)(uVar17 >> 0x20));
      *pcVar7 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xbb,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0xbb,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar9 = *puVar16;
      uVar5 = *(undefined4 *)((int)puVar2 + -0xc);
      *(undefined4 *)((int)puVar2 + -4) = *(undefined4 *)((int)puVar2 + -4);
      *(undefined4 **)((int)puVar2 + -8) = unaff_r8;
      *(char **)((int)puVar2 + -0xc) = unaff_r7;
      *puVar16 = unaff_r6;
      *(undefined4 *)((int)puVar2 + -0x14) = uVar5;
      *(undefined4 *)((int)puVar2 + -0x18) = uVar9;
      pcVar7 = (char *)(_UNK_02173f74 + 0x2173e94);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),pcVar8,0);
        *pcVar7 = '\x01';
      }
      *(undefined4 *)((int)puVar2 + -0x30) = 0;
      *(undefined4 *)((int)puVar2 + -0x2c) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      *(undefined4 *)((int)puVar2 + -0x28) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      *(undefined4 *)((int)puVar2 + -0x24) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      *(undefined4 *)((int)puVar2 + -0x20) = 0;
      func_0x0245494c((undefined4 *)((int)puVar2 + -0x48),0);
      iVar6 = *(int *)(iVar1 + 0x10);
      *(undefined4 *)((int)puVar2 + -0x30) = *(undefined4 *)((int)puVar2 + -0x48);
      *(undefined4 *)((int)puVar2 + -0x2c) = *(undefined4 *)((int)puVar2 + -0x44);
      *(undefined4 *)((int)puVar2 + -0x28) = *(undefined4 *)((int)puVar2 + -0x40);
      *(undefined4 *)((int)puVar2 + -0x24) = *(undefined4 *)((int)puVar2 + -0x3c);
      *(undefined4 *)((int)puVar2 + -0x20) = *(undefined4 *)((int)puVar2 + -0x38);
      if (iVar6 != 0) {
        func_0x01485278((undefined1 *)((int)puVar2 + -0x30),iVar6,0);
      }
      func_0x01485278((undefined1 *)((int)puVar2 + -0x30),pcVar8,0);
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
      *(undefined4 *)((int)puVar2 + -0x50) = 0;
      *(undefined4 *)((int)puVar2 + -0x4c) = 0;
      func_0x0245495c(iVar6,uVar9,(undefined1 *)((int)puVar2 + -0x30),uVar5);
      uVar9 = func_0x02f5db90((undefined1 *)((int)puVar2 + -0x30),0,
                              **(undefined4 **)(_UNK_02173f7c + 0x2173f64));
      return uVar9;
    }
    if (*(int *)(**(int **)(_UNK_028c13f8 + 0x28c13d0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    unaff_r4 = (int *)*puVar16;
    unaff_r11 = *(undefined4 **)((int)puVar2 + -8);
    uVar9 = *(undefined4 *)((int)puVar2 + -4);
    piVar4 = *(int **)((int)puVar2 + -0xc);
    pcVar7 = unaff_r10;
    puVar10 = (undefined1 *)puVar2;
    do {
      unaff_r10 = pcVar8;
      *(undefined4 *)(puVar10 + -4) = uVar9;
      *(char **)(puVar10 + -8) = pcVar7;
      *(int **)(puVar10 + -0xc) = unaff_r9;
      *(undefined4 **)(puVar10 + -0x10) = unaff_r8;
      *(char **)(puVar10 + -0x14) = unaff_r7;
      *(char **)(puVar10 + -0x18) = unaff_r6;
      *(int **)(puVar10 + -0x1c) = piVar4;
      *(int **)(puVar10 + -0x20) = unaff_r4;
      unaff_r5 = (int *)0x1;
      unaff_r6 = (char *)(iRam028c1308 + 0x28c0e50);
      if (*unaff_r6 == '\0') {
        func_0x01384978(*(undefined4 *)(iRam028c130c + 0x28c0e64));
        func_0x01384978(*(undefined4 *)(iRam028c1310 + 0x28c0e70));
        func_0x01384978(*(undefined4 *)(iRam028c1314 + 0x28c0e7c));
        func_0x01384978(*(undefined4 *)(iRam028c1318 + 0x28c0e88));
        func_0x01384978(*(undefined4 *)(iRam028c131c + 0x28c0e94));
        func_0x01384978(*(undefined4 *)(iRam028c1320 + 0x28c0ea0));
        func_0x01384978(*(undefined4 *)(iRam028c1324 + 0x28c0eac));
        *unaff_r6 = '\x01';
      }
      iVar1 = func_0x0229f06c(0xc,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0xc,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar9 = func_0x02173c38(iVar1,unaff_r10,1,0);
        return uVar9;
      }
      unaff_r8 = *(undefined4 **)(iRam028c1328 + 0x28c0f0c);
      *(undefined4 *)(puVar10 + -0x24) = *unaff_r8;
      iVar1 = func_0x0467229c(unaff_r10,0);
      if (iVar1 != 0) {
        return *unaff_r8;
      }
      unaff_r9 = *(int **)(iRam028c132c + 0x28c0f34);
      iVar1 = *unaff_r9;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *unaff_r9;
      }
      iVar6 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
      if (iVar6 == 0) goto LAB_028c125c;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar6 = *(int *)(*(int *)(*unaff_r9 + 0x5c) + 8);
        bVar12 = iVar6 == 0;
        bVar11 = true;
        if (bVar12) goto LAB_028c1304;
      }
      iVar1 = *(int *)(iVar6 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03e1fee8(iVar1,**(undefined4 **)(iRam028c1330 + 0x28c0f98));
      if (0 < iVar1) {
        iVar1 = *unaff_r9;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *unaff_r9;
        }
        iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x18);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x03e220bc(iVar1,unaff_r10,puVar10 + -0x24,
                                **(undefined4 **)(iRam028c1334 + 0x28c0ff8));
        if (iVar1 != 0) goto LAB_028c125c;
      }
      iVar1 = *unaff_r9;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *unaff_r9;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0x14) == 0) {
LAB_028c10a0:
        iVar1 = *unaff_r9;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *unaff_r9;
        }
        iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar1 + 0x10) != 0) {
          iVar1 = *unaff_r9;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *unaff_r9;
          }
          iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x10);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x03e220bc(iVar1,unaff_r10,puVar10 + -0x24,
                                  **(undefined4 **)(iRam028c133c + 0x28c1128));
          if (iVar1 != 0) goto LAB_028c1138;
        }
      }
      else {
        iVar1 = *unaff_r9;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *unaff_r9;
        }
        iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x14);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x03e220bc(iVar1,unaff_r10,puVar10 + -0x24,
                                **(undefined4 **)(iRam028c1338 + 0x28c1090));
        if (iVar1 == 0) goto LAB_028c10a0;
LAB_028c1138:
        iVar1 = func_0x0467229c(*(undefined4 *)(puVar10 + -0x24),0);
        if (iVar1 == 0) goto LAB_028c12f8;
      }
      if (unaff_r10 == (char *)0x0) {
        func_0x01384bf0();
        iVar1 = func_0x04677604(0,**(undefined4 **)(iRam028c1340 + 0x28c11a4),0);
        if (iVar1 < 0) {
LAB_028c125c:
          uVar9 = func_0x046604e4(**(undefined4 **)(iRam028c134c + 0x28c127c),unaff_r10,0);
          return uVar9;
        }
        func_0x01384bf0();
        iVar1 = func_0x04676d38(0,0x2c,0);
        if (iVar1 < 0) goto LAB_028c125c;
        func_0x01384bf0();
      }
      else {
        iVar1 = func_0x04677604(unaff_r10,**(undefined4 **)(iRam028c1344 + 0x28c1164),0);
        if ((iVar1 < 0) || (iVar1 = func_0x04676d38(unaff_r10,0x2c,0), iVar1 < 0))
        goto LAB_028c125c;
      }
      unaff_r7 = (char *)0x0;
      unaff_r4 = (int *)func_0x04674540(unaff_r10,0x2c,0,0);
      if (unaff_r4 == (int *)0x0) {
        func_0x01384bf0();
      }
      if (unaff_r4[3] < 1) {
        uVar9 = func_0x04672b68(*unaff_r8,unaff_r4,0);
        iVar1 = *unaff_r9;
        *(undefined4 *)(puVar10 + -0x24) = uVar9;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *unaff_r9;
        }
        iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x10);
        uVar9 = *(undefined4 *)(puVar10 + -0x24);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03e201a8(iVar1,unaff_r10,uVar9,**(undefined4 **)(iRam028c1348 + 0x28c12f0));
LAB_028c12f8:
        return *(undefined4 *)(puVar10 + -0x24);
      }
      if (unaff_r4[3] == 0) {
        func_0x01384bf4();
      }
      unaff_r6 = (char *)unaff_r4[4];
      if (*(int *)(*unaff_r9 + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar9 = 0x28c123c;
      pcVar8 = unaff_r6;
      piVar4 = unaff_r4;
      pcVar7 = unaff_r10;
      puVar10 = puVar10 + -0x28;
    } while( true );
  }
  unaff_r7 = (char *)(_UNK_02172088 + 0x2171bfc);
  uStack_28 = 1;
  if (*unaff_r7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0217208c + 0x2171c14),pcVar8,1,0);
    func_0x01384978(*(undefined4 *)(_UNK_02172090 + 0x2171c20));
    func_0x01384978(*(undefined4 *)(_UNK_02172094 + 0x2171c2c));
    func_0x01384978(*(undefined4 *)(_UNK_02172098 + 0x2171c38));
    func_0x01384978(*(undefined4 *)(_UNK_0217209c + 0x2171c44));
    func_0x01384978(*(undefined4 *)(_UNK_021720a0 + 0x2171c50));
    func_0x01384978(*(undefined4 *)(_UNK_021720a4 + 0x2171c5c));
    func_0x01384978(*(undefined4 *)(_UNK_021720a8 + 0x2171c68));
    func_0x01384978(*(undefined4 *)(_UNK_021720ac + 0x2171c74));
    *unaff_r7 = '\x01';
  }
  uStack_2c = 0;
  iVar1 = func_0x0229f06c(0x9730,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01489db8(pcVar8,0);
    if (iVar1 == 0) {
      unaff_r5 = (int *)func_0x021566f4();
      if (unaff_r5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *unaff_r5;
      unaff_r11 = *(undefined4 **)(_UNK_021720b4 + 0x2171d1c);
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          unaff_r7 = (char *)piVar4[-1];
          if (unaff_r7 == (char *)*unaff_r11) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x110);
            goto LAB_02171d64;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(unaff_r5,(char *)*unaff_r11,10);
LAB_02171d64:
      unaff_r9 = (int *)(*(code *)*puVar2)(unaff_r5,param_2,puVar2[1]);
      unaff_r4 = *(int **)(_UNK_021720b8 + 0x2171d88);
      if (*(int *)(*unaff_r4 + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar17 = ZEXT48(pcVar8);
      unaff_lr = 0x2171da4;
      unaff_r6 = pcVar8;
      unaff_r10 = param_2;
      puVar2 = &uStack_30;
      goto SUB_028c1350;
    }
    uVar9 = **(undefined4 **)(_UNK_021720b0 + 0x2171cf4);
  }
  else {
    iVar1 = func_0x0229f13c(0x9730,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = 0;
    uVar9 = func_0x022764f8(iVar1,param_2,pcVar8,1);
  }
  return uVar9;
LAB_028c1304:
  unaff_lr = 0x28c1308;
  uVar17 = func_0x01384bf0();
  bVar14 = bVar11;
  if (bVar12) {
    unaff_r10 = (char *)0x43fa;
    bVar14 = (undefined4 *)0x28000000 < unaff_r11 ||
             unaff_r11 + -0xa000000 < (undefined4 *)(uint)bVar11;
  }
  bVar12 = bVar12 && unaff_r11 == (undefined4 *)(!bVar11 + 0x28000000);
  bVar11 = bVar14;
  if (bVar12) {
    bVar11 = &__DT_REL[0x5d26].r_info < puVar10 + -0x28 ||
             puVar10 + -0x70028 < (undefined1 *)(uint)bVar14;
  }
  bVar12 = bVar12 && puVar10 + -0x28 == (undefined1 *)(!bVar14 + 0x70000);
  bVar14 = bVar11;
  if (bVar12) {
    bVar14 = (undefined4 *)0xc000000 < unaff_r11 ||
             unaff_r11 + -0x3000000 < (undefined4 *)(uint)bVar11;
  }
  bVar13 = false;
  bVar15 = bVar14;
  if (bVar12 && unaff_r11 == (undefined4 *)(!bVar11 + 0xc000000)) {
    bVar15 = (undefined1 *)0x2b0 < puVar10 + -0x28 || puVar10 + -0x2d8 < (undefined1 *)(uint)bVar14;
    unaff_r5 = (int *)(puVar10 + (-0x28 - (!bVar14 + 0x2b0)));
    bVar13 = unaff_r5 == (int *)0x0;
  }
  bVar12 = false;
  bVar11 = bVar15;
  if (bVar13) {
    bVar11 = (undefined1 *)0x48000000 < puVar10 + -0x28 ||
             puVar10 + -0x48000028 < (undefined1 *)(uint)bVar15;
    unaff_r8 = (undefined4 *)(puVar10 + (-0x28 - (!bVar15 + 0x48000000)));
    bVar12 = unaff_r8 == (undefined4 *)0x0;
  }
  bVar14 = bVar11;
  if (bVar12) {
    bVar14 = 0x428c1325 < bVar11;
  }
  bVar12 = bVar12 && !bVar11 == 0x428c1325;
  bVar11 = bVar14;
  if (bVar12) {
    bVar11 = (undefined4 *)0x90000003 < unaff_r11 || (int)unaff_r11 + 0x6ffffffdU < (uint)bVar14;
  }
  bVar12 = bVar12 && unaff_r11 == (undefined4 *)(!bVar14 + 0x90000003);
  bVar14 = bVar11;
  if (bVar12) {
    bVar14 = (undefined4 *)0x10000002 < unaff_r11 || (int)unaff_r11 + 0xeffffffeU < (uint)bVar11;
  }
  bVar13 = false;
  bVar15 = bVar14;
  if (bVar12 && unaff_r11 == (undefined4 *)(!bVar11 + 0x10000002)) {
    bVar15 = puVar10 != (undefined1 *)0x28 || puVar10 + -0x28 < (undefined1 *)(uint)bVar14;
    unaff_r5 = (int *)(puVar10 + (-0x28 - (uint)!bVar14));
    bVar13 = unaff_r5 == (int *)0x0;
  }
  bVar12 = bVar15;
  if (bVar13) {
    bVar12 = &UNK_03d00000 < puVar10 + -0x28 || puVar10 + -0x3d00028 < (undefined1 *)(uint)bVar15;
  }
  bVar11 = bVar12;
  if (bVar13 && puVar10 + -0x28 == &UNK_03d00000 + !bVar15) {
    bVar11 = (undefined4 *)0x40000009 < unaff_r11 || (int)unaff_r11 + 0xbffffff7U < (uint)bVar12;
  }
  bVar14 = (bVar13 && puVar10 + -0x28 == &UNK_03d00000 + !bVar15) &&
           unaff_r11 == (undefined4 *)(!bVar12 + 0x40000009);
  bVar12 = bVar11;
  if (bVar14) {
    bVar12 = (undefined4 *)0x3f < unaff_r11 || (int)unaff_r11 - 0x3fU < (uint)bVar11;
  }
  bVar14 = bVar14 && unaff_r11 == (undefined4 *)(!bVar11 + 0x3f);
  bVar11 = bVar12;
  if (bVar14) {
    bVar11 = (undefined4 *)0x19 < unaff_r11 || (int)unaff_r11 - 0x19U < (uint)bVar12;
  }
  bVar13 = false;
  bVar15 = bVar11;
  if (bVar14 && unaff_r11 == (undefined4 *)(!bVar12 + 0x19)) {
    bVar15 = (undefined1 *)0xe < puVar10 + -0x28 || puVar10 + -0x36 < (undefined1 *)(uint)bVar11;
    unaff_r8 = (undefined4 *)(puVar10 + (-0x28 - (!bVar11 + 0xe)));
    bVar13 = unaff_r8 == (undefined4 *)0x0;
  }
  bVar12 = false;
  bVar11 = bVar15;
  if (bVar13) {
    bVar11 = (undefined1 *)0x1e < puVar10 + -0x28 || puVar10 + -0x46 < (undefined1 *)(uint)bVar15;
    unaff_r8 = (undefined4 *)(puVar10 + (-0x28 - (!bVar15 + 0x1e)));
    bVar12 = unaff_r8 == (undefined4 *)0x0;
  }
  bVar14 = false;
  if (bVar12) {
    unaff_r11 = (undefined4 *)((int)unaff_r11 - (!bVar11 + 0x260));
    bVar14 = unaff_r11 == (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)(puVar10 + -0x28);
  if (bVar14) {
    puVar2 = (undefined4 *)(puVar10 + -0x28);
  }
  goto SUB_028c1350;
}



// ===== FAT.ObjectMan$$GetItemRewardDesc RVA 0x1cc3e78 =====

/* WARNING: Possible PIC construction at 0x02171da0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02171ebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x028c1238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02171ec0) */
/* WARNING: Removing unreachable block (ram,0x02171da4) */
/* WARNING: Removing unreachable block (ram,0x02171db0) */
/* WARNING: Removing unreachable block (ram,0x02171dbc) */
/* WARNING: Removing unreachable block (ram,0x02171dd0) */
/* WARNING: Removing unreachable block (ram,0x02171dd4) */
/* WARNING: Removing unreachable block (ram,0x02171de0) */
/* WARNING: Removing unreachable block (ram,0x02171de4) */
/* WARNING: Removing unreachable block (ram,0x02171df8) */
/* WARNING: Removing unreachable block (ram,0x02171e00) */
/* WARNING: Removing unreachable block (ram,0x02171e28) */
/* WARNING: Removing unreachable block (ram,0x02171e0c) */
/* WARNING: Removing unreachable block (ram,0x02171e18) */
/* WARNING: Removing unreachable block (ram,0x02171e34) */
/* WARNING: Removing unreachable block (ram,0x02171e64) */
/* WARNING: Removing unreachable block (ram,0x02171e68) */
/* WARNING: Removing unreachable block (ram,0x02171ec4) */
/* WARNING: Removing unreachable block (ram,0x02171ed0) */
/* WARNING: Removing unreachable block (ram,0x02171ed4) */
/* WARNING: Removing unreachable block (ram,0x02171ee0) */
/* WARNING: Removing unreachable block (ram,0x02171eec) */
/* WARNING: Removing unreachable block (ram,0x02171ef0) */
/* WARNING: Removing unreachable block (ram,0x02171f14) */
/* WARNING: Removing unreachable block (ram,0x02171f18) */
/* WARNING: Removing unreachable block (ram,0x02171f30) */
/* WARNING: Removing unreachable block (ram,0x02171f34) */
/* WARNING: Removing unreachable block (ram,0x02171f60) */
/* WARNING: Removing unreachable block (ram,0x02171f64) */
/* WARNING: Removing unreachable block (ram,0x02171f8c) */
/* WARNING: Removing unreachable block (ram,0x02171f90) */
/* WARNING: Removing unreachable block (ram,0x02171fb0) */
/* WARNING: Removing unreachable block (ram,0x02171fbc) */
/* WARNING: Removing unreachable block (ram,0x02171ff0) */
/* WARNING: Removing unreachable block (ram,0x02171ff4) */
/* WARNING: Removing unreachable block (ram,0x02172014) */
/* WARNING: Removing unreachable block (ram,0x02172020) */
/* WARNING: Removing unreachable block (ram,0x02172038) */
/* WARNING: Removing unreachable block (ram,0x02172048) */
/* WARNING: Removing unreachable block (ram,0x02172058) */
/* WARNING: Removing unreachable block (ram,0x0217205c) */
/* WARNING: Removing unreachable block (ram,0x02171e9c) */
/* WARNING: Removing unreachable block (ram,0x02171eb0) */
/* WARNING: Removing unreachable block (ram,0x02171eb4) */
/* WARNING: Removing unreachable block (ram,0x028c123c) */
/* WARNING: Removing unreachable block (ram,0x028c124c) */
/* WARNING: Removing unreachable block (ram,0x028c1250) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cd3e78(undefined4 param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int *unaff_r4;
  int *unaff_r5;
  char *pcVar7;
  undefined4 uVar8;
  char *unaff_r6;
  char *unaff_r7;
  char *pcVar9;
  undefined4 *unaff_r8;
  int *unaff_r9;
  char *unaff_r10;
  undefined4 *unaff_r11;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  
  pcVar9 = (char *)(_UNK_01cd3fcc + 0x1cd3e98);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd3fd0 + 0x1cd3eac));
    func_0x01384978(*(undefined4 *)(_UNK_01cd3fd4 + 0x1cd3eb8));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9733,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01cca5b0(param_1,param_2);
    if (iVar1 != 0) {
      iVar3 = FUN_01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x38);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = FUN_01cd23fc(iVar3,param_2,0x2000);
      pcVar9 = *(char **)(iVar1 + 0x18);
      if (iVar3 == 0) {
        if (*(int *)(**(int **)(_UNK_01cd3fd8 + 0x1cd3fa8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar17 = ZEXT48(pcVar9);
        puVar4 = (undefined4 *)register0x00000054;
SUB_028c1350:
        pcVar9 = (char *)uVar17;
        *(undefined4 *)((int)puVar4 + -4) = unaff_lr;
        *(undefined4 **)((int)puVar4 + -8) = unaff_r11;
        *(int **)((int)puVar4 + -0xc) = unaff_r5;
        puVar16 = (undefined4 *)((int)puVar4 + -0x10);
        *puVar16 = unaff_r4;
        pcVar7 = (char *)(_UNK_028c13f0 + 0x28c1364);
        if (*pcVar7 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_028c13f4 + 0x28c1378),(int)(uVar17 >> 0x20));
          *pcVar7 = '\x01';
        }
        iVar1 = func_0x0229f06c(0xbb,0);
        if (iVar1 != 0) {
          iVar1 = func_0x0229f13c(0xbb,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar2 = *puVar16;
          uVar8 = *(undefined4 *)((int)puVar4 + -0xc);
          *(undefined4 *)((int)puVar4 + -4) = *(undefined4 *)((int)puVar4 + -4);
          *(undefined4 **)((int)puVar4 + -8) = unaff_r8;
          *(char **)((int)puVar4 + -0xc) = unaff_r7;
          *puVar16 = unaff_r6;
          *(undefined4 *)((int)puVar4 + -0x14) = uVar8;
          *(undefined4 *)((int)puVar4 + -0x18) = uVar2;
          pcVar7 = (char *)(_UNK_02173f74 + 0x2173e94);
          if (*pcVar7 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),pcVar9,0);
            *pcVar7 = '\x01';
          }
          *(undefined4 *)((int)puVar4 + -0x30) = 0;
          *(undefined4 *)((int)puVar4 + -0x2c) =
               *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          *(undefined4 *)((int)puVar4 + -0x28) =
               *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          *(undefined4 *)((int)puVar4 + -0x24) =
               *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          *(undefined4 *)((int)puVar4 + -0x20) = 0;
          func_0x0245494c((undefined4 *)((int)puVar4 + -0x48),0);
          iVar3 = *(int *)(iVar1 + 0x10);
          *(undefined4 *)((int)puVar4 + -0x30) = *(undefined4 *)((int)puVar4 + -0x48);
          *(undefined4 *)((int)puVar4 + -0x2c) = *(undefined4 *)((int)puVar4 + -0x44);
          *(undefined4 *)((int)puVar4 + -0x28) = *(undefined4 *)((int)puVar4 + -0x40);
          *(undefined4 *)((int)puVar4 + -0x24) = *(undefined4 *)((int)puVar4 + -0x3c);
          *(undefined4 *)((int)puVar4 + -0x20) = *(undefined4 *)((int)puVar4 + -0x38);
          if (iVar3 != 0) {
            func_0x01485278((undefined1 *)((int)puVar4 + -0x30),iVar3,0);
          }
          func_0x01485278((undefined1 *)((int)puVar4 + -0x30),pcVar9,0);
          iVar3 = *(int *)(iVar1 + 8);
          uVar2 = *(undefined4 *)(iVar1 + 0xc);
          iVar1 = *(int *)(iVar1 + 0x10);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uVar8 = 2;
          if (iVar1 == 0) {
            uVar8 = 1;
          }
          *(undefined4 *)((int)puVar4 + -0x50) = 0;
          *(undefined4 *)((int)puVar4 + -0x4c) = 0;
          func_0x0245495c(iVar3,uVar2,(undefined1 *)((int)puVar4 + -0x30),uVar8);
          uVar2 = func_0x02f5db90((undefined1 *)((int)puVar4 + -0x30),0,
                                  **(undefined4 **)(_UNK_02173f7c + 0x2173f64));
          return uVar2;
        }
        if (*(int *)(**(int **)(_UNK_028c13f8 + 0x28c13d0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        unaff_r4 = (int *)*puVar16;
        unaff_r11 = *(undefined4 **)((int)puVar4 + -8);
        uVar2 = *(undefined4 *)((int)puVar4 + -4);
        piVar6 = *(int **)((int)puVar4 + -0xc);
        pcVar7 = unaff_r10;
        puVar10 = (undefined1 *)puVar4;
        do {
          unaff_r10 = pcVar9;
          *(undefined4 *)(puVar10 + -4) = uVar2;
          *(char **)(puVar10 + -8) = pcVar7;
          *(int **)(puVar10 + -0xc) = unaff_r9;
          *(undefined4 **)(puVar10 + -0x10) = unaff_r8;
          *(char **)(puVar10 + -0x14) = unaff_r7;
          *(char **)(puVar10 + -0x18) = unaff_r6;
          *(int **)(puVar10 + -0x1c) = piVar6;
          *(int **)(puVar10 + -0x20) = unaff_r4;
          unaff_r5 = (int *)0x1;
          unaff_r6 = (char *)(iRam028c1308 + 0x28c0e50);
          if (*unaff_r6 == '\0') {
            func_0x01384978(*(undefined4 *)(iRam028c130c + 0x28c0e64));
            func_0x01384978(*(undefined4 *)(iRam028c1310 + 0x28c0e70));
            func_0x01384978(*(undefined4 *)(iRam028c1314 + 0x28c0e7c));
            func_0x01384978(*(undefined4 *)(iRam028c1318 + 0x28c0e88));
            func_0x01384978(*(undefined4 *)(iRam028c131c + 0x28c0e94));
            func_0x01384978(*(undefined4 *)(iRam028c1320 + 0x28c0ea0));
            func_0x01384978(*(undefined4 *)(iRam028c1324 + 0x28c0eac));
            *unaff_r6 = '\x01';
          }
          iVar1 = func_0x0229f06c(0xc,0);
          if (iVar1 != 0) {
            iVar1 = func_0x0229f13c(0xc,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar2 = func_0x02173c38(iVar1,unaff_r10,1,0);
            return uVar2;
          }
          unaff_r8 = *(undefined4 **)(iRam028c1328 + 0x28c0f0c);
          *(undefined4 *)(puVar10 + -0x24) = *unaff_r8;
          iVar1 = func_0x0467229c(unaff_r10,0);
          if (iVar1 != 0) {
            return *unaff_r8;
          }
          unaff_r9 = *(int **)(iRam028c132c + 0x28c0f34);
          iVar1 = *unaff_r9;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *unaff_r9;
          }
          iVar3 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
          if (iVar3 == 0) goto LAB_028c125c;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *(int *)(*(int *)(*unaff_r9 + 0x5c) + 8);
            bVar12 = iVar3 == 0;
            bVar11 = true;
            if (bVar12) goto LAB_028c1304;
          }
          iVar1 = *(int *)(iVar3 + 0x18);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x03e1fee8(iVar1,**(undefined4 **)(iRam028c1330 + 0x28c0f98));
          if (0 < iVar1) {
            iVar1 = *unaff_r9;
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x01384ab4();
              iVar1 = *unaff_r9;
            }
            iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 0x18);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x03e220bc(iVar1,unaff_r10,puVar10 + -0x24,
                                    **(undefined4 **)(iRam028c1334 + 0x28c0ff8));
            if (iVar1 != 0) goto LAB_028c125c;
          }
          iVar1 = *unaff_r9;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *unaff_r9;
          }
          iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar1 + 0x14) == 0) {
LAB_028c10a0:
            iVar1 = *unaff_r9;
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x01384ab4();
              iVar1 = *unaff_r9;
            }
            iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            if (*(int *)(iVar1 + 0x10) != 0) {
              iVar1 = *unaff_r9;
              if (*(int *)(iVar1 + 0x74) == 0) {
                func_0x01384ab4();
                iVar1 = *unaff_r9;
              }
              iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar1 = *(int *)(iVar1 + 0x10);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar1 = func_0x03e220bc(iVar1,unaff_r10,puVar10 + -0x24,
                                      **(undefined4 **)(iRam028c133c + 0x28c1128));
              if (iVar1 != 0) goto LAB_028c1138;
            }
          }
          else {
            iVar1 = *unaff_r9;
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x01384ab4();
              iVar1 = *unaff_r9;
            }
            iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 0x14);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x03e220bc(iVar1,unaff_r10,puVar10 + -0x24,
                                    **(undefined4 **)(iRam028c1338 + 0x28c1090));
            if (iVar1 == 0) goto LAB_028c10a0;
LAB_028c1138:
            iVar1 = func_0x0467229c(*(undefined4 *)(puVar10 + -0x24),0);
            if (iVar1 == 0) goto LAB_028c12f8;
          }
          if (unaff_r10 == (char *)0x0) {
            func_0x01384bf0();
            iVar1 = func_0x04677604(0,**(undefined4 **)(iRam028c1340 + 0x28c11a4),0);
            if (iVar1 < 0) {
LAB_028c125c:
              uVar2 = func_0x046604e4(**(undefined4 **)(iRam028c134c + 0x28c127c),unaff_r10,0);
              return uVar2;
            }
            func_0x01384bf0();
            iVar1 = func_0x04676d38(0,0x2c,0);
            if (iVar1 < 0) goto LAB_028c125c;
            func_0x01384bf0();
          }
          else {
            iVar1 = func_0x04677604(unaff_r10,**(undefined4 **)(iRam028c1344 + 0x28c1164),0);
            if ((iVar1 < 0) || (iVar1 = func_0x04676d38(unaff_r10,0x2c,0), iVar1 < 0))
            goto LAB_028c125c;
          }
          unaff_r7 = (char *)0x0;
          unaff_r4 = (int *)func_0x04674540(unaff_r10,0x2c,0,0);
          if (unaff_r4 == (int *)0x0) {
            func_0x01384bf0();
          }
          if (unaff_r4[3] < 1) {
            uVar2 = func_0x04672b68(*unaff_r8,unaff_r4,0);
            iVar1 = *unaff_r9;
            *(undefined4 *)(puVar10 + -0x24) = uVar2;
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x01384ab4();
              iVar1 = *unaff_r9;
            }
            iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 0x10);
            uVar2 = *(undefined4 *)(puVar10 + -0x24);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x03e201a8(iVar1,unaff_r10,uVar2,**(undefined4 **)(iRam028c1348 + 0x28c12f0));
LAB_028c12f8:
            return *(undefined4 *)(puVar10 + -0x24);
          }
          if (unaff_r4[3] == 0) {
            func_0x01384bf4();
          }
          unaff_r6 = (char *)unaff_r4[4];
          if (*(int *)(*unaff_r9 + 0x74) == 0) {
            func_0x01384ab4();
          }
          uVar2 = 0x28c123c;
          pcVar9 = unaff_r6;
          piVar6 = unaff_r4;
          pcVar7 = unaff_r10;
          puVar10 = puVar10 + -0x28;
        } while( true );
      }
      unaff_r7 = (char *)(_UNK_02172088 + 0x2171bfc);
      uStack_28 = param_3;
      if (*unaff_r7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_0217208c + 0x2171c14),pcVar9,param_3,0);
        func_0x01384978(*(undefined4 *)(_UNK_02172090 + 0x2171c20));
        func_0x01384978(*(undefined4 *)(_UNK_02172094 + 0x2171c2c));
        func_0x01384978(*(undefined4 *)(_UNK_02172098 + 0x2171c38));
        func_0x01384978(*(undefined4 *)(_UNK_0217209c + 0x2171c44));
        func_0x01384978(*(undefined4 *)(_UNK_021720a0 + 0x2171c50));
        func_0x01384978(*(undefined4 *)(_UNK_021720a4 + 0x2171c5c));
        func_0x01384978(*(undefined4 *)(_UNK_021720a8 + 0x2171c68));
        func_0x01384978(*(undefined4 *)(_UNK_021720ac + 0x2171c74));
        *unaff_r7 = '\x01';
      }
      uStack_2c = 0;
      iVar1 = func_0x0229f06c(0x9730,0);
      if (iVar1 == 0) {
        iVar1 = func_0x01489db8(pcVar9,0);
        if (iVar1 == 0) {
          unaff_r5 = (int *)func_0x021566f4();
          if (unaff_r5 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *unaff_r5;
          unaff_r11 = *(undefined4 **)(_UNK_021720b4 + 0x2171d1c);
          uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              unaff_r7 = (char *)piVar6[-1];
              if (unaff_r7 == (char *)*unaff_r11) {
                puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x110);
                goto LAB_02171d64;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(unaff_r5,(char *)*unaff_r11,10);
LAB_02171d64:
          unaff_r9 = (int *)(*(code *)*puVar4)(unaff_r5,param_2,puVar4[1]);
          unaff_r4 = *(int **)(_UNK_021720b8 + 0x2171d88);
          if (*(int *)(*unaff_r4 + 0x74) == 0) {
            func_0x01384ab4();
          }
          uVar17 = ZEXT48(pcVar9);
          unaff_lr = 0x2171da4;
          unaff_r6 = pcVar9;
          unaff_r10 = param_2;
          puVar4 = &uStack_30;
          goto SUB_028c1350;
        }
        uVar2 = **(undefined4 **)(_UNK_021720b0 + 0x2171cf4);
      }
      else {
        iVar1 = func_0x0229f13c(0x9730,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_30 = 0;
        uVar2 = func_0x022764f8(iVar1,param_2,pcVar9,param_3);
      }
      return uVar2;
    }
    uVar2 = **(undefined4 **)(_UNK_01cd3fdc + 0x1cd3f94);
  }
  else {
    iVar1 = func_0x0229f13c(0x9733,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar2 = func_0x0220e87c(iVar1,param_1,param_2,param_3);
  }
  return uVar2;
LAB_028c1304:
  unaff_lr = 0x28c1308;
  uVar17 = func_0x01384bf0();
  bVar14 = bVar11;
  if (bVar12) {
    unaff_r10 = (char *)0x43fa;
    bVar14 = (undefined4 *)0x28000000 < unaff_r11 ||
             unaff_r11 + -0xa000000 < (undefined4 *)(uint)bVar11;
  }
  bVar12 = bVar12 && unaff_r11 == (undefined4 *)(!bVar11 + 0x28000000);
  bVar11 = bVar14;
  if (bVar12) {
    bVar11 = &__DT_REL[0x5d26].r_info < puVar10 + -0x28 ||
             puVar10 + -0x70028 < (undefined1 *)(uint)bVar14;
  }
  bVar12 = bVar12 && puVar10 + -0x28 == (undefined1 *)(!bVar14 + 0x70000);
  bVar14 = bVar11;
  if (bVar12) {
    bVar14 = (undefined4 *)0xc000000 < unaff_r11 ||
             unaff_r11 + -0x3000000 < (undefined4 *)(uint)bVar11;
  }
  bVar13 = false;
  bVar15 = bVar14;
  if (bVar12 && unaff_r11 == (undefined4 *)(!bVar11 + 0xc000000)) {
    bVar15 = (undefined1 *)0x2b0 < puVar10 + -0x28 || puVar10 + -0x2d8 < (undefined1 *)(uint)bVar14;
    unaff_r5 = (int *)(puVar10 + (-0x28 - (!bVar14 + 0x2b0)));
    bVar13 = unaff_r5 == (int *)0x0;
  }
  bVar12 = false;
  bVar11 = bVar15;
  if (bVar13) {
    bVar11 = (undefined1 *)0x48000000 < puVar10 + -0x28 ||
             puVar10 + -0x48000028 < (undefined1 *)(uint)bVar15;
    unaff_r8 = (undefined4 *)(puVar10 + (-0x28 - (!bVar15 + 0x48000000)));
    bVar12 = unaff_r8 == (undefined4 *)0x0;
  }
  bVar14 = bVar11;
  if (bVar12) {
    bVar14 = 0x428c1325 < bVar11;
  }
  bVar12 = bVar12 && !bVar11 == 0x428c1325;
  bVar11 = bVar14;
  if (bVar12) {
    bVar11 = (undefined4 *)0x90000003 < unaff_r11 || (int)unaff_r11 + 0x6ffffffdU < (uint)bVar14;
  }
  bVar12 = bVar12 && unaff_r11 == (undefined4 *)(!bVar14 + 0x90000003);
  bVar14 = bVar11;
  if (bVar12) {
    bVar14 = (undefined4 *)0x10000002 < unaff_r11 || (int)unaff_r11 + 0xeffffffeU < (uint)bVar11;
  }
  bVar13 = false;
  bVar15 = bVar14;
  if (bVar12 && unaff_r11 == (undefined4 *)(!bVar11 + 0x10000002)) {
    bVar15 = puVar10 != (undefined1 *)0x28 || puVar10 + -0x28 < (undefined1 *)(uint)bVar14;
    unaff_r5 = (int *)(puVar10 + (-0x28 - (uint)!bVar14));
    bVar13 = unaff_r5 == (int *)0x0;
  }
  bVar12 = bVar15;
  if (bVar13) {
    bVar12 = &UNK_03d00000 < puVar10 + -0x28 || puVar10 + -0x3d00028 < (undefined1 *)(uint)bVar15;
  }
  bVar11 = bVar12;
  if (bVar13 && puVar10 + -0x28 == &UNK_03d00000 + !bVar15) {
    bVar11 = (undefined4 *)0x40000009 < unaff_r11 || (int)unaff_r11 + 0xbffffff7U < (uint)bVar12;
  }
  bVar14 = (bVar13 && puVar10 + -0x28 == &UNK_03d00000 + !bVar15) &&
           unaff_r11 == (undefined4 *)(!bVar12 + 0x40000009);
  bVar12 = bVar11;
  if (bVar14) {
    bVar12 = (undefined4 *)0x3f < unaff_r11 || (int)unaff_r11 - 0x3fU < (uint)bVar11;
  }
  bVar14 = bVar14 && unaff_r11 == (undefined4 *)(!bVar11 + 0x3f);
  bVar11 = bVar12;
  if (bVar14) {
    bVar11 = (undefined4 *)0x19 < unaff_r11 || (int)unaff_r11 - 0x19U < (uint)bVar12;
  }
  bVar13 = false;
  bVar15 = bVar11;
  if (bVar14 && unaff_r11 == (undefined4 *)(!bVar12 + 0x19)) {
    bVar15 = (undefined1 *)0xe < puVar10 + -0x28 || puVar10 + -0x36 < (undefined1 *)(uint)bVar11;
    unaff_r8 = (undefined4 *)(puVar10 + (-0x28 - (!bVar11 + 0xe)));
    bVar13 = unaff_r8 == (undefined4 *)0x0;
  }
  bVar12 = false;
  bVar11 = bVar15;
  if (bVar13) {
    bVar11 = (undefined1 *)0x1e < puVar10 + -0x28 || puVar10 + -0x46 < (undefined1 *)(uint)bVar15;
    unaff_r8 = (undefined4 *)(puVar10 + (-0x28 - (!bVar15 + 0x1e)));
    bVar12 = unaff_r8 == (undefined4 *)0x0;
  }
  bVar14 = false;
  if (bVar12) {
    unaff_r11 = (undefined4 *)((int)unaff_r11 - (!bVar11 + 0x260));
    bVar14 = unaff_r11 == (undefined4 *)0x0;
  }
  puVar4 = (undefined4 *)(puVar10 + -0x28);
  if (bVar14) {
    puVar4 = (undefined4 *)(puVar10 + -0x28);
  }
  goto SUB_028c1350;
}



// ===== FAT.ObjectMan$$FAT.IGameModule.Reset RVA 0x1cc3fe0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cd3fe0(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01cd440c + 0x1cd3ff4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd4410 + 0x1cd4008));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4414 + 0x1cd4014));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4418 + 0x1cd4020));
    func_0x01384978(*(undefined4 *)(_UNK_01cd441c + 0x1cd402c));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4420 + 0x1cd4038));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4424 + 0x1cd4044));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4428 + 0x1cd4050));
    func_0x01384978(*(undefined4 *)(_UNK_01cd442c + 0x1cd405c));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4430 + 0x1cd4068));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4434 + 0x1cd4074));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4438 + 0x1cd4080));
    func_0x01384978(*(undefined4 *)(_UNK_01cd443c + 0x1cd408c));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4440 + 0x1cd4098));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4444 + 0x1cd40a4));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4448 + 0x1cd40b0));
    func_0x01384978(*(undefined4 *)(_UNK_01cd444c + 0x1cd40bc));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4450 + 0x1cd40c8));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4454 + 0x1cd40d4));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4458 + 0x1cd40e0));
    func_0x01384978(*(undefined4 *)(_UNK_01cd445c + 0x1cd40ec));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9734,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9734,0);
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
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245192c(iVar1,**(undefined4 **)(_UNK_01cd4460 + 0x1cd4154));
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245058c(iVar1,**(undefined4 **)(_UNK_01cd4464 + 0x1cd4178));
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245058c(iVar1,**(undefined4 **)(_UNK_01cd4468 + 0x1cd419c));
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245058c(iVar1,**(undefined4 **)(_UNK_01cd446c + 0x1cd41c0));
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245058c(iVar1,**(undefined4 **)(_UNK_01cd4470 + 0x1cd41e4));
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245058c(iVar1,**(undefined4 **)(_UNK_01cd4474 + 0x1cd4208));
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245058c(iVar1,**(undefined4 **)(_UNK_01cd4478 + 0x1cd422c));
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x0245058c(iVar4,**(undefined4 **)(_UNK_01cd447c + 0x1cd4274));
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245058c(iVar1,**(undefined4 **)(_UNK_01cd4480 + 0x1cd4298));
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245058c(iVar1,**(undefined4 **)(_UNK_01cd4484 + 0x1cd42bc));
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245058c(iVar1,**(undefined4 **)(_UNK_01cd4488 + 0x1cd42e0));
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245058c(iVar1,**(undefined4 **)(_UNK_01cd448c + 0x1cd4304));
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x024519f4(iVar1,**(undefined4 **)(_UNK_01cd4490 + 0x1cd4328));
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245058c(iVar1,**(undefined4 **)(_UNK_01cd4494 + 0x1cd434c));
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245058c(iVar1,**(undefined4 **)(_UNK_01cd4498 + 0x1cd4370));
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245058c(iVar1,**(undefined4 **)(_UNK_01cd449c + 0x1cd4394));
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245058c(iVar1,**(undefined4 **)(_UNK_01cd44a0 + 0x1cd43b8));
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x024509cc(iVar1,**(undefined4 **)(_UNK_01cd44a4 + 0x1cd43dc));
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  return;
}



// ===== FAT.ObjectMan$$FAT.IGameModule.LoadConfig RVA 0x1cc44a8 =====

/* WARNING: Possible PIC construction at 0x01cd072c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cd0730) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cd44a8(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int unaff_r4;
  char *pcVar8;
  int unaff_r5;
  int iVar9;
  undefined4 unaff_r6;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int *piVar12;
  undefined4 unaff_lr;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  iVar3 = func_0x0229f06c(0x9735,0);
  if (iVar3 == 0) {
    pcVar8 = (char *)(_UNK_01cd1040 + 0x1cd0464);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01cd1044 + 0x1cd0478));
      func_0x01384978(*(undefined4 *)(_UNK_01cd1048 + 0x1cd0484));
      func_0x01384978(*(undefined4 *)(_UNK_01cd104c + 0x1cd0490));
      func_0x01384978(*(undefined4 *)(_UNK_01cd1050 + 0x1cd049c));
      func_0x01384978(*(undefined4 *)(_UNK_01cd1054 + 0x1cd04a8));
      func_0x01384978(*(undefined4 *)(_UNK_01cd1058 + 0x1cd04b4));
      func_0x01384978(*(undefined4 *)(_UNK_01cd14b4 + 0x1cd04c0));
      func_0x01384978(*(undefined4 *)(_UNK_01cd14b8 + 0x1cd04cc));
      func_0x01384978(*(undefined4 *)(_UNK_01cd14bc + 0x1cd04d8));
      func_0x01384978(*(undefined4 *)(_UNK_01cd14dc + 0x1cd04e4));
      func_0x01384978(*(undefined4 *)(_UNK_01cd14e0 + 0x1cd04f0));
      func_0x01384978(*(undefined4 *)(_UNK_01cd14e4 + 0x1cd04fc));
      func_0x01384978(*(undefined4 *)(_UNK_01cd14e8 + 0x1cd0508));
      func_0x01384978(*(undefined4 *)(_UNK_01cd150c + 0x1cd0514));
      func_0x01384978(*(undefined4 *)(_UNK_01cd1514 + 0x1cd0520));
      func_0x01384978(*(undefined4 *)(_UNK_01cd1518 + 0x1cd052c));
      func_0x01384978(*(undefined4 *)(_UNK_01cd151c + 0x1cd0538));
      func_0x01384978(*(undefined4 *)(_UNK_01cd1520 + 0x1cd0544));
      func_0x01384978(*(undefined4 *)(_UNK_01cd1524 + 0x1cd0550));
      func_0x01384978(*(undefined4 *)(_UNK_01cd1528 + 0x1cd055c));
      func_0x01384978(*(undefined4 *)(_UNK_01cd152c + 0x1cd0568));
      func_0x01384978(*(undefined4 *)(_UNK_01cd1530 + 0x1cd0574));
      func_0x01384978(*(undefined4 *)(_UNK_01cd1578 + 0x1cd0580));
      func_0x01384978(*(undefined4 *)(_UNK_01cd1584 + 0x1cd058c));
      func_0x01384978(*(undefined4 *)(_UNK_01cd1588 + 0x1cd0598));
      func_0x01384978(*(undefined4 *)(_UNK_01cd158c + 0x1cd05a4));
      func_0x01384978(*(undefined4 *)(_UNK_01cd1590 + 0x1cd05b0));
      func_0x01384978(*(undefined4 *)(_UNK_01cd1594 + 0x1cd05bc));
      func_0x01384978(*(undefined4 *)(_UNK_01cd1598 + 0x1cd05c8));
      func_0x01384978(*(undefined4 *)(_UNK_01cd15cc + 0x1cd05d4));
      func_0x01384978(*(undefined4 *)(_UNK_01cd15d4 + 0x1cd05e0));
      func_0x01384978(*(undefined4 *)(_UNK_01cd15d8 + 0x1cd05ec));
      func_0x01384978(*(undefined4 *)(_UNK_01cd15dc + 0x1cd05f8));
      func_0x01384978(*(undefined4 *)(_UNK_01cd15e0 + 0x1cd0604));
      func_0x01384978(*(undefined4 *)(_UNK_01cd15e4 + 0x1cd0610));
      func_0x01384978(*(undefined4 *)(_UNK_01cd15e8 + 0x1cd061c));
      func_0x01384978(*(undefined4 *)(_UNK_01cd15ec + 0x1cd0628));
      func_0x01384978(*(undefined4 *)(_UNK_01cd15f0 + 0x1cd0634));
      func_0x01384978(*(undefined4 *)(_UNK_01cd15f4 + 0x1cd0640));
      func_0x01384978(*(undefined4 *)(_UNK_01cd15f8 + 0x1cd064c));
      func_0x01384978(*(undefined4 *)(_UNK_01cd15fc + 0x1cd0658));
      func_0x01384978(*(undefined4 *)(_UNK_01cd1600 + 0x1cd0664));
      func_0x01384978(*(undefined4 *)(_UNK_01cd1604 + 0x1cd0670));
      func_0x01384978(*(undefined4 *)(_UNK_01cd1608 + 0x1cd067c));
      func_0x01384978(*(undefined4 *)(_UNK_01cd160c + 0x1cd0688));
      func_0x01384978(*(undefined4 *)(_UNK_01cd1610 + 0x1cd0694));
      func_0x01384978(*(undefined4 *)(_UNK_01cd1614 + 0x1cd06a0));
      func_0x01384978(*(undefined4 *)(_UNK_01cd1618 + 0x1cd06ac));
      func_0x01384978(*(undefined4 *)(_UNK_01cd161c + 0x1cd06b8));
      func_0x01384978(*(undefined4 *)(_UNK_01cd1620 + 0x1cd06c4));
      func_0x01384978(*(undefined4 *)(_UNK_01cd1624 + 0x1cd06d0));
      func_0x01384978(*(undefined4 *)(_UNK_01cd1628 + 0x1cd06dc));
      *pcVar8 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iVar3 = func_0x0229f06c(0x9712,0);
    if (iVar3 == 0) {
      iVar3 = FUN_01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0xc);
      uVar10 = *(undefined4 *)(param_1 + 8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar7 = FUN_01ca4394(iVar3,0);
      piVar12 = *(int **)(_UNK_01cd162c + 0x1cd077c);
      iVar4 = *piVar12;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x01384ab4();
        iVar4 = *piVar12;
      }
      iVar9 = *(int *)(*(int *)(iVar4 + 0x5c) + 4);
      if (iVar9 == 0) {
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar12;
        }
        uVar11 = **(undefined4 **)(iVar4 + 0x5c);
        iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd1630 + 0x1cd07c4));
        func_0x024519f0(iVar9,uVar11,**(undefined4 **)(_UNK_01cd1634 + 0x1cd07e4),0);
        *(int *)(*(int *)(*piVar12 + 0x5c) + 4) = iVar9;
      }
      uStack_40 = 1;
      uStack_3c = **(undefined4 **)(_UNK_01cd1638 + 0x1cd0810);
      func_0x03017ffc(param_1,uVar10,uVar7,iVar9);
      uVar10 = *(undefined4 *)(param_1 + 0x4c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      piVar1 = (int *)FUN_01ca7780(iVar3,0);
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar4 = *piVar1;
      uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_01cd163c + 0x1cd0860)) {
            puVar2 = (undefined4 *)(iVar4 + *piVar6 * 8 + 0xd8);
            goto LAB_01cd08a8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01cd163c + 0x1cd0860),3);
LAB_01cd08a8:
      uVar7 = (*(code *)*puVar2)(piVar1,puVar2[1]);
      iVar4 = *piVar12;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x01384ab4();
        iVar4 = *piVar12;
      }
      iVar9 = *(int *)(*(int *)(iVar4 + 0x5c) + 8);
      if (iVar9 == 0) {
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar12;
        }
        uVar11 = **(undefined4 **)(iVar4 + 0x5c);
        iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd1640 + 0x1cd0908));
        func_0x024519f0(iVar9,uVar11,**(undefined4 **)(_UNK_01cd1644 + 0x1cd0928),0);
        *(int *)(*(int *)(*piVar12 + 0x5c) + 8) = iVar9;
      }
      uStack_40 = 0x200000;
      uStack_3c = **(undefined4 **)(_UNK_01cd1648 + 0x1cd0954);
      func_0x03017ffc(param_1,uVar10,uVar7,iVar9);
      uVar10 = *(undefined4 *)(param_1 + 0xc);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar7 = FUN_01ca3e14(iVar3,0);
      iVar4 = *piVar12;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x01384ab4();
        iVar4 = *piVar12;
      }
      iVar9 = *(int *)(*(int *)(iVar4 + 0x5c) + 0xc);
      if (iVar9 == 0) {
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar12;
        }
        uVar11 = **(undefined4 **)(iVar4 + 0x5c);
        iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd164c + 0x1cd09d4));
        func_0x024519f0(iVar9,uVar11,**(undefined4 **)(_UNK_01cd1650 + 0x1cd09f4),0);
        *(int *)(*(int *)(*piVar12 + 0x5c) + 0xc) = iVar9;
      }
      uStack_40 = 0x200;
      uStack_3c = **(undefined4 **)(_UNK_01cd1654 + 0x1cd0a20);
      func_0x03017ffc(param_1,uVar10,uVar7,iVar9);
      uVar10 = *(undefined4 *)(param_1 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar7 = FUN_01ca3ec4(iVar3,0);
      iVar4 = *piVar12;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x01384ab4();
        iVar4 = *piVar12;
      }
      iVar9 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x10);
      if (iVar9 == 0) {
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar12;
        }
        uVar11 = **(undefined4 **)(iVar4 + 0x5c);
        iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd1658 + 0x1cd0aa0));
        func_0x024519f0(iVar9,uVar11,**(undefined4 **)(_UNK_01cd165c + 0x1cd0ac0),0);
        *(int *)(*(int *)(*piVar12 + 0x5c) + 0x10) = iVar9;
      }
      uStack_40 = 0x400;
      uStack_3c = **(undefined4 **)(_UNK_01cd1660 + 0x1cd0aec);
      func_0x03017ffc(param_1,uVar10,uVar7,iVar9);
      uVar10 = *(undefined4 *)(param_1 + 0x14);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar7 = FUN_01ca3f5c(iVar3,0);
      iVar4 = *piVar12;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x01384ab4();
        iVar4 = *piVar12;
      }
      iVar9 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x14);
      if (iVar9 == 0) {
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar12;
        }
        uVar11 = **(undefined4 **)(iVar4 + 0x5c);
        iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd1664 + 0x1cd0b6c));
        func_0x024519f0(iVar9,uVar11,**(undefined4 **)(_UNK_01cd1668 + 0x1cd0b8c),0);
        *(int *)(*(int *)(*piVar12 + 0x5c) + 0x14) = iVar9;
      }
      uStack_40 = 0x1000;
      uStack_3c = **(undefined4 **)(_UNK_01cd166c + 0x1cd0bb8);
      func_0x03017ffc(param_1,uVar10,uVar7,iVar9);
      uVar10 = *(undefined4 *)(param_1 + 0x20);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar7 = FUN_01ca7d10(iVar3,0);
      iVar4 = *piVar12;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x01384ab4();
        iVar4 = *piVar12;
      }
      iVar9 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x18);
      if (iVar9 == 0) {
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar12;
        }
        uVar11 = **(undefined4 **)(iVar4 + 0x5c);
        iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd1670 + 0x1cd0c38));
        func_0x024519f0(iVar9,uVar11,**(undefined4 **)(_UNK_01cd1674 + 0x1cd0c58),0);
        *(int *)(*(int *)(*piVar12 + 0x5c) + 0x18) = iVar9;
      }
      uStack_40 = 0x4000;
      uStack_3c = **(undefined4 **)(_UNK_01cd1678 + 0x1cd0c84);
      func_0x03017ffc(param_1,uVar10,uVar7,iVar9);
      uVar10 = *(undefined4 *)(param_1 + 0x24);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar7 = FUN_01ca7dc0(iVar3,0);
      iVar4 = *piVar12;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x01384ab4();
        iVar4 = *piVar12;
      }
      iVar9 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x1c);
      if (iVar9 == 0) {
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar12;
        }
        uVar11 = **(undefined4 **)(iVar4 + 0x5c);
        iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd167c + 0x1cd0d04));
        func_0x024519f0(iVar9,uVar11,**(undefined4 **)(_UNK_01cd1680 + 0x1cd0d24),0);
        *(int *)(*(int *)(*piVar12 + 0x5c) + 0x1c) = iVar9;
      }
      uStack_40 = 0x8000;
      uStack_3c = **(undefined4 **)(_UNK_01cd1684 + 0x1cd0d50);
      func_0x03017ffc(param_1,uVar10,uVar7,iVar9);
      uVar10 = *(undefined4 *)(param_1 + 0x28);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar7 = FUN_01ca7f38(iVar3,0);
      iVar4 = *piVar12;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x01384ab4();
        iVar4 = *piVar12;
      }
      iVar9 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x20);
      if (iVar9 == 0) {
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar12;
        }
        uVar11 = **(undefined4 **)(iVar4 + 0x5c);
        iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd1688 + 0x1cd0dd0));
        func_0x024519f0(iVar9,uVar11,**(undefined4 **)(_UNK_01cd168c + 0x1cd0df0),0);
        *(int *)(*(int *)(*piVar12 + 0x5c) + 0x20) = iVar9;
      }
      uStack_40 = 0x400000;
      uStack_3c = **(undefined4 **)(_UNK_01cd1690 + 0x1cd0e1c);
      func_0x03017ffc(param_1,uVar10,uVar7,iVar9);
      uVar10 = *(undefined4 *)(param_1 + 0x2c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar7 = FUN_01ca449c(iVar3,0);
      iVar4 = *piVar12;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x01384ab4();
        iVar4 = *piVar12;
      }
      iVar9 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x24);
      if (iVar9 == 0) {
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar12;
        }
        uVar11 = **(undefined4 **)(iVar4 + 0x5c);
        iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd1694 + 0x1cd0e9c));
        func_0x024519f0(iVar9,uVar11,**(undefined4 **)(_UNK_01cd1698 + 0x1cd0ebc),0);
        *(int *)(*(int *)(*piVar12 + 0x5c) + 0x24) = iVar9;
      }
      uStack_40 = 0x800000;
      uStack_3c = **(undefined4 **)(_UNK_01cd169c + 0x1cd0ee8);
      func_0x03017ffc(param_1,uVar10,uVar7,iVar9);
      uVar10 = *(undefined4 *)(param_1 + 0x30);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar7 = FUN_01ca4070(iVar3,0);
      iVar4 = *piVar12;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x01384ab4();
        iVar4 = *piVar12;
      }
      iVar9 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x28);
      if (iVar9 == 0) {
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar12;
        }
        uVar11 = **(undefined4 **)(iVar4 + 0x5c);
        iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd16a0 + 0x1cd0f68));
        func_0x024519f0(iVar9,uVar11,**(undefined4 **)(_UNK_01cd16a4 + 0x1cd0f88),0);
        *(int *)(*(int *)(*piVar12 + 0x5c) + 0x28) = iVar9;
      }
      uStack_40 = 0x1000000;
      uStack_3c = **(undefined4 **)(_UNK_01cd16a8 + 0x1cd0fb4);
      func_0x03017ffc(param_1,uVar10,uVar7,iVar9);
      uVar10 = *(undefined4 *)(param_1 + 0x34);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      piVar1 = (int *)FUN_01ca4444(iVar3,0);
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar4 = *piVar1;
      uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_01cd16ac + 0x1cd1004)) {
            puVar2 = (undefined4 *)(iVar4 + *piVar6 * 8 + 0xd8);
            goto LAB_01cd1068;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01cd16ac + 0x1cd1004),3);
LAB_01cd1068:
      uVar7 = (*(code *)*puVar2)(piVar1,puVar2[1]);
      iVar4 = *piVar12;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x01384ab4();
        iVar4 = *piVar12;
      }
      iVar9 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x2c);
      if (iVar9 == 0) {
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar12;
        }
        uVar11 = **(undefined4 **)(iVar4 + 0x5c);
        iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd16b0 + 0x1cd10c8));
        func_0x024519f0(iVar9,uVar11,**(undefined4 **)(_UNK_01cd16b4 + 0x1cd10e8),0);
        *(int *)(*(int *)(*piVar12 + 0x5c) + 0x2c) = iVar9;
      }
      uStack_40 = 1;
      uStack_3c = **(undefined4 **)(_UNK_01cd16b8 + 0x1cd1114);
      func_0x03017ffc(param_1,uVar10,uVar7,iVar9);
      iVar4 = *(int *)(param_1 + 0x38);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x024519f4(iVar4,**(undefined4 **)(_UNK_01cd16bc + 0x1cd1144));
      uVar10 = *(undefined4 *)(param_1 + 0x3c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar7 = FUN_01cabb84(iVar3,0);
      iVar4 = *piVar12;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x01384ab4();
        iVar4 = *piVar12;
      }
      iVar9 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x30);
      if (iVar9 == 0) {
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar12;
        }
        uVar11 = **(undefined4 **)(iVar4 + 0x5c);
        iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd16c0 + 0x1cd11b8));
        func_0x024519f0(iVar9,uVar11,**(undefined4 **)(_UNK_01cd16c4 + 0x1cd11d8),0);
        *(int *)(*(int *)(*piVar12 + 0x5c) + 0x30) = iVar9;
      }
      uStack_40 = 0x2000000;
      uStack_3c = **(undefined4 **)(_UNK_01cd16c8 + 0x1cd1204);
      func_0x03017ffc(param_1,uVar10,uVar7,iVar9);
      uVar10 = *(undefined4 *)(param_1 + 0x40);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar7 = FUN_01ca4120(iVar3,0);
      iVar4 = *piVar12;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x01384ab4();
        iVar4 = *piVar12;
      }
      iVar9 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x34);
      if (iVar9 == 0) {
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar12;
        }
        uVar11 = **(undefined4 **)(iVar4 + 0x5c);
        iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01cd16cc + 0x1cd1284));
        func_0x024519f0(iVar9,uVar11,**(undefined4 **)(_UNK_01cd16d0 + 0x1cd12a4),0);
        *(int *)(*(int *)(*piVar12 + 0x5c) + 0x34) = iVar9;
      }
      uStack_40 = 0x4000000;
      uStack_3c = **(undefined4 **)(_UNK_01cd16d4 + 0x1cd12d0);
      func_0x03017ffc(param_1,uVar10,uVar7,iVar9);
      uVar10 = *(undefined4 *)(param_1 + 0x44);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar7 = FUN_01ca41d0(iVar3,0);
      iVar3 = *piVar12;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar12;
      }
      iVar4 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x38);
      if (iVar4 == 0) {
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar12;
        }
        uVar11 = **(undefined4 **)(iVar3 + 0x5c);
        iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01cd16d8 + 0x1cd1350));
        func_0x024519f0(iVar4,uVar11,**(undefined4 **)(_UNK_01cd16dc + 0x1cd1370),0);
        *(int *)(*(int *)(*piVar12 + 0x5c) + 0x38) = iVar4;
      }
      uStack_40 = 0x20000;
      uStack_3c = **(undefined4 **)(_UNK_01cd16e0 + 0x1cd139c);
      func_0x03017ffc(param_1,uVar10,uVar7,iVar4);
      FUN_01cd1700(param_1,0);
      iVar3 = *(int *)(param_1 + 8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02450870(iVar3,**(undefined4 **)(_UNK_01cd16e4 + 0x1cd13dc));
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0382ab5c(&uStack_38,iVar3,**(undefined4 **)(_UNK_01cd16e8 + 0x1cd1408));
      puVar2 = *(undefined4 **)(_UNK_01cd16ec + 0x1cd141c);
      while (iVar4 = func_0x01475908(&uStack_38,*puVar2), iVar3 = iStack_2c, iVar4 != 0) {
        if (iStack_2c == 0) {
          func_0x01384bf0();
        }
        if ((*(int *)(iVar3 + 0x28) < 1) && (*(int *)(iVar3 + 0x2c) != 0)) {
          iVar4 = *(int *)(param_1 + 0x50);
          uVar10 = *(undefined4 *)(iVar3 + 0xc);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar4 + 8);
          uVar5 = *(uint *)(iVar4 + 0xc);
          piVar12 = *(int **)(_UNK_01cd16f0 + 0x1cd1488);
          *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
          iVar9 = *piVar12;
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (uVar5 < *(uint *)(iVar3 + 0xc)) {
            *(uint *)(iVar4 + 0xc) = uVar5 + 1;
            *(undefined4 *)(iVar3 + uVar5 * 4 + 0x10) = uVar10;
          }
          else {
            func_0x0325970c(iVar4,uVar10,
                            *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
          }
        }
      }
      func_0x02450874(&uStack_38,**(undefined4 **)(_UNK_01cd16f4 + 0x1cd14f8));
      return;
    }
    iVar3 = func_0x0229f13c(0x9712,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1cd0730;
    unaff_r4 = param_1;
    unaff_r5 = iVar3;
    register0x00000054 = (BADSPACEBASE *)&uStack_40;
  }
  else {
    iVar3 = func_0x0229f13c(0x9735,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar4 = *(int *)(iVar3 + 0x10);
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
  if (iVar4 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar4,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar4 = *(int *)(iVar3 + 8);
  uVar10 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar3 == 0) {
    uVar7 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar4,uVar10,(undefined1 *)((int)register0x00000054 + -0x30),uVar7);
  return;
}



// ===== FAT.ObjectMan$$FAT.IGameModule.Startup RVA 0x1cc4500 =====

void FUN_01cd4500(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x9736,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x9736,0);
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



// ===== FAT.ObjectMan$$.ctor RVA 0x1cc454c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cd454c(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01cd4b14 + 0x1cd4560);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b18 + 0x1cd4574));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b1c + 0x1cd4580));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b20 + 0x1cd458c));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b24 + 0x1cd4598));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b28 + 0x1cd45a4));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b2c + 0x1cd45b0));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b30 + 0x1cd45bc));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b34 + 0x1cd45c8));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b38 + 0x1cd45d4));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b3c + 0x1cd45e0));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b40 + 0x1cd45ec));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b44 + 0x1cd45f8));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b48 + 0x1cd4604));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b4c + 0x1cd4610));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b50 + 0x1cd461c));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b54 + 0x1cd4628));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b58 + 0x1cd4634));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b5c + 0x1cd4640));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b60 + 0x1cd464c));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b64 + 0x1cd4658));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b68 + 0x1cd4664));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b6c + 0x1cd4670));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b70 + 0x1cd467c));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b74 + 0x1cd4688));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b78 + 0x1cd4694));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b7c + 0x1cd46a0));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b80 + 0x1cd46ac));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b84 + 0x1cd46b8));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b88 + 0x1cd46c4));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b8c + 0x1cd46d0));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b90 + 0x1cd46dc));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b94 + 0x1cd46e8));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b98 + 0x1cd46f4));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4b9c + 0x1cd4700));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4ba0 + 0x1cd470c));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4ba4 + 0x1cd4718));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4ba8 + 0x1cd4724));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4bac + 0x1cd4730));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4bb0 + 0x1cd473c));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4bb4 + 0x1cd4748));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4bb8 + 0x1cd4754));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4bbc + 0x1cd4760));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01cd4bc0 + 0x1cd4774));
  func_0x02450574(uVar1,**(undefined4 **)(_UNK_01cd4bc4 + 0x1cd4788));
  puVar2 = *(undefined4 **)(_UNK_01cd4bc8 + 0x1cd479c);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02450574(uVar1,**(undefined4 **)(_UNK_01cd4bcc + 0x1cd47b4));
  puVar2 = *(undefined4 **)(_UNK_01cd4bd0 + 0x1cd47c8);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02450574(uVar1,**(undefined4 **)(_UNK_01cd4bd4 + 0x1cd47e0));
  puVar2 = *(undefined4 **)(_UNK_01cd4bd8 + 0x1cd47f4);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02450574(uVar1,**(undefined4 **)(_UNK_01cd4bdc + 0x1cd480c));
  puVar2 = *(undefined4 **)(_UNK_01cd4be0 + 0x1cd4820);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02450574(uVar1,**(undefined4 **)(_UNK_01cd4be4 + 0x1cd4838));
  puVar2 = *(undefined4 **)(_UNK_01cd4be8 + 0x1cd484c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02450574(uVar1,**(undefined4 **)(_UNK_01cd4bec + 0x1cd4864));
  puVar2 = *(undefined4 **)(_UNK_01cd4bf0 + 0x1cd4878);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02450574(uVar1,**(undefined4 **)(_UNK_01cd4bf4 + 0x1cd4890));
  puVar2 = *(undefined4 **)(_UNK_01cd4bf8 + 0x1cd48a4);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02450574(uVar1,**(undefined4 **)(_UNK_01cd4bfc + 0x1cd48bc));
  puVar2 = *(undefined4 **)(_UNK_01cd4c00 + 0x1cd48d0);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02450574(uVar1,**(undefined4 **)(_UNK_01cd4c04 + 0x1cd48e8));
  puVar2 = *(undefined4 **)(_UNK_01cd4c08 + 0x1cd48fc);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02450574(uVar1,**(undefined4 **)(_UNK_01cd4c0c + 0x1cd4914));
  puVar2 = *(undefined4 **)(_UNK_01cd4c10 + 0x1cd4928);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02450574(uVar1,**(undefined4 **)(_UNK_01cd4c14 + 0x1cd4940));
  puVar2 = *(undefined4 **)(_UNK_01cd4c18 + 0x1cd4954);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02450574(uVar1,**(undefined4 **)(_UNK_01cd4c1c + 0x1cd496c));
  puVar2 = *(undefined4 **)(_UNK_01cd4c20 + 0x1cd4980);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02451a14(uVar1,**(undefined4 **)(_UNK_01cd4c24 + 0x1cd4998));
  puVar2 = *(undefined4 **)(_UNK_01cd4c28 + 0x1cd49ac);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02450574(uVar1,**(undefined4 **)(_UNK_01cd4c2c + 0x1cd49c4));
  puVar2 = *(undefined4 **)(_UNK_01cd4c30 + 0x1cd49d8);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02450574(uVar1,**(undefined4 **)(_UNK_01cd4c34 + 0x1cd49f0));
  puVar2 = *(undefined4 **)(_UNK_01cd4c38 + 0x1cd4a04);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02450574(uVar1,**(undefined4 **)(_UNK_01cd4c3c + 0x1cd4a1c));
  puVar2 = *(undefined4 **)(_UNK_01cd4c40 + 0x1cd4a30);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x024509b4(uVar1,**(undefined4 **)(_UNK_01cd4c44 + 0x1cd4a48));
  puVar2 = *(undefined4 **)(_UNK_01cd4c48 + 0x1cd4a5c);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02450574(uVar1,**(undefined4 **)(_UNK_01cd4c4c + 0x1cd4a74));
  puVar2 = *(undefined4 **)(_UNK_01cd4c50 + 0x1cd4a88);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03258eb8(uVar1,**(undefined4 **)(_UNK_01cd4c54 + 0x1cd4aa0));
  puVar2 = *(undefined4 **)(_UNK_01cd4c58 + 0x1cd4ab4);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0325ba70(uVar1,**(undefined4 **)(_UNK_01cd4c5c + 0x1cd4acc));
  puVar2 = *(undefined4 **)(_UNK_01cd4c60 + 0x1cd4ae0);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0245194c(uVar1,**(undefined4 **)(_UNK_01cd4c64 + 0x1cd4af8));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.ObjectMan.<>c$$.cctor RVA 0x1cc4c68 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cd4c68(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01cd4cc0 + 0x1cd4c78);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd4cc4 + 0x1cd4c8c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01cd4cc8 + 0x1cd4ca0);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.ObjectMan.<>c$$.ctor RVA 0x1cc4ccc =====

void FUN_01cd4ccc(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.ObjectMan.<>c$$<_OnConfigLoaded>b__23_0 RVA 0x1cc4cd4 =====

undefined4 FUN_01cd4cd4(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(param_2 + 0xc);
}



// ===== FAT.ObjectMan.<>c$$<_OnConfigLoaded>b__23_1 RVA 0x1cc4cf0 =====

undefined4 FUN_01cd4cf0(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(param_2 + 0xc);
}



// ===== FAT.ObjectMan.<>c$$<_OnConfigLoaded>b__23_2 RVA 0x1cc4d0c =====

undefined4 FUN_01cd4d0c(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(param_2 + 0xc);
}



// ===== FAT.ObjectMan.<>c$$<_OnConfigLoaded>b__23_3 RVA 0x1cc4d28 =====

undefined4 FUN_01cd4d28(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(param_2 + 8);
}



// ===== FAT.ObjectMan.<>c$$<_OnConfigLoaded>b__23_4 RVA 0x1cc4d44 =====

undefined4 FUN_01cd4d44(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(param_2 + 0xc);
}



// ===== FAT.ObjectMan.<>c$$<_OnConfigLoaded>b__23_5 RVA 0x1cc4d60 =====

undefined4 FUN_01cd4d60(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(param_2 + 0xc);
}



// ===== FAT.ObjectMan.<>c$$<_OnConfigLoaded>b__23_6 RVA 0x1cc4d7c =====

undefined4 FUN_01cd4d7c(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(param_2 + 0xc);
}



// ===== FAT.ObjectMan.<>c$$<_OnConfigLoaded>b__23_7 RVA 0x1cc4d98 =====

undefined4 FUN_01cd4d98(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(param_2 + 0xc);
}



// ===== FAT.ObjectMan.<>c$$<_OnConfigLoaded>b__23_8 RVA 0x1cc4db4 =====

undefined4 FUN_01cd4db4(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(param_2 + 0xc);
}



// ===== FAT.ObjectMan.<>c$$<_OnConfigLoaded>b__23_9 RVA 0x1cc4dd0 =====

undefined4 FUN_01cd4dd0(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(param_2 + 0xc);
}



// ===== FAT.ObjectMan.<>c$$<_OnConfigLoaded>b__23_10 RVA 0x1cc4dec =====

undefined4 FUN_01cd4dec(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(param_2 + 0xc);
}



// ===== FAT.ObjectMan.<>c$$<_OnConfigLoaded>b__23_11 RVA 0x1cc4e08 =====

undefined4 FUN_01cd4e08(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(param_2 + 0xc);
}



// ===== FAT.ObjectMan.<>c$$<_OnConfigLoaded>b__23_12 RVA 0x1cc4e24 =====

undefined4 FUN_01cd4e24(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(param_2 + 0xc);
}



// ===== FAT.ObjectMan.<>c$$<_OnConfigLoaded>b__23_13 RVA 0x1cc4e40 =====

undefined4 FUN_01cd4e40(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(param_2 + 0xc);
}



// ===== FAT.ObjectMan.<>c$$<OnMergeBoardVersionUpdate>b__25_0 RVA 0x1cc4e5c =====

undefined4 FUN_01cd4e5c(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(param_2 + 0x10);
}



// ===== FAT.ObjectMan.<>c$$<OnMergeBoardVersionUpdate>b__25_1 RVA 0x1cc4e78 =====

undefined4 FUN_01cd4e78(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(param_2 + 0x10);
}



// ===== FAT.ObjectMan.<WalkAllIdWithMask>d__28$$System.IDisposable.Dispose RVA 0x1cc4e94 =====

void FUN_01cd4e94(void)

{
  return;
}



// ===== FAT.ObjectMan.<WalkAllIdWithMask>d__28$$MoveNext RVA 0x1cc4e98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cd4e98(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  pcVar1 = (char *)(_UNK_01cd4fdc + 0x1cd4eb0);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd4fe0 + 0x1cd4ec4));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4fe4 + 0x1cd4ed0));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4fe8 + 0x1cd4edc));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4fec + 0x1cd4ee8));
    func_0x01384978(*(undefined4 *)(_UNK_01cd4ff0 + 0x1cd4ef4));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x48);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02450598(&uStack_48,iVar2,**(undefined4 **)(_UNK_01cd4ff4 + 0x1cd4f50));
    uStack_30 = uStack_48;
    uStack_28 = uStack_40;
    uStack_20 = uStack_38;
    *(undefined8 *)(param_1 + 0x28) = uStack_38;
    *(undefined8 *)(param_1 + 0x18) = uStack_48;
    *(undefined8 *)(param_1 + 0x20) = uStack_40;
  }
  puVar3 = *(undefined4 **)(_UNK_01cd4ff8 + 0x1cd4f9c);
  do {
    iVar2 = func_0x01475638(param_1 + 0x18,*puVar3);
    if (iVar2 == 0) {
      return 0;
    }
  } while ((*(uint *)(param_1 + 0x14) & *(uint *)(param_1 + 0x28)) != *(uint *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x24);
  return 1;
}



// ===== FAT.ObjectMan.<WalkAllIdWithMask>d__28$$System.Collections.Generic.IEnumerator<System.Int32>.get_Current RVA 0x1cc4ffc =====

undefined4 FUN_01cd4ffc(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.ObjectMan.<WalkAllIdWithMask>d__28$$System.Collections.IEnumerator.Reset RVA 0x1cc5004 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cd5004(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  func_0x01384988(*(undefined4 *)(iRam01cd5040 + 0x1cd5014));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(iRam01cd5044 + 0x1cd5030));
  func_0x01384aa0(uVar1,uVar2);
  iVar3 = func_0x01384928();
  pcVar4 = (char *)(_UNK_01cd50a0 + 0x1cd5060);
  uStack_18 = uVar1;
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd50a4 + 0x1cd5074));
    *pcVar4 = '\x01';
  }
  uStack_1c = *(undefined4 *)(iVar3 + 0xc);
  func_0x01384abc(**(undefined4 **)(_UNK_01cd50a8 + 0x1cd508c),&uStack_1c);
  return;
}



// ===== FAT.ObjectMan.<WalkAllIdWithMask>d__28$$System.Collections.IEnumerator.get_Current RVA 0x1cc5048 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cd5048(int param_1)

{
  char *pcVar1;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_01cd50a0 + 0x1cd5060);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd50a4 + 0x1cd5074));
    *pcVar1 = '\x01';
  }
  uStack_14 = *(undefined4 *)(param_1 + 0xc);
  func_0x01384abc(**(undefined4 **)(_UNK_01cd50a8 + 0x1cd508c),&uStack_14);
  return;
}



// ===== FAT.ObjectMan$$_ClearConfig<object> RVA 0x3007784 =====

/* WARNING: Removing unreachable block (ram,0x03017950) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03017784(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(int *)(param_5 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(_UNK_030179fc + 0x30177b8));
    func_0x01384978(*(undefined4 *)(_UNK_03017a00 + 0x30177c4));
    func_0x01384978(*(undefined4 *)(_UNK_03017a04 + 0x30177d0));
    if (*(int *)(param_5 + 0x1c) == 0) {
      func_0x0140024c(param_5);
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_3c = 0;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03d6476c(param_2,*(undefined4 *)(*(int *)(param_5 + 0x1c) + 4));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0382ab5c(&uStack_50,iVar1,*(undefined4 *)(*(int *)(param_5 + 0x1c) + 0xc));
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  puVar4 = *(undefined4 **)(_UNK_03017a08 + 0x3017860);
  while (iVar1 = func_0x03f9b9f8(&uStack_38,*(undefined4 *)(*(int *)(param_5 + 0x1c) + 0x28)),
        uVar2 = uStack_2c, iVar1 != 0) {
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = (**(code **)(param_3 + 0xc))
                      (*(undefined4 *)(param_3 + 0x20),uVar2,*(undefined4 *)(param_3 + 0x14));
    iVar1 = *(int *)(param_1 + 0x48);
    uStack_3c = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5bb20(iVar1,uVar2,&uStack_3c,**(undefined4 **)(_UNK_03017a0c + 0x30178c4));
    iVar1 = *(int *)(param_1 + 0x48);
    uVar3 = uStack_3c & ~param_4;
    uStack_3c = uVar3;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59d54(iVar1,uVar2,uVar3,**(undefined4 **)(_UNK_03017a10 + 0x30178fc));
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d66094(iVar1,uVar2,*puVar4);
  }
  func_0x03f9b9f4(&uStack_38,*(undefined4 *)(*(int *)(param_5 + 0x1c) + 0x2c));
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(param_2,*(undefined4 *)(*(int *)(param_5 + 0x1c) + 0x30));
  return;
}



// ===== FAT.ObjectMan$$_ClearConfig<__Il2CppFullySharedGenericType> RVA 0x3007a14 =====

/* WARNING: Removing unreachable block (ram,0x03017e5c) */
/* WARNING: Removing unreachable block (ram,0x03017e88) */
/* WARNING: Removing unreachable block (ram,0x03017e80) */

int FUN_03017a14(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int extraout_r1;
  undefined4 extraout_r2;
  int extraout_r3;
  uint uVar11;
  int iVar12;
  code *pcVar13;
  int *piVar14;
  int *piVar15;
  undefined1 uVar16;
  undefined8 uVar17;
  int aiStack_6c [5];
  int *piStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  uint uStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  uint uStack_38;
  int *piStack_34;
  int iStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(iRam03017e70 + 0x3017a40);
  iVar6 = *(int *)(param_5 + 0x1c);
  iStack_4c = param_2;
  uStack_48 = param_4;
  iStack_44 = param_3;
  if (iVar6 == 0) {
    func_0x01384978(*(undefined4 *)(iRam03017e74 + 0x3017a5c));
    func_0x01384978(*(undefined4 *)(iRam03017e78 + 0x3017a68));
    func_0x01384978(*(undefined4 *)(iRam03017e7c + 0x3017a74));
    iVar6 = *(int *)(param_5 + 0x1c);
    if (iVar6 == 0) {
      func_0x0140024c(param_5);
      iVar6 = *(int *)(param_5 + 0x1c);
    }
  }
  iVar12 = *(int *)(*(int *)(iVar6 + 0x10) + 0x84);
  iStack_40 = *(int *)(*(int *)(iVar6 + 0x1c) + 0x84);
  iVar7 = iVar12;
  if ((*(ushort *)(*(int *)(iVar6 + 0x10) + 0xbd) & 1) == 0) {
    iVar6 = func_0x014001f0();
    iVar7 = *(int *)(iVar6 + 0x84);
  }
  iVar6 = iStack_40;
  iStack_50 = (int)&piStack_58 - (iVar7 + 0xfU & 0xfffffff8);
  uVar11 = iStack_40 + 7U & 0xfffffff8;
  piVar14 = (int *)(iStack_50 - uVar11);
  piVar15 = (int *)((int)piVar14 - uVar11);
  uVar3 = iVar12 + 7U & 0xfffffff8;
  piStack_58 = (int *)((int)piVar15 - uVar3);
  iVar7 = (int)piStack_58 - uVar3;
  iStack_54 = iVar12;
  iStack_3c = iVar7;
  func_0x0145894c(iVar7,iVar12);
  iVar7 = iVar7 - uVar11;
  func_0x0145894c(iVar7,iVar6);
  uStack_38 = 0;
  if (iStack_4c == 0) {
    func_0x01384bf0();
  }
  iVar6 = (*(code *)**(undefined4 **)(*(int *)(param_5 + 0x1c) + 4))(iStack_4c);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  piVar1 = piStack_58;
  puVar8 = *(undefined4 **)(*(int *)(param_5 + 0x1c) + 0xc);
  uVar4 = *puVar8;
  pcVar13 = (code *)puVar8[2];
  piStack_34 = piStack_58;
  *(int **)(iVar7 + -8) = piStack_58;
  (*pcVar13)(uVar4,puVar8,iVar6,&piStack_34);
  func_0x01458934(iStack_3c,piVar1,iStack_54);
  uStack_48 = ~uStack_48;
  while (iVar5 = (*(code *)**(undefined4 **)(*(int *)(param_5 + 0x1c) + 0x28))(iStack_3c),
        iVar12 = iStack_3c, iVar5 != 0) {
    puVar8 = *(undefined4 **)(*(int *)(param_5 + 0x1c) + 0x14);
    uVar4 = *puVar8;
    pcVar13 = (code *)puVar8[2];
    piStack_34 = piVar14;
    *(int **)(iVar7 + -8) = piVar14;
    (*pcVar13)(uVar4,puVar8,iVar12,&piStack_34);
    iVar6 = iStack_40;
    func_0x01458934(iVar7,piVar14,iStack_40);
    func_0x01458934(piVar15,iVar7,iVar6);
    iVar6 = iStack_44;
    if (iStack_44 == 0) {
      func_0x01384bf0();
    }
    puVar8 = *(undefined4 **)(*(int *)(param_5 + 0x1c) + 0x24);
    piStack_34 = piVar15;
    if (-1 < *(int *)(*(int *)(*(int *)(param_5 + 0x1c) + 0x1c) + 0x14)) {
      piStack_34 = (int *)*piVar15;
    }
    uVar4 = *puVar8;
    pcVar13 = (code *)puVar8[2];
    *(int **)(iVar7 + -8) = &iStack_30;
    (*pcVar13)(uVar4,puVar8,iVar6,&piStack_34);
    iVar6 = iStack_30;
    iVar12 = *(int *)(param_1 + 0x48);
    uStack_38 = 0;
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5bb20(iVar12,iVar6,&uStack_38,**(undefined4 **)(iRam03017e80 + 0x3017ca8));
    iVar12 = *(int *)(param_1 + 0x48);
    uVar3 = uStack_38 & uStack_48;
    uStack_38 = uVar3;
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59d54(iVar12,iVar6,uVar3,**(undefined4 **)(iRam03017e84 + 0x3017ce4));
    iVar12 = *(int *)(param_1 + 0x1c);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    func_0x03d66094(iVar12,iVar6,**(undefined4 **)(iRam03017e88 + 0x3017d10));
  }
  iVar12 = 0;
  while( true ) {
    iVar9 = *(int *)(param_5 + 0x1c);
    iVar5 = *(int *)(iVar9 + 0x10);
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = func_0x014001f0();
      iVar9 = *(int *)(param_5 + 0x1c);
    }
    iVar2 = iStack_50;
    uVar4 = *(undefined4 *)(iVar9 + 0x2c);
    *(undefined4 *)(iVar7 + -8) = 0;
    *(undefined4 *)(iVar7 + -4) = 0;
    func_0x01385938(iVar5,uVar4,iVar2,iStack_3c);
    if (iVar12 != 0) {
      func_0x01384bec(iVar12);
    }
    if (iStack_4c == 0) {
      func_0x01384bf0();
    }
    (*(code *)**(undefined4 **)(*(int *)(param_5 + 0x1c) + 0x30))(iStack_4c);
    if (**(int **)(iRam03017e8c + 0x3017da4) == iStack_2c) break;
    uVar17 = func_0x0145b028();
    uVar4 = (undefined4)uVar17;
    if ((int)((ulonglong)uVar17 >> 0x20) != 1) {
      iVar5 = *(int *)(param_5 + 0x1c);
      iVar12 = *(int *)(iVar5 + 0x10);
      if ((*(ushort *)(iVar12 + 0xbd) & 1) == 0) {
        iVar12 = func_0x014001f0();
        iVar5 = *(int *)(param_5 + 0x1c);
      }
      iVar9 = iStack_3c;
      uVar10 = *(undefined4 *)(iVar5 + 0x2c);
      *(undefined4 *)(iVar7 + -8) = 0;
      *(undefined4 *)(iVar7 + -4) = 0;
      func_0x01385938(iVar12,uVar10,iStack_50,iVar9);
      uVar16 = 1;
      func_0x01459844(uVar4);
      func_0x01062280();
      if (!(bool)uVar16) {
        *(undefined4 *)(iVar7 + -4) = 0x3017e70;
        *(int *)(iVar7 + -8) = param_5;
        *(undefined4 *)(iVar7 + -0xc) = 0;
        *(undefined4 *)(iVar7 + -0x10) = uVar4;
        if (*(int *)(extraout_r3 + 0x1c) == 0) {
          func_0x0140024c(extraout_r3);
        }
        *(undefined4 *)(iVar7 + -0x14) = 0;
        if (extraout_r1 == 0) {
          func_0x01384bf0();
        }
        func_0x03d66780(extraout_r1,extraout_r2,iVar7 + -0x14,
                        *(undefined4 *)(*(int *)(extraout_r3 + 0x1c) + 8));
        return *(int *)(iVar7 + -0x14);
      }
                    /* WARNING: Could not recover jumptable at 0x03017e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar6 = (*(code *)(0x160 - iVar6))();
      return iVar6;
    }
    piVar14 = (int *)func_0x0145b008(uVar4);
    iVar12 = *piVar14;
    func_0x0145b0f8();
  }
  return **(int **)(iRam03017e8c + 0x3017da4);
}



// ===== FAT.ObjectMan$$_FindConfig<object> RVA 0x3007e90 =====

undefined4 FUN_03017e90(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uStack_14;
  
  if (*(int *)(param_4 + 0x1c) == 0) {
    func_0x0140024c(param_4);
  }
  uStack_14 = 0;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x03d66780(param_2,param_3,&uStack_14,*(undefined4 *)(*(int *)(param_4 + 0x1c) + 8));
  return uStack_14;
}



// ===== FAT.ObjectMan$$_FindConfig<__Il2CppFullySharedGenericType> RVA 0x3007ef0 =====

/* WARNING: Removing unreachable block (ram,0x03018528) */
/* WARNING: Removing unreachable block (ram,0x03017ff8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03017ef0(undefined4 param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int *extraout_r2;
  uint uVar9;
  int extraout_r3;
  int *piVar10;
  code *pcVar11;
  uint *puVar12;
  uint uVar13;
  int *piVar14;
  bool bVar15;
  undefined8 uVar16;
  uint auStack_70 [12];
  uint uStack_40;
  uint *apuStack_3c [2];
  undefined1 uStack_31;
  uint uStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(iRam03017ff4 + 0x3017f18);
  piVar14 = *(int **)(param_5 + 0x1c);
  uStack_40 = param_4;
  if (piVar14 == (int *)0x0) {
    func_0x0140024c(param_5);
    piVar14 = *(int **)(param_5 + 0x1c);
  }
  uVar13 = *(uint *)(*piVar14 + 0x84);
  uVar1 = uVar13 + 7 & 0xfffffff8;
  uVar9 = (int)&uStack_40 - uVar1;
  puVar12 = (uint *)(uVar9 - uVar1);
  func_0x0145894c(puVar12,uVar13);
  func_0x0145894c(puVar12,uVar13);
  if (param_2 == 0) {
    func_0x01384bf0();
    piVar14 = *(int **)(param_5 + 0x1c);
  }
  puVar6 = (undefined4 *)piVar14[2];
  apuStack_3c[0] = &uStack_30;
  uVar2 = *puVar6;
  pcVar11 = (code *)puVar6[2];
  apuStack_3c[1] = puVar12;
  uStack_30 = param_3;
  puVar12[-2] = (uint)&uStack_31;
  (*pcVar11)(uVar2,puVar6,param_2,apuStack_3c);
  func_0x01458934(uVar9,puVar12,uVar13);
  func_0x01458934(uStack_40,uVar9,uVar13);
  bVar15 = **(int **)(iRam03017ff8 + 0x3017fe0) == iStack_2c;
  if (bVar15) {
    return;
  }
  uVar16 = func_0x0145b028();
  iVar5 = (int)((ulonglong)uVar16 >> 0x20);
                    /* WARNING: Could not recover jumptable at 0x03017ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (bVar15) {
    (*(code *)(0x600 - (int)pcVar11))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03017ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar12[-1] = 0x3017ff4;
  puVar12[-2] = (uint)&stack0xfffffff8;
  puVar12[-3] = param_3;
  puVar12[-4] = param_2;
  puVar12[-5] = (uint)piVar14;
  puVar12[-6] = uVar13;
  puVar12[-7] = (uint)puVar12;
  puVar12[-8] = (uint)pcVar11;
  puVar12[-9] = uVar9;
  uVar1 = puVar12[1];
  puVar12[-0xc] = (int)uVar16;
  if (*(int *)(uVar1 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(_UNK_03018630 + 0x3018030));
    func_0x01384978(*(undefined4 *)(_UNK_03018634 + 0x301803c));
    func_0x01384978(*(undefined4 *)(_UNK_03018638 + 0x3018048));
    func_0x01384978(*(undefined4 *)(_UNK_0301863c + 0x3018054));
    func_0x01384978(*(undefined4 *)(_UNK_03018640 + 0x3018060));
    func_0x01384978(*(undefined4 *)(_UNK_03018644 + 0x301806c));
    func_0x01384978(*(undefined4 *)(_UNK_03018648 + 0x3018078));
    func_0x01384978(*(undefined4 *)(_UNK_0301864c + 0x3018084));
    func_0x01384978(*(undefined4 *)(_UNK_03018650 + 0x3018090));
    func_0x01384978(*(undefined4 *)(_UNK_03018654 + 0x301809c));
    if (*(int *)(uVar1 + 0x1c) == 0) {
      func_0x0140024c(uVar1);
    }
  }
  puVar12[-10] = 0;
  if (*puVar12 != 1) {
    func_0x02f623e8(*(undefined4 *)(puVar12[-0xc] + 0x54),*puVar12,
                    **(undefined4 **)(_UNK_03018658 + 0x30180d4));
  }
  if (extraout_r2 != (int *)0x0) {
    iVar7 = **(int **)(uVar1 + 0x1c);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = func_0x014001f0(iVar7);
    }
    iVar3 = *extraout_r2;
    uVar9 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar14[-1] == iVar7) {
          puVar6 = (undefined4 *)(iVar3 + *piVar14 * 8 + 0xc0);
          goto LAB_03018154;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 2;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(extraout_r2,iVar7,0);
LAB_03018154:
    piVar14 = (int *)(*(code *)*puVar6)(extraout_r2,puVar6[1]);
LAB_03018168:
    if (piVar14 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar7 = *piVar14;
    uVar9 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_03018678 + 0x3018184)) {
          puVar6 = (undefined4 *)(iVar7 + *piVar10 * 8 + 0xc0);
          goto LAB_030181cc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar14,**(int **)(_UNK_03018678 + 0x3018184),0);
LAB_030181cc:
    iVar7 = (*(code *)*puVar6)(piVar14,puVar6[1]);
    if (iVar7 != 0) {
      if (piVar14 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar7 = *(int *)(*(int *)(uVar1 + 0x1c) + 8);
      if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
        iVar7 = func_0x014001f0(iVar7);
      }
      iVar3 = *piVar14;
      uVar9 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar10[-1] == iVar7) {
            puVar6 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
            goto LAB_0301825c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined4 *)func_0x014002dc(piVar14,iVar7,0);
LAB_0301825c:
      uVar2 = (*(code *)*puVar6)(piVar14,puVar6[1]);
      if (extraout_r3 == 0) {
        func_0x01384bf0();
      }
      uVar9 = (**(code **)(extraout_r3 + 0xc))
                        (*(undefined4 *)(extraout_r3 + 0x20),uVar2,
                         *(undefined4 *)(extraout_r3 + 0x14));
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x03d64b90(iVar5,uVar9,*(undefined4 *)(*(int *)(uVar1 + 0x1c) + 0x20));
      if (iVar7 == 0) {
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x03d64944(iVar5,uVar9,uVar2,*(undefined4 *)(*(int *)(uVar1 + 0x1c) + 0x28));
        iVar7 = *(int *)(puVar12[-0xc] + 0x48);
        puVar12[-10] = 0;
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x03d5bb20(iVar7,uVar9,puVar12 + -10,**(undefined4 **)(_UNK_03018670 + 0x3018458));
        uVar13 = puVar12[-10];
        iVar7 = *(int *)(puVar12[-0xc] + 0x48);
        uVar8 = *puVar12;
        puVar12[-10] = uVar13 | uVar8;
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x03d59d54(iVar7,uVar9,uVar13 | uVar8,**(undefined4 **)(_UNK_03018674 + 0x3018498));
      }
      else {
        piVar10 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0301865c + 0x30182c8),2);
        uVar2 = *(undefined4 *)(*(int *)(uVar1 + 0x1c) + 0x24);
        if (*(int *)(**(int **)(_UNK_03018660 + 0x30182e0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        piVar4 = (int *)func_0x04836854(uVar2,0);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar7 = (**(code **)(*piVar4 + 400))(piVar4,*(undefined4 *)(*piVar4 + 0x194));
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar7 != 0) &&
           (iVar3 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar10 + 0x20)), iVar3 == 0)) {
          uVar2 = func_0x01384c10();
          func_0x01384aa0(uVar2,0);
        }
        if (piVar10[3] == 0) {
          func_0x01384bf4();
        }
        piVar10[4] = iVar7;
        puVar6 = *(undefined4 **)(_UNK_03018664 + 0x3018384);
        puVar12[-0xb] = uVar9;
        iVar7 = func_0x01384abc(*puVar6,puVar12 + -0xb);
        if ((iVar7 != 0) &&
           (iVar3 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar10 + 0x20)), iVar3 == 0)) {
          uVar2 = func_0x01384c10();
          func_0x01384aa0(uVar2,0);
        }
        if ((uint)piVar10[3] < 2) {
          func_0x01384bf4();
        }
        piVar10[5] = iVar7;
        if (*(int *)(**(int **)(_UNK_03018668 + 0x30183e0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c23bc(**(undefined4 **)(_UNK_0301866c + 0x30183fc),piVar10,0);
      }
      goto LAB_03018168;
    }
    if (piVar14 != (int *)0x0) {
      iVar5 = *piVar14;
      uVar1 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar1 != 0) {
        piVar10 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_0301867c + 0x30184c8)) {
            puVar6 = (undefined4 *)(iVar5 + *piVar10 * 8 + 0xc0);
            goto LAB_03018510;
          }
          uVar1 = uVar1 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar1 != 0);
      }
      puVar6 = (undefined4 *)func_0x014002dc(piVar14,**(int **)(_UNK_0301867c + 0x30184c8),0);
LAB_03018510:
      (*(code *)*puVar6)(piVar14,puVar6[1]);
    }
  }
  return;
}



// ===== FAT.ObjectMan$$_InitConfig<object> RVA 0x3007ffc =====

/* WARNING: Removing unreachable block (ram,0x03018528) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03017ffc(int param_1,int param_2,int *param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uStack_2c;
  uint uStack_28;
  
  if (*(int *)(param_6 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(_UNK_03018630 + 0x3018030));
    func_0x01384978(*(undefined4 *)(_UNK_03018634 + 0x301803c));
    func_0x01384978(*(undefined4 *)(_UNK_03018638 + 0x3018048));
    func_0x01384978(*(undefined4 *)(_UNK_0301863c + 0x3018054));
    func_0x01384978(*(undefined4 *)(_UNK_03018640 + 0x3018060));
    func_0x01384978(*(undefined4 *)(_UNK_03018644 + 0x301806c));
    func_0x01384978(*(undefined4 *)(_UNK_03018648 + 0x3018078));
    func_0x01384978(*(undefined4 *)(_UNK_0301864c + 0x3018084));
    func_0x01384978(*(undefined4 *)(_UNK_03018650 + 0x3018090));
    func_0x01384978(*(undefined4 *)(_UNK_03018654 + 0x301809c));
    if (*(int *)(param_6 + 0x1c) == 0) {
      func_0x0140024c(param_6);
    }
  }
  uStack_28 = 0;
  if (param_5 != 1) {
    func_0x02f623e8(*(undefined4 *)(param_1 + 0x54),param_5,
                    **(undefined4 **)(_UNK_03018658 + 0x30180d4));
  }
  if (param_3 != (int *)0x0) {
    iVar6 = **(int **)(param_6 + 0x1c);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x014001f0(iVar6);
    }
    iVar1 = *param_3;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar6) {
          puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
          goto LAB_03018154;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_3,iVar6,0);
LAB_03018154:
    piVar8 = (int *)(*(code *)*puVar2)(param_3,puVar2[1]);
LAB_03018168:
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar6 = *piVar8;
    uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_03018678 + 0x3018184)) {
          puVar2 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0xc0);
          goto LAB_030181cc;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_03018678 + 0x3018184),0);
LAB_030181cc:
    iVar6 = (*(code *)*puVar2)(piVar8,puVar2[1]);
    if (iVar6 != 0) {
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(*(int *)(param_6 + 0x1c) + 8);
      if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
        iVar6 = func_0x014001f0(iVar6);
      }
      iVar1 = *piVar8;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar9[-1] == iVar6) {
            puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
            goto LAB_0301825c;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,iVar6,0);
LAB_0301825c:
      uVar3 = (*(code *)*puVar2)(piVar8,puVar2[1]);
      if (param_4 == 0) {
        func_0x01384bf0();
      }
      uVar4 = (**(code **)(param_4 + 0xc))
                        (*(undefined4 *)(param_4 + 0x20),uVar3,*(undefined4 *)(param_4 + 0x14));
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x03d64b90(param_2,uVar4,*(undefined4 *)(*(int *)(param_6 + 0x1c) + 0x20));
      if (iVar6 == 0) {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x03d64944(param_2,uVar4,uVar3,*(undefined4 *)(*(int *)(param_6 + 0x1c) + 0x28));
        iVar6 = *(int *)(param_1 + 0x48);
        uStack_28 = 0;
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x03d5bb20(iVar6,uVar4,&uStack_28,**(undefined4 **)(_UNK_03018670 + 0x3018458));
        iVar6 = *(int *)(param_1 + 0x48);
        uVar7 = uStack_28 | param_5;
        uStack_28 = uVar7;
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x03d59d54(iVar6,uVar4,uVar7,**(undefined4 **)(_UNK_03018674 + 0x3018498));
      }
      else {
        piVar9 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0301865c + 0x30182c8),2);
        uVar3 = *(undefined4 *)(*(int *)(param_6 + 0x1c) + 0x24);
        if (*(int *)(**(int **)(_UNK_03018660 + 0x30182e0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        piVar5 = (int *)func_0x04836854(uVar3,0);
        if (piVar5 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar6 = (**(code **)(*piVar5 + 400))(piVar5,*(undefined4 *)(*piVar5 + 0x194));
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar6 != 0) &&
           (iVar1 = func_0x01384ab8(iVar6,*(undefined4 *)(*piVar9 + 0x20)), iVar1 == 0)) {
          uVar3 = func_0x01384c10();
          func_0x01384aa0(uVar3,0);
        }
        if (piVar9[3] == 0) {
          func_0x01384bf4();
        }
        piVar9[4] = iVar6;
        uStack_2c = uVar4;
        iVar6 = func_0x01384abc(**(undefined4 **)(_UNK_03018664 + 0x3018384),&uStack_2c);
        if ((iVar6 != 0) &&
           (iVar1 = func_0x01384ab8(iVar6,*(undefined4 *)(*piVar9 + 0x20)), iVar1 == 0)) {
          uVar3 = func_0x01384c10();
          func_0x01384aa0(uVar3,0);
        }
        if ((uint)piVar9[3] < 2) {
          func_0x01384bf4();
        }
        piVar9[5] = iVar6;
        if (*(int *)(**(int **)(_UNK_03018668 + 0x30183e0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c23bc(**(undefined4 **)(_UNK_0301866c + 0x30183fc),piVar9,0);
      }
      goto LAB_03018168;
    }
    if (piVar8 != (int *)0x0) {
      iVar6 = *piVar8;
      uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_0301867c + 0x30184c8)) {
            puVar2 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0xc0);
            goto LAB_03018510;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_0301867c + 0x30184c8),0);
LAB_03018510:
      (*(code *)*puVar2)(piVar8,puVar2[1]);
    }
  }
  return;
}



// ===== FAT.ObjectMan$$_InitConfig<__Il2CppFullySharedGenericType> RVA 0x3008684 =====

/* WARNING: Removing unreachable block (ram,0x03018df0) */
/* WARNING: Removing unreachable block (ram,0x03018e4c) */
/* WARNING: Removing unreachable block (ram,0x03018e38) */
/* WARNING: Removing unreachable block (ram,0x03018e24) */
/* WARNING: Removing unreachable block (ram,0x03018e18) */
/* WARNING: Removing unreachable block (ram,0x03018e10) */
/* WARNING: Removing unreachable block (ram,0x03018e14) */
/* WARNING: Removing unreachable block (ram,0x03018e1c) */
/* WARNING: Removing unreachable block (ram,0x03018e28) */
/* WARNING: Removing unreachable block (ram,0x03018e40) */
/* WARNING: Removing unreachable block (ram,0x03018e58) */
/* WARNING: Removing unreachable block (ram,0x03018e08) */

void FUN_03018684(undefined4 ***param_1,int param_2,int *param_3,int param_4,uint param_5,
                 int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 ******ppppppuVar8;
  int *extraout_r2;
  int *piVar9;
  int extraout_r3;
  undefined4 **ppuVar10;
  undefined4 ******unaff_r7;
  code *pcVar11;
  undefined4 *****pppppuVar12;
  undefined4 *****pppppuVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  int aiStack_70 [8];
  undefined4 ***pppuStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  uint uStack_40;
  char cStack_39;
  undefined4 *****pppppuStack_38;
  undefined4 ****ppppuStack_34;
  undefined4 *****pppppuStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(iRam03018e04 + 0x30186b0);
  iVar1 = *(int *)(param_6 + 0x1c);
  pppuStack_50 = param_1;
  iStack_44 = param_4;
  if (iVar1 == 0) {
    func_0x01384978(*(undefined4 *)(iRam03018e08 + 0x30186cc));
    func_0x01384978(*(undefined4 *)(iRam03018e0c + 0x30186d8));
    func_0x01384978(*(undefined4 *)(iRam03018e10 + 0x30186e4));
    func_0x01384978(*(undefined4 *)(iRam03018e14 + 0x30186f0));
    func_0x01384978(*(undefined4 *)(iRam03018e18 + 0x30186fc));
    func_0x01384978(*(undefined4 *)(iRam03018e1c + 0x3018708));
    func_0x01384978(*(undefined4 *)(iRam03018e20 + 0x3018714));
    func_0x01384978(*(undefined4 *)(iRam03018e24 + 0x3018720));
    func_0x01384978(*(undefined4 *)(iRam03018e28 + 0x301872c));
    func_0x01384978(*(undefined4 *)(iRam03018e2c + 0x3018738));
    iVar1 = *(int *)(param_6 + 0x1c);
    if (iVar1 == 0) {
      func_0x0140024c(param_6);
      iVar1 = *(int *)(param_6 + 0x1c);
    }
  }
  iStack_4c = *(int *)(*(int *)(iVar1 + 0x10) + 0x84);
  uVar2 = iStack_4c + 7U & 0xfffffff8;
  pppppuVar13 = (undefined4 *****)((int)&pppuStack_50 - uVar2);
  pppppuVar12 = (undefined4 *****)((int)pppppuVar13 - uVar2);
  iVar1 = (int)pppppuVar12 - uVar2;
  func_0x0145894c(iVar1);
  uStack_40 = 0;
  if (param_5 != 1) {
    func_0x02f623e8(pppuStack_50[0x15],param_5,**(undefined4 **)(iRam03018e30 + 0x30187a8));
  }
  if (param_3 == (int *)0x0) goto LAB_03018cf0;
  ppppppuVar8 = (undefined4 ******)**(int **)(param_6 + 0x1c);
  iStack_48 = param_2;
  if ((*(ushort *)((int)ppppppuVar8 + 0xbd) & 1) == 0) {
    ppppppuVar8 = (undefined4 ******)func_0x014001f0(ppppppuVar8);
  }
  iVar3 = *param_3;
  uVar2 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar2 != 0) {
    piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      unaff_r7 = (undefined4 ******)piVar9[-1];
      if (unaff_r7 == ppppppuVar8) {
        puVar4 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
        goto LAB_0301882c;
      }
      uVar2 = uVar2 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar2 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(param_3,ppppppuVar8,0);
LAB_0301882c:
  param_3 = (int *)(*(code *)*puVar4)(param_3,puVar4[1]);
LAB_03018840:
  if (param_3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *param_3;
  uVar2 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar2 != 0) {
    piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      unaff_r7 = (undefined4 ******)piVar9[-1];
      if (unaff_r7 == (undefined4 ******)**(int **)(iRam03018e50 + 0x3018860)) {
        puVar4 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
        goto LAB_030188a8;
      }
      uVar2 = uVar2 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar2 != 0);
  }
  puVar4 = (undefined4 *)
           func_0x014002dc(param_3,(undefined4 ******)**(int **)(iRam03018e50 + 0x3018860),0);
LAB_030188a8:
  iVar3 = (*(code *)*puVar4)(param_3,puVar4[1]);
  if (iVar3 != 0) {
    if (param_3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(*(int *)(param_6 + 0x1c) + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x014001f0(iVar3);
    }
    iVar5 = *param_3;
    uVar2 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar9[-1] == iVar3) {
          iVar3 = iVar5 + *piVar9 * 8 + 0xc0;
          goto LAB_03018938;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar2 != 0);
    }
    iVar3 = func_0x014002dc(param_3,iVar3,0);
LAB_03018938:
    iVar3 = *(int *)(iVar3 + 4);
    uVar6 = *(undefined4 *)(iVar3 + 4);
    pcVar11 = *(code **)(iVar3 + 8);
    pppppuStack_30 = pppppuVar13;
    *(undefined4 ******)(iVar1 + -8) = pppppuVar13;
    (*pcVar11)(uVar6,iVar3,param_3,&pppppuStack_30);
    iVar3 = iStack_4c;
    func_0x01458934(iVar1,pppppuVar13,iStack_4c);
    func_0x01458934(pppppuVar12,iVar1,iVar3);
    if (iStack_44 == 0) {
      func_0x01384bf0();
    }
    puVar4 = *(undefined4 **)(*(int *)(param_6 + 0x1c) + 0x18);
    pppppuStack_30 = pppppuVar12;
    if (-1 < *(int *)(*(int *)(*(int *)(param_6 + 0x1c) + 0x10) + 0x14)) {
      pppppuStack_30 = (undefined4 *****)*pppppuVar12;
    }
    uVar6 = *puVar4;
    pcVar11 = (code *)puVar4[2];
    *(undefined4 *******)(iVar1 + -8) = &pppppuStack_38;
    (*pcVar11)(uVar6,puVar4,iStack_44,&pppppuStack_30);
    unaff_r7 = (undefined4 ******)pppppuStack_38;
    iVar3 = iStack_48;
    if (iStack_48 == 0) {
      func_0x01384bf0();
    }
    pppppuStack_30 = &pppppuStack_38;
    puVar4 = *(undefined4 **)(*(int *)(param_6 + 0x1c) + 0x20);
    uVar6 = *puVar4;
    pcVar11 = (code *)puVar4[2];
    pppppuStack_38 = unaff_r7;
    *(char **)(iVar1 + -8) = &cStack_39;
    (*pcVar11)(uVar6,puVar4,iVar3,&pppppuStack_30);
    if (cStack_39 == '\0') {
      func_0x01458934(pppppuVar13,iVar1,iStack_4c);
      if (iStack_48 == 0) {
        func_0x01384bf0();
      }
      pppppuStack_38 = &pppppuStack_30;
      puVar4 = *(undefined4 **)(*(int *)(param_6 + 0x1c) + 0x28);
      ppppuStack_34 = pppppuVar13;
      if (-1 < *(int *)(*(int *)(*(int *)(param_6 + 0x1c) + 0x10) + 0x14)) {
        ppppuStack_34 = *pppppuVar13;
      }
      uVar6 = *puVar4;
      pppppuStack_30 = unaff_r7;
      pcVar11 = (code *)puVar4[2];
      *(undefined4 *****)(iVar1 + -8) = ppppuStack_34;
      (*pcVar11)(uVar6,puVar4,iStack_48,&pppppuStack_38);
      ppuVar10 = pppuStack_50[0x12];
      uStack_40 = 0;
      if (ppuVar10 == (undefined4 **)0x0) {
        func_0x01384bf0();
      }
      func_0x03d5bb20(ppuVar10,unaff_r7,&uStack_40,**(undefined4 **)(iRam03018e48 + 0x3018c18));
      ppuVar10 = pppuStack_50[0x12];
      uVar2 = uStack_40 | param_5;
      uStack_40 = uVar2;
      if (ppuVar10 == (undefined4 **)0x0) {
        func_0x01384bf0();
      }
      func_0x03d59d54(ppuVar10,unaff_r7,uVar2,**(undefined4 **)(iRam03018e4c + 0x3018c58));
    }
    else {
      piVar9 = (int *)func_0x01384a00(**(undefined4 **)(iRam03018e34 + 0x3018a38),2);
      uVar6 = *(undefined4 *)(*(int *)(param_6 + 0x1c) + 0x24);
      if (*(int *)(**(int **)(iRam03018e38 + 0x3018a54) + 0x74) == 0) {
        func_0x01384ab4();
      }
      piVar7 = (int *)func_0x04836854(uVar6,0);
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = (**(code **)(*piVar7 + 400))(piVar7,*(undefined4 *)(*piVar7 + 0x194));
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar3 != 0) &&
         (iVar5 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar9 + 0x20)), iVar5 == 0)) {
        uVar6 = func_0x01384c10();
        func_0x01384aa0(uVar6,0);
      }
      if (piVar9[3] == 0) {
        func_0x01384bf4();
      }
      piVar9[4] = iVar3;
      pppppuStack_38 = unaff_r7;
      iVar3 = func_0x01384abc(**(undefined4 **)(iRam03018e3c + 0x3018af8),&pppppuStack_38);
      if ((iVar3 != 0) &&
         (iVar5 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar9 + 0x20)), iVar5 == 0)) {
        uVar6 = func_0x01384c10();
        func_0x01384aa0(uVar6,0);
      }
      if ((uint)piVar9[3] < 2) {
        func_0x01384bf4();
      }
      piVar9[5] = iVar3;
      if (*(int *)(**(int **)(iRam03018e40 + 0x3018b54) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c23bc(**(undefined4 **)(iRam03018e44 + 0x3018b70),piVar9,0);
    }
    goto LAB_03018840;
  }
  iVar3 = 0;
  do {
    if (param_3 != (int *)0x0) {
      iVar5 = *param_3;
      uVar2 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar2 != 0) {
        piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          unaff_r7 = (undefined4 ******)piVar9[-1];
          if (unaff_r7 == (undefined4 ******)**(int **)(iRam03018e54 + 0x3018c88)) {
            puVar4 = (undefined4 *)(iVar5 + *piVar9 * 8 + 0xc0);
            goto LAB_03018cd0;
          }
          uVar2 = uVar2 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined4 *)
               func_0x014002dc(param_3,(undefined4 ******)**(int **)(iRam03018e54 + 0x3018c88),0);
LAB_03018cd0:
      (*(code *)*puVar4)(param_3,puVar4[1]);
    }
    if (iVar3 != 0) {
      func_0x01384bec(iVar3);
    }
LAB_03018cf0:
    if (**(int **)(iRam03018e58 + 0x3018cfc) == iStack_2c) {
      return;
    }
    uVar15 = func_0x0145b028();
    iVar3 = (int)uVar15;
    if ((int)((ulonglong)uVar15 >> 0x20) != 1) break;
    piVar9 = (int *)func_0x0145b008(iVar3);
    iVar3 = *piVar9;
    func_0x0145b0f8();
  } while( true );
  if (param_3 != (int *)0x0) {
    iVar5 = *param_3;
    uVar2 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        unaff_r7 = (undefined4 ******)piVar9[-1];
        if (unaff_r7 == (undefined4 ******)**(int **)(iRam03018e5c + 0x3018d90)) {
          puVar4 = (undefined4 *)(iVar5 + *piVar9 * 8 + 0xc0);
          goto LAB_03018dd8;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined4 *)
             func_0x014002dc(param_3,(undefined4 ******)**(int **)(iRam03018e5c + 0x3018d90),0);
LAB_03018dd8:
    (*(code *)*puVar4)(param_3,puVar4[1]);
  }
  uVar14 = 1;
  func_0x01459844(iVar3);
  uVar15 = func_0x01062280();
  uVar6 = (undefined4)((ulonglong)uVar15 >> 0x20);
  puVar4 = (undefined4 *)uVar15;
                    /* WARNING: Could not recover jumptable at 0x03018e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!(bool)uVar14) {
                    /* WARNING: Could not recover jumptable at 0x03018e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x03018e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x03018e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x03018e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    *(undefined4 *)(iVar1 + -4) = 0x3018e04;
    *(undefined1 **)(iVar1 + -8) = &stack0xfffffff8;
    *(undefined4 ******)(iVar1 + -0xc) = pppppuVar13;
    *(undefined4 ******)(iVar1 + -0x10) = pppppuVar12;
    *(undefined4 *******)(iVar1 + -0x14) = unaff_r7;
    *(undefined4 *)(iVar1 + -0x18) = 0;
    *(int *)(iVar1 + -0x1c) = iVar3;
    *(int **)(iVar1 + -0x20) = param_3;
    if (*(int *)(extraout_r3 + 0x1c) == 0) {
      func_0x0140024c(extraout_r3);
    }
    iVar5 = 0;
    iVar1 = func_0x028c9348(uVar6,0);
    iVar3 = *(int *)(*(int *)(extraout_r3 + 0x1c) + 4);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x014001f0(iVar3);
    }
    if ((iVar1 != 0) && (iVar5 = func_0x01384ab8(iVar1,iVar3), iVar5 == 0)) {
      func_0x01384fb4(iVar1,iVar3);
      iVar5 = 0;
    }
    *puVar4 = 0;
    puVar4[1] = 0;
    *extraout_r2 = iVar5;
    func_0x028c9898(puVar4,uVar6,iVar5,0);
    return;
  }
  (*(code *)(0x20000000 - iVar3))();
  return;
}



// ===== FAT.ObjectMan.IdGetter<object>$$.ctor RVA 0x4238414 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04248414(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  *(int *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 4);
  cVar1 = *(char *)(param_3 + 0x2e);
  *(int *)(param_1 + 0x10) = param_2;
  *(int *)(param_1 + 0x20) = param_1;
  iVar2 = func_0x02457e24(param_3);
  if (iVar2 == 0) {
    if (cVar1 != '\0') {
      if (param_2 == 0) {
        uVar3 = func_0x02457e30(0,_UNK_04248538 + 0x4248480);
        func_0x02457d90(uVar3,0);
      }
      goto LAB_04248488;
    }
    if (*(char *)(param_1 + 0x38) == '\0') {
      iVar2 = _UNK_04248534 + 0x42484e4;
    }
    else {
      iVar2 = func_0x02457e28(param_3);
      iVar4 = func_0x02457e2c(param_3);
      if (iVar2 == 0) {
        if (iVar4 == 0) {
          iVar2 = _UNK_04248530 + 0x4248510;
        }
        else {
          iVar2 = _UNK_0424852c + 0x42484f8;
        }
      }
      else if (iVar4 == 0) {
        iVar2 = _UNK_04248528 + 0x4248504;
      }
      else {
        iVar2 = _UNK_04248524 + 0x42484d8;
      }
    }
  }
  else {
    if (cVar1 != '\x01') {
LAB_04248488:
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x10);
      goto LAB_04248510;
    }
    iVar2 = _UNK_04248520 + 0x4248460;
  }
  *(int *)(param_1 + 0xc) = iVar2;
LAB_04248510:
  *(int *)(param_1 + 0x1c) = _UNK_0424853c + 0x424851c;
  return;
}



// ===== FAT.ObjectMan.IdGetter<object>$$Invoke RVA 0x4238540 =====

void FUN_04248540(int param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0424854c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0xc))
            (*(undefined4 *)(param_1 + 0x20),param_2,*(undefined4 *)(param_1 + 0x14));
  return;
}



// ===== FAT.ObjectMan.IdGetter<object>$$BeginInvoke RVA 0x4238550 =====

void FUN_04248550(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_10 = param_2;
  func_0x02457f40(param_1,&uStack_10);
  return;
}



// ===== FAT.ObjectMan.IdGetter<object>$$EndInvoke RVA 0x4238570 =====

undefined4 FUN_04248570(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = func_0x02457f44(param_2,0);
  if (iVar1 == 0) {
    func_0x02457d50();
  }
  puVar2 = (undefined4 *)func_0x02457d68(iVar1);
  return *puVar2;
}



// ===== FAT.ObjectMan.IdGetter<__Il2CppFullySharedGenericType>$$.ctor RVA 0x42385a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_042485a0(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  
  *(int *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 4);
  cVar1 = *(char *)(param_3 + 0x2e);
  *(int *)(param_1 + 0x10) = param_2;
  *(int *)(param_1 + 0x20) = param_1;
  iVar2 = func_0x02457e24(param_3);
  if (iVar2 == 0) {
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x38) == '\0') {
        puVar4 = (undefined *)(_UNK_042486c8 + 0x4248684);
      }
      else {
        iVar2 = func_0x02457e28(param_3);
        iVar5 = func_0x02457e2c(param_3);
        if (iVar2 == 0) {
          if (iVar5 == 0) {
            puVar4 = &UNK_042486b0 + _UNK_042486c4;
          }
          else {
            puVar4 = (undefined *)(_UNK_042486c0 + 0x4248698);
          }
        }
        else if (iVar5 == 0) {
          puVar4 = (undefined *)(_UNK_042486bc + 0x42486a4);
        }
        else {
          puVar4 = (undefined *)(_UNK_042486b8 + 0x4248678);
        }
      }
    }
    else {
      if (param_2 == 0) {
        uVar3 = func_0x02457e30(0,_UNK_042486cc + 0x4248618);
        func_0x02457d90(uVar3,0);
      }
      puVar4 = (undefined *)(_UNK_042486d0 + 0x424862c);
    }
    *(undefined **)(param_1 + 0xc) = puVar4;
  }
  else {
    iVar2 = _UNK_042486b4 + 0x42485f0;
    if (cVar1 != '\x01') {
      iVar2 = _UNK_042486b0 + 0x42485ec;
    }
    *(int *)(param_1 + 0xc) = iVar2;
  }
  *(int *)(param_1 + 0x1c) = _UNK_042486d4 + 0x4248638;
  return;
}



// ===== FAT.ObjectMan.IdGetter<__Il2CppFullySharedGenericType>$$Invoke RVA 0x42386d8 =====

void FUN_042486d8(int param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x042486e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0xc))
            (*(undefined4 *)(param_1 + 0x20),param_2,*(undefined4 *)(param_1 + 0x14));
  return;
}



// ===== FAT.ObjectMan.IdGetter<__Il2CppFullySharedGenericType>$$BeginInvoke RVA 0x42386e8 =====

void FUN_042486e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_1c = 0;
  uStack_20 = 0;
  iVar1 = func_0x02457f48(**(undefined4 **)(*(int *)(param_1 + 0x14) + 0x18));
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x02457d84();
  }
  if (0x7fffffff < *(uint *)(iVar1 + 0x14)) {
    param_2 = func_0x02457d60(iVar1,param_2);
  }
  uStack_20 = param_2;
  func_0x02457f40(param_1,&uStack_20,param_3,param_4);
  return;
}



// ===== FAT.ObjectMan.IdGetter<__Il2CppFullySharedGenericType>$$EndInvoke RVA 0x4238764 =====

undefined4 FUN_04248764(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = func_0x02457f44(param_2,0);
  if (iVar1 == 0) {
    func_0x02457d50();
  }
  puVar2 = (undefined4 *)func_0x02457d68(iVar1);
  return *puVar2;
}


