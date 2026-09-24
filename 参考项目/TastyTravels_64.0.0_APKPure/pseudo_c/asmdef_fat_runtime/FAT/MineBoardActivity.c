/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MineBoardActivity$$get_ConfD RVA 0x1a534cc =====

undefined4 FUN_01a634cc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// ===== FAT.MineBoardActivity$$set_ConfD RVA 0x1a534d4 =====

void FUN_01a634d4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}



// ===== FAT.MineBoardActivity$$get_BoardSkinId RVA 0x1a534dc =====

undefined4 FUN_01a634dc(int param_1)

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
  iVar1 = func_0x0229f06c(0x81ca,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x81ca,0);
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
    uVar3 = func_0x0245498c(&uStack_30,0,0);
    return uVar3;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x18);
  }
  return uVar3;
}



// ===== FAT.MineBoardActivity$$get_MainCategoryId RVA 0x1a53540 =====

undefined4 FUN_01a63540(undefined4 param_1)

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
  iVar1 = func_0x0229f06c(0x81cb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x81cb,0);
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
    uVar3 = func_0x0245498c(&uStack_30,0,0);
    return uVar3;
  }
  iVar1 = func_0x01a635a8(param_1);
  if (iVar1 != 0) {
    uVar3 = *(undefined4 *)(iVar1 + 0x34);
  }
  return uVar3;
}



// ===== FAT.MineBoardActivity$$GetCurGroupConfig RVA 0x1a535a8 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a635a8(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_r4;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
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
  
  iVar2 = func_0x0229f06c(0x5ac,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5ac,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_0218efcc + 0x218eeec);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0218efd0 + 0x218ef00),param_1,0);
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar5);
    uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0218efd4 + 0x218efbc));
    return uVar9;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  uVar9 = *(undefined4 *)(param_1 + 0x40);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = func_0x0229f06c(0x5ae,0,0);
  if (iVar7 == 0) {
    pcVar8 = (char *)(_UNK_017fc824 + 0x17fc7c8);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_017fc828 + 0x17fc7dc),0);
      func_0x01384978(*(undefined4 *)(_UNK_017fc82c + 0x17fc7e8));
      *pcVar8 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_017fc830 + 0x17fc7fc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = **(int **)(_UNK_017fc834 + 0x17fc818);
    iVar2 = *(int *)(iVar7 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x02457d48();
    }
    iVar2 = *(int *)(iVar7 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    piVar3 = (int *)func_0x0369fa64(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0xe8));
    if (piVar3 == (int *)0x0) {
      func_0x02457d50();
    }
    iVar2 = *(int *)(iVar7 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    iVar7 = *(int *)(*(int *)(iVar2 + 0x60) + 0xf4);
    uStack_28 = 0;
    uStack_2c = 0;
    (**(code **)(*piVar3 + 0x110))(piVar3,*(undefined4 *)(*piVar3 + 0x114));
    iVar2 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
    if (iVar2 != 0) {
      unaff_r4 = piVar3[0x11];
    }
    bVar1 = true;
    iVar6 = 0;
    if (iVar2 != 0 && unaff_r4 != 0) {
      iVar4 = func_0x03d66780(unaff_r4,uVar9,&uStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x68));
      uVar5 = uStack_28;
      bVar1 = false;
      iVar6 = unaff_r4;
      if (iVar4 != 0) {
        iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
        if (iVar2 == 0) {
          return uStack_28;
        }
        (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar5,*(undefined4 *)(*piVar3 + 0x13c));
        return uStack_28;
      }
    }
    if ((piVar3[0x12] == 0) ||
       (iVar4 = func_0x0421f3b0(piVar3[0x12],uVar9,
                                *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x13c)),
       iVar4 == 0)) {
      uStack_2c = 0;
      iVar4 = (**(code **)(*piVar3 + 0x1a0))
                        (piVar3,uVar9,&uStack_2c,*(undefined4 *)(*piVar3 + 0x1a4));
      uVar5 = uStack_2c;
      if (iVar4 != 0) {
        if (iVar2 != 0) {
          if (bVar1) {
            if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x40) + 0xbd) & 1)
                == 0) {
              func_0x02457d84();
            }
            iVar6 = func_0x02457d58();
            func_0x03d63f04(iVar6,4,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x74))
            ;
            piVar3[0x11] = iVar6;
          }
          if (iVar6 == 0) {
            func_0x02457d50();
          }
          func_0x03d6491c(iVar6,uVar9,uVar5,
                          *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x78));
        }
        iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
        if (iVar2 == 0) {
          return uVar5;
        }
        (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar5,*(undefined4 *)(*piVar3 + 0x13c));
        return uVar5;
      }
      iVar2 = piVar3[0x12];
      if (iVar2 == 0) {
        if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x48) + 0xbd) & 1) == 0)
        {
          func_0x02457d84();
        }
        iVar2 = func_0x02457d58();
        func_0x0421ec60(iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x144));
        piVar3[0x12] = iVar2;
        if (iVar2 == 0) {
          func_0x02457d50();
          iVar2 = 0;
        }
      }
      func_0x04220004(iVar2,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x148));
    }
    func_0x0369fb50(piVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x134));
    return 0;
  }
  iVar7 = func_0x0229f13c(0x5ae,0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  pcVar8 = (char *)(_UNK_0218eec4 + 0x218edd0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0218eec8 + 0x218ede4),iVar2,uVar9,0);
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
  if (*(int *)(iVar7 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar7 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar2,0);
  func_0x01485238(&uStack_38,uVar9,0);
  iVar6 = *(int *)(iVar7 + 8);
  uVar9 = *(undefined4 *)(iVar7 + 0xc);
  iVar2 = *(int *)(iVar7 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar6,uVar9,&uStack_38,uVar5,0,0);
  uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0218eecc + 0x218eeb4));
  return uVar9;
}



// ===== FAT.MineBoardActivity$$get_GroupId RVA 0x1a53634 =====

undefined4 FUN_01a63634(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ===== FAT.MineBoardActivity$$set_GroupId RVA 0x1a5363c =====

void FUN_01a6363c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}



// ===== FAT.MineBoardActivity$$get_Visual RVA 0x1a53644 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a63644(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x81cc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x81cc,0);
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
  return *(undefined4 *)(param_1 + 0x5c);
}



// ===== FAT.MineBoardActivity$$Setup RVA 0x1a53698 =====

void FUN_01a63698(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x7b17,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x3c) = param_3;
    *(undefined4 *)(param_1 + 0x10) = param_2;
  }
  else {
    iVar1 = func_0x0229f13c(0x7b17,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MineBoardActivity$$SetupFresh RVA 0x1a5370c =====

/* WARNING: Removing unreachable block (ram,0x02b61b38) */
/* WARNING: Removing unreachable block (ram,0x02b61b44) */
/* WARNING: Removing unreachable block (ram,0x02b61b48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a6370c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
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
  int iStack_1c;
  
  iVar1 = func_0x0229f06c(0x81cd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x81cd,0);
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
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    iVar1 = func_0x0245495c(iVar6,uVar8,&uStack_30,uVar5);
    return iVar1;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_1 + 0x3c);
  iVar1 = *(int *)(iVar1 + 0x2c);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar8 = *(undefined4 *)(iVar6 + 0x34);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar8 = func_0x01cf6408(iVar1,uVar8,0);
  *(undefined4 *)(param_1 + 0x40) = uVar8;
  func_0x01a63864(param_1);
  func_0x01a63950(param_1);
  func_0x01a63ce0(param_1);
  func_0x01a63d38(param_1);
  func_0x01a63e14(param_1);
  func_0x01a63fcc(param_1);
  iVar1 = *(int *)(param_1 + 0x80);
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
  uVar8 = *(undefined4 *)(param_1 + 0x80);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = 0;
  func_0x01e7437c(iVar1,uVar8,0,0);
  *(undefined1 *)(param_1 + 0x48) = 1;
  pcVar7 = (char *)(_UNK_01a64290 + 0x1a640e8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a64294 + 0x1a640fc));
    func_0x01384978(*(undefined4 *)(_UNK_01a64298 + 0x1a64108));
    func_0x01384978(*(undefined4 *)(_UNK_01a6429c + 0x1a64114));
    func_0x01384978(*(undefined4 *)(_UNK_01a642a0 + 0x1a64120));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x81d7,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01a64b7c(param_1);
    if (iVar1 == 0) {
      iVar6 = FUN_01a635a8(param_1);
      iVar1 = 0;
      if (iVar6 != 0) {
        iVar1 = *(int *)(param_1 + 0x58);
        if (iVar1 == 0) {
          uVar5 = *(undefined4 *)(iVar6 + 0x28);
          uVar8 = *(undefined4 *)(iVar6 + 0x2c);
          if (*(int *)(**(int **)(_UNK_01a642a4 + 0x1a641b0) + 0x74) == 0) {
            func_0x01384ab4();
          }
          uVar8 = func_0x02565a88(uVar8,0);
          iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a642a8 + 0x1a641e8));
          uStack_24 = 0;
          uStack_28 = uVar8;
          func_0x02bf5bd8(iVar1,param_1,uVar5,1);
          puVar2 = *(undefined4 **)(_UNK_01a642ac + 0x1a64210);
          *(int *)(param_1 + 0x58) = iVar1;
          uVar8 = func_0x01384be4(*puVar2);
          func_0x024501dc(uVar8,param_1,**(undefined4 **)(_UNK_01a642b0 + 0x1a64230),0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x02bf51c0(iVar1,uVar8,0);
          iVar1 = *(int *)(param_1 + 0x58);
          if (iVar1 == 0) {
            return 0;
          }
        }
        if ((*(int *)(param_1 + 0x3c) != 0) &&
           (iVar6 = *(int *)(*(int *)(param_1 + 0x3c) + 0x30), 0 < iVar6)) {
          pcVar7 = (char *)(_UNK_02bf66f0 + 0x2bf6634);
          if (*pcVar7 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_02bf66f4 + 0x2bf6648),iVar6,0);
            *pcVar7 = '\x01';
          }
          iVar4 = func_0x0229f06c(0x5c08,0);
          if (iVar4 == 0) {
            if (iVar6 < 1) {
              return 0;
            }
            puVar2 = *(undefined4 **)(_UNK_02bf66f8 + 0x2bf66ac);
            *(int *)(iVar1 + 0x20) = iVar6;
            iVar6 = func_0x01384be4(*puVar2);
            func_0x02b635c4(iVar6,0);
            iVar4 = *(int *)(iVar1 + 0x20);
            *(int *)(iVar1 + 0x24) = iVar6;
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            pcVar7 = (char *)(_UNK_02b61bf0 + 0x2b61a70);
            if (*pcVar7 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_02b61bf4 + 0x2b61a84),iVar4,0,0);
              func_0x01384978(*(undefined4 *)(_UNK_02b61bf8 + 0x2b61a90));
              func_0x01384978(*(undefined4 *)(_UNK_02b61bfc + 0x2b61a9c));
              func_0x01384978(*(undefined4 *)(_UNK_02b61c00 + 0x2b61aa8));
              *pcVar7 = '\x01';
            }
            iVar1 = func_0x0229f06c(0x305,0);
            if (iVar1 == 0) {
              iVar3 = 0;
              iVar1 = func_0x01822f2c(iVar4,0);
              *(int *)(iVar6 + 8) = iVar1;
              if (iVar1 == 0) {
                if (0 < iVar4) {
                  iStack_1c = iVar4;
                  uVar8 = func_0x01384abc(**(undefined4 **)(_UNK_02b61c04 + 0x2b61b88),&iStack_1c);
                  iVar3 = 0;
                  uVar8 = func_0x0467272c(**(undefined4 **)(_UNK_02b61c08 + 0x2b61ba8),
                                          **(undefined4 **)(_UNK_02b61c0c + 0x2b61bb4),uVar8,0);
                  if (*(int *)(**(int **)(_UNK_02b61c10 + 0x2b61bc8) + 0x74) == 0) {
                    func_0x01384ab4();
                  }
                  func_0x028c2944(uVar8,0);
                }
              }
              else {
                uVar8 = func_0x017d2c28(*(undefined4 *)(iVar1 + 0x1c),0);
                iVar3 = 1;
                *(undefined4 *)(iVar6 + 0xc) = uVar8;
              }
            }
            else {
              iVar1 = func_0x0229f13c(0x305,0);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uStack_20 = 0;
              iVar3 = func_0x021846e8(iVar1,iVar6,iVar4,0);
            }
            return iVar3;
          }
          iVar4 = func_0x0229f13c(0x5c08,0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_38 = 0;
          uStack_28 = 0;
          func_0x0245494c(&uStack_50,0,iVar6,0);
          uStack_38 = uStack_50;
          uStack_34 = uStack_4c;
          uStack_30 = uStack_48;
          uStack_2c = uStack_44;
          uStack_28 = uStack_40;
          if (*(int *)(iVar4 + 0x10) != 0) {
            func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
          }
          func_0x01485278(&uStack_38,iVar1,0);
          func_0x01485238(&uStack_38,iVar6,0);
          iVar6 = *(int *)(iVar4 + 8);
          uVar8 = *(undefined4 *)(iVar4 + 0xc);
          iVar1 = *(int *)(iVar4 + 0x10);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          uVar5 = 3;
          if (iVar1 == 0) {
            uVar5 = 2;
          }
          iVar1 = func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
          return iVar1;
        }
      }
    }
    return iVar1;
  }
  iVar1 = func_0x0229f13c(0x81d7,0);
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
  func_0x01485228(&uStack_38,1,0);
  iVar6 = *(int *)(iVar1 + 8);
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar1 == 0) {
    uVar5 = 2;
  }
  iVar1 = func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
  return iVar1;
}



// ===== FAT.MineBoardActivity$$_InitStartToken RVA 0x1a53864 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a63864(int param_1)

{
  int iVar1;
  int extraout_r2;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
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
  
  pcVar3 = (char *)(_UNK_01a63944 + 0x1a6387c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a63948 + 0x1a63890));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x81cf,0);
  if (iVar1 == 0) {
    iVar4 = FUN_01a635a8(param_1);
    iVar1 = extraout_r2;
    if (iVar4 != 0) {
      iVar1 = *(int *)(param_1 + 0x3c);
    }
    if (iVar4 != 0 && iVar1 != 0) {
      piVar6 = *(int **)(_UNK_01a6394c + 0x1a63908);
      uVar5 = *(undefined4 *)(iVar4 + 0x40);
      uVar2 = *(undefined4 *)(iVar1 + 0x4c);
      iVar1 = *piVar6;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar6;
      }
      func_0x01a653d8(param_1,uVar2,uVar5,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x144));
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x81cf,0);
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



// ===== FAT.MineBoardActivity$$_RefreshPopupInfo RVA 0x1a53950 =====

/* WARNING: Possible PIC construction at 0x01a639f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01a63a88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01a63b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01a63ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01a63bdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01a63c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01a63c54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01a63c90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01a63c58) */
/* WARNING: Removing unreachable block (ram,0x01a63c68) */
/* WARNING: Removing unreachable block (ram,0x01a63c6c) */
/* WARNING: Removing unreachable block (ram,0x01a63c7c) */
/* WARNING: Removing unreachable block (ram,0x01a63c80) */
/* WARNING: Removing unreachable block (ram,0x01a63c1c) */
/* WARNING: Removing unreachable block (ram,0x01a63c2c) */
/* WARNING: Removing unreachable block (ram,0x01a63c30) */
/* WARNING: Removing unreachable block (ram,0x01a63c40) */
/* WARNING: Removing unreachable block (ram,0x01a63c44) */
/* WARNING: Removing unreachable block (ram,0x01a63be0) */
/* WARNING: Removing unreachable block (ram,0x01a63bf0) */
/* WARNING: Removing unreachable block (ram,0x01a63bf4) */
/* WARNING: Removing unreachable block (ram,0x01a63c04) */
/* WARNING: Removing unreachable block (ram,0x01a63c08) */
/* WARNING: Removing unreachable block (ram,0x01a63ba4) */
/* WARNING: Removing unreachable block (ram,0x01a63bb4) */
/* WARNING: Removing unreachable block (ram,0x01a63bb8) */
/* WARNING: Removing unreachable block (ram,0x01a63bc8) */
/* WARNING: Removing unreachable block (ram,0x01a63bcc) */
/* WARNING: Removing unreachable block (ram,0x01a63b18) */
/* WARNING: Removing unreachable block (ram,0x01a63b20) */
/* WARNING: Removing unreachable block (ram,0x01a63b34) */
/* WARNING: Removing unreachable block (ram,0x01a63b38) */
/* WARNING: Removing unreachable block (ram,0x01a63b68) */
/* WARNING: Removing unreachable block (ram,0x01a63b78) */
/* WARNING: Removing unreachable block (ram,0x01a63b7c) */
/* WARNING: Removing unreachable block (ram,0x01a63b8c) */
/* WARNING: Removing unreachable block (ram,0x01a63b90) */
/* WARNING: Removing unreachable block (ram,0x01a63a8c) */
/* WARNING: Removing unreachable block (ram,0x01a63a94) */
/* WARNING: Removing unreachable block (ram,0x01a63aa8) */
/* WARNING: Removing unreachable block (ram,0x01a63aac) */
/* WARNING: Removing unreachable block (ram,0x01a63adc) */
/* WARNING: Removing unreachable block (ram,0x01a63aec) */
/* WARNING: Removing unreachable block (ram,0x01a63af0) */
/* WARNING: Removing unreachable block (ram,0x01a63b00) */
/* WARNING: Removing unreachable block (ram,0x01a63b04) */
/* WARNING: Removing unreachable block (ram,0x01a639fc) */
/* WARNING: Removing unreachable block (ram,0x01a63a04) */
/* WARNING: Removing unreachable block (ram,0x01a63a18) */
/* WARNING: Removing unreachable block (ram,0x01a63a1c) */
/* WARNING: Removing unreachable block (ram,0x01a63a50) */
/* WARNING: Removing unreachable block (ram,0x01a63a60) */
/* WARNING: Removing unreachable block (ram,0x01a63a64) */
/* WARNING: Removing unreachable block (ram,0x01a63a74) */
/* WARNING: Removing unreachable block (ram,0x01a63a78) */
/* WARNING: Removing unreachable block (ram,0x01a63c94) */
/* WARNING: Removing unreachable block (ram,0x01a63ca4) */
/* WARNING: Removing unreachable block (ram,0x01a63ca8) */
/* WARNING: Removing unreachable block (ram,0x01a63cb8) */
/* WARNING: Removing unreachable block (ram,0x01a63cbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a63950(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x81d0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x81d0,0);
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
  iVar1 = param_1[0x17];
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar5 = param_1[0x23];
  iVar4 = *(int *)(iVar4 + 0x2c);
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



// ===== FAT.MineBoardActivity$$RefreshOutputType RVA 0x1a53ce0 =====

void FUN_01a63ce0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x81d1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x81d1,0);
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
  *(undefined4 *)(param_1 + 0xb4) = 2;
  return;
}



// ===== FAT.MineBoardActivity$$RefreshOutputMethod RVA 0x1a53d38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a63d38(int param_1)

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
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_01a63e0c + 0x1a63d4c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a63e10 + 0x1a63d60));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x81d3,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01a635a8(param_1);
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + 0x38);
      iVar1 = *(int *)(iVar1 + 0x24);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar5 + 0xc);
      iVar5 = iVar1;
      if (0 < iVar1) {
        iVar5 = iVar2;
      }
      if (iVar5 < 1) {
        if (iVar2 < 1) {
          if (iVar1 < 1) {
            uVar6 = 0;
          }
          else {
            uVar6 = 2;
          }
        }
        else {
          uVar6 = 1;
        }
      }
      else {
        uVar6 = 3;
      }
      *(undefined4 *)(param_1 + 0xb8) = uVar6;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x81d3,0);
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
  return;
}



// ===== FAT.MineBoardActivity$$_RefreshScoreEntity RVA 0x1a53e14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a63e14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_01a63fb0 + 0x1a63e2c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a63fb4 + 0x1a63e40));
    func_0x01384978(*(undefined4 *)(_UNK_01a63fb8 + 0x1a63e4c));
    func_0x01384978(*(undefined4 *)(_UNK_01a63fbc + 0x1a63e58));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x81d5,0);
  if (iVar1 == 0) {
    iVar4 = func_0x01a6585c(param_1);
    iVar1 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(param_1 + 0x3c);
    }
    if ((iVar4 != 0 && iVar1 != 0) && (iVar1 = FUN_01a635a8(param_1), iVar1 != 0)) {
      iVar4 = *(int *)(param_1 + 0xb0);
      if (iVar4 == 0) {
        iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01a63fc0 + 0x1a63ef4));
        func_0x02afb3e0(iVar4,0);
        *(int *)(param_1 + 0xb0) = iVar4;
      }
      iVar5 = *(int *)(param_1 + 0x3c);
      uVar6 = *(undefined4 *)(param_1 + 0x54);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      piVar9 = *(int **)(_UNK_01a63fc4 + 0x1a63f28);
      uVar8 = *(undefined4 *)(iVar1 + 0x24);
      uVar2 = *(undefined4 *)(iVar5 + 0x4c);
      iVar1 = *piVar9;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar9;
      }
      uVar7 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x148);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_48 = **(undefined4 **)(_UNK_01a63fc8 + 0x1a63f70);
      uStack_44 = 1;
      uStack_3c = 0x3f;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      func_0x02af6c48(iVar4,uVar6,param_1,uVar2,uVar8,uVar7);
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x81d5,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_30 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar4,uVar6,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.MineBoardActivity$$_RefreshSpawnBonusHandler RVA 0x1a53fcc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a63fcc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
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
  
  pcVar7 = (char *)(_UNK_01a640c0 + 0x1a63fe0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a640c4 + 0x1a63ff4));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x81d6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x81d6,0);
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
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar8,uVar10,&uStack_30,uVar5);
    return;
  }
  iVar1 = func_0x01a66ad8(param_1);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xbc) == 0) {
    uVar10 = func_0x01384be4(**(undefined4 **)(_UNK_01a640c8 + 0x1a64068));
    func_0x0215871c(uVar10,param_1,0);
    *(undefined4 *)(param_1 + 0xbc) = uVar10;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  piVar6 = *(int **)(param_1 + 0xbc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_01dbba4c + 0x1dbb948);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbba50 + 0x1dbb95c),piVar6,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dbba54 + 0x1dbb968));
    *pcVar7 = '\x01';
  }
  iVar8 = func_0x0229f06c(0x16b4,0);
  if (iVar8 != 0) {
    iVar8 = func_0x0229f13c(0x16b4,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,piVar6,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar8 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar8 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485278(&uStack_38,piVar6,0);
    iVar9 = *(int *)(iVar8 + 8);
    uVar10 = *(undefined4 *)(iVar8 + 0xc);
    iVar1 = *(int *)(iVar8 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_38,uVar5,0,0);
    return;
  }
  iVar1 = func_0x02f6252c(*(undefined4 *)(iVar1 + 0x34),piVar6,
                          **(undefined4 **)(_UNK_01dbba58 + 0x1dbb9c8));
  if (piVar6 == (int *)0x0 || iVar1 == 0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01dbba5c + 0x1dbb9f0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
        goto LAB_01dbba38;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01dbba5c + 0x1dbb9f0),2);
LAB_01dbba38:
                    /* WARNING: Could not recover jumptable at 0x01dbba48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MineBoardActivity$$InitHandbookAgent RVA 0x1a540cc =====

/* WARNING: Removing unreachable block (ram,0x02b61b38) */
/* WARNING: Removing unreachable block (ram,0x02b61b44) */
/* WARNING: Removing unreachable block (ram,0x02b61b48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a640cc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
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
  
  pcVar7 = (char *)(_UNK_01a64290 + 0x1a640e8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a64294 + 0x1a640fc));
    func_0x01384978(*(undefined4 *)(_UNK_01a64298 + 0x1a64108));
    func_0x01384978(*(undefined4 *)(_UNK_01a6429c + 0x1a64114));
    func_0x01384978(*(undefined4 *)(_UNK_01a642a0 + 0x1a64120));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x81d7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x81d7,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    iVar1 = func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
    return iVar1;
  }
  iVar1 = func_0x01a64b7c(param_1);
  if (iVar1 == 0) {
    iVar6 = FUN_01a635a8(param_1);
    iVar1 = 0;
    if (iVar6 != 0) {
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 == 0) {
        uVar5 = *(undefined4 *)(iVar6 + 0x28);
        uVar8 = *(undefined4 *)(iVar6 + 0x2c);
        if (*(int *)(**(int **)(_UNK_01a642a4 + 0x1a641b0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar8 = func_0x02565a88(uVar8,0);
        iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a642a8 + 0x1a641e8));
        uStack_24 = 0;
        uStack_28 = uVar8;
        func_0x02bf5bd8(iVar1,param_1,uVar5,param_2);
        puVar2 = *(undefined4 **)(_UNK_01a642ac + 0x1a64210);
        *(int *)(param_1 + 0x58) = iVar1;
        uVar8 = func_0x01384be4(*puVar2);
        func_0x024501dc(uVar8,param_1,**(undefined4 **)(_UNK_01a642b0 + 0x1a64230),0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02bf51c0(iVar1,uVar8,0);
        iVar1 = *(int *)(param_1 + 0x58);
        if (iVar1 == 0) {
          return 0;
        }
      }
      if ((*(int *)(param_1 + 0x3c) != 0) &&
         (iVar6 = *(int *)(*(int *)(param_1 + 0x3c) + 0x30), 0 < iVar6)) {
        pcVar7 = (char *)(_UNK_02bf66f0 + 0x2bf6634);
        if (*pcVar7 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02bf66f4 + 0x2bf6648),iVar6,0);
          *pcVar7 = '\x01';
        }
        iVar4 = func_0x0229f06c(0x5c08,0);
        if (iVar4 == 0) {
          if (iVar6 < 1) {
            return 0;
          }
          puVar2 = *(undefined4 **)(_UNK_02bf66f8 + 0x2bf66ac);
          *(int *)(iVar1 + 0x20) = iVar6;
          iVar6 = func_0x01384be4(*puVar2);
          func_0x02b635c4(iVar6,0);
          iVar4 = *(int *)(iVar1 + 0x20);
          *(int *)(iVar1 + 0x24) = iVar6;
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          pcVar7 = (char *)(_UNK_02b61bf0 + 0x2b61a70);
          if (*pcVar7 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_02b61bf4 + 0x2b61a84),iVar4,0,0);
            func_0x01384978(*(undefined4 *)(_UNK_02b61bf8 + 0x2b61a90));
            func_0x01384978(*(undefined4 *)(_UNK_02b61bfc + 0x2b61a9c));
            func_0x01384978(*(undefined4 *)(_UNK_02b61c00 + 0x2b61aa8));
            *pcVar7 = '\x01';
          }
          iVar1 = func_0x0229f06c(0x305,0);
          if (iVar1 == 0) {
            iVar3 = 0;
            iVar1 = func_0x01822f2c(iVar4,0);
            *(int *)(iVar6 + 8) = iVar1;
            if (iVar1 == 0) {
              if (0 < iVar4) {
                uVar8 = func_0x01384abc(**(undefined4 **)(_UNK_02b61c04 + 0x2b61b88),
                                        &stack0xffffffe4);
                iVar3 = 0;
                uVar8 = func_0x0467272c(**(undefined4 **)(_UNK_02b61c08 + 0x2b61ba8),
                                        **(undefined4 **)(_UNK_02b61c0c + 0x2b61bb4),uVar8,0);
                if (*(int *)(**(int **)(_UNK_02b61c10 + 0x2b61bc8) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                func_0x028c2944(uVar8,0);
              }
            }
            else {
              uVar8 = func_0x017d2c28(*(undefined4 *)(iVar1 + 0x1c),0);
              iVar3 = 1;
              *(undefined4 *)(iVar6 + 0xc) = uVar8;
            }
          }
          else {
            iVar1 = func_0x0229f13c(0x305,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar3 = func_0x021846e8(iVar1,iVar6,iVar4,0);
          }
          return iVar3;
        }
        iVar4 = func_0x0229f13c(0x5c08,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,iVar6,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar4 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar1,0);
        func_0x01485238(&uStack_38,iVar6,0);
        iVar6 = *(int *)(iVar4 + 8);
        uVar8 = *(undefined4 *)(iVar4 + 0xc);
        iVar1 = *(int *)(iVar4 + 0x10);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar5 = 3;
        if (iVar1 == 0) {
          uVar5 = 2;
        }
        iVar1 = func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
        return iVar1;
      }
    }
  }
  return iVar1;
}



// ===== FAT.MineBoardActivity$$SaveSetup RVA 0x1a542b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a642b4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
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
  
  pcVar8 = (char *)(_UNK_01a6445c + 0x1a642cc);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a64460 + 0x1a642e0));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x81dc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x81dc,0);
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
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar5,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  piVar6 = *(int **)(param_2 + 0x28);
  uVar9 = func_0x01c23578(0,*(undefined4 *)(param_1 + 0x40),0);
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  puVar10 = *(undefined4 **)(_UNK_01a64464 + 0x1a64374);
  func_0x03652b00(piVar6,uVar9,*puVar10);
  uVar9 = func_0x01c23578(1,*(undefined4 *)(param_1 + 0x44),0);
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  func_0x03652b00(piVar6,uVar9,*puVar10);
  uVar9 = func_0x01c23578(2,*(undefined4 *)(param_1 + 0x4c),0);
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  func_0x03652b00(piVar6,uVar9,*puVar10);
  uVar9 = func_0x01c23578(3,*(undefined4 *)(param_1 + 0x50),0);
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  func_0x03652b00(piVar6,uVar9,*puVar10);
  uVar9 = func_0x01c23578(4,*(undefined4 *)(param_1 + 0x54),0);
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  func_0x03652b00(piVar6,uVar9,*puVar10);
  iVar1 = *(int *)(param_1 + 0xbc);
  if (iVar1 == 0) {
    return;
  }
  pcVar8 = (char *)(_UNK_021588e4 + 0x215875c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021588e8 + 0x2158770),piVar6,1000,0);
    *pcVar8 = '\x01';
  }
  iVar7 = func_0x0229f06c(0x81dd,0);
  if (iVar7 != 0) {
    iVar7 = func_0x0229f13c(0x81dd,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    func_0x0217b868(iVar7,iVar1,piVar6,1000);
    return;
  }
  uVar9 = func_0x01c23578(1000,*(undefined4 *)(iVar1 + 0x24),0);
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar7 = *piVar6;
  piVar11 = *(int **)(_UNK_021588ec + 0x21587fc);
  uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
  iVar2 = *piVar11;
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
    do {
      if (piVar4[-1] == iVar2) {
        puVar10 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xd0);
        goto LAB_02158844;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar10 = (undefined4 *)func_0x014002dc(piVar6,iVar2,2);
LAB_02158844:
  (*(code *)*puVar10)(piVar6,uVar9,puVar10[1]);
  uVar9 = func_0x01c23578(0x3e9,*(undefined4 *)(iVar1 + 0x20),0);
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar6;
  iVar7 = *piVar11;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar11[-1] == iVar7) {
        puVar10 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xd0);
        goto LAB_021588c8;
      }
      uVar3 = uVar3 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar3 != 0);
  }
  puVar10 = (undefined4 *)func_0x014002dc(piVar6,iVar7,2);
LAB_021588c8:
                    /* WARNING: Could not recover jumptable at 0x021588e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar10)(piVar6,uVar9,puVar10[1]);
  return;
}



// ===== FAT.MineBoardActivity$$LoadSetup RVA 0x1a54468 =====

/* WARNING: Removing unreachable block (ram,0x02b61b38) */
/* WARNING: Removing unreachable block (ram,0x02b61b44) */
/* WARNING: Removing unreachable block (ram,0x02b61b48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a64468(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
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
  
  iVar2 = func_0x0229f06c(0x81de,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x81de,0);
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
    func_0x01485278(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    iVar2 = func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
    return iVar2;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  uVar8 = func_0x01c23c30(0,uVar5,0);
  *(undefined4 *)(param_1 + 0x40) = uVar8;
  uVar8 = func_0x01c23c30(1,uVar5,0);
  *(undefined4 *)(param_1 + 0x44) = uVar8;
  uVar8 = func_0x01c23c30(2,uVar5,0);
  *(undefined4 *)(param_1 + 0x4c) = uVar8;
  uVar8 = func_0x01c23c30(3,uVar5,0);
  *(undefined4 *)(param_1 + 0x50) = uVar8;
  uVar8 = func_0x01c23c30(4,uVar5,0);
  *(undefined4 *)(param_1 + 0x54) = uVar8;
  FUN_01a63950(param_1);
  FUN_01a63ce0(param_1);
  FUN_01a63d38(param_1);
  FUN_01a63e14(param_1);
  FUN_01a63fcc(param_1);
  if (*(int *)(param_1 + 0xbc) != 0) {
    func_0x021588f0(*(int *)(param_1 + 0xbc),uVar5,1000,0);
  }
  pcVar7 = (char *)(_UNK_01a64290 + 0x1a640e8);
  uStack_20 = unaff_r4;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a64294 + 0x1a640fc));
    func_0x01384978(*(undefined4 *)(_UNK_01a64298 + 0x1a64108));
    func_0x01384978(*(undefined4 *)(_UNK_01a6429c + 0x1a64114));
    func_0x01384978(*(undefined4 *)(_UNK_01a642a0 + 0x1a64120));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x81d7,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x81d7,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,0,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    iVar2 = func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
    return iVar2;
  }
  iVar2 = func_0x01a64b7c(param_1);
  if (iVar2 == 0) {
    iVar6 = FUN_01a635a8(param_1);
    iVar2 = 0;
    if (iVar6 != 0) {
      iVar2 = *(int *)(param_1 + 0x58);
      if (iVar2 == 0) {
        uVar5 = *(undefined4 *)(iVar6 + 0x28);
        uVar8 = *(undefined4 *)(iVar6 + 0x2c);
        if (*(int *)(**(int **)(_UNK_01a642a4 + 0x1a641b0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar8 = func_0x02565a88(uVar8,0);
        iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01a642a8 + 0x1a641e8));
        uStack_24 = 0;
        uStack_28 = uVar8;
        func_0x02bf5bd8(iVar2,param_1,uVar5,0);
        puVar1 = *(undefined4 **)(_UNK_01a642ac + 0x1a64210);
        *(int *)(param_1 + 0x58) = iVar2;
        uVar8 = func_0x01384be4(*puVar1);
        func_0x024501dc(uVar8,param_1,**(undefined4 **)(_UNK_01a642b0 + 0x1a64230),0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x02bf51c0(iVar2,uVar8,0);
        iVar2 = *(int *)(param_1 + 0x58);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if ((*(int *)(param_1 + 0x3c) != 0) &&
         (iVar6 = *(int *)(*(int *)(param_1 + 0x3c) + 0x30), 0 < iVar6)) {
        pcVar7 = (char *)(_UNK_02bf66f0 + 0x2bf6634);
        if (*pcVar7 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02bf66f4 + 0x2bf6648),iVar6,0);
          *pcVar7 = '\x01';
        }
        iVar4 = func_0x0229f06c(0x5c08,0);
        if (iVar4 == 0) {
          if (iVar6 < 1) {
            return 0;
          }
          puVar1 = *(undefined4 **)(_UNK_02bf66f8 + 0x2bf66ac);
          *(int *)(iVar2 + 0x20) = iVar6;
          iVar6 = func_0x01384be4(*puVar1);
          func_0x02b635c4(iVar6,0);
          iVar4 = *(int *)(iVar2 + 0x20);
          *(int *)(iVar2 + 0x24) = iVar6;
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          pcVar7 = (char *)(_UNK_02b61bf0 + 0x2b61a70);
          uStack_18 = uStack_20;
          if (*pcVar7 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_02b61bf4 + 0x2b61a84),iVar4,0,0);
            func_0x01384978(*(undefined4 *)(_UNK_02b61bf8 + 0x2b61a90));
            func_0x01384978(*(undefined4 *)(_UNK_02b61bfc + 0x2b61a9c));
            func_0x01384978(*(undefined4 *)(_UNK_02b61c00 + 0x2b61aa8));
            *pcVar7 = '\x01';
          }
          iVar2 = func_0x0229f06c(0x305,0);
          if (iVar2 == 0) {
            iVar3 = 0;
            iVar2 = func_0x01822f2c(iVar4,0);
            *(int *)(iVar6 + 8) = iVar2;
            if (iVar2 == 0) {
              if (0 < iVar4) {
                iStack_1c = iVar4;
                uVar8 = func_0x01384abc(**(undefined4 **)(_UNK_02b61c04 + 0x2b61b88),&iStack_1c);
                iVar3 = 0;
                uVar8 = func_0x0467272c(**(undefined4 **)(_UNK_02b61c08 + 0x2b61ba8),
                                        **(undefined4 **)(_UNK_02b61c0c + 0x2b61bb4),uVar8,0);
                if (*(int *)(**(int **)(_UNK_02b61c10 + 0x2b61bc8) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                func_0x028c2944(uVar8,0);
              }
            }
            else {
              uVar8 = func_0x017d2c28(*(undefined4 *)(iVar2 + 0x1c),0);
              iVar3 = 1;
              *(undefined4 *)(iVar6 + 0xc) = uVar8;
            }
          }
          else {
            iVar2 = func_0x0229f13c(0x305,0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            uStack_20 = 0;
            iVar3 = func_0x021846e8(iVar2,iVar6,iVar4,0);
          }
          return iVar3;
        }
        iVar4 = func_0x0229f13c(0x5c08,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,iVar6,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar4 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar2,0);
        func_0x01485238(&uStack_38,iVar6,0);
        iVar6 = *(int *)(iVar4 + 8);
        uVar8 = *(undefined4 *)(iVar4 + 0xc);
        iVar2 = *(int *)(iVar4 + 0x10);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar5 = 3;
        if (iVar2 == 0) {
          uVar5 = 2;
        }
        iVar2 = func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
        return iVar2;
      }
    }
  }
  return iVar2;
}



// ===== FAT.MineBoardActivity$$ResEnumerate RVA 0x1a54584 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a64584(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_01a64630 + 0x1a64598);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a64634 + 0x1a645ac));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x81e1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x81e1,0);
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
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a64638 + 0x1a64604));
  func_0x01a684f4(iVar1,0xfffffffe,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0x18) = param_1;
  return iVar1;
}



// ===== FAT.MineBoardActivity$$WhenEnd RVA 0x1a5463c =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a6463c(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int aiStack_34 [4];
  
  pcVar3 = (char *)(_UNK_01a64b3c + 0x1a64654);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a64b40 + 0x1a64668));
    func_0x01384978(*(undefined4 *)(_UNK_01a64b44 + 0x1a64674));
    func_0x01384978(*(undefined4 *)(_UNK_01a64b48 + 0x1a64680));
    func_0x01384978(*(undefined4 *)(_UNK_01a64b4c + 0x1a6468c));
    func_0x01384978(*(undefined4 *)(_UNK_01a64b50 + 0x1a64698));
    func_0x01384978(*(undefined4 *)(_UNK_01a64b54 + 0x1a646a4));
    func_0x01384978(*(undefined4 *)(_UNK_01a64b58 + 0x1a646b0));
    func_0x01384978(*(undefined4 *)(_UNK_01a64b5c + 0x1a646bc));
    *pcVar3 = '\x01';
  }
  aiStack_34[2] = 0;
  aiStack_34[1] = 0;
  aiStack_34[0] = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  iStack_44 = 0;
  iVar1 = func_0x0229f06c(0x81f4,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01a635a8(param_1);
    if (iVar1 != 0) {
      piVar7 = *(int **)(_UNK_01a64b60 + 0x1a64748);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x028c8d78(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0302a45c(aiStack_34 + 1,iVar2,aiStack_34,**(undefined4 **)(_UNK_01a64b64 + 0x1a64784));
      iVar2 = aiStack_34[0];
      iVar4 = *(int *)(param_1 + 0x3c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar6 = *(undefined4 *)(param_1 + 0x54);
      uVar5 = *(undefined4 *)(iVar4 + 0x4c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0245025c(iVar2,uVar5,uVar6,**(undefined4 **)(_UNK_01a64b68 + 0x1a647c0));
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x028c8d78(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      puVar9 = *(undefined4 **)(_UNK_01a64b6c + 0x1a64808);
      func_0x0302a7c0(&uStack_50,iVar2,&uStack_38,*puVar9);
      uVar5 = uStack_38;
      piVar7 = *(int **)(_UNK_01a64b70 + 0x1a6482c);
      uVar6 = *(undefined4 *)(iVar1 + 0x20);
      iVar1 = *piVar7;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar7;
      }
      func_0x02b4aed4(uVar6,uVar5,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x154),aiStack_34[0],0);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar6 = *(undefined4 *)(param_1 + 0x84);
      iVar1 = *(int *)(iVar1 + 0xfc);
      puVar8 = *(undefined4 **)(_UNK_01a64b74 + 0x1a64894);
      uVar5 = func_0x01384abc(*puVar8,&uStack_50);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01e7437c(iVar1,uVar6,0,uVar5,0);
      iVar1 = func_0x028c8d78(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0302a7c0(&uStack_58,iVar1,&iStack_44,*puVar9);
      uStack_3c = uStack_54;
      uStack_40 = uStack_58;
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = iStack_44;
      iVar1 = *(int *)(iVar1 + 200);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01a6d9cc(iVar1,iVar2,0);
      if ((*(int *)(param_1 + 0x58) != 0) &&
         (iVar2 = func_0x01a64b7c(param_1), iVar1 = iStack_44, iVar2 == 0)) {
        iVar2 = *(int *)(param_1 + 0x58);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x02bf7198(iVar2,iVar1,0);
      }
      iVar1 = iStack_44;
      if (iStack_44 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) < 1) {
        func_0x03633b24(&uStack_40,**(undefined4 **)(_UNK_01a64b78 + 0x1a64a1c));
      }
      else {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar6 = *(undefined4 *)(param_1 + 0x88);
        iVar1 = *(int *)(iVar1 + 0xfc);
        uStack_4c = uStack_3c;
        uStack_50 = uStack_40;
        uVar5 = func_0x01384abc(*puVar8,&uStack_50);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01e7437c(iVar1,uVar6,0,uVar5,0);
      }
      func_0x028c98a0(aiStack_34 + 1,0);
    }
    func_0x01a64c24(param_1);
    func_0x01a64ca0(param_1);
    if (*(int *)(param_1 + 0x58) != 0) {
      func_0x02bf56a4(*(int *)(param_1 + 0x58),0);
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02bf6458(iVar1,0);
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x81f4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MineBoardActivity$$get_EnableLegacyHandbook RVA 0x1a54b7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01a64b7c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
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
  
  pcVar3 = (char *)(_UNK_01a64c1c + 0x1a64b90);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a64c20 + 0x1a64ba4));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x81d8,0);
  if (iVar1 == 0) {
    iVar5 = FUN_01a635a8(param_1);
    iVar1 = 0;
    if (iVar5 != 0) {
      iVar1 = *(int *)(iVar5 + 0x28);
    }
    if (iVar5 != 0 && iVar1 != 0) {
      uVar4 = (uint)(*(int *)(iVar1 + 0xc) == 0);
    }
    return uVar4;
  }
  iVar1 = func_0x0229f13c(0x81d8,0);
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
  uVar4 = func_0x0245496c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.MineBoardActivity$$_ClearScoreEntity RVA 0x1a54c24 =====

void FUN_01a64c24(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x81f9,0);
  if (iVar1 == 0) {
    iVar3 = func_0x01a6585c(param_1);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0xb0);
    }
    if (iVar3 != 0 && iVar1 != 0) {
      func_0x02af7520(iVar1,0);
    }
    *(undefined4 *)(param_1 + 0xb0) = 0;
    return;
  }
  iVar1 = func_0x0229f13c(0x81f9,0);
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



// ===== FAT.MineBoardActivity$$_ClearSpawnBonusHandler RVA 0x1a54ca0 =====

void FUN_01a64ca0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x81fa,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x81fa,0);
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
  iVar1 = func_0x01a66ad8(param_1);
  if (iVar1 != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar4 = *(undefined4 *)(param_1 + 0xbc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbba60(iVar1,uVar4,0);
  }
  *(undefined4 *)(param_1 + 0xbc) = 0;
  return;
}



// ===== FAT.MineBoardActivity$$WhenReset RVA 0x1a54d44 =====

void FUN_01a64d44(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x81fb,0);
  if (iVar1 == 0) {
    FUN_01a64c24(param_1);
    iVar1 = func_0x0229f06c(0x81fa,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01a66ad8(param_1);
      if (iVar1 != 0) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x4c);
        uVar4 = *(undefined4 *)(param_1 + 0xbc);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01dbba60(iVar1,uVar4,0);
      }
      *(undefined4 *)(param_1 + 0xbc) = 0;
      return;
    }
    iVar1 = func_0x0229f13c(0x81fa,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x81fb,0);
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
  return;
}



// ===== FAT.MineBoardActivity$$SetupClear RVA 0x1a54da4 =====

void FUN_01a64da4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x81fc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x81fc,0);
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



// ===== FAT.MineBoardActivity$$TryPopup RVA 0x1a54e08 =====

void FUN_01a64e08(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x81fd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x81fd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c7f50(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MineBoardActivity$$Open RVA 0x1a54e70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a64e70(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x81fe,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x81fe,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
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
    func_0x0245495c(iVar3,uVar6,&uStack_30,uVar2);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 200);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_01a6ac8c + 0x1a6aaa8);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6ac90 + 0x1a6aabc),0,0);
    func_0x01384978(*(undefined4 *)(_UNK_01a6ac94 + 0x1a6aac8));
    func_0x01384978(*(undefined4 *)(_UNK_01a6ac98 + 0x1a6aad4));
    func_0x01384978(*(undefined4 *)(_UNK_01a6ac9c + 0x1a6aae0));
    *pcVar5 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x81ff,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x81ff,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = uStack_14;
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485278(&uStack_38,0,0);
    iVar4 = *(int *)(iVar3 + 8);
    uVar6 = *(undefined4 *)(iVar3 + 0xc);
    iVar1 = *(int *)(iVar3 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar2,0,0);
    return;
  }
  iVar3 = func_0x01a6a8d0(iVar1);
  if (iVar3 != 0) {
    puVar7 = *(undefined4 **)(_UNK_01a6aca0 + 0x1a6ab50);
    iVar3 = func_0x034aaa34(*puVar7);
    iVar4 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0x94);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar6 = *(undefined4 *)(iVar4 + 0xc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x01eea2b8(iVar3,uVar6,0);
    if (iVar3 == 0) {
      iVar3 = func_0x034aaa34(*puVar7);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x01eeb900(iVar3,0,0);
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0xfc);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x01e8007c(iVar3,1,0,0);
      iVar3 = func_0x03668dfc(**(undefined4 **)(_UNK_01a6aca4 + 0x1a6ac18));
      uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01a6aca8 + 0x1a6ac2c));
      func_0x0244f8a4(uVar6,iVar1,**(undefined4 **)(_UNK_01a6acac + 0x1a6ac48),0);
      uVar6 = func_0x01a6acb0(iVar1,uVar6,0,*(undefined4 *)(iVar1 + 0x10));
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0229f06c(0xcb,0,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0xcb,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_1c = uStack_14;
        uStack_20 = uStack_18;
        pcVar5 = (char *)(_UNK_021786c4 + 0x21785d0);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_021786c8 + 0x21785e4),iVar3,uVar6,0);
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
        func_0x01485278(&uStack_38,iVar3,0);
        func_0x01485278(&uStack_38,uVar6,0);
        iVar3 = *(int *)(iVar1 + 8);
        uVar6 = *(undefined4 *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar2 = 3;
        if (iVar1 == 0) {
          uVar2 = 2;
        }
        func_0x0245495c(iVar3,uVar6,&uStack_38,uVar2,0,0);
        func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021786cc + 0x21786b4));
        return;
      }
      iVar1 = *(int *)(iVar3 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&UNK_0518b080)(iVar1,uVar6,0);
      return;
    }
  }
  return;
}



// ===== FAT.MineBoardActivity$$BoardEntryAsset RVA 0x1a54ef8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a64ef8(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_01a64fe4 + 0x1a64f10);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a64fe8 + 0x1a64f24));
    func_0x01384978(*(undefined4 *)(_UNK_01a64fec + 0x1a64f30));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x8208,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x60);
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
    func_0x03470a60(iVar1,**(undefined4 **)(_UNK_01a64ff4 + 0x1a64fd0),&uStack_14,
                    **(undefined4 **)(_UNK_01a64ff0 + 0x1a64fc4));
  }
  else {
    iVar1 = func_0x0229f13c(0x8208,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.MineBoardActivity$$get_BoardEntryVisible RVA 0x1a54ff8 =====

undefined4 FUN_01a64ff8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8209,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 200);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 0;
    iVar1 = func_0x0229f06c(0x5a4,0);
    if (iVar1 == 0) {
      if ((*(int *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(param_1 + 8) != 0)) {
        uVar4 = 1;
      }
      return uVar4;
    }
    iVar1 = func_0x0229f13c(0x5a4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8209,0);
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



// ===== FAT.MineBoardActivity$$IsMileStoneToken RVA 0x1a5507c =====

/* WARNING: Removing unreachable block (ram,0x01a652d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a6507c(int param_1,int param_2)

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
  int *piVar10;
  int *piVar11;
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
  
  pcVar7 = (char *)(_UNK_01a653b0 + 0x1a65094);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a653b4 + 0x1a650a8));
    func_0x01384978(*(undefined4 *)(_UNK_01a653b8 + 0x1a650b4));
    func_0x01384978(*(undefined4 *)(_UNK_01a653bc + 0x1a650c0));
    func_0x01384978(*(undefined4 *)(_UNK_01a653c0 + 0x1a650cc));
    *pcVar7 = '\x01';
  }
  iVar8 = 0;
  iVar1 = func_0x0229f06c(0x34b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x34b,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_38,uVar6,0,0);
    iVar1 = func_0x0245496c(&uStack_38,0,0);
    return iVar1;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01a653c4 + 0x1a65148));
    piVar11 = *(int **)(_UNK_01a653c8 + 0x1a65160);
    piVar10 = *(int **)(_UNK_01a653cc + 0x1a65168);
    do {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar11) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01a651c0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01a651c0:
      iVar8 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar8 == 0) {
        iVar8 = 0;
        break;
      }
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar10) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01a65238;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01a65238:
      iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    } while (iVar1 != param_2);
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_01a653d0 + 0x1a65278)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
            goto LAB_01a652c0;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a653d0 + 0x1a65278),0);
LAB_01a652c0:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
  }
  return iVar8;
}



// ===== FAT.MineBoardActivity$$TryAddToken RVA 0x1a553d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a653d8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  
  pcVar2 = (char *)(_UNK_01a6555c + 0x1a653f8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a65560 + 0x1a65410));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5a6,0);
  if (iVar1 == 0) {
    iVar1 = param_3;
    if (0 < param_3) {
      iVar1 = param_2;
    }
    if ((0 < iVar1) && (*(int *)(param_1 + 0x3c) != 0)) {
      if (*(int *)(*(int *)(param_1 + 0x3c) + 0x4c) == param_2) {
        iVar1 = func_0x01a65568(param_1,1,param_3);
        if (iVar1 != 0) {
          piVar3 = *(int **)(_UNK_01a65564 + 0x1a654b8);
          iVar1 = *piVar3;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *piVar3;
          }
          if (param_4 != *(int *)(*(int *)(iVar1 + 0x5c) + 0x148)) {
            iVar1 = func_0x01a6585c(param_1);
            if (iVar1 != 0) {
              iVar1 = *(int *)(param_1 + 0xb0);
              uVar4 = *(undefined4 *)(param_1 + 0x54);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              func_0x02af96e4(iVar1,uVar4,0);
            }
            func_0x019a4b9c(param_2,param_3,*(undefined4 *)(param_1 + 0x54),param_4,0);
          }
        }
      }
      else {
        iVar1 = FUN_01a6507c(param_1,param_2);
        if (iVar1 != 0) {
          func_0x01a658bc(param_1,param_2,param_3,param_4);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5a6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179974(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MineBoardActivity$$ChangeItemToken RVA 0x1a55568 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a65568(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_01a65824 + 0x1a65588);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a65828 + 0x1a6559c));
    func_0x01384978(*(undefined4 *)(_UNK_01a6582c + 0x1a655a8));
    func_0x01384978(*(undefined4 *)(_UNK_01a65830 + 0x1a655b4));
    func_0x01384978(*(undefined4 *)(_UNK_01a65834 + 0x1a655c0));
    func_0x01384978(*(undefined4 *)(_UNK_01a65838 + 0x1a655cc));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5a7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5a7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0218ebd4(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  if ((param_3 < 1) || (param_2 == 0)) {
    if (param_2 != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x54) < param_3) {
      iVar1 = *(int *)(param_1 + 0x3c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = *(undefined4 *)(iVar1 + 0x4c);
      if (*(int *)(**(int **)(_UNK_01a65854 + 0x1a656d4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x02085f3c(uVar2,0);
      iVar6 = func_0x01c24918(0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar6 + 0x10);
      piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01a65858 + 0x1a65720),1);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar1 != 0) &&
         (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
        uVar2 = func_0x01384c10();
        func_0x01384aa0(uVar2,0);
      }
      if (piVar4[3] == 0) {
        func_0x01384bf4();
      }
      piVar4[4] = iVar1;
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x01ca1c50(iVar6,0x3f,piVar4,0);
      return 0;
    }
    piVar4 = *(int **)(_UNK_01a65848 + 0x1a657b0);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - param_3;
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01a6584c + 0x1a657d0));
    iVar6 = *(int *)(param_1 + 0x3c);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(undefined4 *)(iVar6 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_3 = -param_3;
    puVar3 = *(undefined4 **)(_UNK_01a65850 + 0x1a65808);
  }
  else {
    iVar1 = **(int **)(_UNK_01a6583c + 0x1a65640);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_3;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01a65840 + 0x1a65668));
    iVar6 = *(int *)(param_1 + 0x3c);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(undefined4 *)(iVar6 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar3 = *(undefined4 **)(_UNK_01a65844 + 0x1a656a0);
  }
  func_0x034a0af8(iVar1,param_3,uVar2,*puVar3);
  return 1;
}



// ===== FAT.MineBoardActivity$$IsOrderMethod RVA 0x1a5585c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a6585c(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x5a8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5a8,0);
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
    func_0x01384978(*(undefined4 *)(_UNK_02c05e44 + 0x2c05d70),2,0);
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
    func_0x0245494c(&uStack_50,0,2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,2,0);
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
  uVar7 = (*(code *)*puVar2)(param_1,2,puVar2[1]);
  return uVar7;
}



// ===== FAT.MineBoardActivity$$TryAddProgressNum RVA 0x1a558bc =====

/* WARNING: Removing unreachable block (ram,0x01a65ef8) */
/* WARNING: Removing unreachable block (ram,0x01a65f0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a658bc(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_01a6612c + 0x1a658dc);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a66130 + 0x1a658f4));
    func_0x01384978(*(undefined4 *)(_UNK_01a66134 + 0x1a65900));
    func_0x01384978(*(undefined4 *)(_UNK_01a66138 + 0x1a6590c));
    func_0x01384978(*(undefined4 *)(_UNK_01a6613c + 0x1a65918));
    func_0x01384978(*(undefined4 *)(_UNK_01a66140 + 0x1a65924));
    func_0x01384978(*(undefined4 *)(_UNK_01a66144 + 0x1a65930));
    func_0x01384978(*(undefined4 *)(_UNK_01a66148 + 0x1a6593c));
    func_0x01384978(*(undefined4 *)(_UNK_01a6614c + 0x1a65948));
    func_0x01384978(*(undefined4 *)(_UNK_01a66150 + 0x1a65954));
    func_0x01384978(*(undefined4 *)(_UNK_01a66154 + 0x1a65960));
    func_0x01384978(*(undefined4 *)(_UNK_01a66158 + 0x1a6596c));
    func_0x01384978(*(undefined4 *)(_UNK_01a6615c + 0x1a65978));
    func_0x01384978(*(undefined4 *)(_UNK_01a66160 + 0x1a65984));
    func_0x01384978(*(undefined4 *)(_UNK_01a66164 + 0x1a65990));
    func_0x01384978(*(undefined4 *)(_UNK_01a66168 + 0x1a6599c));
    func_0x01384978(*(undefined4 *)(_UNK_01a6616c + 0x1a659a8));
    func_0x01384978(*(undefined4 *)(_UNK_01a66170 + 0x1a659b4));
    func_0x01384978(*(undefined4 *)(_UNK_01a66174 + 0x1a659c0));
    func_0x01384978(*(undefined4 *)(_UNK_01a66178 + 0x1a659cc));
    func_0x01384978(*(undefined4 *)(_UNK_01a6617c + 0x1a659d8));
    *pcVar9 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x5aa,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01a66470(param_1,*(undefined4 *)(param_1 + 0x4c));
    if (iVar1 != 0) {
      iVar15 = *(int *)(param_1 + 0x50) + param_3;
      func_0x019a4b9c(param_2,param_3,iVar15,param_4,0);
      iVar10 = *(int *)(iVar1 + 0x14);
      if (iVar15 < iVar10) {
        piVar2 = *(int **)(_UNK_01a66180 + 0x1a65a90);
        *(int *)(param_1 + 0x50) = iVar15;
        if (*(int *)(*piVar2 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01a66184 + 0x1a65ab0));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x034a4cfc(iVar1,iVar15,0,0,0xffffffff,**(undefined4 **)(_UNK_01a66188 + 0x1a65adc));
      }
      else {
        if (*(int *)(**(int **)(_UNK_01a6618c + 0x1a65b00) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar3 = func_0x028c8d78(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x0302a7c0(&uStack_30,iVar3,&iStack_28,**(undefined4 **)(_UNK_01a66190 + 0x1a65b40));
        iVar1 = *(int *)(iVar1 + 0x18);
        uVar16 = **(undefined4 **)(_UNK_01a66194 + 0x1a65b64);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        piVar2 = (int *)func_0x03653608(iVar1,**(undefined4 **)(_UNK_01a66198 + 0x1a65b8c));
LAB_01a65b98:
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar2;
        uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar8[-1] == **(int **)(_UNK_01a661cc + 0x1a65bb4)) {
              puVar4 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
              goto LAB_01a65bfc;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a661cc + 0x1a65bb4),0);
LAB_01a65bfc:
        iVar1 = (*(code *)*puVar4)(piVar2,puVar4[1]);
        if (iVar1 != 0) {
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar2;
          uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar8[-1] == **(int **)(_UNK_01a6619c + 0x1a65c30)) {
                puVar4 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
                goto LAB_01a65c78;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a6619c + 0x1a65c30),0);
LAB_01a65c78:
          uVar5 = (*(code *)*puVar4)(piVar2,puVar4[1]);
          iVar1 = func_0x0148d518(uVar16,**(undefined4 **)(_UNK_01a661a0 + 0x1a65c98),0);
          iVar3 = *(int *)(**(int **)(_UNK_01a661a4 + 0x1a65cb8) + 0x74);
          if (iVar1 == 0) {
            if (iVar3 == 0) {
              func_0x01384ab4();
            }
            uVar16 = func_0x030df410(uVar16,**(undefined4 **)(_UNK_01a661b0 + 0x1a65d0c),uVar5,
                                     **(undefined4 **)(_UNK_01a661ac + 0x1a65d00));
          }
          else {
            if (iVar3 == 0) {
              func_0x01384ab4();
            }
            uVar16 = func_0x030dc3cc(uVar16,uVar5,**(undefined4 **)(_UNK_01a661a8 + 0x1a65cd8));
          }
          if (*(int *)(**(int **)(_UNK_01a661b4 + 0x1a65d28) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar1 = func_0x02565a88(uVar5,0);
          if (iVar1 != 0) {
            iVar3 = func_0x01c24918(0);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            uVar5 = *(undefined4 *)(iVar1 + 8);
            uVar11 = *(undefined4 *)(iVar1 + 0xc);
            iVar1 = **(int **)(_UNK_01a661b8 + 0x1a65d74);
            iVar3 = *(int *)(iVar3 + 0x40);
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x01384ab4();
              iVar1 = **(int **)(_UNK_01a661bc + 0x1a65d9c);
            }
            uVar13 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x150);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            uVar5 = func_0x01cdcbac(iVar3,uVar5,uVar11,uVar13,0,0,0,0x183,
                                    **(undefined4 **)(_UNK_01a661c0 + 0x1a65dbc),
                                    **(undefined4 **)(_UNK_01a661c4 + 0x1a65dc8),0);
            iVar1 = iStack_28;
            if (iStack_28 == 0) {
              func_0x01384bf0();
            }
            iVar3 = *(int *)(iVar1 + 8);
            uVar7 = *(uint *)(iVar1 + 0xc);
            piVar8 = *(int **)(_UNK_01a661c8 + 0x1a65e30);
            *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
            iVar12 = *piVar8;
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            if (uVar7 < *(uint *)(iVar3 + 0xc)) {
              *(uint *)(iVar1 + 0xc) = uVar7 + 1;
              *(undefined4 *)(iVar3 + uVar7 * 4 + 0x10) = uVar5;
            }
            else {
              func_0x0328f170(iVar1,uVar5,
                              *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
            }
          }
          goto LAB_01a65b98;
        }
        if (piVar2 != (int *)0x0) {
          iVar1 = *piVar2;
          uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar8[-1] == **(int **)(_UNK_01a661d0 + 0x1a65e98)) {
                puVar4 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
                goto LAB_01a65ee0;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a661d0 + 0x1a65e98),0);
LAB_01a65ee0:
          (*(code *)*puVar4)(piVar2,puVar4[1]);
        }
        if (*(int *)(**(int **)(_UNK_01a661d4 + 0x1a65f20) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01a661d8 + 0x1a65f3c));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x034a4cfc(iVar1,iVar15 - iVar10,uStack_30,uStack_2c,iVar10,
                        **(undefined4 **)(_UNK_01a661dc + 0x1a65f5c));
        iVar1 = FUN_01a635a8(param_1);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar1 + 0x3c);
        iVar12 = *(int *)(param_1 + 0x4c);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar14 = *(int *)(iVar3 + 0xc);
        iVar6 = func_0x01c24918(0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar11 = *(undefined4 *)(iVar3 + 0xc);
        iVar3 = *(int *)(iVar6 + 200);
        uVar5 = *(undefined4 *)(iVar1 + 0x1c);
        iVar1 = *(int *)(param_1 + 0x4c);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x01a6e21c(iVar3,param_1,iVar1 + 1,uVar11,uVar5,iVar12 == iVar14 + -1,uVar16,0);
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        *(int *)(param_1 + 0x50) = iVar15 - iVar10;
        func_0x01a66700(param_1);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5aa,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179974(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MineBoardActivity$$TryUseToken RVA 0x1a561e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a661e4(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)(_UNK_01a66358 + 0x1a66204);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6635c + 0x1a6621c));
    func_0x01384978(*(undefined4 *)(_UNK_01a66360 + 0x1a66228));
    func_0x01384978(*(undefined4 *)(_UNK_01a66364 + 0x1a66234));
    *pcVar2 = '\x01';
  }
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x820a,0);
  if (iVar1 == 0) {
    iVar1 = param_3;
    if (0 < param_3) {
      iVar1 = param_2;
    }
    if (((0 < iVar1) && (*(int *)(param_1 + 0x3c) != 0)) &&
       (*(int *)(*(int *)(param_1 + 0x3c) + 0x4c) == param_2)) {
      uVar3 = 0;
      iVar1 = FUN_01a65568(param_1,0,param_3);
      if (iVar1 != 0) {
        func_0x019a4b9c(param_2,-param_3,*(undefined4 *)(param_1 + 0x54),param_4,0);
        if (*(int *)(**(int **)(_UNK_01a66368 + 0x1a66304) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01a6636c + 0x1a66320));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x034a0af8(iVar1,param_2,param_3,**(undefined4 **)(_UNK_01a66370 + 0x1a66348));
        uVar3 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x820a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0217a980(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar3;
}



// ===== FAT.MineBoardActivity$$GetTokenNum RVA 0x1a56374 =====

undefined4 FUN_01a66374(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x820b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x820b,0);
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
  return *(undefined4 *)(param_1 + 0x54);
}



// ===== FAT.MineBoardActivity$$GetCurProgressPhase RVA 0x1a563c8 =====

undefined4 FUN_01a663c8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x820c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x820c,0);
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
  return *(undefined4 *)(param_1 + 0x4c);
}



// ===== FAT.MineBoardActivity$$GetCurProgressNum RVA 0x1a5641c =====

undefined4 FUN_01a6641c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x820d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x820d,0);
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
  return *(undefined4 *)(param_1 + 0x50);
}



// ===== FAT.MineBoardActivity$$GetProgressInfo RVA 0x1a56470 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a66470(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_r4;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [4];
  
  pcVar8 = (char *)(_UNK_01a6654c + 0x1a66488);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a66550 + 0x1a6649c));
    func_0x01384978(*(undefined4 *)(_UNK_01a66554 + 0x1a664a8));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5ab,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5ab,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_0218f0ec + 0x218eff8);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0218f0f0 + 0x218f00c),param_1,param_2,0);
      *pcVar8 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    auStack_28[0] = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar6,0,0);
    uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0218f0f4 + 0x218f0dc));
    return uVar9;
  }
  iVar7 = FUN_01a635a8(param_1);
  iVar2 = 0;
  if (iVar7 != 0) {
    iVar2 = *(int *)(iVar7 + 0x3c);
  }
  if (((iVar7 != 0 && iVar2 != 0) && (-1 < param_2)) && (param_2 < *(int *)(iVar2 + 0xc))) {
    uVar9 = func_0x0364c9b8(iVar2,param_2,**(undefined4 **)(_UNK_01a66558 + 0x1a66538));
    pcVar8 = (char *)(_UNK_017fd19c + 0x17fd140);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_017fd1a0 + 0x17fd154),0);
      func_0x01384978(*(undefined4 *)(_UNK_017fd1a4 + 0x17fd160));
      *pcVar8 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_017fd1a8 + 0x17fd174) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = **(int **)(_UNK_017fd1ac + 0x17fd190);
    iVar2 = *(int *)(iVar7 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x02457d48();
    }
    iVar2 = *(int *)(iVar7 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    piVar3 = (int *)func_0x0369fa64(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0xe8));
    if (piVar3 == (int *)0x0) {
      func_0x02457d50();
    }
    iVar2 = *(int *)(iVar7 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    iVar7 = *(int *)(*(int *)(iVar2 + 0x60) + 0xf4);
    auStack_28[0] = 0;
    uStack_2c = 0;
    (**(code **)(*piVar3 + 0x110))(piVar3,*(undefined4 *)(*piVar3 + 0x114));
    iVar2 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
    if (iVar2 != 0) {
      unaff_r4 = piVar3[0x11];
    }
    bVar1 = true;
    iVar5 = 0;
    if (iVar2 != 0 && unaff_r4 != 0) {
      iVar4 = func_0x03d66780(unaff_r4,uVar9,auStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x68));
      uVar6 = auStack_28[0];
      bVar1 = false;
      iVar5 = unaff_r4;
      if (iVar4 != 0) {
        iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
        if (iVar2 == 0) {
          return auStack_28[0];
        }
        (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
        return auStack_28[0];
      }
    }
    if ((piVar3[0x12] == 0) ||
       (iVar4 = func_0x0421f3b0(piVar3[0x12],uVar9,
                                *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x13c)),
       iVar4 == 0)) {
      uStack_2c = 0;
      iVar4 = (**(code **)(*piVar3 + 0x1a0))
                        (piVar3,uVar9,&uStack_2c,*(undefined4 *)(*piVar3 + 0x1a4));
      uVar6 = uStack_2c;
      if (iVar4 != 0) {
        if (iVar2 != 0) {
          if (bVar1) {
            if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x40) + 0xbd) & 1)
                == 0) {
              func_0x02457d84();
            }
            iVar5 = func_0x02457d58();
            func_0x03d63f04(iVar5,4,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x74))
            ;
            piVar3[0x11] = iVar5;
          }
          if (iVar5 == 0) {
            func_0x02457d50();
          }
          func_0x03d6491c(iVar5,uVar9,uVar6,
                          *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x78));
        }
        iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
        if (iVar2 == 0) {
          return uVar6;
        }
        (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
        return uVar6;
      }
      iVar2 = piVar3[0x12];
      if (iVar2 == 0) {
        if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x48) + 0xbd) & 1) == 0)
        {
          func_0x02457d84();
        }
        iVar2 = func_0x02457d58();
        func_0x0421ec60(iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x144));
        piVar3[0x12] = iVar2;
        if (iVar2 == 0) {
          func_0x02457d50();
          iVar2 = 0;
        }
      }
      func_0x04220004(iVar2,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x148));
    }
    func_0x0369fb50(piVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x134));
    return 0;
  }
  return 0;
}



// ===== FAT.MineBoardActivity$$GetDropInfo RVA 0x1a5655c =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a6655c(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_r4;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [4];
  
  pcVar8 = (char *)(_UNK_01a66638 + 0x1a66574);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6663c + 0x1a66588));
    func_0x01384978(*(undefined4 *)(_UNK_01a66640 + 0x1a66594));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x820e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x820e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02258784 + 0x2258690);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02258788 + 0x22586a4),param_1,param_2,0);
      *pcVar8 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    auStack_28[0] = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar6,0,0);
    uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0225878c + 0x2258774));
    return uVar9;
  }
  iVar7 = FUN_01a635a8(param_1);
  iVar2 = 0;
  if (iVar7 != 0) {
    iVar2 = *(int *)(iVar7 + 0x38);
  }
  if (((iVar7 != 0 && iVar2 != 0) && (-1 < param_2)) && (param_2 < *(int *)(iVar2 + 0xc))) {
    uVar9 = func_0x0364c9b8(iVar2,param_2,**(undefined4 **)(_UNK_01a66644 + 0x1a66624));
    pcVar8 = (char *)(_UNK_017fc368 + 0x17fc30c);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_017fc36c + 0x17fc320),0);
      func_0x01384978(*(undefined4 *)(_UNK_017fc370 + 0x17fc32c));
      *pcVar8 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_017fc374 + 0x17fc340) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = **(int **)(_UNK_017fc378 + 0x17fc35c);
    iVar2 = *(int *)(iVar7 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x02457d48();
    }
    iVar2 = *(int *)(iVar7 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    piVar3 = (int *)func_0x0369fa64(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0xe8));
    if (piVar3 == (int *)0x0) {
      func_0x02457d50();
    }
    iVar2 = *(int *)(iVar7 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    iVar7 = *(int *)(*(int *)(iVar2 + 0x60) + 0xf4);
    auStack_28[0] = 0;
    uStack_2c = 0;
    (**(code **)(*piVar3 + 0x110))(piVar3,*(undefined4 *)(*piVar3 + 0x114));
    iVar2 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
    if (iVar2 != 0) {
      unaff_r4 = piVar3[0x11];
    }
    bVar1 = true;
    iVar5 = 0;
    if (iVar2 != 0 && unaff_r4 != 0) {
      iVar4 = func_0x03d66780(unaff_r4,uVar9,auStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x68));
      uVar6 = auStack_28[0];
      bVar1 = false;
      iVar5 = unaff_r4;
      if (iVar4 != 0) {
        iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
        if (iVar2 == 0) {
          return auStack_28[0];
        }
        (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
        return auStack_28[0];
      }
    }
    if ((piVar3[0x12] == 0) ||
       (iVar4 = func_0x0421f3b0(piVar3[0x12],uVar9,
                                *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x13c)),
       iVar4 == 0)) {
      uStack_2c = 0;
      iVar4 = (**(code **)(*piVar3 + 0x1a0))
                        (piVar3,uVar9,&uStack_2c,*(undefined4 *)(*piVar3 + 0x1a4));
      uVar6 = uStack_2c;
      if (iVar4 != 0) {
        if (iVar2 != 0) {
          if (bVar1) {
            if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x40) + 0xbd) & 1)
                == 0) {
              func_0x02457d84();
            }
            iVar5 = func_0x02457d58();
            func_0x03d63f04(iVar5,4,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x74))
            ;
            piVar3[0x11] = iVar5;
          }
          if (iVar5 == 0) {
            func_0x02457d50();
          }
          func_0x03d6491c(iVar5,uVar9,uVar6,
                          *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x78));
        }
        iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
        if (iVar2 == 0) {
          return uVar6;
        }
        (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
        return uVar6;
      }
      iVar2 = piVar3[0x12];
      if (iVar2 == 0) {
        if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x48) + 0xbd) & 1) == 0)
        {
          func_0x02457d84();
        }
        iVar2 = func_0x02457d58();
        func_0x0421ec60(iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x144));
        piVar3[0x12] = iVar2;
        if (iVar2 == 0) {
          func_0x02457d50();
          iVar2 = 0;
        }
      }
      func_0x04220004(iVar2,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x148));
    }
    func_0x0369fb50(piVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x134));
    return 0;
  }
  return 0;
}



// ===== FAT.MineBoardActivity$$CheckProgressFinish RVA 0x1a56648 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01a66648(int param_1)

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
  
  pcVar4 = (char *)(_UNK_01a666f8 + 0x1a6665c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a666fc + 0x1a66670));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x820f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x820f,0);
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
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar5 = FUN_01a635a8(param_1);
  iVar1 = 0;
  if (iVar5 != 0) {
    iVar1 = *(int *)(iVar5 + 0x3c);
  }
  if (iVar5 != 0 && iVar1 != 0) {
    return (uint)(*(int *)(iVar1 + 0xc) <= *(int *)(param_1 + 0x4c));
  }
  return 1;
}



// ===== FAT.MineBoardActivity$$_SetBonusHandlerDirty RVA 0x1a56700 =====

void FUN_01a66700(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5b1,0);
  if (iVar1 == 0) {
    iVar3 = func_0x01a66ad8(param_1);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0xbc);
    }
    param_1 = iVar1;
    if (iVar3 == 0 || param_1 == 0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x5b3,0);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      return;
    }
    iVar1 = func_0x0229f13c(0x5b3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5b1,0);
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
  return;
}



// ===== FAT.MineBoardActivity$$FAT.IActivityOrderHandler.OnPreUpdate RVA 0x1a56770 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a66770(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_01a66aa4 + 0x1a66790);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a66aa8 + 0x1a667a8));
    func_0x01384978(*(undefined4 *)(_UNK_01a66aac + 0x1a667b4));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8210,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8210,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021d2b64(iVar1,param_1,param_2,param_3,param_4,0);
    return uVar2;
  }
  iVar1 = FUN_01a6585c(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_01a66ab0 + 0x1a66840)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x268);
        goto LAB_01a66888;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01a66ab0 + 0x1a66840),0x35);
LAB_01a66888:
  iVar1 = (*(code *)*puVar3)(param_2,puVar3[1]);
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = func_0x02b449f8(param_1,0);
  iVar1 = func_0x01e4b758(param_2,uVar2,0);
  piVar8 = *(int **)(_UNK_01a66ab4 + 0x1a668cc);
  iVar4 = *piVar8;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x01384ab4();
    iVar4 = *piVar8;
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x01e4b23c(iVar4,param_2,0);
  if (iVar4 == 0) {
LAB_01a66964:
    iVar4 = *(int *)(param_1 + 0xb0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x02afa744(iVar4,param_2,param_4,0,0);
    uVar2 = 1;
  }
  else {
    iVar4 = *piVar8;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
      iVar4 = *piVar8;
    }
    iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar4 = func_0x01e4b2b0(iVar4,param_2,0);
    iVar5 = func_0x02b449f8(param_1,0);
    if (iVar4 != iVar5) goto LAB_01a66964;
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
    iVar4 = func_0x01e4b23c(0,param_2,0);
    if (iVar4 != 0) {
      func_0x01384bf0();
      goto LAB_01a669d8;
    }
  }
  else {
    iVar4 = func_0x01e4b23c(iVar1,param_2,0);
    if (iVar4 != 0) {
LAB_01a669d8:
      uVar6 = 0;
      iVar4 = func_0x01e4b2b0(iVar1,param_2,0);
      iVar5 = func_0x02b449f8(param_1,0);
      if (iVar4 == iVar5) goto LAB_01a66a88;
    }
  }
  iVar4 = *piVar8;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x01384ab4();
    iVar4 = *piVar8;
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4b3b8(&uStack_2c,iVar4,param_2,0);
  uVar6 = func_0x02b449f8(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4ba84(iVar1,param_2,uVar6,uStack_28,uStack_2c,0);
  uVar6 = 1;
LAB_01a66a88:
  iVar1 = func_0x01f2a218(0);
  if (iVar1 != 0) {
    uVar2 = uVar6;
  }
  return uVar2;
}



// ===== FAT.MineBoardActivity$$get_OutputType RVA 0x1a56ab8 =====

undefined4 FUN_01a66ab8(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb4);
}



// ===== FAT.MineBoardActivity$$set_OutputType RVA 0x1a56ac0 =====

void FUN_01a66ac0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb4) = param_2;
  return;
}



// ===== FAT.MineBoardActivity$$get_OutputMethod RVA 0x1a56ac8 =====

undefined4 FUN_01a66ac8(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb8);
}



// ===== FAT.MineBoardActivity$$set_OutputMethod RVA 0x1a56ad0 =====

void FUN_01a66ad0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb8) = param_2;
  return;
}



// ===== FAT.MineBoardActivity$$IsEnergyMethod RVA 0x1a56ad8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a66ad8(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x5b2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b2,0);
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



// ===== FAT.MineBoardActivity$$GetSpawnOutputsOne RVA 0x1a56b38 =====

/* WARNING: Removing unreachable block (ram,0x01a66ecc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a66b38(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
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
  
  pcVar8 = (char *)(_UNK_01a66fac + 0x1a66b54);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a66fb0 + 0x1a66b68));
    func_0x01384978(*(undefined4 *)(_UNK_01a66fb4 + 0x1a66b74));
    func_0x01384978(*(undefined4 *)(_UNK_01a66fb8 + 0x1a66b80));
    func_0x01384978(*(undefined4 *)(_UNK_01a66fbc + 0x1a66b8c));
    func_0x01384978(*(undefined4 *)(_UNK_01a66fc0 + 0x1a66b98));
    func_0x01384978(*(undefined4 *)(_UNK_01a66fc4 + 0x1a66ba4));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x8211,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x8211,0);
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
    func_0x01485278(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar2 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_38,uVar7,0,0);
    return;
  }
  if (param_2 == (int *)0x0) {
    return;
  }
  iVar2 = *param_2;
  uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_01a66fc8 + 0x1a66c10)) {
        puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xd8);
        goto LAB_01a66c58;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01a66fc8 + 0x1a66c10),3);
LAB_01a66c58:
  (*(code *)*puVar3)(param_2,puVar3[1]);
  iVar2 = FUN_01a6655c(param_1,*(undefined4 *)(param_1 + 0x4c));
  if (iVar2 == 0) {
    return;
  }
  iVar2 = *(int *)(iVar2 + 0x18);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  piVar5 = (int *)func_0x03653608(iVar2,**(undefined4 **)(_UNK_01a66fcc + 0x1a66c98));
  piVar11 = *(int **)(_UNK_01a66fd0 + 0x1a66cb4);
  do {
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar5;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar11) {
          puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
          goto LAB_01a66d0c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar5,*piVar11,0);
LAB_01a66d0c:
    iVar2 = (*(code *)*puVar3)(piVar5,puVar3[1]);
    if (iVar2 == 0) break;
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar5;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01a66fd4 + 0x1a66d40)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
          goto LAB_01a66d88;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_01a66fd4 + 0x1a66d40),0);
LAB_01a66d88:
    uVar10 = (*(code *)*puVar3)(piVar5,puVar3[1]);
    if (*(int *)(**(int **)(_UNK_01a66fd8 + 0x1a66da8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02566088(&uStack_30,uVar10,0);
    uVar1 = uStack_28;
    uVar7 = uStack_2c;
    uVar10 = uStack_30;
    iVar2 = *param_2;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01a66fdc + 0x1a66de4)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xd0);
          goto LAB_01a66e2c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01a66fdc + 0x1a66de4),2);
LAB_01a66e2c:
    uStack_38 = puVar3[1];
    (*(code *)*puVar3)(param_2,uVar10,uVar7,uVar1);
  } while( true );
  if (piVar5 != (int *)0x0) {
    iVar2 = *piVar5;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_01a66fe0 + 0x1a66e6c)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xc0);
          goto LAB_01a66eb4;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_01a66fe0 + 0x1a66e6c),0);
LAB_01a66eb4:
    (*(code *)*puVar3)(piVar5,puVar3[1]);
  }
  return;
}



// ===== FAT.MineBoardActivity$$TryGetOutputFixedOne RVA 0x1a56fe8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01a66fe8(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01a6710c + 0x1a67008);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a67110 + 0x1a6701c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8212,0);
  if (iVar1 == 0) {
    *param_2 = 0;
    *param_3 = 0;
    iVar1 = FUN_01a6655c(param_1,*(undefined4 *)(param_1 + 0x4c));
    if (iVar1 != 0) {
      uVar3 = *(undefined4 *)(iVar1 + 0x14);
      if (*(int *)(**(int **)(_UNK_01a67114 + 0x1a670a0) + 0x74) == 0) {
        func_0x01384ab4(**(int **)(_UNK_01a67114 + 0x1a670a0));
      }
      iVar1 = func_0x02565a88(uVar3,0);
      if (iVar1 != 0) {
        *param_2 = *(int *)(iVar1 + 8);
        iVar1 = *(int *)(iVar1 + 0xc);
        *param_3 = iVar1;
        return (uint)(0 < iVar1 && 0 < *param_2);
      }
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x8212,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021cc06c(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.MineBoardActivity$$GetWithOutputTimeRange RVA 0x1a57118 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a67118(undefined4 *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01a672ac + 0x1a67134);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a672b0 + 0x1a67148));
    func_0x01384978(*(undefined4 *)(_UNK_01a672b4 + 0x1a67154));
    func_0x01384978(*(undefined4 *)(_UNK_01a672b8 + 0x1a67160));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8213,0);
  if (iVar1 == 0) {
    pcVar2 = (char *)FUN_01a6655c(param_2,*(undefined4 *)(param_2 + 0x4c));
    iVar1 = 0;
    if (pcVar2 != (char *)0x0) {
      iVar1 = *(int *)(pcVar2 + 0x1c);
      pcVar5 = pcVar2;
    }
    if ((pcVar2 != (char *)0x0 && iVar1 != 0) && (iVar6 = *(int *)(iVar1 + 0xc), 0 < iVar6)) {
      puVar7 = *(undefined4 **)(_UNK_01a672c0 + 0x1a67220);
      iVar1 = func_0x0364c9b8(iVar1,0,*puVar7);
      iVar3 = iVar1;
      if (iVar6 == 1) {
        puVar7 = *(undefined4 **)(_UNK_01a672c4 + 0x1a67240);
        *param_1 = 0;
        param_1[1] = 0;
        uVar4 = *puVar7;
      }
      else {
        iVar6 = *(int *)(pcVar5 + 0x1c);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = func_0x0364c9b8(iVar6,1,*puVar7);
        *param_1 = 0;
        param_1[1] = 0;
        if (iVar1 <= iVar6) {
          iVar3 = iVar6;
          iVar6 = iVar1;
        }
        iVar1 = iVar6;
        uVar4 = **(undefined4 **)(_UNK_01a672c8 + 0x1a6729c);
      }
    }
    else {
      iVar1 = 0;
      uVar4 = **(undefined4 **)(_UNK_01a672bc + 0x1a671ec);
      *param_1 = 0;
      param_1[1] = 0;
      iVar3 = 0;
    }
    func_0x038fd264(param_1,iVar1,iVar3,uVar4);
  }
  else {
    iVar1 = func_0x0229f13c(0x8213,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217edb0(&uStack_28,iVar1,param_2,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}



// ===== FAT.MineBoardActivity$$get_HandbookAgent RVA 0x1a572cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a672cc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8214,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8214,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02235380 + 0x22352a0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02235384 + 0x22352b4),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02235388 + 0x2235370));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x58);
}



// ===== FAT.MineBoardActivity$$CheckIsBoardItem RVA 0x1a57320 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01a67320(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  
  iVar1 = func_0x0229f06c(0x8215,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x58);
    if (param_1 == 0) {
      return 0;
    }
    pcVar6 = (char *)(_UNK_02bf6bd0 + 0x2bf6b40);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02bf6bd4 + 0x2bf6b54),param_2,0);
      *pcVar6 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x5c43,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) == 0) {
        uVar2 = 0;
      }
      else {
        iVar1 = func_0x030fe230(*(undefined4 *)(iVar1 + 8),param_2,0);
        uVar2 = (uint)(iVar1 != -1);
      }
      return uVar2;
    }
    iVar1 = func_0x0229f13c(0x5c43,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8215,0);
    if (iVar1 == 0) {
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
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,param_2,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
  uVar2 = func_0x0245496c(&uStack_38,0,0);
  return uVar2;
}



// ===== FAT.MineBoardActivity$$OnNewItemUnlock RVA 0x1a57398 =====

void FUN_01a67398(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8216,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x58);
    if (param_1 == 0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x5c45,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x38);
      *(undefined1 *)(param_1 + 0x28) = 1;
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x02bf6b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    iVar1 = func_0x0229f13c(0x5c45,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8216,0);
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
  return;
}



// ===== FAT.MineBoardActivity$$OnNewItemShow RVA 0x1a57400 =====

void FUN_01a67400(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x8217,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x58);
    if (param_1 == 0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x5c48,0,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x3c);
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x02bf6aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))
                (*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    iVar1 = func_0x0229f13c(0x5c48,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8217,0);
    if (iVar1 == 0) {
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



// ===== FAT.MineBoardActivity$$CheckClaimBoardCategoryReward RVA 0x1a57474 =====

/* WARNING: Possible PIC construction at 0x02bf69e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02bf69e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01a67474(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_18 [7];
  char cStack_11;
  
  iVar1 = func_0x0229f06c(0x8218,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01a64b7c(param_1);
    if ((iVar1 != 0) || (param_1 = *(int *)(param_1 + 0x58), param_1 == 0)) {
      return 0;
    }
    pcVar6 = (char *)(_UNK_02bf6a28 + 0x2bf697c);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02bf6a2c + 0x2bf6990),param_2,0);
      *pcVar6 = '\x01';
    }
    cStack_11 = '\0';
    iVar1 = func_0x0229f06c(0x5c4a,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d50be8(iVar1,param_2,&cStack_11,**(undefined4 **)(_UNK_02bf6a30 + 0x2bf6a0c));
      return (uint)(cStack_11 == '\0');
    }
    iVar1 = func_0x0229f13c(0x5c4a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2bf69e4;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar1 = func_0x0229f13c(0x8218,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar3 = *(int *)(iVar1 + 0x10);
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
  if (iVar3 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar3,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar3,uVar5,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
  uVar2 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x38),0,0);
  return uVar2;
}



// ===== FAT.MineBoardActivity$$CheckClaimBoardHandBookAllReward RVA 0x1a574fc =====

/* WARNING: Possible PIC construction at 0x02bf67ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02bf67b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a674fc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  char *pcVar5;
  int unaff_r5;
  undefined4 unaff_r6;
  undefined4 uVar6;
  undefined4 unaff_r7;
  undefined4 *puVar7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  iVar1 = func_0x0229f06c(0x8219,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01a64b7c(param_1);
    if ((iVar1 != 0) || (param_1 = *(int *)(param_1 + 0x58), param_1 == 0)) {
      return 0;
    }
    pcVar5 = (char *)(_UNK_02bf6934 + 0x2bf6714);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02bf6938 + 0x2bf6728),0);
      func_0x01384978(*(undefined4 *)(_UNK_02bf693c + 0x2bf6734));
      func_0x01384978(*(undefined4 *)(_UNK_02bf6940 + 0x2bf6740));
      func_0x01384978(*(undefined4 *)(_UNK_02bf6944 + 0x2bf674c));
      func_0x01384978(*(undefined4 *)(_UNK_02bf6948 + 0x2bf6758));
      *pcVar5 = '\x01';
    }
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    unaff_r6 = 0;
    uStack_28 = 0;
    iVar1 = func_0x0229f06c(0x5c4c,0);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x10) == '\0') {
        iVar3 = *(int *)(param_1 + 0xc);
        iVar1 = 0;
        if (iVar3 != 0) {
          iVar1 = *(int *)(iVar3 + 0xc);
        }
        if (iVar3 != 0 && iVar1 != 0) {
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(param_1 + 0xc);
          iVar1 = *(int *)(iVar1 + 0x3c);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x0325a3b4(&uStack_38,iVar3,**(undefined4 **)(_UNK_02bf694c + 0x2bf6818));
          uStack_28 = uStack_38;
          uStack_24 = uStack_34;
          uStack_20 = uStack_30;
          iStack_1c = iStack_2c;
          puVar7 = *(undefined4 **)(_UNK_02bf6950 + 0x2bf6834);
          do {
            do {
              iVar2 = func_0x03f597e0(&uStack_28,*puVar7);
              iVar3 = iStack_1c;
              if (iVar2 == 0) {
                iVar1 = 9;
                goto LAB_02bf6880;
              }
            } while (iStack_1c < 1);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar3 = func_0x01cc4240(iVar1,iVar3,0);
          } while (iVar3 != 0);
          iVar1 = 8;
LAB_02bf6880:
          func_0x03f597dc(&uStack_28,**(undefined4 **)(_UNK_02bf6954 + 0x2bf688c));
          unaff_r6 = 0;
          if (iVar1 != 8) {
            unaff_r6 = 1;
          }
        }
      }
      return unaff_r6;
    }
    iVar1 = func_0x0229f13c(0x5c4c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2bf67b0;
    unaff_r4 = iVar1;
    unaff_r5 = param_1;
    register0x00000054 = (BADSPACEBASE *)&uStack_38;
  }
  else {
    iVar1 = func_0x0229f13c(0x8219,0);
    if (iVar1 == 0) {
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
  iVar3 = *(int *)(iVar1 + 0x10);
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
  if (iVar3 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar3,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar3,uVar6,(undefined1 *)((int)register0x00000054 + -0x30),uVar4);
  uVar6 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x30),0,0);
  return uVar6;
}



// ===== FAT.MineBoardActivity$$ProcessAllUnlockReward RVA 0x1a57578 =====

/* WARNING: Removing unreachable block (ram,0x02bf91a0) */
/* WARNING: Removing unreachable block (ram,0x02bf91b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a67578(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  int unaff_r11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  undefined8 uVar15;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int *piStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x821a,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (((iVar1 == 0) || (iVar1 = FUN_01a64b7c(param_1), iVar1 != 0)) ||
       (param_1 = (int *)param_1[0x16], param_1 == (int *)0x0)) {
      return 0;
    }
    pcVar5 = (char *)(iRam02bf9188 + 0x2bf8f60);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(iRam02bf918c + 0x2bf8f74),0);
      func_0x01384978(*(undefined4 *)(iRam02bf9190 + 0x2bf8f80));
      func_0x01384978(*(undefined4 *)(iRam02bf9194 + 0x2bf8f8c));
      func_0x01384978(*(undefined4 *)(iRam02bf9198 + 0x2bf8f98));
      func_0x01384978(*(undefined4 *)(iRam02bf919c + 0x2bf8fa4));
      func_0x01384978(*(undefined4 *)(iRam02bf91a0 + 0x2bf8fb0));
      *pcVar5 = '\x01';
    }
    uVar7 = 0;
    iVar1 = func_0x0229f06c(0x5c4e,0);
    if (iVar1 == 0) {
      if (param_1[6] != 0) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar8 = param_1[6];
        iVar4 = *(int *)(iVar1 + 0x40);
        iVar1 = iVar8;
        if (iVar8 == 0) {
          func_0x01384bf0();
          iVar1 = param_1[6];
          bVar13 = iVar1 == 0;
          bVar12 = true;
          if (bVar13) {
            uVar15 = func_0x01384bf0();
            puVar2 = (undefined *)((ulonglong)uVar15 >> 0x20);
            bVar14 = bVar12;
            if (bVar13) {
              bVar14 = &UNK_01300000 < puVar2 || puVar2 + -0x1300000 < (undefined *)(uint)bVar12;
            }
            if (bVar13 && puVar2 == &UNK_01300000 + !bVar12) {
                    /* WARNING: Could not recover jumptable at 0x02bf919c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar7 = (*(code *)(unaff_r11 + 0x2200 + (uint)bVar14))();
              return uVar7;
            }
            pcVar5 = (char *)(_UNK_02bf93d4 + 0x2bf91d4);
            piStack_58 = param_1;
            iStack_54 = iVar4;
            if (*pcVar5 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_02bf93d8 + 0x2bf91e8));
              func_0x01384978(*(undefined4 *)(_UNK_02bf93dc + 0x2bf91f4));
              func_0x01384978(*(undefined4 *)(_UNK_02bf93e0 + 0x2bf9200));
              func_0x01384978(*(undefined4 *)(_UNK_02bf93e4 + 0x2bf920c));
              func_0x01384978(*(undefined4 *)(_UNK_02bf93e8 + 0x2bf9218));
              *pcVar5 = '\x01';
            }
            uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            uStack_68 = 0;
            iVar1 = func_0x0229f06c(0x7a91,0);
            if (iVar1 == 0) {
              iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_02bf93ec + 0x2bf927c));
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uVar7 = 0;
              if (*(char *)(iVar1 + 10) != '\0') {
                iVar1 = *(int *)((int)uVar15 + 0xc);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                func_0x0325a3b4(&uStack_78,iVar1,**(undefined4 **)(_UNK_02bf93f0 + 0x2bf92c0));
                uStack_68 = uStack_78;
                uStack_64 = uStack_74;
                uStack_60 = uStack_70;
                uStack_5c = uStack_6c;
                puVar11 = *(undefined4 **)(_UNK_02bf93f4 + 0x2bf92dc);
                while (iVar1 = func_0x03f597e0(&uStack_68,*puVar11), uVar7 = uStack_5c, iVar1 != 0)
                {
                  iVar1 = func_0x01c24918(0);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  iVar1 = *(int *)(iVar1 + 0x3c);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x01cc14fc(iVar1,uVar7,1,0);
                }
                uVar7 = func_0x03f597dc(&uStack_68,**(undefined4 **)(_UNK_02bf93f8 + 0x2bf933c));
              }
            }
            else {
              iVar1 = func_0x0229f13c(0x7a91,0);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uVar7 = func_0x02173f80(iVar1,(int)uVar15,0);
            }
            return uVar7;
          }
        }
        piVar10 = *(int **)(iRam02bf91a4 + 0x2bf9058);
        uVar7 = *(undefined4 *)(iVar1 + 0xc);
        uVar3 = *(undefined4 *)(iVar8 + 8);
        iVar1 = *piVar10;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar10;
        }
        uVar9 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x38);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uStack_30 = **(undefined4 **)(iRam02bf91a8 + 0x2bf909c);
        uStack_2c = **(undefined4 **)(iRam02bf91ac + 0x2bf90a8);
        uStack_28 = 0;
        uVar7 = func_0x01cdcbac(iVar4,uVar3,uVar7,uVar9);
        iVar1 = func_0x01384be4(**(undefined4 **)(iRam02bf91b0 + 0x2bf90e4));
        func_0x0328e950(iVar1,**(undefined4 **)(iRam02bf91b4 + 0x2bf90f8));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar1 + 8);
        uVar6 = *(uint *)(iVar1 + 0xc);
        piVar10 = *(int **)(iRam02bf91b8 + 0x2bf912c);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        iVar8 = *piVar10;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        if (uVar6 < *(uint *)(iVar4 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar6 + 1;
          *(undefined4 *)(iVar4 + uVar6 * 4 + 0x10) = uVar7;
        }
        else {
          func_0x0328f170(iVar1,uVar7,
                          *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
        }
        uVar7 = 1;
        param_1[7] = iVar1;
      }
      return uVar7;
    }
    iVar1 = func_0x0229f13c(0x5c4e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x821a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&stack0xffffffb8,0,0);
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  uStack_50 = 0;
  func_0x0245495c(iVar4,uVar7,&uStack_30,uVar3);
  uVar7 = func_0x0245496c(&uStack_30,0,0);
  return uVar7;
}



// ===== FAT.MineBoardActivity$$TrackHandbookRewardClaim RVA 0x1a57610 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a67610(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01a677dc + 0x1a6762c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a677e0 + 0x1a67640));
    func_0x01384978(*(undefined4 *)(_UNK_01a677e4 + 0x1a6764c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x81d9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x81d9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01dd0230(iVar1,param_2,0);
  if (iVar1 != 0) {
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 200);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x01a6bcf4(iVar3,0);
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 200);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x01a6bd9c(iVar3,0);
    iVar3 = *(int *)(iVar1 + 0x44);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0364c54c(iVar3,param_2,**(undefined4 **)(_UNK_01a677e8 + 0x1a67774));
    iVar6 = *(int *)(iVar1 + 0x44);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar6 + 0xc);
    uStack_28 = *(undefined4 *)(iVar1 + 0x10);
    uStack_24 = 0;
    uStack_30 = (uint)(iVar3 + 1 == iVar6);
    uStack_34 = 1;
    uStack_38 = uVar5;
    uStack_2c = uVar2;
    func_0x023132f0(param_1,iVar3 + 1,iVar6,*(undefined4 *)(param_1 + 0x40));
  }
  return;
}



// ===== FAT.MineBoardActivity$$JumpTask RVA 0x1a577ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a677ec(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
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
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_01a679d4 + 0x1a6780c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a679d8 + 0x1a67820));
    func_0x01384978(*(undefined4 *)(_UNK_01a679dc + 0x1a6782c));
    func_0x01384978(*(undefined4 *)(_UNK_01a679e0 + 0x1a67838));
    func_0x01384978(*(undefined4 *)(_UNK_01a679e4 + 0x1a67844));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x821b,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a679e8 + 0x1a678ac));
    func_0x01a6844c(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar2 = *(undefined4 **)(_UNK_01a679ec + 0x1a678d4);
    *(int *)(iVar1 + 8) = param_1;
    *(undefined4 *)(iVar1 + 0xc) = param_3;
    iVar3 = func_0x034aaa34(*puVar2);
    iVar7 = *(int *)(param_1 + 0x94);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar8 = *(undefined4 *)(iVar7 + 0xc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x01eea2b8(iVar3,uVar8,0);
    iVar7 = func_0x01c24918(0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    if (iVar3 == 0) {
      iVar3 = *(int *)(iVar7 + 200);
      uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_01a679f0 + 0x1a67988));
      func_0x024500b4(uVar8,iVar1,**(undefined4 **)(_UNK_01a679f4 + 0x1a679a8),0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      pcVar6 = (char *)(_UNK_01a6ac8c + 0x1a6aaa8);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01a6ac90 + 0x1a6aabc),uVar8,0);
        func_0x01384978(*(undefined4 *)(_UNK_01a6ac94 + 0x1a6aac8));
        func_0x01384978(*(undefined4 *)(_UNK_01a6ac98 + 0x1a6aad4));
        func_0x01384978(*(undefined4 *)(_UNK_01a6ac9c + 0x1a6aae0));
        *pcVar6 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x81ff,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0x81ff,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,uVar8,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar1 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar3,0);
        func_0x01485278(&uStack_38,uVar8,0);
        iVar3 = *(int *)(iVar1 + 8);
        uVar8 = *(undefined4 *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar5 = 3;
        if (iVar1 == 0) {
          uVar5 = 2;
        }
        func_0x0245495c(iVar3,uVar8,&uStack_38,uVar5,0,0);
        return;
      }
      iVar1 = func_0x01a6a8d0(iVar3);
      if (iVar1 != 0) {
        puVar2 = *(undefined4 **)(_UNK_01a6aca0 + 0x1a6ab50);
        iVar1 = func_0x034aaa34(*puVar2);
        iVar7 = *(int *)(iVar3 + 0x10);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar7 = *(int *)(iVar7 + 0x94);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uVar5 = *(undefined4 *)(iVar7 + 0xc);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01eea2b8(iVar1,uVar5,0);
        if (iVar1 == 0) {
          iVar1 = func_0x034aaa34(*puVar2);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x01eeb900(iVar1,0,0);
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0xfc);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x01e8007c(iVar1,1,0,0);
          iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01a6aca4 + 0x1a6ac18));
          uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01a6aca8 + 0x1a6ac2c));
          func_0x0244f8a4(uVar5,iVar3,**(undefined4 **)(_UNK_01a6acac + 0x1a6ac48),0);
          uVar8 = func_0x01a6acb0(iVar3,uVar5,uVar8,*(undefined4 *)(iVar3 + 0x10));
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x0229f06c(0xcb,0,0);
          if (iVar3 != 0) {
            iVar3 = func_0x0229f13c(0xcb,0);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            pcVar6 = (char *)(_UNK_021786c4 + 0x21785d0);
            if (*pcVar6 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_021786c8 + 0x21785e4),iVar1,uVar8,0);
              *pcVar6 = '\x01';
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
            if (*(int *)(iVar3 + 0x10) != 0) {
              func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
            }
            func_0x01485278(&uStack_38,iVar1,0);
            func_0x01485278(&uStack_38,uVar8,0);
            iVar7 = *(int *)(iVar3 + 8);
            uVar8 = *(undefined4 *)(iVar3 + 0xc);
            iVar1 = *(int *)(iVar3 + 0x10);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            uVar5 = 3;
            if (iVar1 == 0) {
              uVar5 = 2;
            }
            func_0x0245495c(iVar7,uVar8,&uStack_38,uVar5,0,0);
            func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021786cc + 0x21786b4));
            return;
          }
          iVar1 = *(int *)(iVar1 + 8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          (*(code *)&UNK_0518b080)(iVar1,uVar8,0);
          return;
        }
      }
      return;
    }
    iVar3 = *(int *)(iVar7 + 0x9c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x01c74c1c(iVar3,0);
    if ((iVar3 == 0) && (iVar3 = *(int *)(param_1 + 0x58), iVar3 != 0)) {
      uVar8 = *(undefined4 *)(iVar1 + 0xc);
      pcVar6 = (char *)(_UNK_02bf8f24 + 0x2bf8d74);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02bf8f28 + 0x2bf8d88),uVar8,0);
        func_0x01384978(*(undefined4 *)(_UNK_02bf8f2c + 0x2bf8d94));
        func_0x01384978(*(undefined4 *)(_UNK_02bf8f30 + 0x2bf8da0));
        func_0x01384978(*(undefined4 *)(_UNK_02bf8f34 + 0x2bf8dac));
        *pcVar6 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x5cc6,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0x5cc6,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,uVar8,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar1 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar3,0);
        func_0x01485238(&uStack_38,uVar8,0);
        iVar3 = *(int *)(iVar1 + 8);
        uVar8 = *(undefined4 *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar5 = 3;
        if (iVar1 == 0) {
          uVar5 = 2;
        }
        func_0x0245495c(iVar3,uVar8,&uStack_38,uVar5,0,0);
        return;
      }
      iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_02bf8f38 + 0x2bf8e0c));
      piVar9 = *(int **)(_UNK_02bf8f3c + 0x2bf8e20);
      iVar7 = *piVar9;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x01384ab4();
        iVar7 = *piVar9;
      }
      uVar5 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0xa04);
      piVar9 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02bf8f40 + 0x2bf8e44),2);
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar3 != 0) &&
         (iVar7 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar9 + 0x20)), iVar7 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if (piVar9[3] == 0) {
        func_0x01384bf4();
      }
      piVar9[4] = iVar3;
      uStack_1c = uVar8;
      iVar3 = func_0x01384abc(**(undefined4 **)(_UNK_02bf8f44 + 0x2bf8eb0),&uStack_1c);
      if ((iVar3 != 0) &&
         (iVar7 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar9 + 0x20)), iVar7 == 0)) {
        uVar8 = func_0x01384c10();
        func_0x01384aa0(uVar8,0);
      }
      if ((uint)piVar9[3] < 2) {
        func_0x01384bf4();
      }
      piVar9[5] = iVar3;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee858c(iVar1,uVar5,piVar9,0);
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x821b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02179a68(iVar1,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.MineBoardActivity$$.ctor RVA 0x1a579f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a679f8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  pcVar4 = (char *)(_UNK_01a67d18 + 0x1a67a0c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a67d1c + 0x1a67a20));
    func_0x01384978(*(undefined4 *)(_UNK_01a67d20 + 0x1a67a2c));
    func_0x01384978(*(undefined4 *)(_UNK_01a67d24 + 0x1a67a38));
    func_0x01384978(*(undefined4 *)(_UNK_01a67d28 + 0x1a67a44));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_01a67d2c + 0x1a67a58);
  uVar1 = func_0x01384be4(*puVar5);
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
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x02b635c4(uVar1,0);
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x02b635c4(uVar1,0);
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x02b635c4(uVar1,0);
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x02b635c4(uVar1,0);
  puVar5 = *(undefined4 **)(_UNK_01a67d30 + 0x1a67b34);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  uVar1 = func_0x01384be4(*puVar5);
  func_0x01ea074c(uVar1,0);
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x01ea074c(uVar1,0);
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x01ea074c(uVar1,0);
  piVar6 = *(int **)(_UNK_01a67d34 + 0x1a67b84);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  iVar3 = *piVar6;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar6;
  }
  puVar5 = *(undefined4 **)(_UNK_01a67d38 + 0x1a67bac);
  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x66c);
  uVar1 = func_0x01384be4(*puVar5);
  func_0x02b63ca4(uVar1,uVar2,0);
  iVar3 = *piVar6;
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x670);
  uVar1 = func_0x01384be4(*puVar5);
  func_0x02b63ca4(uVar1,uVar2,0);
  iVar3 = *piVar6;
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x664);
  uVar1 = func_0x01384be4(*puVar5);
  func_0x02b63ca4(uVar1,uVar2,0);
  iVar3 = *piVar6;
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x674);
  uVar1 = func_0x01384be4(*puVar5);
  func_0x02b63ca4(uVar1,uVar2,0);
  iVar3 = *piVar6;
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x680);
  uVar1 = func_0x01384be4(*puVar5);
  func_0x02b63ca4(uVar1,uVar2,0);
  iVar3 = *piVar6;
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x678);
  uVar1 = func_0x01384be4(*puVar5);
  func_0x02b63ca4(uVar1,uVar2,0);
  iVar3 = *piVar6;
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x67c);
  uVar1 = func_0x01384be4(*puVar5);
  func_0x02b63ca4(uVar1,uVar2,0);
  iVar3 = *piVar6;
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x688);
  uVar1 = func_0x01384be4(*puVar5);
  func_0x02b63ca4(uVar1,uVar2,0);
  iVar3 = *piVar6;
  *(undefined4 *)(param_1 + 0xa8) = uVar1;
  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x684);
  uVar1 = func_0x01384be4(*puVar5);
  func_0x02b63ca4(uVar1,uVar2,0);
  *(undefined4 *)(param_1 + 0xac) = uVar1;
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



// ===== FAT.MineBoardActivity$$<>iFixBaseProxy_get_Visual RVA 0x1a57d3c =====

undefined4 FUN_01a67d3c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.MineBoardActivity$$<>iFixBaseProxy_SetupFresh RVA 0x1a57d44 =====

void FUN_01a67d44(undefined4 param_1)

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



// ===== FAT.MineBoardActivity$$<>iFixBaseProxy_ResEnumerate RVA 0x1a57d4c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a67d4c(int *param_1)

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



// ===== FAT.MineBoardActivity$$<>iFixBaseProxy_WhenEnd RVA 0x1a57d54 =====

void FUN_01a67d54(undefined4 param_1)

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



// ===== FAT.MineBoardActivity$$<>iFixBaseProxy_WhenReset RVA 0x1a57d5c =====

void FUN_01a67d5c(undefined4 param_1)

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



// ===== FAT.MineBoardActivity$$<>iFixBaseProxy_SetupClear RVA 0x1a57d64 =====

void FUN_01a67d64(int param_1)

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



// ===== FAT.MineBoardActivity$$<>iFixBaseProxy_TryPopup RVA 0x1a57d6c =====

void FUN_01a67d6c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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



// ===== FAT.MineBoardActivity.<>c__DisplayClass103_0$$.ctor RVA 0x1a5844c =====

void FUN_01a6844c(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MineBoardActivity.<>c__DisplayClass103_0$$<JumpTask>b__0 RVA 0x1a58454 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a68454(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int *piVar6;
  int iVar7;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  piVar6 = *(int **)(param_1 + 8);
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = (**(code **)(*piVar6 + 0x108))(piVar6,*(undefined4 *)(*piVar6 + 0x10c));
  if (iVar1 != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x9c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01c74c1c(iVar1,0);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x58);
    if (iVar1 != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0xc);
      pcVar8 = (char *)(_UNK_02bf8f24 + 0x2bf8d74);
      uStack_18 = unaff_r4;
      uStack_14 = unaff_r5;
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02bf8f28 + 0x2bf8d88),uVar4,0);
        func_0x01384978(*(undefined4 *)(_UNK_02bf8f2c + 0x2bf8d94));
        func_0x01384978(*(undefined4 *)(_UNK_02bf8f30 + 0x2bf8da0));
        func_0x01384978(*(undefined4 *)(_UNK_02bf8f34 + 0x2bf8dac));
        *pcVar8 = '\x01';
      }
      iVar2 = func_0x0229f06c(0x5cc6,0);
      if (iVar2 != 0) {
        iVar2 = func_0x0229f13c(0x5cc6,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uStack_1c = uStack_14;
        uStack_20 = uStack_18;
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,uVar4,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar2 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar1,0);
        func_0x01485238(&uStack_38,uVar4,0);
        iVar7 = *(int *)(iVar2 + 8);
        uVar4 = *(undefined4 *)(iVar2 + 0xc);
        iVar1 = *(int *)(iVar2 + 0x10);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uVar5 = 3;
        if (iVar1 == 0) {
          uVar5 = 2;
        }
        func_0x0245495c(iVar7,uVar4,&uStack_38,uVar5,0,0);
        return;
      }
      iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_02bf8f38 + 0x2bf8e0c));
      piVar6 = *(int **)(_UNK_02bf8f3c + 0x2bf8e20);
      iVar7 = *piVar6;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x01384ab4();
        iVar7 = *piVar6;
      }
      uVar5 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0xa04);
      piVar6 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02bf8f40 + 0x2bf8e44),2);
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar1 != 0) &&
         (iVar7 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar6 + 0x20)), iVar7 == 0)) {
        uVar3 = func_0x01384c10();
        func_0x01384aa0(uVar3,0);
      }
      if (piVar6[3] == 0) {
        func_0x01384bf4();
      }
      piVar6[4] = iVar1;
      uStack_1c = uVar4;
      iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02bf8f44 + 0x2bf8eb0),&uStack_1c);
      if ((iVar1 != 0) &&
         (iVar7 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar6 + 0x20)), iVar7 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if ((uint)piVar6[3] < 2) {
        func_0x01384bf4();
      }
      piVar6[5] = iVar1;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee858c(iVar2,uVar5,piVar6,0);
      return;
    }
  }
  return;
}



// ===== FAT.MineBoardActivity.<ResEnumerate>d__46$$.ctor RVA 0x1a584f4 =====

void FUN_01a684f4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  uVar1 = func_0x0245057c(0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}



// ===== FAT.MineBoardActivity.<ResEnumerate>d__46$$System.IDisposable.Dispose RVA 0x1a5851c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a6851c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0xfffffff4:
  case 10:
    break;
  case 0xfffffff5:
  case 9:
    pcVar5 = &UNK_01a6a138 + _UNK_01a6a1d8;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01a6a14c + _UNK_01a6a1dc));
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
        if (piVar4[-1] == **(int **)(&UNK_01a6a178 + _UNK_01a6a1e0)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01a6a1c4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a6a178 + _UNK_01a6a1e0),0);
code_r0x01a6a1c4:
                    /* WARNING: Could not recover jumptable at 0x01a6a1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffff6:
  case 8:
    pcVar5 = &UNK_01a6a078 + _UNK_01a6a118;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01a6a08c + _UNK_01a6a11c));
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
        if (piVar4[-1] == **(int **)(&UNK_01a6a0b8 + _UNK_01a6a120)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01a6a104;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a6a0b8 + _UNK_01a6a120),0);
code_r0x01a6a104:
                    /* WARNING: Could not recover jumptable at 0x01a6a114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffff7:
  case 7:
    pcVar5 = &UNK_01a69fb8 + _UNK_01a6a058;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01a69fcc + _UNK_01a6a05c));
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
        if (piVar4[-1] == **(int **)(&UNK_01a69ff8 + _UNK_01a6a060)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01a6a044;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a69ff8 + _UNK_01a6a060),0);
code_r0x01a6a044:
                    /* WARNING: Could not recover jumptable at 0x01a6a054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffff8:
  case 6:
    pcVar5 = &UNK_01a69ef8 + _UNK_01a69f98;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01a69f0c + _UNK_01a69f9c));
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
        if (piVar4[-1] == **(int **)(&UNK_01a69f38 + _UNK_01a69fa0)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01a69f84;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a69f38 + _UNK_01a69fa0),0);
code_r0x01a69f84:
                    /* WARNING: Could not recover jumptable at 0x01a69f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffff9:
  case 5:
    pcVar5 = &UNK_01a69e38 + _UNK_01a69ed8;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01a69e4c + _UNK_01a69edc));
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
        if (piVar4[-1] == **(int **)(&UNK_01a69e78 + _UNK_01a69ee0)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01a69ec4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a69e78 + _UNK_01a69ee0),0);
code_r0x01a69ec4:
                    /* WARNING: Could not recover jumptable at 0x01a69ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffa:
  case 4:
    pcVar5 = &UNK_01a69d78 + _UNK_01a69e18;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01a69d8c + _UNK_01a69e1c));
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
        if (piVar4[-1] == **(int **)(&UNK_01a69db8 + _UNK_01a69e20)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01a69e04;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a69db8 + _UNK_01a69e20),0);
code_r0x01a69e04:
                    /* WARNING: Could not recover jumptable at 0x01a69e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffb:
  case 3:
    pcVar5 = &UNK_01a69cb8 + _UNK_01a69d58;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01a69ccc + _UNK_01a69d5c));
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
        if (piVar4[-1] == **(int **)(&UNK_01a69cf8 + _UNK_01a69d60)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01a69d44;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a69cf8 + _UNK_01a69d60),0);
code_r0x01a69d44:
                    /* WARNING: Could not recover jumptable at 0x01a69d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffc:
  case 2:
    pcVar5 = &UNK_01a69bf8 + _UNK_01a69c98;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01a69c0c + _UNK_01a69c9c));
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
        if (piVar4[-1] == **(int **)(&UNK_01a69c38 + _UNK_01a69ca0)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01a69c84;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a69c38 + _UNK_01a69ca0),0);
code_r0x01a69c84:
                    /* WARNING: Could not recover jumptable at 0x01a69c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffd:
  case 1:
    pcVar5 = &UNK_01a69b38 + _UNK_01a69bd8;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01a69b4c + _UNK_01a69bdc));
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
        if (piVar4[-1] == **(int **)(&UNK_01a69b78 + _UNK_01a69be0)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01a69bc4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a69b78 + _UNK_01a69be0),0);
code_r0x01a69bc4:
                    /* WARNING: Could not recover jumptable at 0x01a69bd4. Too many branches */
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
  pcVar5 = &UNK_01a6a1f8 + _UNK_01a6a298;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(&UNK_01a6a20c + _UNK_01a6a29c));
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
      if (piVar4[-1] == **(int **)(&UNK_01a6a238 + _UNK_01a6a2a0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto code_r0x01a6a284;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a6a238 + _UNK_01a6a2a0),0);
code_r0x01a6a284:
                    /* WARNING: Could not recover jumptable at 0x01a6a294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MineBoardActivity.<ResEnumerate>d__46$$MoveNext RVA 0x1a585c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a685c0(int param_1)

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
  
  pcVar7 = (char *)(_UNK_01a695c4 + 0x1a685d8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a695c8 + 0x1a685ec));
    func_0x01384978(*(undefined4 *)(_UNK_01a695cc + 0x1a685f8));
    func_0x01384978(*(undefined4 *)(_UNK_01a695d0 + 0x1a68604));
    *pcVar7 = '\x01';
  }
  if (10 < *(uint *)(param_1 + 8)) {
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
        if (piVar5[-1] == **(int **)(&UNK_01a686c4 + _UNK_01a69658)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto code_r0x01a687ac;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a686c4 + _UNK_01a69658),0);
code_r0x01a687ac:
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
    goto code_r0x01a68994;
  case 3:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffb;
    goto code_r0x01a68b58;
  case 4:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffa;
    goto code_r0x01a68d1c;
  case 5:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff9;
    goto code_r0x01a68ee0;
  case 6:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff8;
    goto code_r0x01a690a4;
  case 7:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff7;
    goto code_r0x01a69268;
  case 8:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff6;
    goto code_r0x01a6942c;
  case 9:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff5;
    goto code_r0x01a69600;
  case 10:
    piVar8 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff4;
    goto code_r0x01a697e0;
  }
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(&UNK_01a687e8 + _UNK_01a697b0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
        goto code_r0x01a68830;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a687e8 + _UNK_01a697b0),0);
code_r0x01a68830:
  iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
  if (iVar1 == 0) {
    func_0x01a69b24(param_1);
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
        if (piVar5[-1] == **(int **)(&UNK_01a688fc + _UNK_01a698d0)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto code_r0x01a68974;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a688fc + _UNK_01a698d0),0);
code_r0x01a68974:
    piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 0xfffffffc;
    *(int **)(param_1 + 0x1c) = piVar6;
code_r0x01a68994:
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(&UNK_01a689b0 + _UNK_01a699a8)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto code_r0x01a689f8;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a689b0 + _UNK_01a699a8),0);
code_r0x01a689f8:
    iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
    if (iVar1 == 0) {
      func_0x01a69be4(param_1);
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
          if (piVar5[-1] == **(int **)(&UNK_01a68ac4 + _UNK_01a69a9c)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto code_r0x01a68b38;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a68ac4 + _UNK_01a69a9c),0);
code_r0x01a68b38:
      piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
      *(undefined4 *)(param_1 + 8) = 0xfffffffb;
      *(int **)(param_1 + 0x1c) = piVar6;
code_r0x01a68b58:
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar6;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(&UNK_01a68b74 + _UNK_01a69acc)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto code_r0x01a68bbc;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a68b74 + _UNK_01a69acc),0);
code_r0x01a68bbc:
      iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
      if (iVar1 == 0) {
        func_0x01a69ca4(param_1);
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
            if (piVar5[-1] == **(int **)(&UNK_01a68c88 + _UNK_01a69ad0)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
              goto code_r0x01a68cfc;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a68c88 + _UNK_01a69ad0),0);
code_r0x01a68cfc:
        piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
        *(undefined4 *)(param_1 + 8) = 0xfffffffa;
        *(int **)(param_1 + 0x1c) = piVar6;
code_r0x01a68d1c:
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar6;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(&UNK_01a68d38 + _UNK_01a69ad8)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
              goto code_r0x01a68d80;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a68d38 + _UNK_01a69ad8),0);
code_r0x01a68d80:
        iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
        if (iVar1 == 0) {
          func_0x01a69d64(param_1);
          *(undefined4 *)(param_1 + 0x1c) = 0;
          if (piVar8 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = piVar8[0x1b];
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
              if (piVar5[-1] == **(int **)(&UNK_01a68e4c + _UNK_01a69adc)) {
                puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                goto code_r0x01a68ec0;
              }
              uVar3 = uVar3 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a68e4c + _UNK_01a69adc),0)
          ;
code_r0x01a68ec0:
          piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
          *(undefined4 *)(param_1 + 8) = 0xfffffff9;
          *(int **)(param_1 + 0x1c) = piVar6;
code_r0x01a68ee0:
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar6;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar5[-1] == **(int **)(&UNK_01a68efc + _UNK_01a69ae4)) {
                puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                goto code_r0x01a68f44;
              }
              uVar3 = uVar3 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a68efc + _UNK_01a69ae4),0)
          ;
code_r0x01a68f44:
          iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
          if (iVar1 == 0) {
            func_0x01a69e24(param_1);
            *(undefined4 *)(param_1 + 0x1c) = 0;
            if (piVar8 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = piVar8[0x1c];
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
                if (piVar5[-1] == **(int **)(&UNK_01a69010 + _UNK_01a69ae8)) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                  goto code_r0x01a69084;
                }
                uVar3 = uVar3 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined4 *)
                     func_0x014002dc(piVar6,**(int **)(&UNK_01a69010 + _UNK_01a69ae8),0);
code_r0x01a69084:
            piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
            *(undefined4 *)(param_1 + 8) = 0xfffffff8;
            *(int **)(param_1 + 0x1c) = piVar6;
code_r0x01a690a4:
            if (piVar6 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar6;
            uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar3 != 0) {
              piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar5[-1] == **(int **)(&UNK_01a690c0 + _UNK_01a69af0)) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                  goto code_r0x01a69108;
                }
                uVar3 = uVar3 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined4 *)
                     func_0x014002dc(piVar6,**(int **)(&UNK_01a690c0 + _UNK_01a69af0),0);
code_r0x01a69108:
            iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
            if (iVar1 == 0) {
              func_0x01a69ee4(param_1);
              *(undefined4 *)(param_1 + 0x1c) = 0;
              if (piVar8 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = piVar8[0x1d];
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
                  if (piVar5[-1] == **(int **)(&UNK_01a691d4 + _UNK_01a69af4)) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                    goto code_r0x01a69248;
                  }
                  uVar3 = uVar3 - 1;
                  piVar5 = piVar5 + 2;
                } while (uVar3 != 0);
              }
              puVar2 = (undefined4 *)
                       func_0x014002dc(piVar6,**(int **)(&UNK_01a691d4 + _UNK_01a69af4),0);
code_r0x01a69248:
              piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
              *(undefined4 *)(param_1 + 8) = 0xfffffff7;
              *(int **)(param_1 + 0x1c) = piVar6;
code_r0x01a69268:
              if (piVar6 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar6;
              uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar3 != 0) {
                piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar5[-1] == **(int **)(&UNK_01a69284 + _UNK_01a69afc)) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                    goto code_r0x01a692cc;
                  }
                  uVar3 = uVar3 - 1;
                  piVar5 = piVar5 + 2;
                } while (uVar3 != 0);
              }
              puVar2 = (undefined4 *)
                       func_0x014002dc(piVar6,**(int **)(&UNK_01a69284 + _UNK_01a69afc),0);
code_r0x01a692cc:
              iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
              if (iVar1 == 0) {
                func_0x01a69fa4(param_1);
                *(undefined4 *)(param_1 + 0x1c) = 0;
                if (piVar8 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar1 = piVar8[0x1e];
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
                    if (piVar5[-1] == **(int **)(&UNK_01a69398 + _UNK_01a69b00)) {
                      puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                      goto code_r0x01a6940c;
                    }
                    uVar3 = uVar3 - 1;
                    piVar5 = piVar5 + 2;
                  } while (uVar3 != 0);
                }
                puVar2 = (undefined4 *)
                         func_0x014002dc(piVar6,**(int **)(&UNK_01a69398 + _UNK_01a69b00),0);
code_r0x01a6940c:
                piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
                *(undefined4 *)(param_1 + 8) = 0xfffffff6;
                *(int **)(param_1 + 0x1c) = piVar6;
code_r0x01a6942c:
                if (piVar6 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar1 = *piVar6;
                uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
                if (uVar3 != 0) {
                  piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                  do {
                    if (piVar5[-1] == **(int **)(&UNK_01a69448 + _UNK_01a69b08)) {
                      puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                      goto code_r0x01a69490;
                    }
                    uVar3 = uVar3 - 1;
                    piVar5 = piVar5 + 2;
                  } while (uVar3 != 0);
                }
                puVar2 = (undefined4 *)
                         func_0x014002dc(piVar6,**(int **)(&UNK_01a69448 + _UNK_01a69b08),0);
code_r0x01a69490:
                iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
                if (iVar1 == 0) {
                  func_0x01a6a064(param_1);
                  *(undefined4 *)(param_1 + 0x1c) = 0;
                  if (piVar8 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar1 = piVar8[0x1f];
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
                      if (piVar5[-1] == **(int **)(&UNK_01a6955c + _UNK_01a69b0c)) {
                        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                        goto code_r0x01a695e0;
                      }
                      uVar3 = uVar3 - 1;
                      piVar5 = piVar5 + 2;
                    } while (uVar3 != 0);
                  }
                  puVar2 = (undefined4 *)
                           func_0x014002dc(piVar6,**(int **)(&UNK_01a6955c + _UNK_01a69b0c),0);
code_r0x01a695e0:
                  piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
                  *(undefined4 *)(param_1 + 8) = 0xfffffff5;
                  *(int **)(param_1 + 0x1c) = piVar6;
code_r0x01a69600:
                  if (piVar6 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar1 = *piVar6;
                  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
                  if (uVar3 != 0) {
                    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                    do {
                      if (piVar5[-1] == **(int **)(&UNK_01a6961c + _UNK_01a69b14)) {
                        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                        goto code_r0x01a69668;
                      }
                      uVar3 = uVar3 - 1;
                      piVar5 = piVar5 + 2;
                    } while (uVar3 != 0);
                  }
                  puVar2 = (undefined4 *)
                           func_0x014002dc(piVar6,**(int **)(&UNK_01a6961c + _UNK_01a69b14),0);
code_r0x01a69668:
                  iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
                  if (iVar1 == 0) {
                    func_0x01a6a124(param_1);
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
                        if (piVar6[-1] == **(int **)(&UNK_01a69748 + _UNK_01a69b18)) {
                          puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                          goto code_r0x01a697c0;
                        }
                        uVar3 = uVar3 - 1;
                        piVar6 = piVar6 + 2;
                      } while (uVar3 != 0);
                    }
                    puVar2 = (undefined4 *)
                             func_0x014002dc(piVar8,**(int **)(&UNK_01a69748 + _UNK_01a69b18),0);
code_r0x01a697c0:
                    piVar8 = (int *)(*(code *)*puVar2)(piVar8,puVar2[1]);
                    *(undefined4 *)(param_1 + 8) = 0xfffffff4;
                    *(int **)(param_1 + 0x1c) = piVar8;
code_r0x01a697e0:
                    if (piVar8 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    iVar1 = *piVar8;
                    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
                    if (uVar3 != 0) {
                      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                      do {
                        if (piVar6[-1] == **(int **)(&UNK_01a697fc + _UNK_01a69b20)) {
                          puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                          goto code_r0x01a69848;
                        }
                        uVar3 = uVar3 - 1;
                        piVar6 = piVar6 + 2;
                      } while (uVar3 != 0);
                    }
                    puVar2 = (undefined4 *)
                             func_0x014002dc(piVar8,**(int **)(&UNK_01a697fc + _UNK_01a69b20),0);
code_r0x01a69848:
                    iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
                    if (iVar1 == 0) {
                      func_0x01a6a1e4(param_1);
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
                        if (piVar6[-1] == **(int **)(&UNK_01a69880 + _UNK_01a69b1c)) {
                          puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                          goto code_r0x01a698e0;
                        }
                        uVar3 = uVar3 - 1;
                        piVar6 = piVar6 + 2;
                      } while (uVar3 != 0);
                    }
                    puVar2 = (undefined4 *)
                             func_0x014002dc(piVar8,**(int **)(&UNK_01a69880 + _UNK_01a69b1c),0);
code_r0x01a698e0:
                    (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
                    uVar4 = 10;
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
                        if (piVar6[-1] == **(int **)(&UNK_01a696a0 + _UNK_01a69b10)) {
                          puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                          goto code_r0x01a69790;
                        }
                        uVar3 = uVar3 - 1;
                        piVar6 = piVar6 + 2;
                      } while (uVar3 != 0);
                    }
                    puVar2 = (undefined4 *)
                             func_0x014002dc(piVar8,**(int **)(&UNK_01a696a0 + _UNK_01a69b10),0);
code_r0x01a69790:
                    (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
                    uVar4 = 9;
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
                      if (piVar6[-1] == **(int **)(&UNK_01a694c8 + _UNK_01a69b04)) {
                        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                        goto code_r0x01a695a4;
                      }
                      uVar3 = uVar3 - 1;
                      piVar6 = piVar6 + 2;
                    } while (uVar3 != 0);
                  }
                  puVar2 = (undefined4 *)
                           func_0x014002dc(piVar8,**(int **)(&UNK_01a694c8 + _UNK_01a69b04),0);
code_r0x01a695a4:
                  (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
                  uVar4 = 8;
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
                    if (piVar6[-1] == **(int **)(&UNK_01a69304 + _UNK_01a69af8)) {
                      puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                      goto code_r0x01a693e0;
                    }
                    uVar3 = uVar3 - 1;
                    piVar6 = piVar6 + 2;
                  } while (uVar3 != 0);
                }
                puVar2 = (undefined4 *)
                         func_0x014002dc(piVar8,**(int **)(&UNK_01a69304 + _UNK_01a69af8),0);
code_r0x01a693e0:
                (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
                uVar4 = 7;
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
                  if (piVar6[-1] == **(int **)(&UNK_01a69140 + _UNK_01a69aec)) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                    goto code_r0x01a6921c;
                  }
                  uVar3 = uVar3 - 1;
                  piVar6 = piVar6 + 2;
                } while (uVar3 != 0);
              }
              puVar2 = (undefined4 *)
                       func_0x014002dc(piVar8,**(int **)(&UNK_01a69140 + _UNK_01a69aec),0);
code_r0x01a6921c:
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
                if (piVar6[-1] == **(int **)(&UNK_01a68f7c + _UNK_01a69ae0)) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                  goto code_r0x01a69058;
                }
                uVar3 = uVar3 - 1;
                piVar6 = piVar6 + 2;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined4 *)
                     func_0x014002dc(piVar8,**(int **)(&UNK_01a68f7c + _UNK_01a69ae0),0);
code_r0x01a69058:
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
              if (piVar6[-1] == **(int **)(&UNK_01a68db8 + _UNK_01a69ad4)) {
                puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                goto code_r0x01a68e94;
              }
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01a68db8 + _UNK_01a69ad4),0)
          ;
code_r0x01a68e94:
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
            if (piVar6[-1] == **(int **)(&UNK_01a68bf4 + _UNK_01a69ac8)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
              goto code_r0x01a68cd0;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01a68bf4 + _UNK_01a69ac8),0);
code_r0x01a68cd0:
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
          if (piVar6[-1] == **(int **)(&UNK_01a68a30 + _UNK_01a69a28)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto code_r0x01a68b0c;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01a68a30 + _UNK_01a69a28),0);
code_r0x01a68b0c:
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
        if (piVar6[-1] == **(int **)(&UNK_01a68868 + _UNK_01a69838)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto code_r0x01a68944;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01a68868 + _UNK_01a69838),0);
code_r0x01a68944:
    (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 1;
  }
  *(undefined4 *)(param_1 + 0xc) = uStack_20;
  *(undefined4 *)(param_1 + 0x10) = uStack_1c;
  return 1;
}



// ===== FAT.MineBoardActivity.<ResEnumerate>d__46$$<>m__Finally1 RVA 0x1a59b24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a69b24(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01a69bd8 + 0x1a69b38);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a69bdc + 0x1a69b4c));
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
      if (piVar4[-1] == **(int **)(_UNK_01a69be0 + 0x1a69b78)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01a69bc4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01a69be0 + 0x1a69b78),0);
LAB_01a69bc4:
                    /* WARNING: Could not recover jumptable at 0x01a69bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MineBoardActivity.<ResEnumerate>d__46$$<>m__Finally2 RVA 0x1a59be4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a69be4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01a69c98 + 0x1a69bf8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a69c9c + 0x1a69c0c));
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
      if (piVar4[-1] == **(int **)(_UNK_01a69ca0 + 0x1a69c38)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01a69c84;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01a69ca0 + 0x1a69c38),0);
LAB_01a69c84:
                    /* WARNING: Could not recover jumptable at 0x01a69c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MineBoardActivity.<ResEnumerate>d__46$$<>m__Finally3 RVA 0x1a59ca4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a69ca4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01a69d58 + 0x1a69cb8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a69d5c + 0x1a69ccc));
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
      if (piVar4[-1] == **(int **)(_UNK_01a69d60 + 0x1a69cf8)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01a69d44;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01a69d60 + 0x1a69cf8),0);
LAB_01a69d44:
                    /* WARNING: Could not recover jumptable at 0x01a69d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MineBoardActivity.<ResEnumerate>d__46$$<>m__Finally4 RVA 0x1a59d64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a69d64(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01a69e18 + 0x1a69d78);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a69e1c + 0x1a69d8c));
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
      if (piVar4[-1] == **(int **)(_UNK_01a69e20 + 0x1a69db8)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01a69e04;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01a69e20 + 0x1a69db8),0);
LAB_01a69e04:
                    /* WARNING: Could not recover jumptable at 0x01a69e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MineBoardActivity.<ResEnumerate>d__46$$<>m__Finally5 RVA 0x1a59e24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a69e24(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01a69ed8 + 0x1a69e38);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a69edc + 0x1a69e4c));
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
      if (piVar4[-1] == **(int **)(_UNK_01a69ee0 + 0x1a69e78)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01a69ec4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01a69ee0 + 0x1a69e78),0);
LAB_01a69ec4:
                    /* WARNING: Could not recover jumptable at 0x01a69ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MineBoardActivity.<ResEnumerate>d__46$$<>m__Finally6 RVA 0x1a59ee4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a69ee4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01a69f98 + 0x1a69ef8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a69f9c + 0x1a69f0c));
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
      if (piVar4[-1] == **(int **)(_UNK_01a69fa0 + 0x1a69f38)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01a69f84;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01a69fa0 + 0x1a69f38),0);
LAB_01a69f84:
                    /* WARNING: Could not recover jumptable at 0x01a69f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MineBoardActivity.<ResEnumerate>d__46$$<>m__Finally7 RVA 0x1a59fa4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a69fa4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01a6a058 + 0x1a69fb8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6a05c + 0x1a69fcc));
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
      if (piVar4[-1] == **(int **)(_UNK_01a6a060 + 0x1a69ff8)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01a6a044;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01a6a060 + 0x1a69ff8),0);
LAB_01a6a044:
                    /* WARNING: Could not recover jumptable at 0x01a6a054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MineBoardActivity.<ResEnumerate>d__46$$<>m__Finally8 RVA 0x1a5a064 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a6a064(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01a6a118 + 0x1a6a078);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6a11c + 0x1a6a08c));
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
      if (piVar4[-1] == **(int **)(_UNK_01a6a120 + 0x1a6a0b8)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01a6a104;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01a6a120 + 0x1a6a0b8),0);
LAB_01a6a104:
                    /* WARNING: Could not recover jumptable at 0x01a6a114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MineBoardActivity.<ResEnumerate>d__46$$<>m__Finally9 RVA 0x1a5a124 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a6a124(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01a6a1d8 + 0x1a6a138);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6a1dc + 0x1a6a14c));
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
      if (piVar4[-1] == **(int **)(_UNK_01a6a1e0 + 0x1a6a178)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01a6a1c4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01a6a1e0 + 0x1a6a178),0);
LAB_01a6a1c4:
                    /* WARNING: Could not recover jumptable at 0x01a6a1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MineBoardActivity.<ResEnumerate>d__46$$<>m__Finally10 RVA 0x1a5a1e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a6a1e4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01a6a298 + 0x1a6a1f8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6a29c + 0x1a6a20c));
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
      if (piVar4[-1] == **(int **)(_UNK_01a6a2a0 + 0x1a6a238)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01a6a284;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01a6a2a0 + 0x1a6a238),0);
LAB_01a6a284:
                    /* WARNING: Could not recover jumptable at 0x01a6a294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MineBoardActivity.<ResEnumerate>d__46$$System.Collections.Generic.IEnumerator<(System.String,EL.Resource.AssetTag)>.get_Current RVA 0x1a5a2a4 =====

void FUN_01a6a2a4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *param_1 = *(undefined4 *)(param_2 + 0xc);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.MineBoardActivity.<ResEnumerate>d__46$$System.Collections.IEnumerator.Reset RVA 0x1a5a2b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a6a2b8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint extraout_r2;
  undefined4 unaff_r5;
  char *pcVar5;
  undefined4 unaff_r11;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 in_ZR;
  
  puVar6 = &stack0xfffffff8;
  func_0x01384988(*(undefined4 *)(iRam01a6a2f4 + 0x1a6a2c8));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(iRam01a6a2f8 + 0x1a6a2e4));
  func_0x01384aa0(uVar1,uVar2);
  uVar7 = 0x1a6a2f4;
  uVar3 = func_0x01384928();
  if ((bool)in_ZR) {
    puVar6 = (undefined1 *)(uVar3 & 0xffff4fff);
    uVar7 = extraout_r2 & 0xffff53ff;
  }
  *(uint *)(puVar6 + -4) = uVar7;
  *(undefined4 *)(puVar6 + -8) = unaff_r11;
  *(undefined4 *)(puVar6 + -0xc) = unaff_r5;
  *(undefined4 *)(puVar6 + -0x10) = uVar1;
  pcVar5 = (char *)(_UNK_01a6a358 + 0x1a6a314);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6a35c + 0x1a6a328));
    *pcVar5 = '\x01';
  }
  uVar1 = *(undefined4 *)(uVar3 + 0x10);
  puVar4 = *(undefined4 **)(_UNK_01a6a360 + 0x1a6a344);
  *(undefined4 *)(puVar6 + -0x18) = *(undefined4 *)(uVar3 + 0xc);
  *(undefined4 *)(puVar6 + -0x14) = uVar1;
  func_0x01384abc(*puVar4,puVar6 + -0x18);
  return;
}



// ===== FAT.MineBoardActivity.<ResEnumerate>d__46$$System.Collections.IEnumerator.get_Current RVA 0x1a5a2fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a6a2fc(int param_1)

{
  char *pcVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_01a6a358 + 0x1a6a314);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6a35c + 0x1a6a328));
    *pcVar1 = '\x01';
  }
  uStack_18 = *(undefined4 *)(param_1 + 0xc);
  uStack_14 = *(undefined4 *)(param_1 + 0x10);
  func_0x01384abc(**(undefined4 **)(_UNK_01a6a360 + 0x1a6a344),&uStack_18);
  return;
}



// ===== FAT.MineBoardActivity.<ResEnumerate>d__46$$System.Collections.Generic.IEnumerable<(System.String,EL.Resource.AssetTag)>.GetEnumerator RVA 0x1a5a364 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a6a364(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_01a6a404 + 0x1a6a378);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6a408 + 0x1a6a38c));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x0245057c(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a6a40c + 0x1a6a3d0));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x0245057c(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}



// ===== FAT.MineBoardActivity.<ResEnumerate>d__46$$System.Collections.IEnumerable.GetEnumerator RVA 0x1a5a410 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_01a6a364(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_01a6a404 + 0x1a6a378);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6a408 + 0x1a6a38c));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x0245057c(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a6a40c + 0x1a6a3d0));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x0245057c(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}


