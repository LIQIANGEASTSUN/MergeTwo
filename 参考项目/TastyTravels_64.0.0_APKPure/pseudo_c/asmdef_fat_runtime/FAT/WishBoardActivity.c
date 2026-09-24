/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.WishBoardActivity$$GetCurMilestone RVA 0x2a8c534 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02a9c534(undefined4 param_1)

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
  
  pcVar8 = (char *)(_UNK_02a9c604 + 0x2a9c548);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02a9c608 + 0x2a9c55c));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x6e33,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6e33,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_022499e4 + 0x2249904);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022499e8 + 0x2249918),param_1,0);
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
    uVar6 = 2;
    if (iVar2 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar6,0,0);
    uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_022499ec + 0x22499d4));
    return uVar9;
  }
  iVar2 = func_0x02aa8c64(param_1);
  iVar7 = func_0x02a9ea20(param_1);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar7 + 0x48);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar9 = func_0x0364c9b8(iVar7,iVar2 - 1U & ~((int)(iVar2 - 1U) >> 0x1f),
                          **(undefined4 **)(_UNK_02a9c60c + 0x2a9c5f0));
  pcVar8 = (char *)(_UNK_0182f1b8 + 0x182f15c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0182f1bc + 0x182f170),0);
    func_0x01384978(*(undefined4 *)(_UNK_0182f1c0 + 0x182f17c));
    *pcVar8 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0182f1c4 + 0x182f190) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar7 = **(int **)(_UNK_0182f1c8 + 0x182f1ac);
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
  iVar5 = 0;
  if (iVar2 != 0 && unaff_r4 != 0) {
    iVar4 = func_0x03d66780(unaff_r4,uVar9,&uStack_28,
                            *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x68));
    uVar6 = uStack_28;
    bVar1 = false;
    iVar5 = unaff_r4;
    if (iVar4 != 0) {
      iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
      if (iVar2 == 0) {
        return uStack_28;
      }
      (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
      return uStack_28;
    }
  }
  if ((piVar3[0x12] == 0) ||
     (iVar4 = func_0x0421f3b0(piVar3[0x12],uVar9,
                              *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x13c)),
     iVar4 == 0)) {
    uStack_2c = 0;
    iVar4 = (**(code **)(*piVar3 + 0x1a0))(piVar3,uVar9,&uStack_2c,*(undefined4 *)(*piVar3 + 0x1a4))
    ;
    uVar6 = uStack_2c;
    if (iVar4 != 0) {
      if (iVar2 != 0) {
        if (bVar1) {
          if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x40) + 0xbd) & 1) ==
              0) {
            func_0x02457d84();
          }
          iVar5 = func_0x02457d58();
          func_0x03d63f04(iVar5,4,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x74));
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
      if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x48) + 0xbd) & 1) == 0) {
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



// ===== FAT.WishBoardActivity$$get_IsReadyToMove RVA 0x2a8d25c =====

uint FUN_02a9d25c(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x6eb4,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6eb4,0);
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
  return (uint)*(byte *)(param_1 + 0xf4);
}



// ===== FAT.WishBoardActivity$$GetCurGroupConfig RVA 0x2a8ea20 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02a9ea20(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x624,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x624,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02190db8 + 0x2190cd8);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02190dbc + 0x2190cec),param_1,0);
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
    uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02190dc0 + 0x2190da8));
    return uVar9;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  uVar9 = *(undefined4 *)(param_1 + 0xb8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = func_0x0229f06c(0x626,0,0);
  if (iVar7 == 0) {
    pcVar8 = (char *)(_UNK_0182da0c + 0x182d9b0);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0182da10 + 0x182d9c4),0);
      func_0x01384978(*(undefined4 *)(_UNK_0182da14 + 0x182d9d0));
      *pcVar8 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_0182da18 + 0x182d9e4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = **(int **)(_UNK_0182da1c + 0x182da00);
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
  iVar7 = func_0x0229f13c(0x626,0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  pcVar8 = (char *)(_UNK_02190cb0 + 0x2190bbc);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02190cb4 + 0x2190bd0),iVar2,uVar9,0);
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
  uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02190cb8 + 0x2190ca0));
  return uVar9;
}



// ===== FAT.WishBoardActivity$$GetCurProgressPhase RVA 0x2a8eaac =====

undefined4 FUN_02a9eaac(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6e40,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6e40,0);
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
  return *(undefined4 *)(param_1 + 0xbc);
}



// ===== FAT.WishBoardActivity$$GetMileStoneLastStageReward RVA 0x2a91444 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02aa1444(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar8 = (char *)(_UNK_02aa16a0 + 0x2aa1458);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa16a4 + 0x2aa146c));
    func_0x01384978(*(undefined4 *)(_UNK_02aa16a8 + 0x2aa1478));
    func_0x01384978(*(undefined4 *)(_UNK_02aa16ac + 0x2aa1484));
    func_0x01384978(*(undefined4 *)(_UNK_02aa16b0 + 0x2aa1490));
    func_0x01384978(*(undefined4 *)(_UNK_02aa16b4 + 0x2aa149c));
    func_0x01384978(*(undefined4 *)(_UNK_02aa16b8 + 0x2aa14a8));
    func_0x01384978(*(undefined4 *)(_UNK_02aa16bc + 0x2aa14b4));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6ef0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6ef0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_0218d3e4 + 0x218d304);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0218d3e8 + 0x218d318),param_1,0);
      *pcVar8 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
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
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0218d3ec + 0x218d3d4));
    return iVar1;
  }
  iVar1 = FUN_02a9ea20(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar9 = func_0x0364c9b8(iVar1,*(int *)(iVar1 + 0xc) + -1,
                          **(undefined4 **)(_UNK_02aa16c0 + 0x2aa1534));
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01cab8c8(iVar1,uVar9,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar1 + 0x18);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02aa16c4 + 0x2aa15ac),
                                  *(undefined4 *)(iVar7 + 0xc));
  uVar10 = 0;
  puVar11 = *(undefined4 **)(_UNK_02aa16c8 + 0x2aa15cc);
  piVar12 = *(int **)(_UNK_02aa16cc + 0x2aa15d4);
  while( true ) {
    iVar7 = *(int *)(iVar1 + 0x18);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar7 + 0xc) <= (int)uVar10) break;
    iVar7 = *(int *)(iVar1 + 0x18);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar9 = func_0x03653d1c(iVar7,uVar10,*puVar11);
    if (*(int *)(*piVar12 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = func_0x02565a88(uVar9,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar7 != 0) && (iVar3 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)
       ) {
      uVar9 = func_0x01384c10();
      func_0x01384aa0(uVar9,0);
    }
    if ((uint)piVar2[3] <= uVar10) {
      func_0x01384bf4();
    }
    piVar2[uVar10 + 4] = iVar7;
    uVar10 = uVar10 + 1;
  }
  iVar1 = **(int **)(_UNK_02aa16d0 + 0x2aa1694);
  piVar12 = *(int **)(iVar1 + 0x1c);
  if (piVar12 == (int *)0x0) {
    func_0x01384978(*(undefined4 *)(_UNK_02fc1930 + 0x2fc16dc));
    piVar12 = *(int **)(iVar1 + 0x1c);
    if (piVar12 == (int *)0x0) {
      func_0x0140024c(iVar1);
      piVar12 = *(int **)(iVar1 + 0x1c);
    }
  }
  if ((*(ushort *)(*piVar12 + 0xbd) & 1) == 0) {
    func_0x014001f0();
  }
  iVar7 = func_0x01384be4();
  func_0x0328e950(iVar7,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 4));
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = func_0x014001f0(iVar3);
  }
  iVar4 = *piVar2;
  uVar10 = (uint)*(ushort *)(iVar4 + 0xb6);
  if (uVar10 != 0) {
    piVar12 = (int *)(*(int *)(iVar4 + 0x58) + 4);
    do {
      if (piVar12[-1] == iVar3) {
        puVar11 = (undefined4 *)(iVar4 + *piVar12 * 8 + 0xc0);
        goto LAB_02fc1798;
      }
      uVar10 = uVar10 - 1;
      piVar12 = piVar12 + 2;
    } while (uVar10 != 0);
  }
  puVar11 = (undefined4 *)func_0x014002dc(piVar2,iVar3,0);
LAB_02fc1798:
  piVar2 = (int *)(*(code *)*puVar11)(piVar2,puVar11[1]);
  piVar12 = *(int **)(_UNK_02fc1934 + 0x2fc17b8);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar2;
    uVar10 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar10 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar12) {
          puVar11 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
          goto LAB_02fc1810;
        }
        uVar10 = uVar10 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0);
LAB_02fc1810:
    iVar3 = (*(code *)*puVar11)(piVar2,puVar11[1]);
    if (iVar3 == 0) {
      return iVar7;
    }
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(*(int *)(iVar1 + 0x1c) + 0x10);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x014001f0(iVar3);
    }
    iVar4 = *piVar2;
    uVar10 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar10 != 0) {
      piVar6 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar3) {
          puVar11 = (undefined4 *)(iVar4 + *piVar6 * 8 + 0xc0);
          goto LAB_02fc18a0;
        }
        uVar10 = uVar10 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined4 *)func_0x014002dc(piVar2,iVar3,0);
LAB_02fc18a0:
    uVar9 = (*(code *)*puVar11)(piVar2,puVar11[1]);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar7 + 8);
    uVar10 = *(uint *)(iVar7 + 0xc);
    iVar4 = *(int *)(*(int *)(iVar1 + 0x1c) + 0x1c);
    *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (uVar10 < *(uint *)(iVar3 + 0xc)) {
      *(uint *)(iVar7 + 0xc) = uVar10 + 1;
      *(undefined4 *)(iVar3 + uVar10 * 4 + 0x10) = uVar9;
    }
    else {
      func_0x0328f170(iVar7,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
    }
  } while( true );
}



// ===== FAT.WishBoardActivity$$EnterWishBoard RVA 0x2a9173c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa173c(int param_1)

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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_02aa183c + 0x2aa1754);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa1840 + 0x2aa1768));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6e11,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6e11,0);
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
    return;
  }
  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_02aa1844 + 0x2aa17c4));
  iVar3 = *(int *)(param_1 + 0x3c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(iVar3 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01eea2b8(iVar1,uVar5,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_18 = 0;
    uStack_14 = 0;
    func_0x02b57dac(param_1,*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(param_1 + 0x3c),0);
  }
  return;
}



// ===== FAT.WishBoardActivity$$get_Valid RVA 0x2a92b28 =====

undefined4 FUN_02aa2b28(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
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
  
  iVar1 = func_0x0229f06c(0x6f00,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f00,0);
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
    uVar5 = func_0x0245496c(&uStack_30,0,0);
    return uVar5;
  }
  piVar4 = *(int **)(param_1 + 0x10);
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = (**(code **)(*piVar4 + 0x130))(piVar4,*(undefined4 *)(*piVar4 + 0x134));
  uVar5 = 0;
  if ((iVar1 != 0) && (uVar5 = 0, *(int *)(param_1 + 0xb4) != 0)) {
    uVar5 = 1;
  }
  return uVar5;
}



// ===== FAT.WishBoardActivity$$get_VisualUIBoardMain RVA 0x2a92bb8 =====

void FUN_02aa2bb8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x40);
  *param_1 = *(undefined4 *)(param_2 + 0x3c);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.WishBoardActivity$$get_VisualUIHelp RVA 0x2a92bcc =====

void FUN_02aa2bcc(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  *param_1 = *(undefined4 *)(param_2 + 0x44);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.WishBoardActivity$$get_VisualUILoading RVA 0x2a92be0 =====

void FUN_02aa2be0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x50);
  *param_1 = *(undefined4 *)(param_2 + 0x4c);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.WishBoardActivity$$get_VisualUIHandbookTips RVA 0x2a92bf4 =====

void FUN_02aa2bf4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x58);
  *param_1 = *(undefined4 *)(param_2 + 0x54);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.WishBoardActivity$$get_VisualUIHandbook RVA 0x2a92c08 =====

void FUN_02aa2c08(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x60);
  *param_1 = *(undefined4 *)(param_2 + 0x5c);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.WishBoardActivity$$get_VisualUIMilestone RVA 0x2a92c1c =====

void FUN_02aa2c1c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x68);
  *param_1 = *(undefined4 *)(param_2 + 100);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.WishBoardActivity$$get_VisualMilestoneTips RVA 0x2a92c30 =====

void FUN_02aa2c30(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x70);
  *param_1 = *(undefined4 *)(param_2 + 0x6c);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.WishBoardActivity$$get_VisualUITip RVA 0x2a92c44 =====

void FUN_02aa2c44(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x78);
  *param_1 = *(undefined4 *)(param_2 + 0x74);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.WishBoardActivity$$get_VisualTokenTip RVA 0x2a92c58 =====

void FUN_02aa2c58(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x80);
  *param_1 = *(undefined4 *)(param_2 + 0x7c);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.WishBoardActivity$$get_VisualStartNoticePopup RVA 0x2a92c6c =====

void FUN_02aa2c6c(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x8c);
  *param_1 = uVar1;
  return;
}



// ===== FAT.WishBoardActivity$$get_VisualEndNoticePopup RVA 0x2a92c80 =====

void FUN_02aa2c80(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x98);
  *param_1 = uVar1;
  return;
}



// ===== FAT.WishBoardActivity$$get_VisualConvertPopup RVA 0x2a92c94 =====

void FUN_02aa2c94(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0xa4);
  *param_1 = uVar1;
  return;
}



// ===== FAT.WishBoardActivity$$get_World RVA 0x2a92ca8 =====

undefined4 FUN_02aa2ca8(int param_1)

{
  return *(undefined4 *)(param_1 + 0xa8);
}



// ===== FAT.WishBoardActivity$$set_World RVA 0x2a92cb0 =====

void FUN_02aa2cb0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa8) = param_2;
  return;
}



// ===== FAT.WishBoardActivity$$get_WorldTracer RVA 0x2a92cb8 =====

undefined4 FUN_02aa2cb8(int param_1)

{
  return *(undefined4 *)(param_1 + 0xac);
}



// ===== FAT.WishBoardActivity$$set_WorldTracer RVA 0x2a92cc0 =====

void FUN_02aa2cc0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xac) = param_2;
  return;
}



// ===== FAT.WishBoardActivity$$get_UnlockMaxLevel RVA 0x2a92cc8 =====

undefined4 FUN_02aa2cc8(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb0);
}



// ===== FAT.WishBoardActivity$$set_UnlockMaxLevel RVA 0x2a92cd0 =====

void FUN_02aa2cd0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  return;
}



// ===== FAT.WishBoardActivity$$get_ConfD RVA 0x2a92cd8 =====

undefined4 FUN_02aa2cd8(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb4);
}



// ===== FAT.WishBoardActivity$$set_ConfD RVA 0x2a92ce0 =====

void FUN_02aa2ce0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb4) = param_2;
  return;
}



// ===== FAT.WishBoardActivity$$get_BoardSkinId RVA 0x2a92ce8 =====

undefined4 FUN_02aa2ce8(int param_1)

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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x6f02,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f02,0);
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
  if (*(int *)(param_1 + 0xb4) != 0) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x14);
  }
  return uVar4;
}



// ===== FAT.WishBoardActivity$$get_MainCategoryId RVA 0x2a92d4c =====

undefined4 FUN_02aa2d4c(undefined4 param_1)

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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x6f03,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f03,0);
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
  iVar1 = FUN_02a9ea20(param_1);
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(iVar1 + 0x44);
  }
  return uVar4;
}



// ===== FAT.WishBoardActivity$$get_GroupId RVA 0x2a92db4 =====

undefined4 FUN_02aa2db4(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb8);
}



// ===== FAT.WishBoardActivity$$set_GroupId RVA 0x2a92dbc =====

void FUN_02aa2dbc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb8) = param_2;
  return;
}



// ===== FAT.WishBoardActivity$$get_TokenNum RVA 0x2a92dc4 =====

undefined4 FUN_02aa2dc4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6e47,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6e47,0);
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
  return *(undefined4 *)(param_1 + 0xc4);
}



// ===== FAT.WishBoardActivity$$get_TokenBoost RVA 0x2a92e18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02aa2e18(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6e60,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6e60,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_022327e0 + 0x2232700);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022327e4 + 0x2232714),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_022327e8 + 0x22327d0));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0xd4);
}



// ===== FAT.WishBoardActivity$$get_EnableLegacyHandbook RVA 0x2a92e6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02aa2e6c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
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
  
  pcVar4 = (char *)(_UNK_02aa2f0c + 0x2aa2e80);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa2f10 + 0x2aa2e94));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x6dda,0);
  if (iVar1 == 0) {
    iVar3 = FUN_02a9ea20(param_1);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0x38);
    }
    if (iVar3 != 0 && iVar1 != 0) {
      uVar5 = (uint)(*(int *)(iVar1 + 0xc) == 0);
    }
    return uVar5;
  }
  iVar1 = func_0x0229f13c(0x6dda,0);
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
  func_0x0245495c(iVar3,uVar6,&uStack_30,uVar2,0,0);
  uVar5 = func_0x0245496c(&uStack_30,0,0);
  return uVar5;
}



// ===== FAT.WishBoardActivity$$get_HandbookAgent RVA 0x2a92f14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02aa2f14(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6e5b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6e5b,0);
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
  return *(undefined4 *)(param_1 + 200);
}



// ===== FAT.WishBoardActivity$$FAT.IBoardArchive.get_Feature RVA 0x2a92f68 =====

undefined4 FUN_02aa2f68(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x6f04,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f04,0);
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
  return 0x4e;
}



// ===== FAT.WishBoardActivity$$get_OutputMethod RVA 0x2a92fbc =====

undefined4 FUN_02aa2fbc(int param_1)

{
  return *(undefined4 *)(param_1 + 0xd8);
}



// ===== FAT.WishBoardActivity$$set_OutputMethod RVA 0x2a92fc4 =====

void FUN_02aa2fc4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xd8) = param_2;
  return;
}



// ===== FAT.WishBoardActivity$$get_OutputType RVA 0x2a92fcc =====

undefined4 FUN_02aa2fcc(int param_1)

{
  return *(undefined4 *)(param_1 + 0xdc);
}



// ===== FAT.WishBoardActivity$$set_OutputType RVA 0x2a92fd4 =====

void FUN_02aa2fd4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xdc) = param_2;
  return;
}



// ===== FAT.WishBoardActivity$$get_Visual RVA 0x2a92fdc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02aa2fdc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6f05,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f05,0);
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
  return *(undefined4 *)(param_1 + 0x88);
}



// ===== FAT.WishBoardActivity$$.ctor RVA 0x2a93030 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa3030(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
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
  
  pcVar4 = (char *)(_UNK_02aa342c + 0x2aa304c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa3430 + 0x2aa3060));
    func_0x01384978(*(undefined4 *)(_UNK_02aa3434 + 0x2aa306c));
    func_0x01384978(*(undefined4 *)(_UNK_02aa3438 + 0x2aa3078));
    func_0x01384978(*(undefined4 *)(_UNK_02aa343c + 0x2aa3084));
    func_0x01384978(*(undefined4 *)(_UNK_02aa3440 + 0x2aa3090));
    func_0x01384978(*(undefined4 *)(_UNK_02aa3444 + 0x2aa309c));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_02aa3448 + 0x2aa30e4);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  uStack_2c = 0;
  uStack_30 = 0;
  func_0x02b644a0(&uStack_30,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 2000),0);
  *(undefined4 *)(param_1 + 0x3c) = uStack_30;
  *(undefined4 *)(param_1 + 0x40) = uStack_2c;
  uStack_34 = 0;
  uStack_38 = 0;
  func_0x02b644a0(&uStack_38,*(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x7d4),0);
  *(undefined4 *)(param_1 + 0x44) = uStack_38;
  *(undefined4 *)(param_1 + 0x48) = uStack_34;
  uStack_3c = 0;
  uStack_40 = 0;
  func_0x02b644a0(&uStack_40,*(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x7f0),0);
  *(undefined4 *)(param_1 + 0x4c) = uStack_40;
  *(undefined4 *)(param_1 + 0x50) = uStack_3c;
  uStack_44 = 0;
  uStack_48 = 0;
  func_0x02b644a0(&uStack_48,*(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x7ec),0);
  *(undefined4 *)(param_1 + 0x54) = uStack_48;
  *(undefined4 *)(param_1 + 0x58) = uStack_44;
  uStack_4c = 0;
  uStack_50 = 0;
  func_0x02b644a0(&uStack_50,*(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x7d8),0);
  *(undefined4 *)(param_1 + 0x5c) = uStack_50;
  *(undefined4 *)(param_1 + 0x60) = uStack_4c;
  uStack_54 = 0;
  uStack_58 = 0;
  func_0x02b644a0(&uStack_58,*(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x7dc),0);
  *(undefined4 *)(param_1 + 100) = uStack_58;
  *(undefined4 *)(param_1 + 0x68) = uStack_54;
  uStack_5c = 0;
  uStack_60 = 0;
  func_0x02b644a0(&uStack_60,*(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x7f4),0);
  *(undefined4 *)(param_1 + 0x6c) = uStack_60;
  *(undefined4 *)(param_1 + 0x70) = uStack_5c;
  uStack_64 = 0;
  uStack_68 = 0;
  func_0x02b644a0(&uStack_68,*(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x7f8),0);
  *(undefined4 *)(param_1 + 0x74) = uStack_68;
  *(undefined4 *)(param_1 + 0x78) = uStack_64;
  uStack_6c = 0;
  uStack_70 = 0;
  func_0x02b644a0(&uStack_70,*(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x7fc),0);
  *(undefined4 *)(param_1 + 0x7c) = uStack_70;
  *(undefined4 *)(param_1 + 0x80) = uStack_6c;
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x02b64854(&uStack_80,*(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x7e0),0);
  iVar1 = *piVar5;
  *(undefined4 *)(param_1 + 0x8c) = uStack_78;
  *(ulonglong *)(param_1 + 0x84) = CONCAT44(uStack_7c,uStack_80);
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  func_0x02b64854(&uStack_90,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x7e4),0);
  iVar1 = *piVar5;
  *(undefined4 *)(param_1 + 0x98) = uStack_88;
  *(ulonglong *)(param_1 + 0x90) = CONCAT44(uStack_8c,uStack_90);
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  func_0x02b64854(&uStack_a0,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x7e8),0);
  puVar2 = *(undefined4 **)(_UNK_02aa344c + 0x2aa3334);
  *(undefined4 *)(param_1 + 0xa4) = uStack_98;
  *(ulonglong *)(param_1 + 0x9c) = CONCAT44(uStack_9c,uStack_a0);
  uVar3 = func_0x01384be4(*puVar2);
  func_0x03258eb8(uVar3,**(undefined4 **)(_UNK_02aa3450 + 0x2aa3350));
  puVar2 = *(undefined4 **)(_UNK_02aa3454 + 0x2aa3364);
  *(undefined4 *)(param_1 + 0xcc) = uVar3;
  uVar3 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar3,**(undefined4 **)(_UNK_02aa3458 + 0x2aa337c));
  *(undefined4 *)(param_1 + 0x110) = 0x3ed70a3d;
  uVar6 = **(undefined4 **)(_UNK_02aa345c + 0x2aa33a0);
  *(undefined4 *)(param_1 + 0xf8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe8) = uVar3;
  *(undefined4 *)(param_1 + 0xec) = uVar6;
  func_0x02b4dc04(param_1,0);
  *(int **)(param_1 + 0x10) = param_2;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar3 = (**(code **)(*param_2 + 0x100))(param_2,*(undefined4 *)(*param_2 + 0x104));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar3 = func_0x01cab60c(iVar1,uVar3,0);
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  func_0x02aa3460(param_1);
  return;
}



// ===== FAT.WishBoardActivity$$InitTheme RVA 0x2a93460 =====

void FUN_02aa3460(int param_1)

{
  int iVar1;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_30 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x6f07,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xb4);
    uStack_20 = *(undefined4 *)(param_1 + 0x3c);
    uStack_1c = *(undefined4 *)(param_1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64540(&uStack_20,*(undefined4 *)(iVar1 + 0x18),0);
    iVar1 = *(int *)(param_1 + 0xb4);
    uStack_20 = *(undefined4 *)(param_1 + 0x44);
    uStack_1c = *(undefined4 *)(param_1 + 0x48);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64540(&uStack_20,*(undefined4 *)(iVar1 + 0x44),0);
    iVar1 = *(int *)(param_1 + 0xb4);
    uStack_20 = *(undefined4 *)(param_1 + 0x4c);
    uStack_1c = *(undefined4 *)(param_1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64540(&uStack_20,*(undefined4 *)(iVar1 + 0x48),0);
    iVar1 = *(int *)(param_1 + 0xb4);
    uStack_20 = *(undefined4 *)(param_1 + 0x54);
    uStack_1c = *(undefined4 *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64540(&uStack_20,*(undefined4 *)(iVar1 + 0x20),0);
    uStack_20 = *(undefined4 *)(param_1 + 0x5c);
    uStack_1c = *(undefined4 *)(param_1 + 0x60);
    iVar1 = *(int *)(param_1 + 0xb4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64540(&uStack_20,*(undefined4 *)(iVar1 + 0x3c),0);
    iVar1 = *(int *)(param_1 + 0xb4);
    uStack_20 = *(undefined4 *)(param_1 + 100);
    uStack_1c = *(undefined4 *)(param_1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64540(&uStack_20,*(undefined4 *)(iVar1 + 0x4c),0);
    iVar1 = *(int *)(param_1 + 0xb4);
    uStack_30 = *(undefined8 *)(param_1 + 0x84);
    uStack_28 = *(undefined4 *)(param_1 + 0x8c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64928(&uStack_30,*(undefined4 *)(iVar1 + 0x34),param_1,0,0,0);
    iVar1 = *(int *)(param_1 + 0xb4);
    uStack_30 = *(undefined8 *)(param_1 + 0x90);
    uStack_28 = *(undefined4 *)(param_1 + 0x98);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64928(&uStack_30,*(undefined4 *)(iVar1 + 0x30),param_1,0,0,0);
    iVar1 = *(int *)(param_1 + 0xb4);
    uStack_30 = *(undefined8 *)(param_1 + 0x9c);
    uStack_28 = *(undefined4 *)(param_1 + 0xa4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64928(&uStack_30,*(undefined4 *)(iVar1 + 0x2c),param_1,0,0,0);
    iVar1 = *(int *)(param_1 + 0xb4);
    uStack_20 = *(undefined4 *)(param_1 + 0x74);
    uStack_1c = *(undefined4 *)(param_1 + 0x78);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64540(&uStack_20,*(undefined4 *)(iVar1 + 0x50),0);
    iVar1 = *(int *)(param_1 + 0xb4);
    uStack_20 = *(undefined4 *)(param_1 + 0x6c);
    uStack_1c = *(undefined4 *)(param_1 + 0x70);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64540(&uStack_20,*(undefined4 *)(iVar1 + 0x28),0);
  }
  else {
    iVar1 = func_0x0229f13c(0x6f07,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.WishBoardActivity$$SetupFresh RVA 0x2a93708 =====

void FUN_02aa3708(int param_1)

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
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x6f08,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f08,0);
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
  iVar3 = *(int *)(param_1 + 0xb4);
  iVar1 = *(int *)(iVar1 + 0x2c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = *(undefined4 *)(iVar3 + 0x40);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x01cf6408(iVar1,uVar4,0);
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
  func_0x02aa3850(param_1);
  FUN_02aa3460(param_1);
  func_0x02aa3934(param_1);
  func_0x02aa3a8c(param_1);
  func_0x02aa3b90(param_1);
  func_0x02aa3d44(param_1);
  func_0x02aa3e40(param_1);
  func_0x02aa40b4(param_1);
  func_0x02aa41c0(param_1,1);
  func_0x02aa4788(param_1);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xfc);
  uVar4 = *(undefined4 *)(param_1 + 0x8c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_18 = 0;
  func_0x01e7437c(iVar1,uVar4,0,0);
  return;
}



// ===== FAT.WishBoardActivity$$_InitWishBoardData RVA 0x2a93850 =====

void FUN_02aa3850(int param_1)

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
  undefined4 uStack_1c;
  
  iVar1 = func_0x0229f06c(0x6f0a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f0a,0);
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
  iVar1 = FUN_02a9ea20(param_1);
  if (iVar1 != 0) {
    func_0x02aa48d8(param_1,*(undefined4 *)(iVar1 + 0x18),1);
    iVar1 = *(int *)(param_1 + 0xa8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02139cf4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x020da680(&uStack_20,iVar1,0);
    uVar4 = *(undefined4 *)(param_1 + 0xb0);
    *(undefined4 *)(param_1 + 0xf0) = uStack_1c;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x020dc7e4(iVar1,uStack_1c,uVar4,0);
  }
  return;
}



// ===== FAT.WishBoardActivity$$_RefreshOutputMethod RVA 0x2a93934 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa3934(int param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
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
  
  pcVar6 = (char *)(_UNK_02aa3a80 + 0x2aa3948);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa3a84 + 0x2aa395c));
    func_0x01384978(*(undefined4 *)(_UNK_02aa3a88 + 0x2aa3968));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x6f16,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6f16,0);
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
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  pcVar3 = (char *)FUN_02a9ea20(param_1);
  iVar2 = 0;
  if (pcVar3 != (char *)0x0) {
    iVar2 = *(int *)(param_1 + 0xb4);
    pcVar6 = pcVar3;
  }
  if (pcVar3 == (char *)0x0 || iVar2 == 0) {
    return;
  }
  iVar2 = *(int *)(pcVar6 + 0x4c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  bVar1 = true;
  if ((*(int *)(iVar2 + 0xc) < 1) && (bVar1 = false, 0 < *(int *)(pcVar6 + 0x30))) {
    bVar1 = true;
  }
  iVar2 = *(int *)(pcVar6 + 0x28);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar2 + 0xc) < 1) {
    iVar2 = *(int *)(pcVar6 + 0x58);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    if ((bool)(bVar1 & 0 < iVar2)) goto LAB_02aa3a54;
    if (iVar2 < 1) {
      if (bVar1) {
        uVar7 = 2;
      }
      else {
        uVar7 = 0;
      }
      goto LAB_02aa3a68;
    }
  }
  else if (bVar1) {
LAB_02aa3a54:
    uVar7 = 3;
    goto LAB_02aa3a68;
  }
  uVar7 = 1;
LAB_02aa3a68:
  *(undefined4 *)(param_1 + 0xd8) = uVar7;
  return;
}



// ===== FAT.WishBoardActivity$$_RefreshOutputType RVA 0x2a93a8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa3a8c(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_02aa3b84 + 0x2aa3aa0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa3b88 + 0x2aa3ab4));
    func_0x01384978(*(undefined4 *)(_UNK_02aa3b8c + 0x2aa3ac0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6f18,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f18,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  pcVar2 = (char *)FUN_02a9ea20(param_1);
  iVar1 = 0;
  if (pcVar2 != (char *)0x0) {
    iVar1 = *(int *)(param_1 + 0xb4);
    pcVar5 = pcVar2;
  }
  if (pcVar2 == (char *)0x0 || iVar1 == 0) {
    return;
  }
  if (*(int *)(pcVar5 + 0x30) == 0) {
    iVar1 = *(int *)(pcVar5 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
      iVar1 = *(int *)(pcVar5 + 0x54);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) == 0) {
        uVar6 = 2;
        goto LAB_02aa3b74;
      }
    }
  }
  uVar6 = 1;
LAB_02aa3b74:
  *(undefined4 *)(param_1 + 0xdc) = uVar6;
  return;
}



// ===== FAT.WishBoardActivity$$_RefreshScoreEntity RVA 0x2a93b90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa3b90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
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
  
  pcVar4 = (char *)(_UNK_02aa3d28 + 0x2aa3ba8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa3d2c + 0x2aa3bbc));
    func_0x01384978(*(undefined4 *)(_UNK_02aa3d30 + 0x2aa3bc8));
    func_0x01384978(*(undefined4 *)(_UNK_02aa3d34 + 0x2aa3bd4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6f1a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f1a,0);
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
    return;
  }
  iVar1 = func_0x02aa5cd0(param_1);
  if ((((iVar1 != 0) && (*(int *)(param_1 + 0xdc) == 1)) && (*(int *)(param_1 + 0xb4) != 0)) &&
     (iVar1 = FUN_02a9ea20(param_1), iVar1 != 0)) {
    iVar3 = *(int *)(param_1 + 0xe0);
    if (iVar3 == 0) {
      iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02aa3d38 + 0x2aa3c78));
      func_0x02afb3e0(iVar3,0);
      *(int *)(param_1 + 0xe0) = iVar3;
    }
    piVar8 = *(int **)(_UNK_02aa3d3c + 0x2aa3c98);
    uVar5 = *(undefined4 *)(iVar1 + 0x30);
    uVar2 = *(undefined4 *)(iVar1 + 0x5c);
    iVar1 = *piVar8;
    uVar7 = *(undefined4 *)(param_1 + 0xc4);
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar8;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 700);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_40 = **(undefined4 **)(_UNK_02aa3d40 + 0x2aa3ce4);
    uStack_3c = 1;
    uStack_34 = 0x3f;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_48 = uVar5;
    uStack_44 = uVar6;
    func_0x02af6c48(iVar3,uVar7,param_1,uVar2);
  }
  return;
}



// ===== FAT.WishBoardActivity$$_InitStartToken RVA 0x2a93d44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa3d44(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined8 uVar7;
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
  
  pcVar4 = (char *)(_UNK_02aa3e34 + 0x2aa3d5c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa3e38 + 0x2aa3d70));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6f1b,0);
  if (iVar1 == 0) {
    uVar7 = FUN_02a9ea20(param_1);
    iVar1 = (int)((ulonglong)uVar7 >> 0x20);
    iVar3 = (int)uVar7;
    if (iVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0xb4);
    }
    if ((iVar3 != 0 && iVar1 != 0) && (*(int *)(param_1 + 0xdc) == 1)) {
      piVar6 = *(int **)(_UNK_02aa3e3c + 0x2aa3df8);
      uVar5 = *(undefined4 *)(iVar3 + 0x34);
      uVar2 = *(undefined4 *)(iVar3 + 0x5c);
      iVar1 = *piVar6;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4(iVar1);
        iVar1 = *piVar6;
      }
      func_0x02aaae6c(param_1,uVar2,uVar5,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x2c0));
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x6f1b,0);
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
  return;
}



// ===== FAT.WishBoardActivity$$_InitStartItem RVA 0x2a93e40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa3e40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
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
  
  pcVar4 = (char *)(_UNK_02aa4090 + 0x2aa3e58);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa4094 + 0x2aa3e6c));
    func_0x01384978(*(undefined4 *)(_UNK_02aa4098 + 0x2aa3e78));
    func_0x01384978(*(undefined4 *)(_UNK_02aa409c + 0x2aa3e84));
    func_0x01384978(*(undefined4 *)(_UNK_02aa40a0 + 0x2aa3e90));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6f1c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f1c,0);
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
    return;
  }
  if (*(int *)(param_1 + 0xdc) == 2) {
    iVar1 = FUN_02a9ea20(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = *(undefined4 *)(iVar1 + 0x50);
    if (*(int *)(**(int **)(_UNK_02aa40a4 + 0x2aa3f10) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02566088(&uStack_2c,uVar5,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x40);
    uVar5 = *(undefined4 *)(param_1 + 0xa8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01cdef00(iVar1,uVar5,0,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar1 + 0x40);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = *(int **)(_UNK_02aa40a8 + 0x2aa3fbc);
    iVar7 = *(int *)(iVar1 + 0x40);
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar6;
    }
    uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x2c0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uStack_38 = **(undefined4 **)(_UNK_02aa40ac + 0x2aa3ffc);
    uStack_34 = **(undefined4 **)(_UNK_02aa40b0 + 0x2aa4008);
    uStack_3c = 0x231;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uVar5 = func_0x01cdcbac(iVar7,uStack_2c,uStack_28,uVar5);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x01cdf088(iVar3,uVar5,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01cdefd0(iVar1,0);
  }
  return;
}



// ===== FAT.WishBoardActivity$$_RefreshSpawnBonusHandler RVA 0x2a940b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa40b4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
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
  
  pcVar9 = (char *)(_UNK_02aa41b4 + 0x2aa40c8);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa41b8 + 0x2aa40dc));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x6f1d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6f1d,0);
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
    iVar7 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
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
    func_0x0245495c(iVar7,uVar10,&uStack_30,uVar5);
    return;
  }
  iVar2 = func_0x02aa998c(param_1);
  if (iVar2 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x10c) == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02aa41bc + 0x2aa4150));
    func_0x021552f4(iVar2,0);
    *(int *)(iVar2 + 0x14) = param_1;
    func_0x02155388(iVar2,0);
    *(int *)(param_1 + 0x10c) = iVar2;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  piVar6 = *(int **)(param_1 + 0x10c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar9 = (char *)(_UNK_01dbba4c + 0x1dbb948);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbba50 + 0x1dbb95c),piVar6,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dbba54 + 0x1dbb968));
    *pcVar9 = '\x01';
  }
  iVar7 = func_0x0229f06c(0x16b4,0);
  if (iVar7 != 0) {
    iVar7 = func_0x0229f13c(0x16b4,0);
    if (iVar7 == 0) {
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
    if (*(int *)(iVar7 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar7 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485278(&uStack_38,piVar6,0);
    iVar8 = *(int *)(iVar7 + 8);
    uVar10 = *(undefined4 *)(iVar7 + 0xc);
    iVar2 = *(int *)(iVar7 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_38,uVar5,0,0);
    return;
  }
  iVar2 = func_0x02f6252c(*(undefined4 *)(iVar2 + 0x34),piVar6,
                          **(undefined4 **)(_UNK_01dbba58 + 0x1dbb9c8));
  if (piVar6 == (int *)0x0 || iVar2 == 0) {
    return;
  }
  iVar2 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01dbba5c + 0x1dbb9f0)) {
        puVar1 = (undefined4 *)(iVar2 + *piVar4 * 8 + 0xd0);
        goto LAB_01dbba38;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01dbba5c + 0x1dbb9f0),2);
LAB_01dbba38:
                    /* WARNING: Could not recover jumptable at 0x01dbba48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(piVar6,puVar1[1]);
  return;
}



// ===== FAT.WishBoardActivity$$InitHandbookAgent RVA 0x2a941c0 =====

/* WARNING: Removing unreachable block (ram,0x02aa44fc) */
/* WARNING: Removing unreachable block (ram,0x02aa44f0) */
/* WARNING: Removing unreachable block (ram,0x02b61b38) */
/* WARNING: Removing unreachable block (ram,0x02b61b44) */
/* WARNING: Removing unreachable block (ram,0x02b61b48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02aa41c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int *piVar14;
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
  
  pcVar8 = (char *)(_UNK_02aa4730 + 0x2aa41dc);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa4734 + 0x2aa41f0));
    func_0x01384978(*(undefined4 *)(_UNK_02aa4738 + 0x2aa41fc));
    func_0x01384978(*(undefined4 *)(_UNK_02aa473c + 0x2aa4208));
    func_0x01384978(*(undefined4 *)(_UNK_02aa4740 + 0x2aa4214));
    func_0x01384978(*(undefined4 *)(_UNK_02aa4744 + 0x2aa4220));
    func_0x01384978(*(undefined4 *)(_UNK_02aa4748 + 0x2aa422c));
    func_0x01384978(*(undefined4 *)(_UNK_02aa474c + 0x2aa4238));
    func_0x01384978(*(undefined4 *)(_UNK_02aa4750 + 0x2aa4244));
    func_0x01384978(*(undefined4 *)(_UNK_02aa4754 + 0x2aa4250));
    func_0x01384978(*(undefined4 *)(_UNK_02aa4758 + 0x2aa425c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6f1f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f1f,0);
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
    iVar10 = *(int *)(iVar1 + 8);
    uVar12 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    iVar1 = func_0x0245495c(iVar10,uVar12,&uStack_38,uVar6,0,0);
    return iVar1;
  }
  uStack_28 = param_2;
  iVar1 = FUN_02a9ea20(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar10 = *(int *)(param_1 + 0xcc);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(iVar1 + 0x48);
  *(undefined4 *)(iVar10 + 0xc) = 0;
  *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0364c2b4(iVar11,**(undefined4 **)(_UNK_02aa475c + 0x2aa4308));
  piVar9 = *(int **)(_UNK_02aa4760 + 0x2aa4320);
  piVar14 = *(int **)(_UNK_02aa4764 + 0x2aa4328);
  puVar13 = *(undefined4 **)(_UNK_02aa4768 + 0x2aa4330);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar10 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar9) {
          puVar3 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xc0);
          goto LAB_02aa4388;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar9,0);
LAB_02aa4388:
    iVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar10 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar10 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar14) {
          puVar3 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xc0);
          goto LAB_02aa43fc;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar14,0);
LAB_02aa43fc:
    uVar12 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    iVar10 = func_0x01c24918(0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar10 + 0xc);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = func_0x01cab79c(iVar10,uVar12,0);
    uVar12 = *(undefined4 *)(param_1 + 0xcc);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    func_0x02f622a4(uVar12,*(undefined4 *)(iVar10 + 0x20),*puVar13);
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar10 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_02aa476c + 0x2aa4490)) {
          puVar13 = (undefined4 *)(iVar10 + *piVar9 * 8 + 0xc0);
          goto LAB_02aa44d8;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar5 != 0);
    }
    puVar13 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02aa476c + 0x2aa4490),0);
LAB_02aa44d8:
    (*(code *)*puVar13)(piVar2,puVar13[1]);
  }
  iVar10 = *(int *)(param_1 + 200);
  if (iVar10 == 0) {
    iVar10 = FUN_02aa2e6c(param_1);
    if (iVar10 == 0) {
      uVar6 = *(undefined4 *)(iVar1 + 0x38);
      uVar12 = *(undefined4 *)(iVar1 + 0x3c);
      if (*(int *)(**(int **)(_UNK_02aa4778 + 0x2aa456c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar12 = func_0x02565a88(uVar12,0);
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02aa477c + 0x2aa45a4));
      uStack_2c = 0;
      uStack_30 = uVar12;
      func_0x02bf5bd8(iVar1,param_1,uVar6,uStack_28);
    }
    else {
      uVar12 = *(undefined4 *)(param_1 + 0xcc);
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02aa4774 + 0x2aa4530));
      uStack_30 = 0;
      uStack_2c = 0;
      func_0x02bf5460(iVar1,param_1,uVar12,uStack_28);
    }
    puVar13 = *(undefined4 **)(_UNK_02aa4780 + 0x2aa45d0);
    *(int *)(param_1 + 200) = iVar1;
    uVar12 = func_0x01384be4(*puVar13);
    func_0x03ccab14(uVar12,param_1,**(undefined4 **)(_UNK_02aa4784 + 0x2aa45f0),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02bf51c0(iVar1,uVar12,0);
    iVar10 = *(int *)(param_1 + 0xb4);
    if ((iVar10 != 0) && (iVar1 = *(int *)(iVar10 + 0x38), 0 < iVar1)) {
      iVar10 = *(int *)(param_1 + 200);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      pcVar8 = (char *)(_UNK_02bf66f0 + 0x2bf6634);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02bf66f4 + 0x2bf6648),iVar1,0);
        *pcVar8 = '\x01';
      }
      iVar11 = func_0x0229f06c(0x5c08,0);
      if (iVar11 == 0) {
        if (iVar1 < 1) {
          return 0;
        }
        puVar13 = *(undefined4 **)(_UNK_02bf66f8 + 0x2bf66ac);
        *(int *)(iVar10 + 0x20) = iVar1;
        iVar1 = func_0x01384be4(*puVar13);
        func_0x02b635c4(iVar1,0);
        iVar11 = *(int *)(iVar10 + 0x20);
        *(int *)(iVar10 + 0x24) = iVar1;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        pcVar8 = (char *)(_UNK_02b61bf0 + 0x2b61a70);
        if (*pcVar8 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02b61bf4 + 0x2b61a84),iVar11,0,0);
          func_0x01384978(*(undefined4 *)(_UNK_02b61bf8 + 0x2b61a90));
          func_0x01384978(*(undefined4 *)(_UNK_02b61bfc + 0x2b61a9c));
          func_0x01384978(*(undefined4 *)(_UNK_02b61c00 + 0x2b61aa8));
          *pcVar8 = '\x01';
        }
        iVar10 = func_0x0229f06c(0x305,0);
        if (iVar10 == 0) {
          iVar4 = 0;
          iVar10 = func_0x01822f2c(iVar11,0);
          *(int *)(iVar1 + 8) = iVar10;
          if (iVar10 == 0) {
            if (0 < iVar11) {
              uVar12 = func_0x01384abc(**(undefined4 **)(_UNK_02b61c04 + 0x2b61b88),&stack0xffffffe4
                                      );
              iVar4 = 0;
              uVar12 = func_0x0467272c(**(undefined4 **)(_UNK_02b61c08 + 0x2b61ba8),
                                       **(undefined4 **)(_UNK_02b61c0c + 0x2b61bb4),uVar12,0);
              if (*(int *)(**(int **)(_UNK_02b61c10 + 0x2b61bc8) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x028c2944(uVar12,0);
            }
          }
          else {
            uVar12 = func_0x017d2c28(*(undefined4 *)(iVar10 + 0x1c),0);
            iVar4 = 1;
            *(undefined4 *)(iVar1 + 0xc) = uVar12;
          }
        }
        else {
          iVar10 = func_0x0229f13c(0x305,0);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar4 = func_0x021846e8(iVar10,iVar1,iVar11,0);
        }
        return iVar4;
      }
      iVar11 = func_0x0229f13c(0x5c08,0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
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
      if (*(int *)(iVar11 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar11 + 0x10),0);
      }
      func_0x01485278(&uStack_38,iVar10,0);
      func_0x01485238(&uStack_38,iVar1,0);
      iVar10 = *(int *)(iVar11 + 8);
      uVar12 = *(undefined4 *)(iVar11 + 0xc);
      iVar1 = *(int *)(iVar11 + 0x10);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      uVar6 = 3;
      if (iVar1 == 0) {
        uVar6 = 2;
      }
      iVar1 = func_0x0245495c(iVar10,uVar12,&uStack_38,uVar6,0,0);
      return iVar1;
    }
  }
  return iVar10;
}



// ===== FAT.WishBoardActivity$$_InitBoost RVA 0x2a94788 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa4788(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
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
  
  pcVar6 = (char *)(_UNK_02aa48cc + 0x2aa479c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa48d0 + 0x2aa47b0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6f22,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f22,0);
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
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar4);
    return;
  }
  if (((*(int *)(param_1 + 0xdc) != 1) || (iVar1 = FUN_02a9ea20(param_1), iVar1 == 0)) ||
     (iVar5 = *(int *)(iVar1 + 0x1c), iVar5 < 1)) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0xd4);
  if (*(int *)(param_1 + 0xd4) == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02aa48d4 + 0x2aa4840));
    func_0x02bf44e8(iVar2,0);
    iVar5 = *(int *)(iVar1 + 0x1c);
    *(int *)(param_1 + 0xd4) = iVar2;
    if (iVar2 == 0) {
      func_0x01384bf0();
      iVar2 = 0;
    }
  }
  func_0x02befbb0(iVar2,iVar5,param_1,0);
  iVar1 = *(int *)(param_1 + 0xd4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02bf02d0(iVar1,0);
  uVar7 = *(undefined4 *)(param_1 + 0xc4);
  iVar1 = *(int *)(param_1 + 0xd4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_02befe10 + 0x2befcf4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02befe14 + 0x2befd08),uVar7,0);
    *pcVar6 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x5ca,0);
  if (iVar5 != 0) {
    iVar5 = func_0x0229f13c(0x5ca,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,uVar7,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar5 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar5 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485238(&uStack_38,uVar7,0);
    iVar2 = *(int *)(iVar5 + 8);
    uVar7 = *(undefined4 *)(iVar5 + 0xc);
    iVar1 = *(int *)(iVar5 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar2,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  iVar5 = func_0x02beec64(iVar1);
  if (iVar5 != 0) {
    iVar5 = *(int *)(iVar1 + 8);
    uVar8 = *(uint *)(iVar1 + 0x14);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar5 + 0x14);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar1 + 0x14);
    iVar5 = *(int *)(iVar5 + 0xc);
    if (iVar2 + 1 < iVar5) {
      do {
        iVar2 = iVar2 + 1;
        iVar3 = func_0x02befe18(iVar1,iVar2,uVar7);
        if (iVar3 == 0) {
          iVar2 = *(int *)(iVar1 + 0x14);
          break;
        }
        *(int *)(iVar1 + 0x14) = iVar2;
      } while (iVar5 + -1 != iVar2);
    }
    if ((int)uVar8 < iVar2) {
      iVar5 = *(int *)(iVar1 + 0x20);
      if (0x7fffffff < (*(uint *)(iVar1 + 0x10) & uVar8)) {
        *(int *)(iVar1 + 0x10) = iVar2;
      }
      if (iVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02befe08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar5 + 0xc))(*(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(iVar5 + 0x14));
        return;
      }
    }
  }
  return;
}



// ===== FAT.WishBoardActivity$$_InitWorld RVA 0x2a948d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02aa48d8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
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
  
  pcVar9 = (char *)(_UNK_02aa4b38 + 0x2aa48f8);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa4b3c + 0x2aa490c));
    func_0x01384978(*(undefined4 *)(_UNK_02aa4b40 + 0x2aa4918));
    func_0x01384978(*(undefined4 *)(_UNK_02aa4b44 + 0x2aa4924));
    func_0x01384978(*(undefined4 *)(_UNK_02aa4b48 + 0x2aa4930));
    func_0x01384978(*(undefined4 *)(_UNK_02aa4b4c + 0x2aa493c));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x6f0b,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6f0b,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    uVar3 = func_0x0217f950(iVar2,param_1,param_2,param_3);
    return uVar3;
  }
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02aa4b50 + 0x2aa49a4));
  func_0x02143488(uVar3,0);
  puVar4 = *(undefined4 **)(_UNK_02aa4b54 + 0x2aa49c0);
  *(undefined4 *)(param_1 + 0xa8) = uVar3;
  uVar3 = func_0x01384be4(*puVar4);
  func_0x0478dedc(uVar3,param_1,**(undefined4 **)(_UNK_02aa4b58 + 0x2aa49e0),0);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02aa4b5c + 0x2aa49f4));
  func_0x0214d6c8(uVar5,uVar3,0,0);
  *(undefined4 *)(param_1 + 0xac) = uVar5;
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(iVar2 + 0x4c);
  iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02aa4b60 + 0x2aa4a34));
  func_0x01db7f44(iVar2,0);
  uVar3 = *(undefined4 *)(param_1 + 0xa8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar2 + 8) = 7;
  *(undefined4 *)(iVar2 + 0xc) = uVar3;
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  func_0x01db7f4c(iVar10,iVar2,0);
  uVar3 = *(undefined4 *)(param_1 + 0xa8);
  iVar2 = *(int *)(param_1 + 0xac);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0214e900(iVar2,uVar3,0);
  iVar2 = *(int *)(param_1 + 0xa8);
  uVar3 = *(undefined4 *)(param_1 + 0xac);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x02141f58(iVar2,uVar3,0);
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  uVar3 = *(undefined4 *)(param_1 + 0xa8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_24 = 0;
  uStack_28 = param_3;
  func_0x01dbe654(iVar2,param_1,uVar3,param_2);
  iVar2 = *(int *)(param_1 + 0xa8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar9 = (char *)(_UNK_0214219c + 0x214211c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021421a0 + 0x2142130),param_1,0);
    *pcVar9 = '\x01';
  }
  iVar10 = func_0x0229f06c(0x5bec,0);
  if (iVar10 != 0) {
    iVar10 = func_0x0229f13c(0x5bec,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
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
    if (*(int *)(iVar10 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar10 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485278(&uStack_38,param_1,0);
    iVar8 = *(int *)(iVar10 + 8);
    uVar3 = *(undefined4 *)(iVar10 + 0xc);
    iVar2 = *(int *)(iVar10 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    uVar3 = func_0x0245495c(iVar8,uVar3,&uStack_38,uVar5,0,0);
    return uVar3;
  }
  iVar10 = **(int **)(_UNK_021421a4 + 0x2142190);
  piVar1 = *(int **)(iVar2 + 0xa0);
  if (*(int *)(iVar10 + 0x1c) == 0) {
    func_0x0140024c(iVar10);
  }
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    iVar2 = **(int **)(iVar10 + 0x1c);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x014001f0(iVar2);
    }
    iVar8 = *piVar1;
    uVar6 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar2) {
          puVar4 = (undefined4 *)(iVar8 + *piVar7 * 8 + 0xe0);
          goto LAB_02f625c8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,iVar2,4);
LAB_02f625c8:
    iVar2 = (*(code *)*puVar4)(piVar1,param_1,puVar4[1]);
    if (iVar2 == 0) {
      iVar2 = **(int **)(iVar10 + 0x1c);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x014001f0(iVar2);
      }
      iVar10 = *piVar1;
      uVar6 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar2) {
            puVar4 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xd0);
            goto LAB_02f62650;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar1,iVar2,2);
LAB_02f62650:
      (*(code *)*puVar4)(piVar1,param_1,puVar4[1]);
      uVar3 = 1;
    }
  }
  return uVar3;
}



// ===== FAT.WishBoardActivity$$LoadSetup RVA 0x2a94b64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa4b64(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
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
  
  pcVar7 = (char *)(_UNK_02aa4d20 + 0x2aa4b80);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa4d24 + 0x2aa4b94));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x6f23,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6f23,0);
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
    iVar5 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar4,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar6 = func_0x01c23c30(0,uVar4,0);
  *(undefined4 *)(param_1 + 0xb8) = uVar6;
  uVar6 = func_0x01c23c30(1,uVar4,0);
  *(undefined4 *)(param_1 + 0xb0) = uVar6;
  uVar6 = func_0x01c23c30(2,uVar4,0);
  *(undefined4 *)(param_1 + 0xf0) = uVar6;
  uVar6 = func_0x01c23c30(3,uVar4,0);
  *(undefined4 *)(param_1 + 0xbc) = uVar6;
  uVar6 = func_0x01c23c30(4,uVar4,0);
  *(undefined4 *)(param_1 + 0xc0) = uVar6;
  uVar6 = func_0x01c23c30(5,uVar4,0);
  *(undefined4 *)(param_1 + 0xc4) = uVar6;
  FUN_02aa3934(param_1);
  FUN_02aa3a8c(param_1);
  iVar2 = FUN_02a9ea20(param_1);
  if (((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x1c))) && (*(int *)(param_1 + 0xdc) == 1)) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02aa4d28 + 0x2aa4cb4));
    func_0x02bf44e8(iVar2,0);
    *(int *)(param_1 + 0xd4) = iVar2;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 8;
    uStack_1c = 0;
    func_0x02bf061c(iVar2,uVar4,6,7);
  }
  FUN_02aa41c0(param_1,0);
  FUN_02aa40b4(param_1);
  FUN_02aa3b90(param_1);
  pcVar7 = (char *)(_UNK_02aa48cc + 0x2aa479c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa48d0 + 0x2aa47b0));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x6f22,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6f22,0);
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
    iVar5 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar4);
    return;
  }
  if (((*(int *)(param_1 + 0xdc) != 1) || (iVar2 = FUN_02a9ea20(param_1), iVar2 == 0)) ||
     (iVar5 = *(int *)(iVar2 + 0x1c), iVar5 < 1)) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xd4);
  if (*(int *)(param_1 + 0xd4) == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02aa48d4 + 0x2aa4840));
    func_0x02bf44e8(iVar1,0);
    iVar5 = *(int *)(iVar2 + 0x1c);
    *(int *)(param_1 + 0xd4) = iVar1;
    if (iVar1 == 0) {
      func_0x01384bf0();
      iVar1 = 0;
    }
  }
  func_0x02befbb0(iVar1,iVar5,param_1,0);
  iVar2 = *(int *)(param_1 + 0xd4);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x02bf02d0(iVar2,0);
  uVar6 = *(undefined4 *)(param_1 + 0xc4);
  iVar2 = *(int *)(param_1 + 0xd4);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_02befe10 + 0x2befcf4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02befe14 + 0x2befd08),uVar6,0);
    *pcVar7 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x5ca,0);
  if (iVar5 != 0) {
    iVar5 = func_0x0229f13c(0x5ca,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,uVar6,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar5 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar5 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485238(&uStack_38,uVar6,0);
    iVar1 = *(int *)(iVar5 + 8);
    uVar6 = *(undefined4 *)(iVar5 + 0xc);
    iVar2 = *(int *)(iVar5 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar1,uVar6,&uStack_38,uVar4,0,0);
    return;
  }
  iVar5 = func_0x02beec64(iVar2);
  if (iVar5 != 0) {
    iVar5 = *(int *)(iVar2 + 8);
    uVar8 = *(uint *)(iVar2 + 0x14);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar5 + 0x14);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar2 + 0x14);
    iVar5 = *(int *)(iVar5 + 0xc);
    if (iVar1 + 1 < iVar5) {
      do {
        iVar1 = iVar1 + 1;
        iVar3 = func_0x02befe18(iVar2,iVar1,uVar6);
        if (iVar3 == 0) {
          iVar1 = *(int *)(iVar2 + 0x14);
          break;
        }
        *(int *)(iVar2 + 0x14) = iVar1;
      } while (iVar5 + -1 != iVar1);
    }
    if ((int)uVar8 < iVar1) {
      iVar5 = *(int *)(iVar2 + 0x20);
      if (0x7fffffff < (*(uint *)(iVar2 + 0x10) & uVar8)) {
        *(int *)(iVar2 + 0x10) = iVar1;
      }
      if (iVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02befe08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar5 + 0xc))(*(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(iVar5 + 0x14));
        return;
      }
    }
  }
  return;
}



// ===== FAT.WishBoardActivity$$Open RVA 0x2a94d2c =====

void FUN_02aa4d2c(int param_1)

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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x6f25,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f25,0);
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
  uStack_18 = 0;
  uStack_14 = 0;
  func_0x02b57d14(param_1,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
                  *(undefined4 *)(param_1 + 0x3c));
  return;
}



// ===== FAT.WishBoardActivity$$SaveSetup RVA 0x2a94da8 =====

/* WARNING: Possible PIC construction at 0x02aa4e70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02aa4ea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02aa4ed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02aa4f00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02aa4f30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02aa4f60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02aa4fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02aa4ff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02aa4fc8) */
/* WARNING: Removing unreachable block (ram,0x02aa4fe4) */
/* WARNING: Removing unreachable block (ram,0x02aa4fe8) */
/* WARNING: Removing unreachable block (ram,0x02aa4f64) */
/* WARNING: Removing unreachable block (ram,0x02aa4f98) */
/* WARNING: Removing unreachable block (ram,0x02aa4fb4) */
/* WARNING: Removing unreachable block (ram,0x02aa4fb8) */
/* WARNING: Removing unreachable block (ram,0x02aa4f70) */
/* WARNING: Removing unreachable block (ram,0x02aa4f34) */
/* WARNING: Removing unreachable block (ram,0x02aa4f50) */
/* WARNING: Removing unreachable block (ram,0x02aa4f54) */
/* WARNING: Removing unreachable block (ram,0x02aa4f04) */
/* WARNING: Removing unreachable block (ram,0x02aa4f20) */
/* WARNING: Removing unreachable block (ram,0x02aa4f24) */
/* WARNING: Removing unreachable block (ram,0x02aa4ed4) */
/* WARNING: Removing unreachable block (ram,0x02aa4ef0) */
/* WARNING: Removing unreachable block (ram,0x02aa4ef4) */
/* WARNING: Removing unreachable block (ram,0x02aa4ea4) */
/* WARNING: Removing unreachable block (ram,0x02aa4ec0) */
/* WARNING: Removing unreachable block (ram,0x02aa4ec4) */
/* WARNING: Removing unreachable block (ram,0x02aa4e74) */
/* WARNING: Removing unreachable block (ram,0x02aa4e90) */
/* WARNING: Removing unreachable block (ram,0x02aa4e94) */
/* WARNING: Removing unreachable block (ram,0x02aa4ff8) */
/* WARNING: Removing unreachable block (ram,0x02aa5014) */
/* WARNING: Removing unreachable block (ram,0x02aa5018) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa4da8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  
  pcVar5 = (char *)(_UNK_02aa5030 + 0x2aa4dc4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa5034 + 0x2aa4dd8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6f26,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f26,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    piStack_2c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    func_0x0245494c(&iStack_50,0,param_2,0);
    iStack_38 = iStack_50;
    iStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    piStack_2c = (int *)uStack_44;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_38,param_1,0);
    func_0x01485278(&iStack_38,param_2,0);
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
    func_0x0245495c(iVar3,uVar4,&iStack_38,uVar2,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x28);
  uVar4 = func_0x01c23578(0,*(undefined4 *)(param_1 + 0xb8),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piStack_2c = *(int **)(_UNK_02aa5038 + 0x2aa4e70);
  iVar3 = *piStack_2c;
  pcVar5 = (char *)(_UNK_03652bac + 0x3652b1c);
  iStack_38 = iVar1;
  iStack_34 = param_1;
  uStack_30 = uVar4;
  if (*pcVar5 == '\0') {
    func_0x02457d54(*(undefined4 *)(_UNK_03652bb0 + 0x3652b30));
    *pcVar5 = '\x01';
  }
  func_0x03031dbc(uVar4,**(undefined4 **)(_UNK_03652bb4 + 0x3652b4c),
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
  *(undefined4 *)(iVar3 + uVar6 * 4 + 0x10) = uVar4;
  return;
}



// ===== FAT.WishBoardActivity$$WhenReset RVA 0x2a9503c =====

void FUN_02aa503c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6f27,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0x6f28,0);
    if (iVar1 == 0) {
      iVar1 = func_0x02aa5cd0(param_1);
      if (((iVar1 != 0) && (*(int *)(param_1 + 0xdc) == 1)) && (*(int *)(param_1 + 0xe0) != 0)) {
        func_0x02af7520(*(int *)(param_1 + 0xe0),0);
      }
      *(undefined4 *)(param_1 + 0xe0) = 0;
      return;
    }
    iVar1 = func_0x0229f13c(0x6f28,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6f27,0);
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



// ===== FAT.WishBoardActivity$$_ClearScoreEntity RVA 0x2a95094 =====

void FUN_02aa5094(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6f28,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f28,0);
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
  iVar1 = func_0x02aa5cd0(param_1);
  if (((iVar1 != 0) && (*(int *)(param_1 + 0xdc) == 1)) && (*(int *)(param_1 + 0xe0) != 0)) {
    func_0x02af7520(*(int *)(param_1 + 0xe0),0);
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  return;
}



// ===== FAT.WishBoardActivity$$WhenEnd RVA 0x2a9511c =====

void FUN_02aa511c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6f29,0);
  if (iVar1 == 0) {
    func_0x02b4d590(param_1,0);
    func_0x02aa5190(param_1);
    FUN_02aa5094(param_1);
    iVar1 = func_0x0229f06c(0x6f2b,0);
    if (iVar1 == 0) {
      func_0x02aa5764(param_1);
      if (*(int *)(param_1 + 0xa8) != 0) {
        func_0x021421a8(*(int *)(param_1 + 0xa8),param_1,0);
      }
      if (*(int *)(param_1 + 200) != 0) {
        func_0x02bf56a4(*(int *)(param_1 + 200),0);
        iVar1 = *(int *)(param_1 + 200);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02bf6458(iVar1,0);
        *(undefined4 *)(param_1 + 200) = 0;
      }
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      uVar4 = *(undefined4 *)(param_1 + 0xa8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01dbc0ec(iVar1,uVar4,0);
      *(undefined4 *)(param_1 + 0xa8) = 0;
      *(undefined4 *)(param_1 + 0xac) = 0;
      if (*(int *)(param_1 + 0xd4) != 0) {
        func_0x02befc68(*(int *)(param_1 + 0xd4),0);
      }
      *(undefined4 *)(param_1 + 0xd4) = 0;
      return;
    }
    iVar1 = func_0x0229f13c(0x6f2b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6f29,0);
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



// ===== FAT.WishBoardActivity$$CheckActivityEndAndSettlement RVA 0x2a95190 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa5190(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int aiStack_3c [4];
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_02aa560c + 0x2aa51a8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa5610 + 0x2aa51bc));
    func_0x01384978(*(undefined4 *)(_UNK_02aa5614 + 0x2aa51c8));
    func_0x01384978(*(undefined4 *)(_UNK_02aa5618 + 0x2aa51d4));
    func_0x01384978(*(undefined4 *)(_UNK_02aa561c + 0x2aa51e0));
    func_0x01384978(*(undefined4 *)(_UNK_02aa5620 + 0x2aa51ec));
    func_0x01384978(*(undefined4 *)(_UNK_02aa5624 + 0x2aa51f8));
    func_0x01384978(*(undefined4 *)(_UNK_02aa5628 + 0x2aa5204));
    func_0x01384978(*(undefined4 *)(_UNK_02aa562c + 0x2aa5210));
    func_0x01384978(*(undefined4 *)(_UNK_02aa5630 + 0x2aa521c));
    func_0x01384978(*(undefined4 *)(_UNK_02aa5634 + 0x2aa5228));
    *pcVar5 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  iStack_2c = 0;
  aiStack_3c[2] = 0;
  aiStack_3c[1] = 0;
  aiStack_3c[0] = 0;
  iVar1 = func_0x0229f06c(0x6f2a,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02a9ea20(param_1);
    if (iVar1 != 0) {
      iVar2 = FUN_02a9c534(param_1);
      if (iVar2 != 0) {
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar7 = *(undefined4 *)(param_1 + 0x98);
        iVar3 = *(int *)(iVar3 + 0xfc);
        uVar4 = func_0x02aa8c64(param_1);
        uStack_44 = 0;
        uStack_48 = 0;
        func_0x039086bc(&uStack_48,iVar2,uVar4,**(undefined4 **)(_UNK_02aa5638 + 0x2aa52f8));
        uStack_50 = uStack_48;
        uStack_4c = uStack_44;
        uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_02aa563c + 0x2aa531c),&uStack_50);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x01e7437c(iVar3,uVar7,0,uVar4,0);
      }
      piVar6 = *(int **)(_UNK_02aa5640 + 0x2aa5364);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x028c8d78(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0302a7c0(&uStack_28,iVar2,&iStack_2c,**(undefined4 **)(_UNK_02aa5644 + 0x2aa53a0));
      if (*(int *)(param_1 + 0xdc) == 1) {
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x028c8d78(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0302a45c(aiStack_3c + 1,iVar2,aiStack_3c,**(undefined4 **)(_UNK_02aa5648 + 0x2aa53f4)
                       );
        iVar2 = aiStack_3c[0];
        uVar4 = *(undefined4 *)(param_1 + 0xc4);
        uVar7 = *(undefined4 *)(iVar1 + 0x5c);
        if (aiStack_3c[0] == 0) {
          func_0x01384bf0();
        }
        func_0x03d59d54(iVar2,uVar7,uVar4,**(undefined4 **)(_UNK_02aa564c + 0x2aa5420));
        iVar2 = iStack_2c;
        piVar6 = *(int **)(_UNK_02aa5650 + 0x2aa543c);
        uVar4 = *(undefined4 *)(iVar1 + 0x2c);
        iVar1 = *piVar6;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar6;
        }
        func_0x02b4aed4(uVar4,iVar2,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x2cc),aiStack_3c[0],0)
        ;
        func_0x028c98a0(aiStack_3c + 1,0);
      }
      uVar4 = func_0x02c0389c(iStack_2c,*(undefined4 *)(param_1 + 0xa8),0);
      if ((*(int *)(param_1 + 200) != 0) &&
         (iVar2 = FUN_02aa2e6c(param_1), iVar1 = iStack_2c, iVar2 == 0)) {
        iVar2 = *(int *)(param_1 + 200);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x02bf7198(iVar2,iVar1,0);
      }
      func_0x019ba918(param_1,uVar4,0);
      iVar1 = iStack_2c;
      if (iStack_2c == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) < 1) {
        func_0x03633b24(&uStack_28,**(undefined4 **)(_UNK_02aa5658 + 0x2aa5584));
      }
      else {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar7 = *(undefined4 *)(param_1 + 0xa4);
        iVar1 = *(int *)(iVar1 + 0xfc);
        uStack_48 = uStack_28;
        uStack_44 = uStack_24;
        uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_02aa5654 + 0x2aa5538),&uStack_48);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01e7437c(iVar1,uVar7,0,uVar4,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6f2a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.WishBoardActivity$$_ClearWishBoardData RVA 0x2a9565c =====

void FUN_02aa565c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6f2b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f2b,0);
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
  func_0x02aa5764(param_1);
  if (*(int *)(param_1 + 0xa8) != 0) {
    func_0x021421a8(*(int *)(param_1 + 0xa8),param_1,0);
  }
  if (*(int *)(param_1 + 200) != 0) {
    func_0x02bf56a4(*(int *)(param_1 + 200),0);
    iVar1 = *(int *)(param_1 + 200);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02bf6458(iVar1,0);
    *(undefined4 *)(param_1 + 200) = 0;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  uVar4 = *(undefined4 *)(param_1 + 0xa8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbc0ec(iVar1,uVar4,0);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  if (*(int *)(param_1 + 0xd4) != 0) {
    func_0x02befc68(*(int *)(param_1 + 0xd4),0);
  }
  *(undefined4 *)(param_1 + 0xd4) = 0;
  return;
}



// ===== FAT.WishBoardActivity$$_ClearSpawnBonusHandler RVA 0x2a95764 =====

void FUN_02aa5764(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6f2c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f2c,0);
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
  iVar1 = func_0x02aa998c(param_1);
  if (iVar1 != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar4 = *(undefined4 *)(param_1 + 0x10c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbba60(iVar1,uVar4,0);
  }
  *(undefined4 *)(param_1 + 0x10c) = 0;
  return;
}



// ===== FAT.WishBoardActivity$$BoardEntryAsset RVA 0x2a95808 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02aa5808(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_02aa58f4 + 0x2aa5820);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa58f8 + 0x2aa5834));
    func_0x01384978(*(undefined4 *)(_UNK_02aa58fc + 0x2aa5840));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x6f2d,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x88);
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
    func_0x03470a60(iVar1,**(undefined4 **)(_UNK_02aa5904 + 0x2aa58e0),&uStack_14,
                    **(undefined4 **)(_UNK_02aa5900 + 0x2aa58d4));
  }
  else {
    iVar1 = func_0x0229f13c(0x6f2d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.WishBoardActivity$$FAT.IActivityOrderHandler.OnPreUpdate RVA 0x2a95908 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02aa5908(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  int iStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_02aa5cc4 + 0x2aa5928);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa5cc8 + 0x2aa5940));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6f2e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f2e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021d2b64(iVar1,param_1,param_2,param_3,param_4,0);
    return uVar2;
  }
  iVar1 = func_0x02aa5cd0(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(param_2 + 0x18) == 5) {
    return 0;
  }
  if (1 < *(int *)(param_1 + 0xdc) - 1U) {
    return 0;
  }
  uVar2 = func_0x02b449f8(param_1,0);
  iVar1 = func_0x01e4b758(param_2,uVar2,0);
  piVar8 = *(int **)(_UNK_02aa5ccc + 0x2aa5a00);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar8;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x01e4b23c(iVar3,param_2,0);
  if (iVar3 == 0) {
LAB_02aa5a98:
    if (*(int *)(param_1 + 0xdc) == 2) {
      uVar2 = func_0x01e3e5b8(param_2,0xc,0);
      func_0x02aa5d34(&iStack_2c,param_1,uVar2);
      iVar4 = iStack_28;
      iVar3 = iStack_2c;
      uVar2 = func_0x01e3e5b8(param_2,0xd,0);
      func_0x02aa61a8(&iStack_2c,param_1,uVar2);
      iVar7 = iStack_28;
      if (iStack_28 < iVar4) {
        iVar7 = iVar4;
      }
      iVar4 = iStack_2c;
      if (iStack_2c < iVar3) {
        iVar4 = iVar3;
      }
      if (iVar4 == 0 || iVar7 == 0) {
        return 0;
      }
      iVar3 = *piVar8;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar8;
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x10);
      uVar2 = func_0x02b449f8(param_1,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x01e4b8f0(iVar3,param_2,uVar2,iVar4,iVar7,0);
      uVar2 = 1;
    }
    else {
      iVar3 = *(int *)(param_1 + 0xe0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x02afa744(iVar3,param_2,param_4,0,0);
      uVar2 = 1;
    }
  }
  else {
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar8;
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar3 = func_0x01e4b2b0(iVar3,param_2,0);
    iVar4 = func_0x02b449f8(param_1,0);
    if (iVar3 != iVar4) goto LAB_02aa5a98;
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
    iVar3 = func_0x01e4b23c(0,param_2,0);
    if (iVar3 != 0) {
      func_0x01384bf0();
      goto LAB_02aa5bfc;
    }
  }
  else {
    iVar3 = func_0x01e4b23c(iVar1,param_2,0);
    if (iVar3 != 0) {
LAB_02aa5bfc:
      uVar5 = 0;
      iVar3 = func_0x01e4b2b0(iVar1,param_2,0);
      iVar4 = func_0x02b449f8(param_1,0);
      if (iVar3 == iVar4) goto LAB_02aa5cac;
    }
  }
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar8;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4b3b8(&iStack_2c,iVar3,param_2,0);
  uVar5 = func_0x02b449f8(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4ba84(iVar1,param_2,uVar5,iStack_28,iStack_2c,0);
  uVar5 = 1;
LAB_02aa5cac:
  iVar1 = func_0x01f2a218(0);
  if (iVar1 != 0) {
    return uVar5;
  }
  return uVar2;
}



// ===== FAT.WishBoardActivity$$IsOrderMethod RVA 0x2a95cd0 =====

uint FUN_02aa5cd0(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x629,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x629,0);
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
  return (uint)((*(uint *)(param_1 + 0xd8) & 0xfffffffe) == 2);
}



// ===== FAT.WishBoardActivity$$GetScoreRewardPay RVA 0x2a95d34 =====

/* WARNING: Removing unreachable block (ram,0x02aa6054) */
/* WARNING: Removing unreachable block (ram,0x02aa6060) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa5d34(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_02aa6168 + 0x2aa5d54);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa616c + 0x2aa5d68));
    func_0x01384978(*(undefined4 *)(_UNK_02aa6170 + 0x2aa5d74));
    func_0x01384978(*(undefined4 *)(_UNK_02aa6174 + 0x2aa5d80));
    func_0x01384978(*(undefined4 *)(_UNK_02aa6178 + 0x2aa5d8c));
    func_0x01384978(*(undefined4 *)(_UNK_02aa617c + 0x2aa5d98));
    func_0x01384978(*(undefined4 *)(_UNK_02aa6180 + 0x2aa5da4));
    func_0x01384978(*(undefined4 *)(_UNK_02aa6184 + 0x2aa5db0));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6f2f,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02a9ea20(param_2);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_02aa6188 + 0x2aa5e48));
    uStack_34 = 0;
    piVar8 = *(int **)(_UNK_02aa618c + 0x2aa5e6c);
    piVar9 = *(int **)(_UNK_02aa6190 + 0x2aa5e74);
    piVar10 = *(int **)(_UNK_02aa6194 + 0x2aa5e7c);
    puVar11 = *(undefined4 **)(_UNK_02aa6198 + 0x2aa5e84);
    iStack_38 = 0;
LAB_02aa5e84:
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar8) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_02aa5ee0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar8,0);
LAB_02aa5ee0:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 != 0) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar9) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_02aa5f54;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar9,0);
LAB_02aa5f54:
      uVar4 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x036a1750(uVar4,*puVar11);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if ((*(int *)(iVar1 + 0x1c) != 0) && (*(int *)(iVar1 + 0x24) <= param_3)) {
        iStack_38 = func_0x01457ae8(param_3);
        uStack_34 = *(undefined4 *)(iVar1 + 0x20);
        if (iStack_38 == 0) {
          iStack_38 = 1;
        }
      }
      goto LAB_02aa5e84;
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_02aa619c + 0x2aa5ff4)) {
            puVar11 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
            goto LAB_02aa603c;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar5 != 0);
      }
      puVar11 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02aa619c + 0x2aa5ff4),0);
LAB_02aa603c:
      (*(code *)*puVar11)(piVar2,puVar11[1]);
    }
    uVar4 = **(undefined4 **)(_UNK_02aa61a0 + 0x2aa6074);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x038fd264(param_1,iStack_38,uStack_34,uVar4);
  }
  else {
    iVar1 = func_0x0229f13c(0x6f2f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021ddad0(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}



// ===== FAT.WishBoardActivity$$GetScoreRewardAct RVA 0x2a961a8 =====

/* WARNING: Removing unreachable block (ram,0x02aa64c8) */
/* WARNING: Removing unreachable block (ram,0x02aa64d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa61a8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_02aa65dc + 0x2aa61c8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa65e0 + 0x2aa61dc));
    func_0x01384978(*(undefined4 *)(_UNK_02aa65e4 + 0x2aa61e8));
    func_0x01384978(*(undefined4 *)(_UNK_02aa65e8 + 0x2aa61f4));
    func_0x01384978(*(undefined4 *)(_UNK_02aa65ec + 0x2aa6200));
    func_0x01384978(*(undefined4 *)(_UNK_02aa65f0 + 0x2aa620c));
    func_0x01384978(*(undefined4 *)(_UNK_02aa65f4 + 0x2aa6218));
    func_0x01384978(*(undefined4 *)(_UNK_02aa65f8 + 0x2aa6224));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6f30,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02a9ea20(param_2);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_02aa65fc + 0x2aa62bc));
    uStack_34 = 0;
    piVar8 = *(int **)(_UNK_02aa6600 + 0x2aa62e0);
    piVar9 = *(int **)(_UNK_02aa6604 + 0x2aa62e8);
    piVar10 = *(int **)(_UNK_02aa6608 + 0x2aa62f0);
    puVar11 = *(undefined4 **)(_UNK_02aa660c + 0x2aa62f8);
    iStack_38 = 0;
LAB_02aa62f8:
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar8) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_02aa6354;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar8,0);
LAB_02aa6354:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 != 0) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar9) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_02aa63c8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar9,0);
LAB_02aa63c8:
      uVar4 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x036a1750(uVar4,*puVar11);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if ((*(int *)(iVar1 + 0x14) != 0) && (*(int *)(iVar1 + 0x18) <= param_3)) {
        iStack_38 = func_0x01457ae8(param_3);
        uStack_34 = *(undefined4 *)(iVar1 + 0x20);
        if (iStack_38 == 0) {
          iStack_38 = 1;
        }
      }
      goto LAB_02aa62f8;
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_02aa6610 + 0x2aa6468)) {
            puVar11 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
            goto LAB_02aa64b0;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar5 != 0);
      }
      puVar11 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02aa6610 + 0x2aa6468),0);
LAB_02aa64b0:
      (*(code *)*puVar11)(piVar2,puVar11[1]);
    }
    uVar4 = **(undefined4 **)(_UNK_02aa6614 + 0x2aa64e8);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x038fd264(param_1,iStack_38,uStack_34,uVar4);
  }
  else {
    iVar1 = func_0x0229f13c(0x6f30,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021ddad0(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}



// ===== FAT.WishBoardActivity$$CanUseItem RVA 0x2a9661c =====

/* WARNING: Removing unreachable block (ram,0x02aa6d00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02aa661c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  int *piVar15;
  uint uVar16;
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
  
  pcVar9 = (char *)(_UNK_02aa6eb8 + 0x2aa6638);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa6ebc + 0x2aa664c));
    func_0x01384978(*(undefined4 *)(_UNK_02aa6ec0 + 0x2aa6658));
    func_0x01384978(*(undefined4 *)(_UNK_02aa6ec4 + 0x2aa6664));
    func_0x01384978(*(undefined4 *)(_UNK_02aa6ec8 + 0x2aa6670));
    func_0x01384978(*(undefined4 *)(_UNK_02aa6ecc + 0x2aa667c));
    func_0x01384978(*(undefined4 *)(_UNK_02aa6ed0 + 0x2aa6688));
    func_0x01384978(*(undefined4 *)(_UNK_02aa6ed4 + 0x2aa6694));
    func_0x01384978(*(undefined4 *)(_UNK_02aa6ed8 + 0x2aa66a0));
    func_0x01384978(*(undefined4 *)(_UNK_02aa6edc + 0x2aa66ac));
    func_0x01384978(*(undefined4 *)(_UNK_02aa6ee0 + 0x2aa66b8));
    func_0x01384978(*(undefined4 *)(_UNK_02aa6ee4 + 0x2aa66c4));
    func_0x01384978(*(undefined4 *)(_UNK_02aa6ee8 + 0x2aa66d0));
    func_0x01384978(*(undefined4 *)(_UNK_02aa6eec + 0x2aa66dc));
    func_0x01384978(*(undefined4 *)(_UNK_02aa6ef0 + 0x2aa66e8));
    func_0x01384978(*(undefined4 *)(_UNK_02aa6ef4 + 0x2aa66f4));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x6f31,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6f31,0);
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
    iVar12 = *(int *)(iVar2 + 8);
    uVar14 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar2 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar12,uVar14,&uStack_38,uVar7,0,0);
    uVar1 = func_0x0245496c(&uStack_38,0,0);
    return uVar1;
  }
  iVar2 = *(int *)(param_1 + 0xb4);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x1c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x0364c2b4(iVar2,**(undefined4 **)(_UNK_02aa6ef8 + 0x2aa6774));
  piVar15 = *(int **)(_UNK_02aa6efc + 0x2aa678c);
  piVar13 = *(int **)(_UNK_02aa6f00 + 0x2aa6794);
  do {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    uVar1 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar15) {
          puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
          goto LAB_02aa67ec;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar1 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar15,0);
LAB_02aa67ec:
    iVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    if (iVar2 == 0) {
      uVar16 = 8;
      uVar1 = 0;
      goto LAB_02aa6c88;
    }
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    uVar1 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar13) {
          puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
          goto LAB_02aa6860;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar1 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar13,0);
LAB_02aa6860:
    iVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar12 = func_0x0210e2d4(param_2,0);
  } while (iVar12 != iVar2);
  iVar2 = func_0x02aa6f38(param_1);
  uVar16 = 6;
  if (iVar2 == 0) {
    uVar1 = 1;
  }
  else {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x38);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar14 = func_0x0210e2d4(param_2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01cca5b0(iVar2,uVar14,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar13 = *(int **)(_UNK_02aa6f04 + 0x2aa6918);
    uVar14 = *(undefined4 *)(iVar2 + 0x1c);
    if (*(int *)(*piVar13 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x025550ec(uVar14,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    puVar4 = *(undefined4 **)(_UNK_02aa6f08 + 0x2aa6964);
    iVar2 = func_0x046755e8(iVar2,*puVar4,0,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar2 + 0xc) == 0) {
      func_0x01384bf4();
    }
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    puVar10 = *(undefined4 **)(_UNK_02aa6f0c + 0x2aa69b0);
    iVar12 = func_0x04676cc8(iVar2,*puVar10,0);
    if (iVar12 != 0) {
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x04673d94(iVar2,*puVar10,**(undefined4 **)(_UNK_02aa6f10 + 0x2aa69dc),0);
    }
    iVar12 = func_0x01c24918(0);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar12 + 0x38);
    iVar12 = FUN_02a9ea20(param_1);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar14 = *(undefined4 *)(iVar12 + 0x20);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar12 = func_0x01cca5b0(iVar11,uVar14,0);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar14 = *(undefined4 *)(iVar12 + 0x1c);
    if (*(int *)(*piVar13 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar12 = func_0x025550ec(uVar14,0);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    iVar12 = *(int *)(iVar12 + 0xc);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    iVar12 = func_0x046755e8(iVar12,*puVar4,0,0);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar12 + 0xc) == 0) {
      func_0x01384bf4();
    }
    uVar14 = *(undefined4 *)(iVar12 + 0x10);
    if (*(int *)(**(int **)(_UNK_02aa6f14 + 0x2aa6ad8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    puVar4 = *(undefined4 **)(_UNK_02aa6f18 + 0x2aa6af8);
    puVar10 = *(undefined4 **)(_UNK_02aa6f1c + 0x2aa6b04);
    iVar2 = func_0x01a332cc(*puVar10,iVar2,*puVar4);
    iVar12 = func_0x01a332cc(*puVar10,uVar14,*puVar4);
    iVar11 = func_0x01c24918(0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar11 + 0x10);
    piVar13 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02aa6f20 + 0x2aa6b4c),2);
    if (piVar13 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar2 != 0) &&
       (iVar5 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar13 + 0x20)), iVar5 == 0)) {
      uVar14 = func_0x01384c10();
      func_0x01384aa0(uVar14,0);
    }
    if (piVar13[3] == 0) {
      func_0x01384bf4();
    }
    piVar13[4] = iVar2;
    if ((iVar12 != 0) &&
       (iVar2 = func_0x01384ab8(iVar12,*(undefined4 *)(*piVar13 + 0x20)), iVar2 == 0)) {
      uVar14 = func_0x01384c10();
      func_0x01384aa0(uVar14,0);
    }
    if ((uint)piVar13[3] < 2) {
      func_0x01384bf4();
    }
    piVar13[5] = iVar12;
    if (*(int *)(**(int **)(_UNK_02aa6f24 + 0x2aa6bf0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar14 = func_0x028c1688(**(undefined4 **)(_UNK_02aa6f28 + 0x2aa6c0c),piVar13,0);
    uVar16 = 6;
    uVar7 = func_0x028c1350(**(undefined4 **)(_UNK_02aa6f2c + 0x2aa6c2c),0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = 1;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x01ca28e4(iVar11,uVar14,uVar7,0);
    uVar1 = 0;
  }
LAB_02aa6c88:
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar13[-1] == **(int **)(_UNK_02aa6f30 + 0x2aa6ca0)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar13 * 8 + 0xc0);
          goto LAB_02aa6ce8;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02aa6f30 + 0x2aa6ca0),0);
LAB_02aa6ce8:
    (*(code *)*puVar4)(piVar3,puVar4[1]);
  }
  if ((uVar16 | 8) == 8) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0210e2d4(param_2,0);
    iVar12 = FUN_02a9c534(param_1);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar1 = (uint)(iVar2 == *(int *)(iVar12 + 0x1c));
  }
  return uVar1;
}



// ===== FAT.WishBoardActivity$$CheckProgressFinish RVA 0x2a96f38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02aa6f38(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_02aa6fe8 + 0x2aa6f4c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa6fec + 0x2aa6f60));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x6f32,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6f32,0);
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
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3,0,0);
    uVar1 = func_0x0245496c(&uStack_30,0,0);
    return uVar1;
  }
  iVar4 = FUN_02a9ea20(param_1);
  iVar2 = 0;
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 0x14);
  }
  if (iVar4 != 0 && iVar2 != 0) {
    return (uint)(*(int *)(iVar2 + 0xc) <= *(int *)(param_1 + 0xbc));
  }
  return 1;
}



// ===== FAT.WishBoardActivity$$TrySpawnItem RVA 0x2a96ff0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02aa6ff0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar11 = (char *)(_UNK_02aa7504 + 0x2aa7010);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa7508 + 0x2aa7028));
    func_0x01384978(*(undefined4 *)(_UNK_02aa750c + 0x2aa7034));
    func_0x01384978(*(undefined4 *)(_UNK_02aa7510 + 0x2aa7040));
    func_0x01384978(*(undefined4 *)(_UNK_02aa7514 + 0x2aa704c));
    func_0x01384978(*(undefined4 *)(_UNK_02aa7518 + 0x2aa7058));
    *pcVar11 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x6f34,0);
  if (iVar5 == 0) {
    *param_4 = 0;
    *param_3 = 0xffffffff;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_02aa751c + 0x2aa70e0));
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x0211b24c(iVar5,0);
    uVar6 = 1;
    if (iVar7 != 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x0210e2d4(param_2,0);
      iVar8 = FUN_02a9c534(param_1);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      if (iVar7 == *(int *)(iVar8 + 0x1c)) {
        if (*(int *)(**(int **)(_UNK_02aa7520 + 0x2aa715c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x0204f2f0(&uStack_30,0x34,0);
        uVar4 = uStack_28;
        uVar2 = uStack_2c;
        uVar10 = uStack_30;
        iVar5 = *(int *)(param_1 + 0xa8);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uVar6 = 0;
        iVar5 = func_0x02139cf4(iVar5,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x020dd560(iVar5,param_2,0xf,0);
        if (iVar5 != 0) {
          if (param_2 == 0) {
            func_0x01384bf0();
            uVar9 = func_0x0210e2d4(0,0);
            func_0x01384bf0();
          }
          else {
            uVar9 = func_0x0210e2d4(param_2,0);
          }
          func_0x0210cd7c(&uStack_30,param_2,0);
          uVar12 = uStack_2c;
          uVar6 = uStack_30;
          if (*(int *)(**(int **)(_UNK_02aa7524 + 0x2aa7438) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x01dd876c(&uStack_30,uVar6,uVar12,0);
          if (*(int *)(**(int **)(_UNK_02aa7528 + 0x2aa7474) + 0x74) == 0) {
            func_0x01384ab4();
          }
          uVar6 = 1;
          func_0x0207405c(uVar9,1,uStack_30,uStack_2c,uStack_28,uVar10,uVar2,uVar4,0,0x34,0,0,
                          0x43080000,0,0);
          func_0x02aa753c(param_1,param_2,0x3f933333);
        }
      }
      else {
        iVar7 = FUN_02aa6f38(param_1);
        if (iVar7 == 0) {
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uVar10 = func_0x0211b2b0(iVar5,0);
          func_0x02aa7d3c(param_1,uVar10);
          if (*(int *)(**(int **)(_UNK_02aa752c + 0x2aa7238) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x0204f2f0(&uStack_30,0x35,0);
          uVar4 = uStack_28;
          uVar2 = uStack_2c;
          uVar10 = uStack_30;
          iVar7 = func_0x01c24918(0);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          iVar7 = *(int *)(iVar7 + 0x50);
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          uVar9 = func_0x0210e2d4(param_2,0);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          iVar7 = func_0x01dd0230(iVar7,uVar9,0);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          iVar7 = *(int *)(iVar7 + 0x44);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          uVar9 = func_0x0364c9b8(iVar7,0,**(undefined4 **)(_UNK_02aa7530 + 0x2aa72f4));
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x0211b194(iVar5,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uVar12 = *(undefined4 *)(iVar5 + 0x14);
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          func_0x0210cd7c(&uStack_30,param_2,0);
          uVar3 = uStack_2c;
          uVar1 = uStack_30;
          if (*(int *)(**(int **)(_UNK_02aa7534 + 0x2aa7354) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x01dd876c(&uStack_30,uVar1,uVar3,0);
          if (*(int *)(**(int **)(_UNK_02aa7538 + 0x2aa7394) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x0207405c(uVar9,uVar12,uStack_30,uStack_2c,uStack_28,uVar10,uVar2,uVar4,2,0x35,0,0,0
                          ,3,0);
        }
      }
    }
  }
  else {
    iVar5 = func_0x0229f13c(0x6f34,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x022365c4(iVar5,param_1,param_2,param_3,param_4,0);
  }
  return uVar6;
}



// ===== FAT.WishBoardActivity$$BeginDragReward RVA 0x2a9753c =====

/* WARNING: Removing unreachable block (ram,0x02aa7bb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa753c(int *param_1,int param_2,float param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  char *pcVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  uint in_fpscr;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  pcVar12 = (char *)(_UNK_02aa7ccc + 0x2aa7564);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa7cd0 + 0x2aa7578));
    func_0x01384978(*(undefined4 *)(_UNK_02aa7cd4 + 0x2aa7584));
    func_0x01384978(*(undefined4 *)(_UNK_02aa7cd8 + 0x2aa7590));
    func_0x01384978(*(undefined4 *)(_UNK_02aa7cdc + 0x2aa759c));
    func_0x01384978(*(undefined4 *)(_UNK_02aa7ce0 + 0x2aa75a8));
    func_0x01384978(*(undefined4 *)(_UNK_02aa7ce4 + 0x2aa75b4));
    func_0x01384978(*(undefined4 *)(_UNK_02aa7ce8 + 0x2aa75c0));
    func_0x01384978(*(undefined4 *)(_UNK_02aa7cec + 0x2aa75cc));
    func_0x01384978(*(undefined4 *)(_UNK_02aa7cf0 + 0x2aa75d8));
    func_0x01384978(*(undefined4 *)(_UNK_02aa7cf4 + 0x2aa75e4));
    func_0x01384978(*(undefined4 *)(_UNK_02aa7cf8 + 0x2aa75f0));
    func_0x01384978(*(undefined4 *)(_UNK_02aa7cfc + 0x2aa75fc));
    *pcVar12 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x6e83,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6e83,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0218b1ec(iVar2,param_1,param_2,param_3,0);
    return;
  }
  if (param_2 == 0) {
    return;
  }
  iVar3 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = param_1[0x2a];
  }
  if (iVar3 == 0 || iVar2 == 0) {
    return;
  }
  iVar2 = func_0x02139cf4(iVar2,0);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = func_0x020dd560(iVar2,param_2,0xf,0);
  if (iVar2 == 0) {
    return;
  }
  uVar4 = func_0x0210e2d4(param_2,0);
  func_0x02317ae0(uVar4,0);
  iVar2 = func_0x020d80e4(0x1b,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  piVar5 = *(int **)(_UNK_02aa7d00 + 0x2aa76f8);
  *(int **)(iVar2 + 0x1c) = param_1;
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x0204f2f0(&uStack_54,0x34,0);
  iVar3 = FUN_02a9c534(param_1);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x14);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar10 = in_fpscr & 0xfffffff | (uint)(param_3 == 0.0) << 0x1e;
  pfVar6 = (float *)&UNK_02aa7b2c;
  if (SUB41(uVar10 >> 0x1e,0)) {
    pfVar6 = (float *)&UNK_02aa7b30;
  }
  fVar17 = *pfVar6;
  piVar5 = (int *)func_0x0364c2b4(iVar3,**(undefined4 **)(_UNK_02aa7d04 + 0x2aa7774));
  fVar1 = _UNK_02aa7b8c;
  iVar3 = 0;
  do {
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar7 = *piVar5;
    uVar9 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_02aa7d30 + 0x2aa77b8)) {
          puVar8 = (undefined4 *)(iVar7 + *piVar11 * 8 + 0xc0);
          goto LAB_02aa7800;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_02aa7d30 + 0x2aa77b8),0);
LAB_02aa7800:
    iVar7 = (*(code *)*puVar8)(piVar5,puVar8[1]);
    if (iVar7 == 0) break;
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar7 = *piVar5;
    uVar9 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_02aa7d08 + 0x2aa7834)) {
          puVar8 = (undefined4 *)(iVar7 + *piVar11 * 8 + 0xc0);
          goto LAB_02aa787c;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_02aa7d08 + 0x2aa7834),0);
LAB_02aa787c:
    uVar4 = (*(code *)*puVar8)(piVar5,puVar8[1]);
    if (*(int *)(**(int **)(_UNK_02aa7d0c + 0x2aa789c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    fVar16 = (float)VectorSignedToFloat(iVar3,(byte)(uVar10 >> 0x16) & 3);
    func_0x01dd7838(uVar4,uStack_54,uStack_50,uStack_4c,fVar17 + fVar16 * fVar1,0);
    iVar7 = param_1[0x2a];
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x02139cf4(iVar7,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x020e2888(iVar7,uVar4,0x12,iVar2,0);
    if (iVar7 == 0) {
      if (*(int *)(**(int **)(_UNK_02aa7d10 + 0x2aa7980) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x01dd7dfc(0);
      iVar7 = func_0x01c24918(0);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar13 = *(int *)(iVar7 + 0x40);
      iVar7 = **(int **)(_UNK_02aa7d14 + 0x2aa79bc);
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x01384ab4();
        iVar7 = **(int **)(_UNK_02aa7d18 + 0x2aa79dc);
      }
      uVar14 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x2c4);
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x01cdcbac(iVar13,uVar4,1,uVar14,0,0,0,0x2be,
                              **(undefined4 **)(_UNK_02aa7d1c + 0x2aa79fc),
                              **(undefined4 **)(_UNK_02aa7d20 + 0x2aa7a08),0);
      iVar7 = param_1[0x3a];
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar13 = *(int *)(iVar7 + 8);
      uVar9 = *(uint *)(iVar7 + 0xc);
      piVar11 = *(int **)(_UNK_02aa7d24 + 0x2aa7a78);
      *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
      iVar15 = *piVar11;
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      if (uVar9 < *(uint *)(iVar13 + 0xc)) {
        *(uint *)(iVar7 + 0xc) = uVar9 + 1;
        *(undefined4 *)(iVar13 + uVar9 * 4 + 0x10) = uVar4;
      }
      else {
        func_0x0328f170(iVar7,uVar4,*(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38)
                       );
      }
    }
    else {
      fVar18 = (float)param_1[0x44];
      iVar7 = func_0x03668dfc(**(undefined4 **)(_UNK_02aa7d28 + 0x2aa7938));
      uVar4 = func_0x02aa8e04(param_1,fVar16 * fVar1 + fVar18);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x01c36290(iVar7,uVar4,0);
    }
    iVar7 = param_1[0x3a];
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar7 + 0xc)) {
      iVar7 = func_0x03668dfc(**(undefined4 **)(_UNK_02aa7d2c + 0x2aa7ae4));
      uVar4 = func_0x02aa8ecc(param_1,uStack_54,uStack_50,uStack_4c);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x01c36290(iVar7,uVar4,0);
    }
    iVar3 = iVar3 + 1;
  } while( true );
  if (piVar5 != (int *)0x0) {
    iVar2 = *piVar5;
    uVar10 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_02aa7d34 + 0x2aa7b50)) {
          puVar8 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xc0);
          goto LAB_02aa7b9c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_02aa7d34 + 0x2aa7b50),0);
LAB_02aa7b9c:
    (*(code *)*puVar8)(piVar5,puVar8[1]);
  }
  return;
}



// ===== FAT.WishBoardActivity$$AddMilestoneScore RVA 0x2a97d3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa7d3c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_02aa7ed8 + 0x2aa7d58);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa7edc + 0x2aa7d6c));
    func_0x01384978(*(undefined4 *)(_UNK_02aa7ee0 + 0x2aa7d78));
    func_0x01384978(*(undefined4 *)(_UNK_02aa7ee4 + 0x2aa7d84));
    func_0x01384978(*(undefined4 *)(_UNK_02aa7ee8 + 0x2aa7d90));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6f36,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f36,0);
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
  iVar1 = FUN_02a9ea20(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  uVar4 = *(undefined4 *)(param_1 + 0xbc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364c9b8(iVar1,uVar4,**(undefined4 **)(_UNK_02aa7eec + 0x2aa7e20));
  iVar1 = func_0x0182cb68(uVar4,0);
  param_2 = *(int *)(param_1 + 0xc0) + param_2;
  *(int *)(param_1 + 0xc0) = param_2;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (param_2 < *(int *)(iVar1 + 0x14)) {
    if (*(int *)(**(int **)(_UNK_02aa7ef0 + 0x2aa7e64) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02aa7ef4 + 0x2aa7e80));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = **(undefined4 **)(_UNK_02aa7ef8 + 0x2aa7eac);
    func_0x034a79d8(iVar1,0,0,0);
    return;
  }
  func_0x02aa7fe8(param_1);
  pcVar5 = (char *)(_UNK_02aa8760 + 0x2aa867c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa8764 + 0x2aa8690));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6f38,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f38,0);
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
  iVar1 = FUN_02a9ea20(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  uVar4 = *(undefined4 *)(param_1 + 0xbc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364c9b8(iVar1,uVar4,**(undefined4 **)(_UNK_02aa8768 + 0x2aa8718));
  iVar1 = func_0x0182cb68(uVar4,0);
  iVar3 = *(int *)(param_1 + 0xc0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(param_1 + 0xc0) = iVar3 - *(int *)(iVar1 + 0x14);
  func_0x02aa876c(param_1);
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
  return;
}



// ===== FAT.WishBoardActivity$$GetProgressInfo RVA 0x2a97efc =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02aa7efc(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_r4;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
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
  
  pcVar9 = (char *)(_UNK_02aa7fd8 + 0x2aa7f14);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa7fdc + 0x2aa7f28));
    func_0x01384978(*(undefined4 *)(_UNK_02aa7fe0 + 0x2aa7f34));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x6e41,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6e41,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar9 = (char *)(_UNK_02249b04 + 0x2249a10);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02249b08 + 0x2249a24),param_1,param_2,0);
      *pcVar9 = '\x01';
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
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar6,0,0);
    uVar8 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02249b0c + 0x2249af4));
    return uVar8;
  }
  iVar7 = FUN_02a9ea20(param_1);
  iVar2 = 0;
  if (iVar7 != 0) {
    iVar2 = *(int *)(iVar7 + 0x14);
  }
  if (((iVar7 != 0 && iVar2 != 0) && (-1 < param_2)) && (param_2 < *(int *)(iVar2 + 0xc))) {
    uVar8 = func_0x0364c9b8(iVar2,param_2,**(undefined4 **)(_UNK_02aa7fe4 + 0x2aa7fc4));
    pcVar9 = (char *)(_UNK_0182cbd8 + 0x182cb7c);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0182cbdc + 0x182cb90),0);
      func_0x01384978(*(undefined4 *)(_UNK_0182cbe0 + 0x182cb9c));
      *pcVar9 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_0182cbe4 + 0x182cbb0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = **(int **)(_UNK_0182cbe8 + 0x182cbcc);
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
      iVar4 = func_0x03d66780(unaff_r4,uVar8,auStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x68));
      uVar6 = auStack_28[0];
      bVar1 = false;
      iVar5 = unaff_r4;
      if (iVar4 != 0) {
        iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
        if (iVar2 == 0) {
          return auStack_28[0];
        }
        (**(code **)(*piVar3 + 0x138))(piVar3,uVar8,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
        return auStack_28[0];
      }
    }
    if ((piVar3[0x12] == 0) ||
       (iVar4 = func_0x0421f3b0(piVar3[0x12],uVar8,
                                *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x13c)),
       iVar4 == 0)) {
      uStack_2c = 0;
      iVar4 = (**(code **)(*piVar3 + 0x1a0))
                        (piVar3,uVar8,&uStack_2c,*(undefined4 *)(*piVar3 + 0x1a4));
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
          func_0x03d6491c(iVar5,uVar8,uVar6,
                          *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x78));
        }
        iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
        if (iVar2 == 0) {
          return uVar6;
        }
        (**(code **)(*piVar3 + 0x138))(piVar3,uVar8,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
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
      func_0x04220004(iVar2,uVar8,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x148));
    }
    func_0x0369fb50(piVar3,uVar8,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x134));
    return 0;
  }
  return 0;
}



// ===== FAT.WishBoardActivity$$_BeginMilestoneReward RVA 0x2a97fe8 =====

/* WARNING: Removing unreachable block (ram,0x02aa847c) */
/* WARNING: Removing unreachable block (ram,0x02aa8488) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa7fe8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_02aa85e8 + 0x2aa8000);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa85ec + 0x2aa8014));
    func_0x01384978(*(undefined4 *)(_UNK_02aa85f0 + 0x2aa8020));
    func_0x01384978(*(undefined4 *)(_UNK_02aa85f4 + 0x2aa802c));
    func_0x01384978(*(undefined4 *)(_UNK_02aa85f8 + 0x2aa8038));
    func_0x01384978(*(undefined4 *)(_UNK_02aa85fc + 0x2aa8044));
    func_0x01384978(*(undefined4 *)(_UNK_02aa8600 + 0x2aa8050));
    func_0x01384978(*(undefined4 *)(_UNK_02aa8604 + 0x2aa805c));
    func_0x01384978(*(undefined4 *)(_UNK_02aa8608 + 0x2aa8068));
    func_0x01384978(*(undefined4 *)(_UNK_02aa860c + 0x2aa8074));
    func_0x01384978(*(undefined4 *)(_UNK_02aa8610 + 0x2aa8080));
    func_0x01384978(*(undefined4 *)(_UNK_02aa8614 + 0x2aa808c));
    func_0x01384978(*(undefined4 *)(_UNK_02aa8618 + 0x2aa8098));
    func_0x01384978(*(undefined4 *)(_UNK_02aa861c + 0x2aa80a4));
    func_0x01384978(*(undefined4 *)(_UNK_02aa8620 + 0x2aa80b0));
    func_0x01384978(*(undefined4 *)(_UNK_02aa8624 + 0x2aa80bc));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6f37,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f37,0);
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
    func_0x0245495c(iVar8,uVar10,&uStack_30,uVar5,0,0);
    return;
  }
  iVar1 = FUN_02a9ea20(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  uVar10 = *(undefined4 *)(param_1 + 0xbc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar10 = func_0x0364c9b8(iVar1,uVar10,**(undefined4 **)(_UNK_02aa8628 + 0x2aa8148));
  iVar1 = func_0x0182cb68(uVar10,0);
  iVar8 = func_0x01384be4(**(undefined4 **)(_UNK_02aa862c + 0x2aa8168));
  func_0x0328e950(iVar8,**(undefined4 **)(_UNK_02aa8630 + 0x2aa817c));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar1 + 0x18);
  iStack_34 = iVar1;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x03653608(iVar7,**(undefined4 **)(_UNK_02aa8634 + 0x2aa81b0));
  piVar12 = *(int **)(_UNK_02aa8638 + 0x2aa81cc);
LAB_02aa81c8:
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_02aa8650 + 0x2aa81e4)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
        goto LAB_02aa822c;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02aa8650 + 0x2aa81e4),0);
LAB_02aa822c:
  iVar7 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  iVar1 = iStack_34;
  if (iVar7 != 0) {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_02aa863c + 0x2aa8260)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_02aa82a8;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02aa863c + 0x2aa8260),0);
LAB_02aa82a8:
    uVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (*(int *)(**(int **)(_UNK_02aa8640 + 0x2aa82c8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02566088(&uStack_30,uVar10,0);
    uVar5 = uStack_2c;
    uVar10 = uStack_30;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *piVar12;
    iVar1 = *(int *)(iVar1 + 0x40);
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x01384ab4();
      iVar7 = *piVar12;
    }
    uVar11 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x2c4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_40 = **(undefined4 **)(_UNK_02aa8644 + 0x2aa8344);
    uStack_3c = **(undefined4 **)(_UNK_02aa8648 + 0x2aa8350);
    uStack_44 = 0x1f6;
    uStack_38 = 0;
    uStack_48 = 0;
    uVar10 = func_0x01cdcbac(iVar1,uVar10,uVar5,uVar11,0,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar8 + 8);
    uVar4 = *(uint *)(iVar8 + 0xc);
    piVar6 = *(int **)(_UNK_02aa864c + 0x2aa83b0);
    *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
    iVar7 = *piVar6;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (uVar4 < *(uint *)(iVar1 + 0xc)) {
      *(uint *)(iVar8 + 0xc) = uVar4 + 1;
      *(undefined4 *)(iVar1 + uVar4 * 4 + 0x10) = uVar10;
    }
    else {
      func_0x0328f170(iVar8,uVar10,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
    }
    goto LAB_02aa81c8;
  }
  if (piVar2 != (int *)0x0) {
    iVar7 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar12[-1] == **(int **)(_UNK_02aa8654 + 0x2aa841c)) {
          puVar3 = (undefined4 *)(iVar7 + *piVar12 * 8 + 0xc0);
          goto LAB_02aa8464;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02aa8654 + 0x2aa841c),0);
LAB_02aa8464:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  if (*(int *)(**(int **)(_UNK_02aa8658 + 0x2aa849c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar7 = func_0x0300d558(**(undefined4 **)(_UNK_02aa865c + 0x2aa84b8));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar10 = *(undefined4 *)(iVar1 + 0x14);
  uVar5 = *(undefined4 *)(iVar1 + 0x1c);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  func_0x034a79d8(iVar7,iVar8,uVar5,uVar10,**(undefined4 **)(_UNK_02aa8660 + 0x2aa84f8));
  return;
}



// ===== FAT.WishBoardActivity$$_EnterNextMile RVA 0x2a98668 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa8668(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02aa8760 + 0x2aa867c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa8764 + 0x2aa8690));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6f38,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f38,0);
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
    return;
  }
  iVar1 = FUN_02a9ea20(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  uVar5 = *(undefined4 *)(param_1 + 0xbc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar5 = func_0x0364c9b8(iVar1,uVar5,**(undefined4 **)(_UNK_02aa8768 + 0x2aa8718));
  iVar1 = func_0x0182cb68(uVar5,0);
  iVar3 = *(int *)(param_1 + 0xc0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(param_1 + 0xc0) = iVar3 - *(int *)(iVar1 + 0x14);
  func_0x02aa876c(param_1);
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
  return;
}



// ===== FAT.WishBoardActivity$$TrackMineMilestone RVA 0x2a9876c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa876c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_02aa8890 + 0x2aa8784);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa8894 + 0x2aa8798));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6f39,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f39,0);
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
    return;
  }
  iVar1 = FUN_02a9ea20(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(param_1 + 0xbc);
  iVar6 = *(int *)(iVar1 + 0x14);
  iVar3 = iVar7;
  if (iVar6 == 0) {
    func_0x01384bf0();
    iVar3 = *(int *)(param_1 + 0xbc);
  }
  iVar8 = *(int *)(iVar6 + 0xc);
  iVar6 = *(int *)(param_1 + 0xa8);
  uVar5 = *(undefined4 *)(iVar1 + 0x24);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02139cf4(iVar6,0);
  uStack_34 = 0;
  if (iVar1 != 0) {
    uStack_34 = *(undefined4 *)(iVar1 + 8);
  }
  uStack_30 = *(undefined4 *)(param_1 + 0xf0);
  uStack_38 = (uint)(iVar7 == iVar8 + -1);
  uStack_2c = 0;
  func_0x019ba5c4(param_1,iVar3 + 1,iVar8,uVar5);
  return;
}



// ===== FAT.WishBoardActivity$$SetBoardData RVA 0x2a98898 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa8898(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
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
  
  iVar2 = func_0x0229f06c(0x6f3a,0);
  if (iVar2 == 0) {
    if (param_2 == (int *)0x0) {
      return;
    }
    FUN_02aa48d8(param_1,param_2[0xe],0);
    iVar2 = *(int *)(param_1 + 0xa8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0214a9e8(iVar2,param_2,0,0);
    iVar2 = *(int *)(param_1 + 0xa8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02139cf4(iVar2,0);
    uVar9 = *(undefined4 *)(param_1 + 0xb0);
    uVar6 = *(undefined4 *)(param_1 + 0xf0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x020dc7e4(iVar2,uVar6,uVar9,0);
    pcVar8 = (char *)(_UNK_02aa41b4 + 0x2aa40c8);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02aa41b8 + 0x2aa40dc));
      *pcVar8 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x6f1d,0);
    if (iVar2 != 0) {
      iVar2 = func_0x0229f13c(0x6f1d,0);
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
      iVar3 = *(int *)(iVar2 + 8);
      uVar9 = *(undefined4 *)(iVar2 + 0xc);
      iVar2 = *(int *)(iVar2 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar6 = 2;
      if (iVar2 == 0) {
        uVar6 = 1;
      }
      uStack_50 = 0;
      uStack_4c = 0;
      func_0x0245495c(iVar3,uVar9,&uStack_30,uVar6);
      return;
    }
    iVar2 = func_0x02aa998c(param_1);
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x10c) == 0) {
      iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02aa41bc + 0x2aa4150));
      func_0x021552f4(iVar2,0);
      *(int *)(iVar2 + 0x14) = param_1;
      func_0x02155388(iVar2,0);
      *(int *)(param_1 + 0x10c) = iVar2;
    }
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x4c);
    param_2 = *(int **)(param_1 + 0x10c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_01dbba4c + 0x1dbb948);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dbba50 + 0x1dbb95c),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_01dbba54 + 0x1dbb968));
      *pcVar8 = '\x01';
    }
    iVar3 = func_0x0229f06c(0x16b4,0);
    if (iVar3 == 0) {
      iVar2 = func_0x02f6252c(*(undefined4 *)(iVar2 + 0x34),param_2,
                              **(undefined4 **)(_UNK_01dbba58 + 0x1dbb9c8));
      if (param_2 == (int *)0x0 || iVar2 == 0) {
        return;
      }
      iVar2 = *param_2;
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01dbba5c + 0x1dbb9f0)) {
            puVar1 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xd0);
            goto LAB_01dbba38;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01dbba5c + 0x1dbb9f0),2);
LAB_01dbba38:
                    /* WARNING: Could not recover jumptable at 0x01dbba48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar1)(param_2,puVar1[1]);
      return;
    }
    iVar3 = func_0x0229f13c(0x16b4,0);
    param_1 = iVar2;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x6f3a,0);
    if (iVar3 == 0) {
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
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar7 = *(int *)(iVar3 + 8);
  uVar9 = *(undefined4 *)(iVar3 + 0xc);
  iVar2 = *(int *)(iVar3 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 3;
  if (iVar2 == 0) {
    uVar6 = 2;
  }
  func_0x0245495c(iVar7,uVar9,&uStack_38,uVar6,0,0);
  return;
}



// ===== FAT.WishBoardActivity$$FillBoardData RVA 0x2a98980 =====

/* WARNING: Possible PIC construction at 0x02147e04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02147e08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa8980(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  char *pcVar11;
  int unaff_r4;
  undefined4 unaff_r5;
  int iVar12;
  undefined4 uVar13;
  undefined4 unaff_r6;
  undefined4 *puVar14;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  uint uVar15;
  int unaff_r9;
  undefined4 *puVar16;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined8 uVar17;
  int iStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  int aiStack_28 [4];
  
  iVar4 = func_0x0229f06c(0x6f3b,0);
  if (iVar4 == 0) {
    param_1 = *(int *)(param_1 + 0xa8);
    if (param_1 == 0) {
      return;
    }
    pcVar11 = (char *)(_UNK_0214881c + 0x2147b9c);
    if (*pcVar11 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02148820 + 0x2147bb0),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_02148824 + 0x2147bbc));
      func_0x01384978(*(undefined4 *)(_UNK_02148828 + 0x2147bc8));
      func_0x01384978(*(undefined4 *)(_UNK_0214882c + 0x2147bd4));
      func_0x01384978(*(undefined4 *)(_UNK_02148830 + 0x2147be0));
      func_0x01384978(*(undefined4 *)(_UNK_02148834 + 0x2147bec));
      func_0x01384978(*(undefined4 *)(_UNK_02148838 + 0x2147bf8));
      func_0x01384978(*(undefined4 *)(_UNK_0214883c + 0x2147c04));
      func_0x01384978(*(undefined4 *)(_UNK_02148840 + 0x2147c10));
      func_0x01384978(*(undefined4 *)(_UNK_02148844 + 0x2147c1c));
      func_0x01384978(*(undefined4 *)(_UNK_02148848 + 0x2147c28));
      func_0x01384978(*(undefined4 *)(_UNK_0214884c + 0x2147c34));
      func_0x01384978(*(undefined4 *)(_UNK_02148850 + 0x2147c40));
      func_0x01384978(*(undefined4 *)(_UNK_02148854 + 0x2147c4c));
      func_0x01384978(*(undefined4 *)(_UNK_02148858 + 0x2147c58));
      func_0x01384978(*(undefined4 *)(_UNK_0214885c + 0x2147c64));
      func_0x01384978(*(undefined4 *)(_UNK_02148860 + 0x2147c70));
      func_0x01384978(*(undefined4 *)(_UNK_02148864 + 0x2147c7c));
      func_0x01384978(*(undefined4 *)(_UNK_02148868 + 0x2147c88));
      func_0x01384978(*(undefined4 *)(_UNK_0214886c + 0x2147c94));
      func_0x01384978(*(undefined4 *)(_UNK_02148870 + 0x2147ca0));
      func_0x01384978(*(undefined4 *)(_UNK_02148874 + 0x2147cac));
      func_0x01384978(*(undefined4 *)(_UNK_02148878 + 0x2147cb8));
      func_0x01384978(*(undefined4 *)(_UNK_0214887c + 0x2147cc4));
      func_0x01384978(*(undefined4 *)(_UNK_02148880 + 0x2147cd0));
      func_0x01384978(*(undefined4 *)(_UNK_02148884 + 0x2147cdc));
      func_0x01384978(*(undefined4 *)(_UNK_02148888 + 0x2147ce8));
      func_0x01384978(*(undefined4 *)(_UNK_0214888c + 0x2147cf4));
      func_0x01384978(*(undefined4 *)(_UNK_02148890 + 0x2147d00));
      func_0x01384978(*(undefined4 *)(_UNK_02148894 + 0x2147d0c));
      func_0x01384978(*(undefined4 *)(_UNK_02148898 + 0x2147d18));
      func_0x01384978(*(undefined4 *)(_UNK_0214889c + 0x2147d24));
      func_0x01384978(*(undefined4 *)(_UNK_021488a0 + 0x2147d30));
      func_0x01384978(*(undefined4 *)(_UNK_021488a4 + 0x2147d3c));
      func_0x01384978(*(undefined4 *)(_UNK_021488a8 + 0x2147d48));
      func_0x01384978(*(undefined4 *)(_UNK_021488ac + 0x2147d54));
      func_0x01384978(*(undefined4 *)(_UNK_021488b0 + 0x2147d60));
      func_0x01384978(*(undefined4 *)(_UNK_021488b4 + 0x2147d6c));
      *pcVar11 = '\x01';
    }
    uStack_94 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_90 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_8c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_60 = 0;
    unaff_r8 = &uStack_38;
    uStack_78 = 0;
    aiStack_28[0] = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_38 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    uStack_48 = 0;
    uStack_84 = uStack_94;
    uStack_80 = uStack_90;
    uStack_7c = uStack_8c;
    uStack_74 = uStack_94;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    uStack_5c = uStack_94;
    uStack_58 = uStack_90;
    uStack_54 = uStack_8c;
    uStack_44 = uStack_94;
    uStack_40 = uStack_90;
    uStack_3c = uStack_8c;
    uStack_34 = uStack_94;
    uStack_30 = uStack_90;
    uStack_2c = uStack_8c;
    iVar4 = func_0x0229f06c(0x5c6c,0);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x4c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar13 = *(undefined4 *)(iVar4 + 8);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(param_2 + 0x38) = uVar13;
      uVar17 = func_0x02140d24(param_1);
      uVar17 = func_0x01458584((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),1000,0);
      *(undefined8 *)(param_2 + 0x30) = uVar17;
      piVar1 = (int *)func_0x021566f4(0);
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar4 = *piVar1;
      uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_021488b8 + 0x2147e74)) {
            puVar2 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0xc0);
            goto LAB_02147ebc;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_021488b8 + 0x2147e74),0);
LAB_02147ebc:
      (*(code *)*puVar2)(piVar1,puVar2[1]);
      uVar13 = *(undefined4 *)(param_1 + 0x94);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(param_1 + 0x50);
      *(undefined4 *)(param_2 + 0x3c) = uVar13;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x021139b0(iVar4,param_2,0);
      iVar4 = *(int *)(param_1 + 0x54);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x02148958(iVar4,param_2);
      iVar4 = *(int *)(param_1 + 0x58);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x02139e7c(iVar4,param_2);
      iVar4 = *(int *)(param_1 + 0x5c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x0215ea7c(iVar4,param_2,0);
      iVar4 = *(int *)(param_1 + 0x60);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x01db6828(iVar4,param_2,0);
      iVar4 = *(int *)(param_1 + 100);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x02110804(iVar4,param_2,0);
      iVar4 = *(int *)(param_1 + 0x4c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x020dc720(iVar4,aiStack_28,0);
      iVar4 = aiStack_28[0];
      iStack_b4 = param_2;
      if (iVar6 != 0) {
        if (aiStack_28[0] == 0) {
          func_0x01384bf0();
        }
        func_0x0325a3b4(&uStack_b0,iVar4,**(undefined4 **)(_UNK_021488bc + 0x2147fe8));
        uStack_38 = uStack_b0;
        uStack_34 = uStack_ac;
        uStack_30 = uStack_a8;
        uStack_2c = uStack_a4;
        puVar2 = *(undefined4 **)(_UNK_021488c0 + 0x2148004);
        puVar14 = *(undefined4 **)(_UNK_021488c4 + 0x214800c);
        while (iVar4 = func_0x03f597e0(unaff_r8,*puVar2), uVar7 = uStack_2c, iVar4 != 0) {
          iVar4 = *(int *)(param_2 + 0x6c);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          func_0x0364baf8(iVar4,uVar7,*puVar14);
        }
        func_0x03f597dc(&uStack_38,**(undefined4 **)(_UNK_021488c8 + 0x2148050));
      }
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x40);
      uVar17 = func_0x02140d24(param_1);
      uVar7 = *(uint *)(param_1 + 0x44);
      iVar4 = *(int *)(param_1 + 0x6c);
      uVar13 = *(undefined4 *)(param_1 + 0x90);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_2 + 0x44) = uVar13;
      uVar17 = func_0x01458584((uint)uVar17 - uVar7,
                               (int)((ulonglong)uVar17 >> 0x20) -
                               (((int)uVar7 >> 0x1f) + (uint)((uint)uVar17 < uVar7)),1000,0);
      *(undefined8 *)(param_2 + 0x10) = uVar17;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar4 + 0x10)) {
        iVar4 = *(int *)(param_1 + 0x6c);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x02454910(&uStack_b0,iVar4,**(undefined4 **)(_UNK_021488d0 + 0x21480dc));
        uVar7 = 0;
        uVar15 = 0;
        uStack_48 = uStack_b0;
        uStack_44 = uStack_ac;
        uStack_40 = uStack_a8;
        uStack_3c = uStack_a4;
        puVar2 = *(undefined4 **)(_UNK_021488d4 + 0x2148104);
        while (iVar4 = func_0x03f5a2cc(&uStack_48,*puVar2), iVar4 != 0) {
          uVar3 = uStack_3c & 0x3f;
          uVar8 = uVar3 - 0x20;
          uVar5 = 1 << uVar3;
          if (-1 < (int)uVar8) {
            uVar5 = 0;
          }
          uVar7 = uVar5 | uVar7;
          uVar5 = 1 >> (0x20 - uVar3 & 0xff);
          if (-1 < (int)uVar8) {
            uVar5 = 1 << (uVar8 & 0xff);
          }
          uVar15 = uVar5 | uVar15;
        }
        func_0x03f5a2c8(&uStack_48,**(undefined4 **)(_UNK_021488dc + 0x214814c));
        if (iStack_b4 == 0) {
          func_0x01384bf0();
        }
        *(uint *)(param_2 + 0x48) = uVar7;
        *(uint *)(param_2 + 0x4c) = uVar15;
      }
      iVar4 = *(int *)(param_1 + 0x9c);
      iStack_b8 = param_1;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64e30(&uStack_b0,iVar4,**(undefined4 **)(_UNK_021488e4 + 0x2148190));
      uStack_60 = uStack_b0;
      uStack_5c = uStack_ac;
      uStack_58 = uStack_a8;
      uStack_54 = uStack_a4;
      uStack_50 = uStack_a0;
      puVar14 = *(undefined4 **)(_UNK_021488e8 + 0x21481bc);
      puVar2 = *(undefined4 **)(_UNK_021488ec + 0x21481c4);
      while (iVar4 = func_0x03f9b324(&uStack_60,*puVar14), uVar7 = uStack_54, iVar4 != 0) {
        iVar4 = (int)uStack_50;
        iVar12 = *(int *)(iStack_b4 + 0x50);
        iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_021488f4 + 0x21481ec));
        func_0x01797598(iVar6,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x02148a58(iVar4);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar6 + 0x10) = uVar13;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x02148aac(iVar4);
        *(undefined4 *)(iVar6 + 0xc) = uVar13;
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        func_0x03464bac(iVar12,uVar7,iVar6,*puVar2);
      }
      func_0x03f9b464(&uStack_60,**(undefined4 **)(_UNK_021488f8 + 0x214826c));
      iVar4 = *(int *)(iStack_b8 + 0x98);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64e30(&uStack_b0,iVar4,**(undefined4 **)(_UNK_02148900 + 0x214829c));
      uStack_78 = uStack_b0;
      uStack_74 = uStack_ac;
      uStack_70 = uStack_a8;
      uStack_6c = uStack_a4;
      uStack_68 = uStack_a0;
      puVar2 = *(undefined4 **)(_UNK_02148904 + 0x21482c8);
      puVar14 = *(undefined4 **)(_UNK_02148908 + 0x21482d0);
      puVar16 = *(undefined4 **)(_UNK_0214890c + 0x21482d8);
      while (iVar4 = func_0x03f9b324(&uStack_78,*puVar2), uVar7 = uStack_6c, iVar4 != 0) {
        iVar4 = (int)uStack_68;
        uVar13 = func_0x01384be4(*puVar14);
        func_0x01798ae4(uVar13,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x02148b00(iVar4,uVar13);
        iVar4 = *(int *)(iStack_b4 + 0x58);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x03464bac(iVar4,uVar7,uVar13,*puVar16);
      }
      func_0x03f9b464(&uStack_78,**(undefined4 **)(_UNK_02148914 + 0x2148354));
      iVar6 = iStack_b4;
      iVar4 = iStack_b8;
      uVar13 = **(undefined4 **)(_UNK_0214891c + 0x2148368);
      *(int *)(iStack_b8 + 0xa4) = iStack_b4;
      uVar13 = func_0x01384be4(uVar13);
      func_0x03ccb96c(uVar13,iVar4,**(undefined4 **)(_UNK_02148920 + 0x2148390),0);
      func_0x021475dc(iVar4,uVar13,0x7fffffff);
      iVar12 = *(int *)(iVar4 + 0x68);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_b0,iVar12,**(undefined4 **)(_UNK_02148924 + 0x21483d0));
      uStack_88 = uStack_b0;
      uStack_84 = uStack_ac;
      uStack_80 = uStack_a8;
      uStack_7c = uStack_a4;
      puVar2 = *(undefined4 **)(_UNK_02148928 + 0x21483ec);
      puVar14 = *(undefined4 **)(_UNK_0214892c + 0x21483f4);
      while (iVar12 = func_0x03f5f428(&uStack_88,*puVar2), uVar7 = uStack_7c, iVar12 != 0) {
        iVar12 = *(int *)(iVar6 + 0x5c);
        if (uStack_7c == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x0210e5f4(uVar7,0);
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        func_0x0364baf8(iVar12,uVar13,*puVar14);
      }
      func_0x03f5f424(&uStack_88,**(undefined4 **)(_UNK_02148934 + 0x2148454));
      iVar6 = *(int *)(iVar4 + 0x34);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar6 + 0xc);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x03d6476c(iVar6,**(undefined4 **)(_UNK_0214893c + 0x2148488));
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x0382ab5c(&uStack_98,iVar6,**(undefined4 **)(_UNK_02148940 + 0x21484b4));
      puVar2 = *(undefined4 **)(_UNK_02148944 + 0x21484c8);
      while (iVar6 = func_0x03f9b9f8(&uStack_98,*puVar2), iVar6 != 0) {
        if (uStack_8c != 0) {
          func_0x02148de8(iVar4);
        }
      }
      func_0x03f9b9f4(&uStack_98,**(undefined4 **)(_UNK_0214894c + 0x21484fc));
      return;
    }
    iVar4 = func_0x0229f13c(0x5c6c,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2147e08;
    unaff_r4 = iVar4;
    unaff_r9 = param_2;
    unaff_r10 = param_1;
    register0x00000054 = (BADSPACEBASE *)&iStack_b8;
  }
  else {
    iVar4 = func_0x0229f13c(0x6f3b,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r10;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 **)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar6 = *(int *)(iVar4 + 0x10);
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
  if (iVar6 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar6,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar6 = *(int *)(iVar4 + 8);
  uVar13 = *(undefined4 *)(iVar4 + 0xc);
  iVar4 = *(int *)(iVar4 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar10 = 3;
  if (iVar4 == 0) {
    uVar10 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar6,uVar13,(undefined1 *)((int)register0x00000054 + -0x38),uVar10);
  return;
}



// ===== FAT.WishBoardActivity$$GetRandomKey RVA 0x2a989f4 =====

/* WARNING: Possible PIC construction at 0x028c1238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028c123c) */
/* WARNING: Removing unreachable block (ram,0x028c124c) */
/* WARNING: Removing unreachable block (ram,0x028c1250) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02aa89f4(char *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  char *pcVar4;
  uint uVar5;
  undefined1 *unaff_r5;
  undefined4 uVar6;
  char *unaff_r6;
  undefined4 unaff_r7;
  int iVar7;
  int iVar8;
  undefined4 *unaff_r8;
  int *unaff_r9;
  undefined4 *puVar9;
  char *unaff_r10;
  uint unaff_r11;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int *piVar16;
  ulonglong uVar17;
  
  pcVar4 = (char *)(_UNK_02aa8b78 + 0x2aa8a08);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa8b7c + 0x2aa8a1c));
    func_0x01384978(*(undefined4 *)(_UNK_02aa8b80 + 0x2aa8a28));
    func_0x01384978(*(undefined4 *)(_UNK_02aa8b84 + 0x2aa8a34));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6e2f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6e2f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02173e78:
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(undefined4 **)((int)register0x00000054 + -8) = unaff_r8;
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
    *(char **)((int)register0x00000054 + -0x10) = unaff_r6;
    *(undefined1 **)((int)register0x00000054 + -0x14) = unaff_r5;
    *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
    pcVar4 = (char *)(_UNK_02173f74 + 0x2173e94);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
      *pcVar4 = '\x01';
    }
    *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)register0x00000054 + -0x28) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)register0x00000054 + -0x24) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
    func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
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
    func_0x0245495c(iVar2,uVar6,(undefined1 *)((int)register0x00000054 + -0x30),uVar3);
    uVar6 = func_0x02f5db90((undefined1 *)((int)register0x00000054 + -0x30),0,
                            **(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return uVar6;
  }
  iVar1 = FUN_02a9ea20(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar1 + 0x40);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x02450284(0,*(undefined4 *)(iVar2 + 0xc),0);
  puVar9 = *(undefined4 **)(_UNK_02aa8b88 + 0x2aa8ac8);
  while( true ) {
    iVar7 = *(int *)(iVar1 + 0x40);
    iVar2 = *(int *)(param_1 + 0xe4);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x0364c9b8(iVar7,uVar6,*puVar9);
    iVar8 = *(int *)(iVar1 + 0x40);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    if (iVar2 != iVar7) break;
    uVar6 = func_0x02450284(0,*(undefined4 *)(iVar8 + 0xc),0);
  }
  uVar6 = func_0x0364c9b8(iVar8,uVar6,*puVar9);
  *(undefined4 *)(param_1 + 0xe4) = uVar6;
  iVar1 = func_0x0182ec8c(uVar6,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(uint *)(iVar1 + 0x14);
  if (*(int *)(**(int **)(_UNK_02aa8b8c + 0x2aa8b54) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar17 = (ulonglong)uVar5;
SUB_028c1350:
  param_1 = (char *)uVar17;
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(uint *)((int)register0x00000054 + -8) = unaff_r11;
  *(undefined1 **)((int)register0x00000054 + -0xc) = unaff_r5;
  piVar16 = (int *)((int)register0x00000054 + -0x10);
  *piVar16 = unaff_r4;
  pcVar4 = (char *)(_UNK_028c13f0 + 0x28c1364);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c13f4 + 0x28c1378),(int)(uVar17 >> 0x20));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xbb,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_028c13f8 + 0x28c13d0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    unaff_r4 = *piVar16;
    unaff_r11 = *(uint *)((int)register0x00000054 + -8);
    uVar6 = *(undefined4 *)((int)register0x00000054 + -4);
    iVar1 = *(int *)((int)register0x00000054 + -0xc);
    pcVar4 = unaff_r10;
    puVar10 = (undefined1 *)register0x00000054;
    do {
      unaff_r10 = param_1;
      *(undefined4 *)(puVar10 + -4) = uVar6;
      *(char **)(puVar10 + -8) = pcVar4;
      *(int **)(puVar10 + -0xc) = unaff_r9;
      *(undefined4 **)(puVar10 + -0x10) = unaff_r8;
      *(undefined4 *)(puVar10 + -0x14) = unaff_r7;
      *(char **)(puVar10 + -0x18) = unaff_r6;
      *(int *)(puVar10 + -0x1c) = iVar1;
      *(int *)(puVar10 + -0x20) = unaff_r4;
      unaff_r5 = (undefined1 *)0x1;
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
        uVar6 = func_0x02173c38(iVar1,unaff_r10,1,0);
        return uVar6;
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
      iVar2 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
      if (iVar2 == 0) goto LAB_028c125c;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *(int *)(*(int *)(*unaff_r9 + 0x5c) + 8);
        bVar12 = iVar2 == 0;
        bVar11 = true;
        if (bVar12) goto LAB_028c1304;
      }
      iVar1 = *(int *)(iVar2 + 0x18);
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
          uVar6 = func_0x046604e4(**(undefined4 **)(iRam028c134c + 0x28c127c),unaff_r10,0);
          return uVar6;
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
      unaff_r7 = 0;
      unaff_r4 = func_0x04674540(unaff_r10,0x2c,0,0);
      if (unaff_r4 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(unaff_r4 + 0xc) < 1) {
        uVar6 = func_0x04672b68(*unaff_r8,unaff_r4,0);
        iVar1 = *unaff_r9;
        *(undefined4 *)(puVar10 + -0x24) = uVar6;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *unaff_r9;
        }
        iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x10);
        uVar6 = *(undefined4 *)(puVar10 + -0x24);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03e201a8(iVar1,unaff_r10,uVar6,**(undefined4 **)(iRam028c1348 + 0x28c12f0));
LAB_028c12f8:
        return *(undefined4 *)(puVar10 + -0x24);
      }
      if (*(int *)(unaff_r4 + 0xc) == 0) {
        func_0x01384bf4();
      }
      unaff_r6 = *(char **)(unaff_r4 + 0x10);
      if (*(int *)(*unaff_r9 + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar6 = 0x28c123c;
      param_1 = unaff_r6;
      iVar1 = unaff_r4;
      pcVar4 = unaff_r10;
      puVar10 = puVar10 + -0x28;
    } while( true );
  }
  iVar1 = func_0x0229f13c(0xbb,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  unaff_r4 = *piVar16;
  unaff_r5 = *(undefined1 **)((int)register0x00000054 + -0xc);
  unaff_lr = *(undefined4 *)((int)register0x00000054 + -4);
  goto SUB_02173e78;
LAB_028c1304:
  unaff_lr = 0x28c1308;
  uVar17 = func_0x01384bf0();
  bVar14 = bVar11;
  if (bVar12) {
    unaff_r10 = (char *)0x43fa;
    bVar14 = 0x28000000 < unaff_r11 || unaff_r11 + 0xd8000000 < (uint)bVar11;
  }
  bVar12 = bVar12 && unaff_r11 == !bVar11 + 0x28000000;
  bVar11 = bVar14;
  if (bVar12) {
    bVar11 = &__DT_REL[0x5d26].r_info < puVar10 + -0x28 ||
             puVar10 + -0x70028 < (undefined1 *)(uint)bVar14;
  }
  bVar12 = bVar12 && puVar10 + -0x28 == (undefined1 *)(!bVar14 + 0x70000);
  bVar14 = bVar11;
  if (bVar12) {
    bVar14 = 0xc000000 < unaff_r11 || unaff_r11 + 0xf4000000 < (uint)bVar11;
  }
  bVar13 = false;
  bVar15 = bVar14;
  if (bVar12 && unaff_r11 == !bVar11 + 0xc000000) {
    bVar15 = (undefined1 *)0x2b0 < puVar10 + -0x28 || puVar10 + -0x2d8 < (undefined1 *)(uint)bVar14;
    unaff_r5 = puVar10 + (-0x28 - (!bVar14 + 0x2b0));
    bVar13 = unaff_r5 == (undefined1 *)0x0;
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
    bVar11 = 0x90000003 < unaff_r11 || unaff_r11 + 0x6ffffffd < (uint)bVar14;
  }
  bVar12 = bVar12 && unaff_r11 == !bVar14 + 0x90000003;
  bVar14 = bVar11;
  if (bVar12) {
    bVar14 = 0x10000002 < unaff_r11 || unaff_r11 + 0xeffffffe < (uint)bVar11;
  }
  bVar13 = false;
  bVar15 = bVar14;
  if (bVar12 && unaff_r11 == !bVar11 + 0x10000002) {
    bVar15 = puVar10 != (undefined1 *)0x28 || puVar10 + -0x28 < (undefined1 *)(uint)bVar14;
    unaff_r5 = puVar10 + (-0x28 - (uint)!bVar14);
    bVar13 = unaff_r5 == (undefined1 *)0x0;
  }
  bVar12 = bVar15;
  if (bVar13) {
    bVar12 = &UNK_03d00000 < puVar10 + -0x28 || puVar10 + -0x3d00028 < (undefined1 *)(uint)bVar15;
  }
  bVar11 = bVar12;
  if (bVar13 && puVar10 + -0x28 == &UNK_03d00000 + !bVar15) {
    bVar11 = 0x40000009 < unaff_r11 || unaff_r11 + 0xbffffff7 < (uint)bVar12;
  }
  bVar14 = (bVar13 && puVar10 + -0x28 == &UNK_03d00000 + !bVar15) &&
           unaff_r11 == !bVar12 + 0x40000009;
  bVar12 = bVar11;
  if (bVar14) {
    bVar12 = 0x3f < unaff_r11 || unaff_r11 - 0x3f < (uint)bVar11;
  }
  bVar14 = bVar14 && unaff_r11 == !bVar11 + 0x3f;
  bVar11 = bVar12;
  if (bVar14) {
    bVar11 = 0x19 < unaff_r11 || unaff_r11 - 0x19 < (uint)bVar12;
  }
  bVar13 = false;
  bVar15 = bVar11;
  if (bVar14 && unaff_r11 == !bVar12 + 0x19) {
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
    unaff_r11 = unaff_r11 - (!bVar11 + 0x260);
    bVar14 = unaff_r11 == 0;
  }
  register0x00000054 = (BADSPACEBASE *)(puVar10 + -0x28);
  if (bVar14) {
    register0x00000054 = (BADSPACEBASE *)(puVar10 + -0x28);
  }
  goto SUB_028c1350;
}



// ===== FAT.WishBoardActivity$$GetCurProgressNum RVA 0x2a98b90 =====

undefined4 FUN_02aa8b90(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6e5c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6e5c,0);
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
  return *(undefined4 *)(param_1 + 0xc0);
}



// ===== FAT.WishBoardActivity$$GetTokenNum RVA 0x2a98be4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02aa8be4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6e16,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xdc) != 2) {
      return *(undefined4 *)(param_1 + 0xc4);
    }
    param_1 = *(int *)(param_1 + 0xa8);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_02141da8 + 0x2141d30);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02141dac + 0x2141d44),0);
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x2ae,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x68);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      return *(undefined4 *)(iVar1 + 0xc);
    }
    iVar1 = func_0x0229f13c(0x2ae,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6e16,0);
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
  uVar5 = func_0x0245498c(&uStack_30,0,0);
  return uVar5;
}



// ===== FAT.WishBoardActivity$$_GetCurUnlockItemMaxLevel RVA 0x2a98c64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02aa8c64(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
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
  
  pcVar6 = (char *)(_UNK_02aa8d74 + 0x2aa8c78);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa8d78 + 0x2aa8c8c));
    func_0x01384978(*(undefined4 *)(_UNK_02aa8d7c + 0x2aa8c98));
    *pcVar6 = '\x01';
  }
  iVar7 = 0;
  iVar1 = func_0x0229f06c(0x6de5,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (iVar1 != 0) {
      iVar9 = param_1[0x33];
      puVar10 = *(undefined4 **)(_UNK_02aa8d80 + 0x2aa8d1c);
      iVar7 = 0;
      iVar1 = 0;
      while( true ) {
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar9 + 0xc) <= iVar1) break;
        uVar8 = func_0x03259410(iVar9,iVar1,*puVar10);
        iVar2 = func_0x02aa9398(param_1,uVar8);
        iVar3 = iVar1 + 1;
        iVar4 = iVar3;
        if (iVar1 < iVar7) {
          iVar4 = iVar7;
        }
        iVar1 = iVar3;
        if (iVar2 != 0) {
          iVar7 = iVar4;
        }
      }
    }
    return iVar7;
  }
  iVar7 = func_0x0229f13c(0x6de5,0);
  if (iVar7 == 0) {
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
  if (*(int *)(iVar7 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar7 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar1 = *(int *)(iVar7 + 8);
  uVar8 = *(undefined4 *)(iVar7 + 0xc);
  iVar7 = *(int *)(iVar7 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar7 == 0) {
    uVar5 = 1;
  }
  func_0x0245495c(iVar1,uVar8,&uStack_30,uVar5,0,0);
  iVar7 = func_0x0245498c(&uStack_30,0,0);
  return iVar7;
}



// ===== FAT.WishBoardActivity$$CheckMilestoneItemCanUse RVA 0x2a98d84 =====

uint FUN_02aa8d84(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  iVar2 = func_0x0229f06c(0x6e7a,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6e7a,0);
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
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    uVar1 = func_0x0245496c(&uStack_38,0,0);
    return uVar1;
  }
  iVar2 = FUN_02a9c534(param_1);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  return (uint)(*(int *)(iVar2 + 0x1c) == param_2);
}



// ===== FAT.WishBoardActivity$$CoPlaySound RVA 0x2a98e04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02aa8e04(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
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
  
  pcVar5 = (char *)(_UNK_02aa8ec0 + 0x2aa8e20);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa8ec4 + 0x2aa8e34));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6e84,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6e84,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_0217a5a0 + 0x217a4ac);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0217a5a4 + 0x217a4c0),param_1,param_2,0);
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
    func_0x01485258(&uStack_38,param_2,0);
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
    iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0217a5a8 + 0x217a590));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02aa8ec8 + 0x2aa8e9c));
  func_0x04874ed4(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_2;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ===== FAT.WishBoardActivity$$CoDelayReward RVA 0x2a98ecc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02aa8ecc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02aa8f9c + 0x2aa8eec);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa8fa0 + 0x2aa8f04));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6e8b,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02aa8fa4 + 0x2aa8f6c));
    func_0x04874ed4(iVar1,0);
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 0x14) = param_2;
    *(undefined4 *)(iVar1 + 0x18) = param_3;
    *(undefined4 *)(iVar1 + 0x1c) = param_4;
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x6e8b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02249f64(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return iVar1;
}



// ===== FAT.WishBoardActivity.<CoPlaySound>d__129$$.ctor RVA 0x2a98fa8 =====

void FUN_02aa8fa8(int param_1,undefined4 param_2)

{
  func_0x04874ed4(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.WishBoardActivity.<CoDelayReward>d__130$$.ctor RVA 0x2a98fc4 =====

void FUN_02aa8fc4(int param_1,undefined4 param_2)

{
  func_0x04874ed4(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.WishBoardActivity$$FAT.Merge.ISpawnEffectWithTrail.AddTrail RVA 0x2a98fe0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa8fe0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_02aa917c + 0x2aa9000);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa9180 + 0x2aa9014));
    func_0x01384978(*(undefined4 *)(_UNK_02aa9184 + 0x2aa9020));
    func_0x01384978(*(undefined4 *)(_UNK_02aa9188 + 0x2aa902c));
    func_0x01384978(*(undefined4 *)(_UNK_02aa918c + 0x2aa9038));
    func_0x01384978(*(undefined4 *)(_UNK_02aa9190 + 0x2aa9044));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6f3c,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02aa9194 + 0x2aa90a8));
    func_0x04874ed4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar2 = *(undefined4 **)(_UNK_02aa9198 + 0x2aa90d0);
    *(undefined4 *)(iVar1 + 8) = param_2;
    *(int *)(iVar1 + 0xc) = param_1;
    uVar3 = *puVar2;
    *(undefined4 *)(iVar1 + 0x10) = param_3;
    iVar4 = func_0x034aaa34(uVar3);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x01ee906c(iVar4,4,0);
    iVar4 = func_0x034aaa34(**(undefined4 **)(_UNK_02aa919c + 0x2aa9114));
    uVar6 = *(undefined4 *)(param_1 + 0xec);
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02aa91a0 + 0x2aa912c));
    func_0x03ccb96c(uVar5,iVar1,**(undefined4 **)(_UNK_02aa91a4 + 0x2aa9148),0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x0244a2c0(iVar4,uVar6,uVar3,uVar5,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x6f3c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.WishBoardActivity.<>c__DisplayClass132_0$$.ctor RVA 0x2a991a8 =====

void FUN_02aa91a8(void)

{
  return;
}



// ===== FAT.WishBoardActivity$$TrackHandbookRewardClaim RVA 0x2a991b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa91b0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_02aa937c + 0x2aa91cc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa9380 + 0x2aa91e0));
    func_0x01384978(*(undefined4 *)(_UNK_02aa9384 + 0x2aa91ec));
    func_0x01384978(*(undefined4 *)(_UNK_02aa9388 + 0x2aa91f8));
    func_0x01384978(*(undefined4 *)(_UNK_02aa938c + 0x2aa9204));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6f21,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f21,0);
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
  iVar1 = FUN_02aa2e6c(param_1);
  if (iVar1 == 0) {
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
      uVar4 = 0;
      if (*(int *)(param_1 + 0xa8) != 0) {
        iVar3 = func_0x02139cf4(*(int *)(param_1 + 0xa8),0);
        uVar4 = 0;
        if (iVar3 != 0) {
          uStack_1c = 0;
          uStack_20 = 0;
          func_0x03507d38(&uStack_20,*(undefined4 *)(iVar3 + 8),
                          **(undefined4 **)(_UNK_02aa9390 + 0x2aa92dc));
          uVar4 = uStack_1c;
        }
      }
      iVar3 = *(int *)(iVar1 + 0x44);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0364c54c(iVar3,param_2,**(undefined4 **)(_UNK_02aa9394 + 0x2aa9318));
      iVar6 = *(int *)(iVar1 + 0x44);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar6 + 0xc);
      uStack_2c = *(undefined4 *)(param_1 + 0xf0);
      uStack_28 = *(undefined4 *)(iVar1 + 0x10);
      uStack_24 = 0;
      uStack_30 = (uint)(iVar3 + 1 == iVar6);
      uStack_34 = 1;
      uStack_38 = uVar4;
      func_0x0231348c(param_1,iVar3 + 1,iVar6,*(undefined4 *)(param_1 + 0xb8));
    }
  }
  return;
}



// ===== FAT.WishBoardActivity$$IsItemUnlock RVA 0x2a99398 =====

/* WARNING: Possible PIC construction at 0x01cc4568: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cc456c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02aa9398(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  int unaff_r5;
  char *pcVar5;
  undefined4 uVar6;
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_18 [4];
  uint uStack_14;
  
  iVar2 = func_0x0229f06c(0xb59,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar2 + 0x3c);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_01cc45c8 + 0x1cc4504);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01cc45cc + 0x1cc4518),param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_14 = 0;
    iVar2 = func_0x0229f06c(0x2ca,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02451924(iVar2,param_2,&uStack_14,**(undefined4 **)(_UNK_01cc45d0 + 0x1cc4594))
      ;
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = (uint)((uStack_14 & 0xfffffffe) == 2);
      }
      return uVar1;
    }
    iVar2 = func_0x0229f13c(0x2ca,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1cc456c;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar2;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar2 = func_0x0229f13c(0xb59,0);
    if (iVar2 == 0) {
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
  iVar3 = *(int *)(iVar2 + 0x10);
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
  iVar3 = *(int *)(iVar2 + 8);
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar3,uVar6,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
  uVar1 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x38),0,0);
  return uVar1;
}



// ===== FAT.WishBoardActivity$$GetAllItemIdList RVA 0x2a99428 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02aa9428(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb56,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb56,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021a9f78 + 0x21a9e98);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021a9f7c + 0x21a9eac),param_1,0);
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
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021a9f80 + 0x21a9f68));
    return iVar1;
  }
  if (*(int *)(param_1 + 200) != 0) {
    iVar1 = func_0x02bf4c1c(*(int *)(param_1 + 200),0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0xcc);
    }
    return iVar1;
  }
  return *(int *)(param_1 + 0xcc);
}



// ===== FAT.WishBoardActivity$$FAT.IBoardActivityHandbook.CheckIsBoardItem RVA 0x2a9949c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02aa949c(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
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
  
  pcVar7 = (char *)(_UNK_02aa958c + 0x2aa94b4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa9590 + 0x2aa94c8));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x6f42,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6f42,0);
    piVar3 = param_1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
SUB_02179234:
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
    func_0x01485278(&uStack_38,piVar3,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar4,0,0);
    uVar1 = func_0x0245496c(&uStack_38,0,0);
    return uVar1;
  }
  iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if ((param_2 < 1) || (iVar2 == 0)) {
    return 0;
  }
  piVar3 = (int *)param_1[0x32];
  if (piVar3 == (int *)0x0) {
    iVar2 = param_1[0x33];
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    pcVar7 = (char *)(_UNK_02bf6bd0 + 0x2bf6b40);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02bf6bd4 + 0x2bf6b54),param_2,0);
      *pcVar7 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x5c43,0);
    if (iVar2 != 0) {
      iVar2 = func_0x0229f13c(0x5c43,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      goto SUB_02179234;
    }
    iVar2 = piVar3[3];
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = func_0x030fe230(*(undefined4 *)(iVar2 + 8),param_2,0);
    uVar1 = (uint)(iVar2 != -1);
  }
  return uVar1;
}



// ===== FAT.WishBoardActivity$$FAT.IBoardActivityHandbook.OnNewItemUnlock RVA 0x2a99598 =====

void FUN_02aa9598(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x6f43,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (iVar1 == 0) {
      return;
    }
    if (param_1[0x35] != 0) {
      func_0x02befcdc(param_1[0x35],param_1[0x31],0);
    }
    iVar3 = param_1[0x2c];
    iVar1 = FUN_02aa8c64(param_1);
    param_1[0x2c] = iVar1;
    *(bool *)(param_1 + 0x34) = iVar1 != iVar3;
    if ((param_1[0x2a] != 0) && (iVar1 = func_0x02139cf4(param_1[0x2a],0), iVar1 != 0)) {
      func_0x020dc7e4(iVar1,param_1[0x3c],param_1[0x2c],0);
    }
    func_0x02aa96b4(param_1);
    iVar1 = func_0x02aa998c(param_1);
    if (iVar1 != 0) {
      iVar1 = param_1[0x43];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02155388(iVar1,0);
    }
    param_1 = (int *)param_1[0x32];
    if (param_1 == (int *)0x0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x5c45,0);
    if (iVar1 == 0) {
      iVar1 = param_1[0xe];
      *(undefined1 *)(param_1 + 10) = 1;
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02bf6b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
        return;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x5c45,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6f43,0);
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



// ===== FAT.WishBoardActivity$$_CheckCanMoveBoard RVA 0x2a996b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa96b4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_02aa9964 + 0x2aa96cc);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa9968 + 0x2aa96e0));
    func_0x01384978(*(undefined4 *)(_UNK_02aa996c + 0x2aa96ec));
    func_0x01384978(*(undefined4 *)(_UNK_02aa9970 + 0x2aa96f8));
    func_0x01384978(*(undefined4 *)(_UNK_02aa9974 + 0x2aa9704));
    func_0x01384978(*(undefined4 *)(_UNK_02aa9978 + 0x2aa9710));
    *pcVar7 = '\x01';
  }
  uStack_24 = 0;
  iVar1 = func_0x0229f06c(0x6f0e,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02aa997c + 0x2aa9770));
    func_0x04874ed4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = param_1[0x3f];
    *(int **)(iVar1 + 8) = param_1;
    if ((char)iVar3 == '\0') {
      iVar8 = 0;
      param_1[0x40] = 0;
      *(undefined1 *)(param_1 + 0x3d) = 0;
      pcVar6 = *(code **)(*param_1 + 0x108);
      uVar5 = *(undefined4 *)(*param_1 + 0x10c);
      param_1[0x3e] = -1;
      iVar2 = (*pcVar6)(param_1,uVar5);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = param_1[0x2a];
      }
      if (iVar2 != 0 && iVar3 != 0) {
        iVar8 = func_0x02139cf4(iVar3,0);
      }
      *(int *)(iVar1 + 0xc) = iVar8;
      if ((iVar8 != 0) && (iVar3 = func_0x020dd140(iVar8,0), iVar3 == 0)) {
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar3 + 0xc);
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar8 = *(int *)(iVar1 + 0xc);
        iVar3 = *(int *)(iVar3 + 0x4c);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uVar5 = *(undefined4 *)(iVar8 + 8);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar9 = 0;
        iVar3 = func_0x01dbd5a4(iVar3,uVar5,0);
        if (iVar3 != 0) {
          uVar9 = *(undefined4 *)(iVar3 + 0x28);
        }
        *(undefined4 *)(iVar1 + 0x10) = uVar9;
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar8 = func_0x01cab6d4(iVar2,uVar9,0);
        iVar3 = 0;
        if (iVar8 != 0) {
          iVar3 = *(int *)(iVar8 + 0x14);
        }
        if (((iVar8 != 0 && iVar3 != 0) && (-1 < *(int *)(iVar3 + 0xc))) &&
           (iVar3 = func_0x03005740(iVar3,param_1[0x3c] + -1,&uStack_24,
                                    **(undefined4 **)(_UNK_02aa9980 + 0x2aa98bc)), uVar5 = uStack_24
           , iVar3 != 0)) {
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x01cab738(iVar2,uVar5,0);
          if ((iVar3 != 0) &&
             (iVar3 = *(int *)(iVar3 + 0x18), *(int *)(iVar1 + 0x14) = iVar3, 0 < iVar3)) {
            iVar3 = func_0x024508e0(0);
            param_1[0x3e] = iVar3;
            puVar4 = *(undefined4 **)(_UNK_02aa9984 + 0x2aa9924);
            *(undefined1 *)(param_1 + 0x3d) = 1;
            iVar3 = func_0x01384be4(*puVar4);
            func_0x0478dedc(iVar3,iVar1,**(undefined4 **)(_UNK_02aa9988 + 0x2aa9944),0);
            param_1[0x40] = iVar3;
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6f0e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.WishBoardActivity$$IsEnergyMethod RVA 0x2a9998c =====

uint FUN_02aa998c(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x6f1e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6f1e,0);
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
  return (uint)((*(uint *)(param_1 + 0xd8) & 0xfffffffd) == 1);
}



// ===== FAT.WishBoardActivity$$FAT.IBoardActivityHandbook.OnNewItemShow RVA 0x2a999f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa99f0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_02aa9d2c + 0x2aa9a0c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aa9d30 + 0x2aa9a20));
    func_0x01384978(*(undefined4 *)(_UNK_02aa9d34 + 0x2aa9a2c));
    func_0x01384978(*(undefined4 *)(_UNK_02aa9d38 + 0x2aa9a38));
    func_0x01384978(*(undefined4 *)(_UNK_02aa9d3c + 0x2aa9a44));
    func_0x01384978(*(undefined4 *)(_UNK_02aa9d40 + 0x2aa9a50));
    func_0x01384978(*(undefined4 *)(_UNK_02aa9d44 + 0x2aa9a5c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6f44,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f44,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02174108:
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar10,uVar11,&uStack_38,uVar6,0,0);
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if (iVar1 != 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar10 = func_0x02116990(iVar1,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *param_1;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    uVar11 = *(undefined4 *)(iVar10 + 0x10);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_02aa9d48 + 0x2aa9b14)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
          goto LAB_02aa9b60;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_02aa9d48 + 0x2aa9b14),0);
LAB_02aa9b60:
    iVar10 = (*(code *)*puVar3)(param_1,uVar11,puVar3[1]);
    if (iVar10 != 0) {
      if ((char)param_1[0x34] != '\0') {
        if (*(int *)(**(int **)(_UNK_02aa9d4c + 0x2aa9b94) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar10 = func_0x0300d558(**(undefined4 **)(_UNK_02aa9d50 + 0x2aa9bb0));
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x0349eb38(iVar10,iVar1,**(undefined4 **)(_UNK_02aa9d54 + 0x2aa9bd4));
        *(undefined1 *)(param_1 + 0x34) = 0;
      }
      iVar1 = FUN_02a9ea20(param_1);
      iVar10 = param_1[0x33];
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar10 + 0xc);
      iVar10 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
      uVar11 = 0;
      if (iVar1 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = 0;
        if (iVar10 != 0) {
          iVar12 = 0;
          if (0 < iVar2) {
            puVar3 = *(undefined4 **)(_UNK_02aa9d58 + 0x2aa9c4c);
            iVar10 = 0;
            do {
              iVar9 = param_1[0x33];
              if (iVar9 == 0) {
                func_0x01384bf0();
              }
              uVar11 = func_0x03259410(iVar9,iVar10,*puVar3);
              iVar4 = FUN_02aa9398(param_1,uVar11);
              iVar9 = iVar12;
              if (iVar4 != 0) {
                iVar9 = iVar10;
              }
              iVar4 = iVar10 + 1;
              if (iVar12 < iVar10) {
                iVar12 = iVar9;
              }
              iVar10 = iVar4;
            } while (iVar2 != iVar4);
          }
          uVar11 = *(undefined4 *)(iVar1 + 0x24);
        }
      }
      iVar1 = param_1[0x2a];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02139cf4(iVar1,0);
      uStack_34 = 0;
      if (iVar1 != 0) {
        uStack_34 = *(undefined4 *)(iVar1 + 8);
      }
      iStack_30 = param_1[0x3c];
      uStack_38 = (uint)(iVar12 + 1 == iVar2);
      uStack_2c = 0;
      func_0x019ba76c(param_1,iVar12 + 1,iVar2,uVar11);
    }
    param_1 = (int *)param_1[0x32];
    if (param_1 != (int *)0x0) {
      iVar1 = func_0x0229f06c(0x5c48,0,0);
      if (iVar1 == 0) {
        iVar1 = param_1[0xf];
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
      goto SUB_02174108;
    }
  }
  return;
}



// ===== FAT.WishBoardActivity$$CheckClaimBoardCategoryReward RVA 0x2a99d5c =====

/* WARNING: Possible PIC construction at 0x02bf69e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02bf69e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02aa9d5c(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  int unaff_r5;
  undefined4 uVar5;
  int unaff_r6;
  char *pcVar6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_18 [7];
  char cStack_11;
  
  iVar2 = func_0x0229f06c(0x6f45,0);
  if (iVar2 == 0) {
    iVar2 = FUN_02aa2e6c(param_1);
    if ((iVar2 != 0) || (param_1 = *(int *)(param_1 + 200), param_1 == 0)) {
      return 0;
    }
    pcVar6 = (char *)(_UNK_02bf6a28 + 0x2bf697c);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02bf6a2c + 0x2bf6990),param_2,0);
      *pcVar6 = '\x01';
    }
    cStack_11 = '\0';
    iVar2 = func_0x0229f06c(0x5c4a,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x03d50be8(iVar2,param_2,&cStack_11,**(undefined4 **)(_UNK_02bf6a30 + 0x2bf6a0c));
      return (uint)(cStack_11 == '\0');
    }
    iVar2 = func_0x0229f13c(0x5c4a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2bf69e4;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar2;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar2 = func_0x0229f13c(0x6f45,0);
    if (iVar2 == 0) {
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
  iVar3 = *(int *)(iVar2 + 0x10);
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
  iVar3 = *(int *)(iVar2 + 8);
  uVar5 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar3,uVar5,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
  uVar1 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x38),0,0);
  return uVar1;
}



// ===== FAT.WishBoardActivity$$CheckClaimBoardHandBookAllReward RVA 0x2a99de4 =====

/* WARNING: Possible PIC construction at 0x02bf67ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02bf67b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02aa9de4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  char *pcVar5;
  int unaff_r5;
  undefined4 uVar6;
  undefined4 unaff_r6;
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
  
  iVar1 = func_0x0229f06c(0x6f46,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02aa2e6c(param_1);
    if ((iVar1 != 0) || (param_1 = *(int *)(param_1 + 200), param_1 == 0)) {
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
    iVar1 = func_0x0229f13c(0x6f46,0);
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



// ===== FAT.WishBoardActivity$$ProcessAllUnlockReward RVA 0x2a99e60 =====

/* WARNING: Removing unreachable block (ram,0x02bf91a0) */
/* WARNING: Removing unreachable block (ram,0x02bf91b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02aa9e60(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x6f47,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (((iVar1 == 0) || (iVar1 = FUN_02aa2e6c(param_1), iVar1 != 0)) ||
       (param_1 = (int *)param_1[0x32], param_1 == (int *)0x0)) {
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
    iVar1 = func_0x0229f13c(0x6f47,0);
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



// ===== FAT.WishBoardActivity$$FAT.IBoardActivityRowConf.GetRowConfIdList RVA 0x2a99ef8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02aa9ef8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
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
  
  iVar1 = func_0x0229f06c(0x6f48,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f48,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_02235f34 + 0x2235e40);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02235f38 + 0x2235e54),param_1,param_2,0);
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
    uVar4 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02235f3c + 0x2235f24));
    return uVar4;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 0;
  iVar1 = func_0x01cab6d4(iVar1,param_2,0);
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(iVar1 + 0x14);
  }
  return uVar4;
}



// ===== FAT.WishBoardActivity$$FAT.IBoardActivityRowConf.GetRowConfStr RVA 0x2a99f98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02aa9f98(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
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
  
  pcVar5 = (char *)(_UNK_02aaa070 + 0x2aa9fb0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aaa074 + 0x2aa9fc4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6f49,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f49,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_02198f18 + 0x2198e24);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02198f1c + 0x2198e38),param_1,param_2,0);
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
    iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02198f20 + 0x2198f08));
    return iVar1;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = 0;
  iVar1 = func_0x01cab738(iVar1,param_2,0);
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0x14);
  }
  iVar1 = **(int **)(_UNK_02aaa078 + 0x2aaa068);
  if (iVar3 != 0) {
    iVar1 = iVar3;
  }
  return iVar1;
}



// ===== FAT.WishBoardActivity$$FAT.IBoardActivityRowConf.GetCycleStartRowId RVA 0x2a9a07c =====

undefined4 FUN_02aaa07c(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x6f4a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f4a,0);
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
    uVar4 = func_0x0245498c(&uStack_38,0,0);
    return uVar4;
  }
  return 0;
}



// ===== FAT.WishBoardActivity$$get_CurDepthIndex RVA 0x2a9a0d8 =====

undefined4 FUN_02aaa0d8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6f4b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f4b,0);
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
  return *(undefined4 *)(param_1 + 0xf0);
}



// ===== FAT.WishBoardActivity$$_OnBoardItemChange RVA 0x2a9a12c =====

void FUN_02aaa12c(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
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
  
  iVar2 = func_0x0229f06c(0x6f0d,0);
  if (iVar2 == 0) {
    FUN_02aa96b4(param_1);
    iVar2 = func_0x0229f06c(0x6ea2,0);
    if (iVar2 == 0) {
      if (*(char *)(param_1 + 0xfc) != '\0') {
        return;
      }
      cVar1 = *(char *)(param_1 + 0xf4);
      bVar6 = cVar1 == '\0';
      if (bVar6) {
        cVar1 = *(char *)(param_1 + 0x108);
      }
      if (!bVar6 || cVar1 != '\0') {
        return;
      }
      iVar2 = func_0x02aaa21c(param_1);
      if (iVar2 != 0) {
        *(undefined1 *)(param_1 + 0x108) = 1;
        *(undefined4 *)(param_1 + 0x104) = 0;
      }
      return;
    }
    iVar2 = func_0x0229f13c(0x6ea2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x6f0d,0);
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
  return;
}



// ===== FAT.WishBoardActivity$$CheckBoardExtremeCase RVA 0x2a9a18c =====

void FUN_02aaa18c(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
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
  
  iVar2 = func_0x0229f06c(0x6ea2,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6ea2,0);
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
    return;
  }
  if (*(char *)(param_1 + 0xfc) == '\0') {
    cVar1 = *(char *)(param_1 + 0xf4);
    bVar6 = cVar1 == '\0';
    if (bVar6) {
      cVar1 = *(char *)(param_1 + 0x108);
    }
    if (bVar6 && cVar1 == '\0') {
      iVar2 = func_0x02aaa21c(param_1);
      if (iVar2 != 0) {
        *(undefined1 *)(param_1 + 0x108) = 1;
        *(undefined4 *)(param_1 + 0x104) = 0;
      }
      return;
    }
    return;
  }
  return;
}



// ===== FAT.WishBoardActivity$$_CheckHasExtremeCase RVA 0x2a9a21c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02aaa21c(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_02aaa36c + 0x2aaa230);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aaa370 + 0x2aaa244));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x6ea3,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6ea3,0);
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
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3,0,0);
    uVar1 = func_0x0245496c(&uStack_30,0,0);
    return uVar1;
  }
  iVar4 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  iVar2 = 0;
  if (iVar4 != 0) {
    iVar2 = param_1[0x2a];
  }
  if ((((iVar4 != 0 && iVar2 != 0) && (iVar2 = func_0x02139cf4(iVar2,0), iVar2 != 0)) &&
      (iVar4 = func_0x020ece38(iVar2,0), iVar4 == 0)) &&
     (iVar2 = func_0x020eccb8(iVar2,0), iVar2 == 0)) {
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_02aaa374 + 0x2aaa300));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01ddc2c0(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
      func_0x01e267a0(0,1,0);
      func_0x01384bf0();
    }
    else {
      func_0x01e267a0(iVar2,1,0);
    }
    uVar1 = func_0x01e241b4(iVar2,0);
    return uVar1 ^ 1;
  }
  return 0;
}



// ===== FAT.WishBoardActivity.<>c__DisplayClass161_0$$.ctor RVA 0x2a9a378 =====

void FUN_02aaa378(void)

{
  return;
}



// ===== FAT.WishBoardActivity$$FAT.IActivityUpdate.ActivityUpdate RVA 0x2a9a380 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aaa380(int param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
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
  
  pcVar5 = (char *)(_UNK_02aaa4c0 + 0x2aaa39c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aaa4c4 + 0x2aaa3b0));
    func_0x01384978(*(undefined4 *)(_UNK_02aaa4c8 + 0x2aaa3bc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6f4c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f4c,0);
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
    func_0x01485258(&uStack_38,param_2,0);
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
  iVar1 = *(int *)(param_1 + 0xf8);
  if ((iVar1 != -1) && (iVar3 = func_0x024508e0(0), iVar1 != iVar3)) {
    if (*(int *)(**(int **)(_UNK_02aaa4cc + 0x2aaa43c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02aaa4d0 + 0x2aaa458));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x028c3fd8(iVar1,0);
    *(undefined4 *)(param_1 + 0xf8) = 0xffffffff;
  }
  if (*(char *)(param_1 + 0x108) != '\0') {
    param_2 = *(float *)(param_1 + 0x104) + param_2;
    *(float *)(param_1 + 0x104) = param_2;
    if (1.0 < param_2) {
      func_0x02aaa4d4(param_1);
      *(undefined1 *)(param_1 + 0x108) = 0;
    }
  }
  return;
}



// ===== FAT.WishBoardActivity$$_ExecuteExtremeCase RVA 0x2a9a4d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aaa4d4(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_02aaa810 + 0x2aaa4ec);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aaa814 + 0x2aaa500));
    func_0x01384978(*(undefined4 *)(_UNK_02aaa818 + 0x2aaa50c));
    func_0x01384978(*(undefined4 *)(_UNK_02aaa81c + 0x2aaa518));
    func_0x01384978(*(undefined4 *)(_UNK_02aaa820 + 0x2aaa524));
    func_0x01384978(*(undefined4 *)(_UNK_02aaa824 + 0x2aaa530));
    func_0x01384978(*(undefined4 *)(_UNK_02aaa828 + 0x2aaa53c));
    *pcVar4 = '\x01';
  }
  uVar6 = 0;
  iVar1 = func_0x0229f06c(0x6f4d,0);
  if (iVar1 == 0) {
    iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02aaa82c + 0x2aaa59c));
    func_0x04874ed4(iVar5,0);
    iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = param_1[0x2a];
    }
    if (iVar2 != 0 && iVar1 != 0) {
      uVar6 = func_0x02139cf4(iVar1,0);
    }
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar5 + 8) = uVar6;
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    if ((*(int *)(iVar5 + 8) != 0) && (iVar1 = FUN_02aaa21c(param_1), iVar1 != 0)) {
      if (*(int *)(**(int **)(_UNK_02aaa830 + 0x2aaa614) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02aaa834 + 0x2aaa630));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x028c3fd8(iVar1,0);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar1 + 0x10);
      iVar7 = **(int **)(_UNK_02aaa838 + 0x2aaa674);
      iVar1 = *(int *)(iVar7 + 0x1c);
      if (iVar1 == 0) {
        func_0x0140024c(iVar7);
        iVar1 = *(int *)(iVar7 + 0x1c);
      }
      iVar1 = *(int *)(iVar1 + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0();
      }
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0();
      }
      uVar6 = **(undefined4 **)(iVar1 + 0x5c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01ca1c50(iVar2,0x47,uVar6,0);
      iVar1 = *(int *)(iVar5 + 8);
      uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02aaa83c + 0x2aaa704));
      func_0x03ccb96c(uVar6,iVar5,**(undefined4 **)(_UNK_02aaa840 + 0x2aaa720),0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar8 = 0;
      func_0x020dba14(iVar1,uVar6,0);
      iVar1 = *(int *)(iVar5 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x020da680(&iStack_30,iVar1,0);
      do {
        if (0 < iStack_30) {
          iVar1 = 0;
          do {
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar5 + 8);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x020e81ec(iVar2,iVar1,~uVar8 + iStack_2c,0);
            if (iVar2 != 0) {
              iVar7 = *(int *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              func_0x020df438(iVar7,iVar2,1,0);
            }
            iVar1 = iVar1 + 1;
          } while (iStack_30 != iVar1);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != 2);
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x6f4d,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_30 = 0;
  func_0x0245494c(&iStack_48,0,0);
  iStack_30 = iStack_48;
  iStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&iStack_30,param_1,0);
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
  func_0x0245495c(iVar5,uVar6,&iStack_30,uVar3,0,0);
  return;
}



// ===== FAT.WishBoardActivity$$StartMoveUpBoard RVA 0x2a9a844 =====

void FUN_02aaa844(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6eba,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6eba,0);
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
  if (*(char *)(param_1 + 0xf4) != '\0') {
    *(undefined1 *)(param_1 + 0xfc) = 1;
    iVar1 = *(int *)(param_1 + 0x100);
    *(undefined1 *)(param_1 + 0xf4) = 0;
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    }
    *(undefined1 *)(param_1 + 0xfc) = 0;
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  return;
}



// ===== FAT.WishBoardActivity$$_MoveDownBoard RVA 0x2a9a8d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aaa8d4(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_02aaaca4 + 0x2aaa8f4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aaaca8 + 0x2aaa90c));
    func_0x01384978(*(undefined4 *)(_UNK_02aaacac + 0x2aaa918));
    func_0x01384978(*(undefined4 *)(_UNK_02aaacb0 + 0x2aaa924));
    func_0x01384978(*(undefined4 *)(_UNK_02aaacb4 + 0x2aaa930));
    func_0x01384978(*(undefined4 *)(_UNK_02aaacb8 + 0x2aaa93c));
    func_0x01384978(*(undefined4 *)(_UNK_02aaacbc + 0x2aaa948));
    func_0x01384978(*(undefined4 *)(_UNK_02aaacc0 + 0x2aaa954));
    func_0x01384978(*(undefined4 *)(_UNK_02aaacc4 + 0x2aaa960));
    func_0x01384978(*(undefined4 *)(_UNK_02aaacc8 + 0x2aaa96c));
    *pcVar4 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x6f11,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02aaaccc + 0x2aaa9fc));
    func_0x0328e950(uVar2,**(undefined4 **)(_UNK_02aaacd0 + 0x2aaaa14));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbfdac(iVar1,param_2,param_3,uVar2,0,0,0);
    piVar6 = *(int **)(_UNK_02aaacd4 + 0x2aaaa58);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0300d558(**(undefined4 **)(_UNK_02aaacd8 + 0x2aaaa74));
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x034a1f3c(iVar3,uVar2,param_3,**(undefined4 **)(_UNK_02aaacdc + 0x2aaaa9c));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dc00d8(iVar1,param_2,param_3 + 1,0);
    piVar5 = *(int **)(_UNK_02aaace0 + 0x2aaaad0);
    iVar3 = *piVar5;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar5;
    }
    iVar3 = **(int **)(iVar3 + 0x5c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_30,iVar3,&uStack_28,**(undefined4 **)(_UNK_02aaace4 + 0x2aaab0c));
    iVar3 = func_0x02c04a3c(param_1,param_4,uStack_28,*(undefined4 *)(param_1 + 0xf0),param_3,0);
    uVar2 = uStack_28;
    if (iVar3 != 0) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01dc0340(iVar1,param_2,uVar2,param_3,0);
    }
    func_0x028c98a0(&uStack_30,0);
    uVar2 = *(undefined4 *)(param_1 + 0xb0);
    iVar1 = *(int *)(param_1 + 0xf0) + param_3;
    *(int *)(param_1 + 0xf0) = iVar1;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x020dc7e4(param_2,iVar1,uVar2,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e2d040(iVar1,1,0);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02aaace8 + 0x2aaabfc));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349e110(iVar1,param_3,**(undefined4 **)(_UNK_02aaacec + 0x2aaac20));
  }
  else {
    iVar1 = func_0x0229f13c(0x6f11,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217fd9c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.WishBoardActivity.<>c__DisplayClass166_0$$.ctor RVA 0x2a9acf0 =====

void FUN_02aaacf0(void)

{
  return;
}



// ===== FAT.WishBoardActivity$$GetCurDropConf RVA 0x2a9ad20 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02aaad20(undefined4 param_1)

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
  
  iVar2 = func_0x0229f06c(0x6f50,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6f50,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_0224a814 + 0x224a734);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0224a818 + 0x224a748),param_1,0);
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
    uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0224a81c + 0x224a804));
    return uVar9;
  }
  uVar9 = func_0x02aaadb4(param_1);
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = func_0x0229f06c(0x6e4b,0,0);
  if (iVar7 == 0) {
    pcVar8 = (char *)(_UNK_0182dec8 + 0x182de6c);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0182decc + 0x182de80),0);
      func_0x01384978(*(undefined4 *)(_UNK_0182ded0 + 0x182de8c));
      *pcVar8 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_0182ded4 + 0x182dea0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = **(int **)(_UNK_0182ded8 + 0x182debc);
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
  iVar7 = func_0x0229f13c(0x6e4b,0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  pcVar8 = (char *)(_UNK_02249c24 + 0x2249b30);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02249c28 + 0x2249b44),iVar2,uVar9,0);
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
  uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02249c2c + 0x2249c14));
  return uVar9;
}



// ===== FAT.WishBoardActivity$$_GetCurDropConfId RVA 0x2a9adb4 =====

/* WARNING: Removing unreachable block (ram,0x03003dbc) */
/* WARNING: Removing unreachable block (ram,0x03003dd0) */
/* WARNING: Removing unreachable block (ram,0x03003ddc) */
/* WARNING: Removing unreachable block (ram,0x03003dec) */
/* WARNING: Removing unreachable block (ram,0x03003df4) */
/* WARNING: Removing unreachable block (ram,0x03003e00) */
/* WARNING: Removing unreachable block (ram,0x03003cb0) */
/* WARNING: Removing unreachable block (ram,0x03003cb8) */
/* WARNING: Removing unreachable block (ram,0x03003d60) */
/* WARNING: Removing unreachable block (ram,0x03003d74) */
/* WARNING: Removing unreachable block (ram,0x03003d80) */
/* WARNING: Removing unreachable block (ram,0x03003d90) */
/* WARNING: Removing unreachable block (ram,0x03003d98) */
/* WARNING: Removing unreachable block (ram,0x03003e1c) */
/* WARNING: Removing unreachable block (ram,0x03003da4) */
/* WARNING: Removing unreachable block (ram,0x03003db0) */
/* WARNING: Removing unreachable block (ram,0x03003e0c) */
/* WARNING: Removing unreachable block (ram,0x03003e28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02aaadb4(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
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
  
  pcVar10 = (char *)(_UNK_02aaae60 + 0x2aaadc8);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aaae64 + 0x2aaaddc));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6f51,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f51,0);
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
    iVar9 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar9,uVar11,&uStack_30,uVar7,0,0);
    uVar11 = func_0x0245498c(&uStack_30,0,0);
    return uVar11;
  }
  iVar1 = FUN_02a9ea20(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = *(int **)(iVar1 + 0x28);
  iVar9 = **(int **)(_UNK_02aaae68 + 0x2aaae48);
  iVar1 = *(int *)(param_1 + 0xb0);
  if (*(int *)(iVar9 + 0x1c) == 0) {
    func_0x0140024c(iVar9);
  }
  if (piVar2 != (int *)0x0) {
    iVar5 = *(int *)(*(int *)(iVar9 + 0x1c) + 4);
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = func_0x014001f0(iVar5);
    }
    iVar3 = *piVar2;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar5) {
          puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
          goto LAB_03003c20;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar5,0);
LAB_03003c20:
    iVar5 = (*(code *)*puVar4)(piVar2,puVar4[1]);
    if (iVar5 != 0) {
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(iVar9 + 0x1c) + 4);
        if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
          iVar5 = func_0x014001f0(iVar5);
        }
        iVar3 = *piVar2;
        uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar8[-1] == iVar5) {
              puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
              goto LAB_03003cc8;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar5,0);
LAB_03003cc8:
        iVar5 = (*(code *)*puVar4)(piVar2,puVar4[1]);
        if (iVar5 <= iVar1) {
          iVar1 = *(int *)(*(int *)(iVar9 + 0x1c) + 4);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x014001f0(iVar1);
          }
          iVar5 = *piVar2;
          uVar6 = (uint)*(ushort *)(iVar5 + 0xb6);
          if (uVar6 != 0) {
            piVar8 = (int *)(*(int *)(iVar5 + 0x58) + 4);
            do {
              if (piVar8[-1] == iVar1) {
                puVar4 = (undefined4 *)(iVar5 + *piVar8 * 8 + 0xc0);
                goto LAB_03003e58;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar1,0);
LAB_03003e58:
          iVar1 = (*(code *)*puVar4)(piVar2,puVar4[1]);
          iVar1 = iVar1 + -1;
        }
      }
      iVar9 = **(int **)(iVar9 + 0x1c);
      if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = func_0x014001f0(iVar9);
      }
      iVar5 = *piVar2;
      uVar6 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar9) {
            puVar4 = (undefined4 *)(iVar5 + *piVar8 * 8 + 0xc0);
            goto LAB_03003ed8;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar9,0);
LAB_03003ed8:
                    /* WARNING: Could not recover jumptable at 0x03003eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar11 = (*(code *)*puVar4)(piVar2,iVar1,puVar4[1]);
      return uVar11;
    }
  }
  return 0;
}



// ===== FAT.WishBoardActivity$$TryAddToken RVA 0x2a9ae6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aaae6c(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  bool bVar5;
  
  pcVar3 = (char *)(_UNK_02aaafc0 + 0x2aaae8c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aaafc4 + 0x2aaaea4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x623,0);
  if (iVar1 == 0) {
    iVar2 = FUN_02a9ea20(param_1);
    iVar1 = param_3;
    if (0 < param_3) {
      iVar1 = param_2;
    }
    if ((0 < iVar1) && (iVar2 != 0)) {
      bVar5 = *(int *)(param_1 + 0xdc) == 1;
      if (bVar5) {
        iVar2 = *(int *)(iVar2 + 0x5c);
      }
      if ((bVar5 && iVar2 == param_2) && (iVar1 = func_0x02aaafcc(param_1,1,param_3), iVar1 != 0)) {
        piVar4 = *(int **)(_UNK_02aaafc8 + 0x2aaaf58);
        iVar1 = *piVar4;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar4;
        }
        if (param_4 != *(int *)(*(int *)(iVar1 + 0x5c) + 700)) {
          iVar2 = FUN_02aa5cd0(param_1);
          iVar1 = 0;
          if (iVar2 != 0) {
            iVar1 = *(int *)(param_1 + 0xe0);
          }
          if (iVar2 != 0 && iVar1 != 0) {
            func_0x02af96e4(iVar1,*(undefined4 *)(param_1 + 0xc4),0);
          }
          func_0x019a4b9c(param_2,param_3,*(undefined4 *)(param_1 + 0xc4),param_4,0);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x623,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179974(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.WishBoardActivity$$ChangeItemToken RVA 0x2a9afcc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02aaafcc(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  
  pcVar5 = (char *)(_UNK_02aab22c + 0x2aaafec);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aab230 + 0x2aab000));
    func_0x01384978(*(undefined4 *)(_UNK_02aab234 + 0x2aab00c));
    func_0x01384978(*(undefined4 *)(_UNK_02aab238 + 0x2aab018));
    func_0x01384978(*(undefined4 *)(_UNK_02aab23c + 0x2aab024));
    *pcVar5 = '\x01';
  }
  uVar6 = 0;
  iVar1 = func_0x0229f06c(0x628,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02a9ea20(param_1);
    if (iVar1 != 0) {
      if ((param_3 < 1) || (param_2 == 0)) {
        if (param_2 != 0) {
          return 0;
        }
        if (*(int *)(param_1 + 0xc4) < param_3) {
          uVar6 = *(undefined4 *)(iVar1 + 0x5c);
          if (*(int *)(**(int **)(_UNK_02aab24c + 0x2aab130) + 0x74) == 0) {
            func_0x01384ab4(**(int **)(_UNK_02aab24c + 0x2aab130));
          }
          iVar1 = func_0x02085f3c(uVar6,0);
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x10);
          piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02aab250 + 0x2aab180),1);
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          if ((iVar1 != 0) &&
             (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)) {
            uVar6 = func_0x01384c10();
            func_0x01384aa0(uVar6,0);
          }
          if (piVar3[3] == 0) {
            func_0x01384bf4();
          }
          piVar3[4] = iVar1;
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x01ca1c50(iVar2,0x49,piVar3,0);
          return 0;
        }
        piVar3 = *(int **)(_UNK_02aab248 + 0x2aab218);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) - param_3;
        iVar1 = *(int *)(*piVar3 + 0x74);
      }
      else {
        param_3 = *(int *)(param_1 + 0xc4) + param_3;
        *(int *)(param_1 + 0xc4) = param_3;
        if (*(int *)(param_1 + 0xd4) != 0) {
          func_0x02befcdc(*(int *)(param_1 + 0xd4),param_3,0);
        }
        iVar1 = *(int *)(**(int **)(_UNK_02aab240 + 0x2aab0cc) + 0x74);
      }
      if (iVar1 == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02aab244 + 0x2aab0e8));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x028c3fd8(iVar1,0);
      uVar6 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x628,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x0218ebd4(iVar1,param_1,param_2,param_3,0);
  }
  return uVar6;
}



// ===== FAT.WishBoardActivity$$TryUseToken RVA 0x2a9b254 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02aab254(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_02aab34c + 0x2aab274);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aab350 + 0x2aab28c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6e49,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02a9ea20(param_1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      piVar4 = *(int **)(_UNK_02aab354 + 0x2aab304);
      uVar2 = *(undefined4 *)(iVar1 + 0x5c);
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar4;
      }
      uVar2 = func_0x02aab358(param_1,uVar2,1,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x2c8),
                              param_2,param_3,param_4);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6e49,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021ed9d4(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.WishBoardActivity$$_TryUseToken RVA 0x2a9b358 =====

/* WARNING: Removing unreachable block (ram,0x02aab9e8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02aab358(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  float fVar11;
  int extraout_r2;
  uint uVar12;
  int *piVar13;
  char *pcVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint in_fpscr;
  float fVar19;
  int iStack_74;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  int aiStack_4c [5];
  
  pcVar14 = (char *)(_UNK_02aac158 + 0x2aab384);
  if (*pcVar14 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aac15c + 0x2aab398));
    func_0x01384978(*(undefined4 *)(_UNK_02aac160 + 0x2aab3a4));
    func_0x01384978(*(undefined4 *)(_UNK_02aac164 + 0x2aab3b0));
    func_0x01384978(*(undefined4 *)(_UNK_02aac168 + 0x2aab3bc));
    func_0x01384978(*(undefined4 *)(_UNK_02aac16c + 0x2aab3c8));
    func_0x01384978(*(undefined4 *)(_UNK_02aac170 + 0x2aab3d4));
    func_0x01384978(*(undefined4 *)(_UNK_02aac174 + 0x2aab3e0));
    func_0x01384978(*(undefined4 *)(_UNK_02aac178 + 0x2aab3ec));
    func_0x01384978(*(undefined4 *)(_UNK_02aac17c + 0x2aab3f8));
    func_0x01384978(*(undefined4 *)(_UNK_02aac180 + 0x2aab404));
    func_0x01384978(*(undefined4 *)(_UNK_02aac184 + 0x2aab410));
    func_0x01384978(*(undefined4 *)(_UNK_02aac188 + 0x2aab41c));
    func_0x01384978(*(undefined4 *)(_UNK_02aac18c + 0x2aab428));
    func_0x01384978(*(undefined4 *)(_UNK_02aac190 + 0x2aab434));
    func_0x01384978(*(undefined4 *)(_UNK_02aac194 + 0x2aab440));
    func_0x01384978(*(undefined4 *)(_UNK_02aac198 + 0x2aab44c));
    func_0x01384978(*(undefined4 *)(_UNK_02aac19c + 0x2aab458));
    func_0x01384978(*(undefined4 *)(_UNK_02aac1a0 + 0x2aab464));
    func_0x01384978(*(undefined4 *)(_UNK_02aac1a4 + 0x2aab470));
    func_0x01384978(*(undefined4 *)(_UNK_02aac1a8 + 0x2aab47c));
    func_0x01384978(*(undefined4 *)(_UNK_02aac1ac + 0x2aab488));
    func_0x01384978(*(undefined4 *)(_UNK_02aac1b0 + 0x2aab494));
    func_0x01384978(*(undefined4 *)(_UNK_02aac1b4 + 0x2aab4a0));
    func_0x01384978(*(undefined4 *)(_UNK_02aac1b8 + 0x2aab4ac));
    func_0x01384978(*(undefined4 *)(_UNK_02aac1bc + 0x2aab4b8));
    func_0x01384978(*(undefined4 *)(_UNK_02aac1c0 + 0x2aab4c4));
    func_0x01384978(*(undefined4 *)(_UNK_02aac1c4 + 0x2aab4d0));
    func_0x01384978(*(undefined4 *)(_UNK_02aac1c8 + 0x2aab4dc));
    *pcVar14 = '\x01';
  }
  iVar15 = 0;
  aiStack_4c[4] = 0;
  aiStack_4c[3] = 0;
  aiStack_4c[2] = 0;
  aiStack_4c[1] = 0;
  aiStack_4c[0] = 0;
  uStack_50 = 0;
  iVar4 = func_0x0229f06c(0x6e4a,0);
  if (iVar4 == 0) {
    iVar4 = FUN_02a9ea20(param_1);
    if (iVar4 != 0) {
      iVar5 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
      iVar6 = 0;
      if (iVar5 != 0) {
        iVar6 = param_1[0x2a];
      }
      if (iVar5 != 0 && iVar6 != 0) {
        iVar15 = 0;
        iVar6 = func_0x02139cf4(iVar6,0);
        if (iVar6 != 0) {
          iVar5 = param_3;
          iVar2 = extraout_r2;
          if (0 < param_3) {
            iVar5 = param_2;
            iVar2 = param_2;
          }
          if (0 < iVar5) {
            iVar5 = iVar6;
            if (param_1[0x37] == 1) {
              iVar5 = *(int *)(iVar4 + 0x5c);
              iStack_74 = iVar6;
            }
            if (param_1[0x37] == 1 && iVar5 == iVar2) {
              iVar15 = func_0x020ece38(iStack_74,0);
              if (iVar15 == 0) {
                iVar15 = func_0x01c24918(0);
                if (iVar15 == 0) {
                  func_0x01384bf0();
                }
                iVar4 = *(int *)(iVar15 + 0x10);
                iVar6 = **(int **)(_UNK_02aac1cc + 0x2aab8a4);
                iVar15 = *(int *)(iVar6 + 0x1c);
                if (iVar15 == 0) {
                  func_0x0140024c(iVar6);
                  iVar15 = *(int *)(iVar6 + 0x1c);
                }
                iVar15 = *(int *)(iVar15 + 8);
                if ((*(ushort *)(iVar15 + 0xbd) & 1) == 0) {
                  iVar15 = func_0x014001f0();
                }
                if (*(int *)(iVar15 + 0x74) == 0) {
                  func_0x01384ab4();
                }
                iVar15 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
                if ((*(ushort *)(iVar15 + 0xbd) & 1) == 0) {
                  iVar15 = func_0x014001f0();
                }
                uVar7 = **(undefined4 **)(iVar15 + 0x5c);
                if (iVar4 == 0) {
                  func_0x01384bf0();
                }
                func_0x01ca1c50(iVar4,0x14,uVar7,0);
                iVar15 = func_0x01c24918(0);
                if (iVar15 == 0) {
                  func_0x01384bf0();
                }
                iVar4 = *(int *)(iVar15 + 8);
                if (iVar4 == 0) {
                  func_0x01384bf0();
                }
                iVar15 = 0;
                func_0x01bf3284(iVar4,**(undefined4 **)(_UNK_02aac1d0 + 0x2aab960),0);
              }
              else {
                uVar7 = func_0x03003b84(*(undefined4 *)(iVar4 + 0x54),param_1[0x2c],1,
                                        **(undefined4 **)(_UNK_02aac1d4 + 0x2aab614));
                iVar15 = func_0x01c24918(0);
                if (iVar15 == 0) {
                  func_0x01384bf0();
                }
                iVar6 = *(int *)(iVar15 + 0xc);
                if (iVar6 == 0) {
                  func_0x01384bf0();
                }
                iVar15 = 0;
                iVar6 = func_0x01cab800(iVar6,uVar7,0);
                if (iVar6 != 0) {
                  iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02aac1d8 + 0x2aab67c));
                  func_0x0443c630(iVar5,**(undefined4 **)(_UNK_02aac1dc + 0x2aab68c));
                  iVar15 = *(int *)(iVar6 + 0x1c);
                  if (iVar15 == 0) {
                    func_0x01384bf0();
                  }
                  piVar8 = (int *)func_0x03653608(iVar15,**(undefined4 **)
                                                           (_UNK_02aac1e0 + 0x2aab6b0));
LAB_02aab6bc:
                  if (piVar8 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar15 = *piVar8;
                  uVar12 = (uint)*(ushort *)(iVar15 + 0xb6);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(int *)(iVar15 + 0x58) + 4);
                    do {
                      if (piVar13[-1] == **(int **)(_UNK_02aac1f0 + 0x2aab6d8)) {
                        puVar9 = (undefined4 *)(iVar15 + *piVar13 * 8 + 0xc0);
                        goto LAB_02aab720;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 2;
                    } while (uVar12 != 0);
                  }
                  puVar9 = (undefined4 *)
                           func_0x014002dc(piVar8,**(int **)(_UNK_02aac1f0 + 0x2aab6d8),0);
LAB_02aab720:
                  iVar15 = (*(code *)*puVar9)(piVar8,puVar9[1]);
                  if (iVar15 != 0) {
                    if (piVar8 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    iVar15 = *piVar8;
                    uVar12 = (uint)*(ushort *)(iVar15 + 0xb6);
                    if (uVar12 != 0) {
                      piVar13 = (int *)(*(int *)(iVar15 + 0x58) + 4);
                      do {
                        if (piVar13[-1] == **(int **)(_UNK_02aac1e4 + 0x2aab754)) {
                          puVar9 = (undefined4 *)(iVar15 + *piVar13 * 8 + 0xc0);
                          goto LAB_02aab79c;
                        }
                        uVar12 = uVar12 - 1;
                        piVar13 = piVar13 + 2;
                      } while (uVar12 != 0);
                    }
                    puVar9 = (undefined4 *)
                             func_0x014002dc(piVar8,**(int **)(_UNK_02aac1e4 + 0x2aab754),0);
LAB_02aab79c:
                    uVar7 = (*(code *)*puVar9)(piVar8,puVar9[1]);
                    if (*(int *)(**(int **)(_UNK_02aac1e8 + 0x2aab7bc) + 0x74) == 0) {
                      func_0x01384ab4();
                    }
                    func_0x02566088(&uStack_60,uVar7,0);
                    uVar17 = uStack_58;
                    uVar3 = uStack_5c;
                    uVar7 = uStack_60;
                    if (iVar5 == 0) {
                      func_0x01384bf0();
                    }
                    iVar15 = *(int *)(iVar5 + 8);
                    uVar12 = *(uint *)(iVar5 + 0xc);
                    piVar13 = *(int **)(_UNK_02aac1ec + 0x2aab81c);
                    *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
                    iVar6 = *piVar13;
                    if (iVar15 == 0) {
                      func_0x01384bf0();
                    }
                    if (uVar12 < *(uint *)(iVar15 + 0xc)) {
                      *(uint *)(iVar5 + 0xc) = uVar12 + 1;
                      iVar15 = iVar15 + uVar12 * 0xc;
                      *(undefined4 *)(iVar15 + 0x10) = uVar7;
                      *(undefined4 *)(iVar15 + 0x14) = uVar3;
                      *(undefined4 *)(iVar15 + 0x18) = uVar17;
                    }
                    else {
                      func_0x0443cefc(iVar5,uVar7,uVar3,uVar17,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
                    }
                    goto LAB_02aab6bc;
                  }
                  if (piVar8 != (int *)0x0) {
                    iVar15 = *piVar8;
                    uVar12 = (uint)*(ushort *)(iVar15 + 0xb6);
                    if (uVar12 != 0) {
                      piVar13 = (int *)(*(int *)(iVar15 + 0x58) + 4);
                      do {
                        if (piVar13[-1] == **(int **)(_UNK_02aac1f4 + 0x2aab988)) {
                          puVar9 = (undefined4 *)(iVar15 + *piVar13 * 8 + 0xc0);
                          goto LAB_02aab9d0;
                        }
                        uVar12 = uVar12 - 1;
                        piVar13 = piVar13 + 2;
                      } while (uVar12 != 0);
                    }
                    puVar9 = (undefined4 *)
                             func_0x014002dc(piVar8,**(int **)(_UNK_02aac1f4 + 0x2aab988),0);
LAB_02aab9d0:
                    (*(code *)*puVar9)(piVar8,puVar9[1]);
                  }
                  if (iVar5 == 0) {
                    func_0x01384bf0();
                  }
                  if (*(int *)(iVar5 + 0xc) == 0) {
                    iVar15 = 0;
                  }
                  else {
                    iVar15 = 0;
                    iVar6 = func_0x02beee40(param_1[0x35],param_3,aiStack_4c + 4,aiStack_4c + 3,0);
                    if (iVar6 != 0) {
                      iVar15 = 0;
                      iVar6 = FUN_02aaafcc(param_1,0,aiStack_4c[4]);
                      if (iVar6 == 0) {
                        if (param_1[0x35] != 0) {
                          iVar15 = 0;
                          func_0x02bf0144(param_1[0x35],param_3,param_1[0x31],0);
                        }
                      }
                      else {
                        iVar6 = FUN_02aa5cd0(param_1);
                        if (iVar6 != 0) {
                          iVar15 = param_1[0x38];
                        }
                        if (iVar6 != 0 && iVar15 != 0) {
                          uVar7 = FUN_02aa2dc4(param_1);
                          func_0x02af96e4(iVar15,uVar7,0);
                        }
                        func_0x019a4b9c(param_2,-aiStack_4c[4],param_1[0x31],param_4,0);
                        if (*(int *)(**(int **)(_UNK_02aac1fc + 0x2aaba98) + 0x74) == 0) {
                          func_0x01384ab4();
                        }
                        iVar6 = func_0x0300d558(**(undefined4 **)(_UNK_02aac200 + 0x2aabab4));
                        iVar15 = aiStack_4c[4];
                        if (iVar6 == 0) {
                          func_0x01384bf0();
                        }
                        func_0x034a0af8(iVar6,param_2,iVar15,
                                        **(undefined4 **)(_UNK_02aac204 + 0x2aabae0));
                        piVar8 = *(int **)(_UNK_02aac208 + 0x2aabaf4);
                        iVar15 = *piVar8;
                        if (*(int *)(iVar15 + 0x74) == 0) {
                          func_0x01384ab4();
                          iVar15 = *piVar8;
                        }
                        iVar6 = *(int *)(*(int *)(iVar15 + 0x5c) + 4);
                        if (iVar6 == 0) {
                          if (*(int *)(iVar15 + 0x74) == 0) {
                            func_0x01384ab4();
                            iVar15 = *piVar8;
                          }
                          uVar7 = **(undefined4 **)(iVar15 + 0x5c);
                          iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02aac20c + 0x2aabb3c));
                          func_0x03a06bcc(iVar6,uVar7,**(undefined4 **)(_UNK_02aac210 + 0x2aabb5c),0
                                         );
                          *(int *)(*(int *)(*piVar8 + 0x5c) + 4) = iVar6;
                        }
                        func_0x02fbdda8(&uStack_60,iVar5,iVar6,0,
                                        **(undefined4 **)(_UNK_02aac214 + 0x2aabb84));
                        uVar3 = uStack_5c;
                        uVar7 = uStack_60;
                        if (*(int *)(**(int **)(_UNK_02aac218 + 0x2aabba0) + 0x74) == 0) {
                          func_0x01384ab4();
                        }
                        iVar15 = func_0x028c8d78(0);
                        if (iVar15 == 0) {
                          func_0x01384bf0();
                        }
                        func_0x0302a45c(aiStack_4c + 1,iVar15,aiStack_4c,
                                        **(undefined4 **)(_UNK_02aac21c + 0x2aabbe4));
                        if (param_1[0x35] == 0) {
                          uStack_50 = uVar7;
                        }
                        else {
                          func_0x02bf06e8(param_1[0x35],uVar7,uVar3,&uStack_50,aiStack_4c[0],0);
                        }
                        iVar15 = func_0x01c24918(0);
                        if (iVar15 == 0) {
                          func_0x01384bf0();
                        }
                        iVar15 = *(int *)(iVar15 + 0x4c);
                        if (iVar15 == 0) {
                          func_0x01384bf0();
                        }
                        iVar15 = func_0x01dbb000(iVar15,0);
                        uVar7 = 0;
                        if (iVar15 != 0) {
                          iVar15 = func_0x02139cf4(iVar15,0);
                          uVar7 = 0;
                          if (iVar15 != 0) {
                            uStack_5c = 0;
                            uStack_60 = 0;
                            func_0x03507d38(&uStack_60,*(undefined4 *)(iVar15 + 8),
                                            **(undefined4 **)(_UNK_02aac220 + 0x2aabca8));
                            uVar7 = uStack_5c;
                          }
                        }
                        iVar15 = param_1[0x33];
                        iVar6 = param_1[0x2f];
                        if (iVar15 == 0) {
                          func_0x01384bf0();
                        }
                        uVar17 = uStack_50;
                        iVar5 = param_1[0x3c];
                        uVar18 = *(undefined4 *)(iVar4 + 0x24);
                        uVar16 = *(undefined4 *)(iVar15 + 0xc);
                        uVar10 = func_0x02157e88(uStack_50,0);
                        func_0x019bafc4(param_1,iVar6 + 1,uVar16,uVar18,uVar7,iVar5,uVar17,uVar10,
                                        aiStack_4c[3],0);
                        if (*(int *)(**(int **)(_UNK_02aac224 + 0x2aabd34) + 0x74) == 0) {
                          func_0x01384ab4();
                        }
                        func_0x01dd7d28(0);
                        func_0x020da680(&uStack_60,iStack_74,0);
                        uVar17 = uStack_5c;
                        uVar7 = uStack_60;
                        pcVar14 = (char *)(_UNK_02aac228 + 0x2aabd74);
                        if (*pcVar14 == '\0') {
                          func_0x01384978(*(undefined4 *)(_UNK_02aac22c + 0x2aabd88));
                          *pcVar14 = '\x01';
                        }
                        bVar1 = false;
                        piVar8 = *(int **)(_UNK_02aac230 + 0x2aabda0);
                        if (*(int *)(*piVar8 + 0x74) == 0) {
                          func_0x01384ab4();
                          bVar1 = *pcVar14 == '\0';
                        }
                        fVar19 = (float)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
                        fVar11 = (float)func_0x02450364(fVar19 * 0.5);
                        fVar19 = _UNK_02aac154;
                        uVar12 = in_fpscr & 0xfffffff | (uint)(fVar11 == _UNK_02aac154) << 0x1e;
                        iVar15 = (int)fVar11;
                        if (SUB41(uVar12 >> 0x1e,0)) {
                          iVar15 = -0x80000000;
                        }
                        if (bVar1) {
                          func_0x01384978(*(undefined4 *)(_UNK_02aac234 + 0x2aabe00));
                          *pcVar14 = '\x01';
                        }
                        if (*(int *)(*piVar8 + 0x74) == 0) {
                          func_0x01384ab4();
                        }
                        fVar11 = (float)VectorSignedToFloat(uVar17,(byte)(uVar12 >> 0x16) & 3);
                        fVar11 = (float)func_0x02450364(fVar11 * 0.5);
                        uVar7 = uStack_50;
                        iVar6 = (int)fVar11;
                        iVar4 = **(int **)(_UNK_02aac238 + 0x2aabe48);
                        if (fVar11 == fVar19) {
                          iVar6 = -0x80000000;
                        }
                        if (*(int *)(iVar4 + 0x74) == 0) {
                          func_0x01384ab4();
                          iVar4 = **(int **)(_UNK_02aac23c + 0x2aabe78);
                        }
                        func_0x01dd7f28(iStack_74,uVar7,uVar3,param_5,param_6,param_7,iVar15,iVar6,
                                        *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x2c8),0x1a,0);
                        iVar4 = 0;
                        puVar9 = *(undefined4 **)(_UNK_02aac240 + 0x2aabec8);
                        while( true ) {
                          iVar5 = aiStack_4c[0];
                          if (aiStack_4c[0] == 0) {
                            func_0x01384bf0();
                          }
                          iVar2 = aiStack_4c[0];
                          if (*(int *)(iVar5 + 0xc) <= iVar4) break;
                          if (aiStack_4c[0] == 0) {
                            func_0x01384bf0();
                          }
                          func_0x0441a030(&uStack_60,iVar2,iVar4,*puVar9);
                          uVar3 = uStack_5c;
                          uVar7 = uStack_60;
                          iVar5 = **(int **)(_UNK_02aac244 + 0x2aabf10);
                          if (*(int *)(iVar5 + 0x74) == 0) {
                            func_0x01384ab4();
                            iVar5 = **(int **)(_UNK_02aac248 + 0x2aabf34);
                          }
                          uVar17 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x2c8);
                          if (*(int *)(**(int **)(_UNK_02aac24c + 0x2aabf40) + 0x74) == 0) {
                            func_0x01384ab4(**(int **)(_UNK_02aac24c + 0x2aabf40));
                          }
                          func_0x01dd7f28(iStack_74,uVar7,uVar3,param_5,param_6,param_7,iVar15,iVar6
                                          ,uVar17,0x1a,0);
                          iVar4 = iVar4 + 1;
                        }
                        func_0x028c98a0(aiStack_4c + 1,0);
                        iVar15 = 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar15 = func_0x0229f13c(0x6e4a,0);
    if (iVar15 == 0) {
      func_0x01384bf0();
    }
    iVar15 = func_0x02249dec(iVar15,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return iVar15;
}



// ===== FAT.WishBoardActivity$$SetAudioBaseDelay RVA 0x2a9c250 =====

void FUN_02aac250(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x6e55,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6e55,0);
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
    func_0x01485258(&uStack_38,param_2,0);
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
  *(undefined4 *)(param_1 + 0x110) = param_2;
  return;
}



// ===== FAT.WishBoardActivity$$JumpTask RVA 0x2a9c2b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aac2b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
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
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_02aac498 + 0x2aac2d0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aac49c + 0x2aac2e4));
    func_0x01384978(*(undefined4 *)(_UNK_02aac4a0 + 0x2aac2f0));
    func_0x01384978(*(undefined4 *)(_UNK_02aac4a4 + 0x2aac2fc));
    func_0x01384978(*(undefined4 *)(_UNK_02aac4a8 + 0x2aac308));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6f52,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02aac4ac + 0x2aac36c));
    func_0x04874ed4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar2 = *(undefined4 **)(_UNK_02aac4b0 + 0x2aac394);
    *(int *)(iVar1 + 8) = param_1;
    *(undefined4 *)(iVar1 + 0xc) = param_3;
    iVar3 = func_0x034aaa34(*puVar2);
    iVar6 = *(int *)(param_1 + 0x3c);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar7 = *(undefined4 *)(iVar6 + 0xc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x01eea2b8(iVar3,uVar7,0);
    if (iVar3 == 0) {
      uVar9 = *(undefined4 *)(param_1 + 0x3c);
      uVar4 = *(undefined4 *)(param_1 + 0x4c);
      uVar10 = *(undefined4 *)(param_1 + 0x50);
      uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_02aac4b4 + 0x2aac448));
      func_0x0478dedc(uVar7,iVar1,**(undefined4 **)(_UNK_02aac4b8 + 0x2aac470),0);
      uStack_24 = 0;
      uStack_28 = uVar7;
      func_0x02b57d14(param_1,uVar4,uVar10,uVar9);
    }
    else {
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x9c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x01c74c1c(iVar3,0);
      if ((iVar3 == 0) && (iVar3 = *(int *)(param_1 + 200), iVar3 != 0)) {
        uVar7 = *(undefined4 *)(iVar1 + 0xc);
        pcVar5 = (char *)(_UNK_02bf8f24 + 0x2bf8d74);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02bf8f28 + 0x2bf8d88),uVar7,0);
          func_0x01384978(*(undefined4 *)(_UNK_02bf8f2c + 0x2bf8d94));
          func_0x01384978(*(undefined4 *)(_UNK_02bf8f30 + 0x2bf8da0));
          func_0x01384978(*(undefined4 *)(_UNK_02bf8f34 + 0x2bf8dac));
          *pcVar5 = '\x01';
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
          func_0x0245494c(&uStack_50,0,uVar7,0);
          uStack_38 = uStack_50;
          uStack_34 = uStack_4c;
          uStack_30 = uStack_48;
          uStack_2c = uStack_44;
          uStack_28 = uStack_40;
          if (*(int *)(iVar1 + 0x10) != 0) {
            func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
          }
          func_0x01485278(&uStack_38,iVar3,0);
          func_0x01485238(&uStack_38,uVar7,0);
          iVar3 = *(int *)(iVar1 + 8);
          uVar7 = *(undefined4 *)(iVar1 + 0xc);
          iVar1 = *(int *)(iVar1 + 0x10);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uVar4 = 3;
          if (iVar1 == 0) {
            uVar4 = 2;
          }
          func_0x0245495c(iVar3,uVar7,&uStack_38,uVar4,0,0);
          return;
        }
        iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_02bf8f38 + 0x2bf8e0c));
        piVar8 = *(int **)(_UNK_02bf8f3c + 0x2bf8e20);
        iVar6 = *piVar8;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x01384ab4();
          iVar6 = *piVar8;
        }
        uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0xa04);
        piVar8 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02bf8f40 + 0x2bf8e44),2);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar3 != 0) &&
           (iVar6 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar8 + 0x20)), iVar6 == 0)) {
          uVar4 = func_0x01384c10();
          func_0x01384aa0(uVar4,0);
        }
        if (piVar8[3] == 0) {
          func_0x01384bf4();
        }
        piVar8[4] = iVar3;
        iVar3 = func_0x01384abc(**(undefined4 **)(_UNK_02bf8f44 + 0x2bf8eb0),&stack0xffffffe4);
        if ((iVar3 != 0) &&
           (iVar6 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar8 + 0x20)), iVar6 == 0)) {
          uVar4 = func_0x01384c10();
          func_0x01384aa0(uVar4,0);
        }
        if ((uint)piVar8[3] < 2) {
          func_0x01384bf4();
        }
        piVar8[5] = iVar3;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01ee858c(iVar1,uVar7,piVar8,0);
        return;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6f52,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    func_0x02179a68(iVar1,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.WishBoardActivity.<>c__DisplayClass187_0$$.ctor RVA 0x2a9c4bc =====

void FUN_02aac4bc(void)

{
  return;
}



// ===== FAT.WishBoardActivity$$<>iFixBaseProxy_get_Valid RVA 0x2a9c4c4 =====

void FUN_02aac4c4(int param_1)

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



// ===== FAT.WishBoardActivity$$<>iFixBaseProxy_get_Visual RVA 0x2a9c4cc =====

undefined4 FUN_02aac4cc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.WishBoardActivity$$<>iFixBaseProxy_SetupFresh RVA 0x2a9c4d4 =====

void FUN_02aac4d4(undefined4 param_1)

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



// ===== FAT.WishBoardActivity$$<>iFixBaseProxy_WhenReset RVA 0x2a9c4dc =====

void FUN_02aac4dc(undefined4 param_1)

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



// ===== FAT.WishBoardActivity$$<>iFixBaseProxy_WhenEnd RVA 0x2a9c4e4 =====

void FUN_02aac4e4(undefined4 param_1)

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



// ===== FAT.WishBoardActivity.<>c$$.cctor RVA 0x2a9c4ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aac4ec(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_02aac544 + 0x2aac4fc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aac548 + 0x2aac510));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_02aac54c + 0x2aac524);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x04874ed4(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.WishBoardActivity.<>c$$.ctor RVA 0x2a9c550 =====

void FUN_02aac550(void)

{
  return;
}



// ===== FAT.WishBoardActivity.<>c$$<_TryUseToken>b__180_0 RVA 0x2a9c558 =====

undefined4 FUN_02aac558(void)

{
  undefined4 in_r3;
  
  return in_r3;
}



// ===== FAT.WishBoardActivity.<>c__DisplayClass132_0$$<FAT.Merge.ISpawnEffectWithTrail.AddTrail>b__0 RVA 0x2a9c560 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aac560(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_02aac87c + 0x2aac57c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aac880 + 0x2aac590));
    func_0x01384978(*(undefined4 *)(_UNK_02aac884 + 0x2aac59c));
    func_0x01384978(*(undefined4 *)(_UNK_02aac888 + 0x2aac5a8));
    func_0x01384978(*(undefined4 *)(_UNK_02aac88c + 0x2aac5b4));
    func_0x01384978(*(undefined4 *)(_UNK_02aac890 + 0x2aac5c0));
    func_0x01384978(*(undefined4 *)(_UNK_02aac894 + 0x2aac5cc));
    func_0x01384978(*(undefined4 *)(_UNK_02aac898 + 0x2aac5d8));
    func_0x01384978(*(undefined4 *)(_UNK_02aac89c + 0x2aac5e4));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02aac8a0 + 0x2aac5f8));
  func_0x04874ed4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar1 + 8) = param_2;
  *(int *)(iVar1 + 0x14) = param_1;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(param_2,0,0);
  iVar3 = *(int *)(iVar1 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x024504c0(iVar3,0);
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0244fc34(iVar4,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_2c,iVar4,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x024503d4(iVar3,uStack_2c,uStack_28,uStack_24,0);
  iVar3 = func_0x02fd6f60(*(undefined4 *)(iVar1 + 8),**(undefined4 **)(_UNK_02aac8a4 + 0x2aac6d4));
  iVar4 = *(int *)(param_1 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(iVar4 + 0xec);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0266fcac(iVar3,uVar5,0x40800000,0);
  iVar3 = *(int *)(iVar1 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x024504c0(iVar3,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x02450178(iVar3,**(undefined4 **)(_UNK_02aac8a8 + 0x2aac754),0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0244ffd4(iVar3,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar3,1,0);
  iVar3 = func_0x02cebcfc(*(undefined4 *)(param_1 + 0x10),0);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x10);
    iVar3 = iVar4;
    if (iVar4 == 0) {
      func_0x01384bf0();
      iVar3 = *(int *)(param_1 + 0x10);
    }
    puVar6 = *(undefined4 **)(_UNK_02aac8ac + 0x2aac7d0);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar4 + 0x44);
    uVar5 = func_0x01384be4(*puVar6);
    func_0x02ce3d80(uVar5,iVar1,**(undefined4 **)(_UNK_02aac8b0 + 0x2aac7f4),0);
    func_0x0309eb60(iVar3,uVar5,**(undefined4 **)(_UNK_02aac8b4 + 0x2aac80c));
    iVar4 = *(int *)(param_1 + 0x10);
    iVar3 = iVar4;
    if (iVar4 == 0) {
      func_0x01384bf0();
      iVar3 = *(int *)(param_1 + 0x10);
    }
    uVar5 = *puVar6;
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar4 + 0x4c);
    uVar5 = func_0x01384be4(uVar5);
    func_0x02ce3d80(uVar5,iVar1,**(undefined4 **)(_UNK_02aac8b8 + 0x2aac854),0);
    func_0x0309ead4(iVar3,uVar5,**(undefined4 **)(_UNK_02aac8bc + 0x2aac86c));
  }
  return;
}



// ===== FAT.WishBoardActivity.<>c__DisplayClass132_1$$.ctor RVA 0x2a9c8c0 =====

void FUN_02aac8c0(void)

{
  return;
}



// ===== FAT.WishBoardActivity.<>c__DisplayClass132_1$$<FAT.Merge.ISpawnEffectWithTrail.AddTrail>b__1 RVA 0x2a9c8c8 =====

void FUN_02aac8c8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450114(iVar1,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar1,1,0);
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x024504c0(iVar1,0);
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0244fc34(iVar2,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_24,iVar2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x024503d4(iVar1,uStack_24,uStack_20,uStack_1c,0);
  return;
}



// ===== FAT.WishBoardActivity.<>c__DisplayClass132_1$$<FAT.Merge.ISpawnEffectWithTrail.AddTrail>b__2 RVA 0x2a9c9d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aac9d4(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)(_UNK_02aacae8 + 0x2aac9e8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aacaec + 0x2aac9fc));
    func_0x01384978(*(undefined4 *)(_UNK_02aacaf0 + 0x2aaca08));
    *pcVar2 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  }
  uVar3 = *(undefined4 *)(param_1 + 8);
  if (*(int *)(**(int **)(_UNK_02aacaf4 + 0x2aaca38) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar3,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x024504c0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450178(iVar1,**(undefined4 **)(_UNK_02aacaf8 + 0x2aacaa0),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar1,0,0);
  return;
}



// ===== FAT.WishBoardActivity.<>c__DisplayClass161_0$$<_CheckCanMoveBoard>b__0 RVA 0x2a9cafc =====

void FUN_02aacafc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  FUN_02aaa8d4(iVar2,uVar3,uVar4,uVar1);
  return;
}



// ===== FAT.WishBoardActivity.<>c__DisplayClass166_0$$<_ExecuteExtremeCase>b__0 RVA 0x2a9cb3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02aacb3c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  char *pcVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int aiStack_24 [3];
  
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = func_0x02116ae0(param_2,0);
  if (iVar6 != 0) {
    iVar6 = *(int *)(param_1 + 8);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    pcVar9 = (char *)(_UNK_020df794 + 0x20df458);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_020df798 + 0x20df46c),param_2,1,0);
      func_0x01384978(*(undefined4 *)(_UNK_020df79c + 0x20df478));
      func_0x01384978(*(undefined4 *)(_UNK_020df7a0 + 0x20df484));
      func_0x01384978(*(undefined4 *)(_UNK_020df7a4 + 0x20df490));
      *pcVar9 = '\x01';
    }
    aiStack_24[0] = 0;
    iVar1 = func_0x0229f06c(0x5b73,0);
    if (iVar1 == 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
        iVar1 = func_0x0210cd28(0,0);
        func_0x01384bf0();
      }
      else {
        iVar1 = func_0x0210cd28(param_2,0);
      }
      if (iVar1 == iVar6) {
        func_0x0210cd7c(&uStack_30,param_2,0);
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&uStack_30,param_2,0);
        uVar2 = func_0x020db85c(iVar6,uStack_30,uStack_2c);
        iVar3 = func_0x03005894(*(undefined4 *)(iVar6 + 0x80),uVar2,aiStack_24,
                                **(undefined4 **)(_UNK_020df7a8 + 0x20df588));
        iVar1 = aiStack_24[0];
        if (iVar3 != 0) {
          if (aiStack_24[0] == 0) {
            func_0x01384bf0();
          }
          iVar3 = aiStack_24[0];
          if (*(int *)(iVar1 + 8) == param_2) {
            if (aiStack_24[0] == 0) {
              func_0x01384bf0();
            }
            *(undefined4 *)(iVar3 + 8) = 0;
            func_0x020df7b8(iVar6,1);
            if (param_2 == 0) {
              func_0x01384bf0();
              func_0x021177d0(0,0,0,0);
              func_0x01384bf0();
            }
            else {
              func_0x021177d0(param_2,0,0,0);
            }
            func_0x02117440(param_2,0,0,0);
            iVar1 = *(int *)(iVar6 + 100);
            if (iVar1 != 0) {
              (**(code **)(iVar1 + 0xc))
                        (*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
            }
            iVar1 = *(int *)(iVar6 + 0x98);
            if (param_2 == 0) {
              func_0x01384bf0();
            }
            uVar8 = 0;
            iVar3 = func_0x02116990(param_2,0);
            if ((iVar3 != 0) && (uVar8 = 0, *(char *)(iVar3 + 0x45) != '\0')) {
              uVar8 = 1;
            }
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x02144d84(iVar1,param_2,uVar8,0);
            iVar6 = func_0x020d83c8(iVar6);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x02148ef8(iVar6,param_2,0xe,0);
            return 1;
          }
        }
        if (param_2 == 0) {
          func_0x01384bf0();
        }
      }
      uStack_30 = func_0x0210e5f4(param_2,0);
      puVar7 = *(undefined4 **)(_UNK_020df7ac + 0x20df5dc);
      uVar4 = func_0x01384abc(*puVar7,&uStack_30);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar2 = 0;
      uStack_28 = func_0x0210e2d4(param_2,0);
      uVar5 = func_0x01384abc(*puVar7,&uStack_28);
      uVar4 = func_0x0244f690(**(undefined4 **)(_UNK_020df7b0 + 0x20df634),uVar4,uVar5,0);
      if (*(int *)(**(int **)(_UNK_020df7b4 + 0x20df648) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar4,0);
    }
    else {
      iVar1 = func_0x0229f13c(0x5b73,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x0218d1f0(iVar1,iVar6,param_2,1,0);
    }
    return uVar2;
  }
  return 0;
}



// ===== FAT.WishBoardActivity.<>c__DisplayClass187_0$$<JumpTask>b__0 RVA 0x2a9cb90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aacb90(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  int iVar6;
  undefined4 unaff_r5;
  int *piVar7;
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
  
  piVar7 = *(int **)(param_1 + 8);
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = (**(code **)(*piVar7 + 0x108))(piVar7,*(undefined4 *)(*piVar7 + 0x10c));
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
    iVar1 = *(int *)(iVar1 + 200);
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
        iVar6 = *(int *)(iVar2 + 8);
        uVar4 = *(undefined4 *)(iVar2 + 0xc);
        iVar1 = *(int *)(iVar2 + 0x10);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar5 = 3;
        if (iVar1 == 0) {
          uVar5 = 2;
        }
        func_0x0245495c(iVar6,uVar4,&uStack_38,uVar5,0,0);
        return;
      }
      iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_02bf8f38 + 0x2bf8e0c));
      piVar7 = *(int **)(_UNK_02bf8f3c + 0x2bf8e20);
      iVar6 = *piVar7;
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x01384ab4();
        iVar6 = *piVar7;
      }
      uVar5 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0xa04);
      piVar7 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02bf8f40 + 0x2bf8e44),2);
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar1 != 0) &&
         (iVar6 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar7 + 0x20)), iVar6 == 0)) {
        uVar3 = func_0x01384c10();
        func_0x01384aa0(uVar3,0);
      }
      if (piVar7[3] == 0) {
        func_0x01384bf4();
      }
      piVar7[4] = iVar1;
      uStack_1c = uVar4;
      iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02bf8f44 + 0x2bf8eb0),&uStack_1c);
      if ((iVar1 != 0) &&
         (iVar6 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar7 + 0x20)), iVar6 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if ((uint)piVar7[3] < 2) {
        func_0x01384bf4();
      }
      piVar7[5] = iVar1;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee858c(iVar2,uVar5,piVar7,0);
      return;
    }
  }
  return;
}



// ===== FAT.WishBoardActivity.<CoDelayReward>d__130$$System.IDisposable.Dispose RVA 0x2a9cc30 =====

void FUN_02aacc30(void)

{
  return;
}



// ===== FAT.WishBoardActivity.<CoDelayReward>d__130$$MoveNext RVA 0x2a9cc34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02aacc34(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  pcVar4 = (char *)(_UNK_02aacd88 + 0x2aacc4c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aacd8c + 0x2aacc60));
    func_0x01384978(*(undefined4 *)(_UNK_02aacd90 + 0x2aacc6c));
    func_0x01384978(*(undefined4 *)(_UNK_02aacd94 + 0x2aacc78));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 1) {
    iVar6 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar9 = *(undefined4 *)(param_1 + 0x14);
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    uVar8 = *(undefined4 *)(param_1 + 0x1c);
    uVar2 = *(undefined4 *)(iVar6 + 0xe8);
    if (*(int *)(**(int **)(_UNK_02aacd9c + 0x2aaccf8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar5 = 0;
    func_0x020718d0(uVar2,uVar9,uVar7,uVar8,0,0,0);
    iVar6 = *(int *)(iVar6 + 0xe8);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar6 + 0xc);
    *(undefined4 *)(iVar6 + 0xc) = 0;
    *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
    if (0 < iVar3) {
      uVar5 = 0;
      func_0x0484e5ec(*(undefined4 *)(iVar6 + 8),0,iVar3,0);
    }
  }
  else {
    uVar5 = 0;
    if (*(int *)(param_1 + 8) == 0) {
      puVar1 = *(undefined4 **)(_UNK_02aacd98 + 0x2aacca8);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar2 = func_0x01384be4(*puVar1);
      func_0x0245031c(uVar2,0x3ed70a3d,0);
      uVar5 = 1;
      *(undefined4 *)(param_1 + 0xc) = uVar2;
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return uVar5;
}



// ===== FAT.WishBoardActivity.<CoDelayReward>d__130$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x2a9cda0 =====

undefined4 FUN_02aacda0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.WishBoardActivity.<CoDelayReward>d__130$$System.Collections.IEnumerator.Reset RVA 0x2a9cda8 =====

undefined4 FUN_02aacda8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  func_0x01384988(*(undefined4 *)(iRam02aacde4 + 0x2aacdb8));
  uVar1 = func_0x01384be4();
  func_0x04827f0c(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(iRam02aacde8 + 0x2aacdd4));
  func_0x01384aa0(uVar1,uVar2);
  iVar3 = func_0x01384928();
  return *(undefined4 *)(iVar3 + 0xc);
}



// ===== FAT.WishBoardActivity.<CoDelayReward>d__130$$System.Collections.IEnumerator.get_Current RVA 0x2a9cdec =====

undefined4 FUN_02aacdec(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.WishBoardActivity.<CoPlaySound>d__129$$System.IDisposable.Dispose RVA 0x2a9cdf4 =====

void FUN_02aacdf4(void)

{
  return;
}



// ===== FAT.WishBoardActivity.<CoPlaySound>d__129$$MoveNext RVA 0x2a9cdf8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02aacdf8(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  pcVar4 = (char *)(_UNK_02aacedc + 0x2aace0c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aacee0 + 0x2aace20));
    func_0x01384978(*(undefined4 *)(_UNK_02aacee4 + 0x2aace2c));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 8);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 0;
    func_0x01bf3284(iVar3,**(undefined4 **)(_UNK_02aaceec + 0x2aacecc),0);
  }
  else {
    uVar5 = 0;
    if (*(int *)(param_1 + 8) == 0) {
      puVar1 = *(undefined4 **)(_UNK_02aacee8 + 0x2aace5c);
      uVar5 = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar2 = func_0x01384be4(*puVar1);
      func_0x0245031c(uVar2,uVar5,0);
      uVar5 = 1;
      *(undefined4 *)(param_1 + 0xc) = uVar2;
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return uVar5;
}



// ===== FAT.WishBoardActivity.<CoPlaySound>d__129$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x2a9cef0 =====

undefined4 FUN_02aacef0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.WishBoardActivity.<CoPlaySound>d__129$$System.Collections.IEnumerator.Reset RVA 0x2a9cef8 =====

undefined4 FUN_02aacef8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  func_0x01384988(*(undefined4 *)(iRam02aacf34 + 0x2aacf08));
  uVar1 = func_0x01384be4();
  func_0x04827f0c(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(iRam02aacf38 + 0x2aacf24));
  func_0x01384aa0(uVar1,uVar2);
  iVar3 = func_0x01384928();
  return *(undefined4 *)(iVar3 + 0xc);
}



// ===== FAT.WishBoardActivity.<CoPlaySound>d__129$$System.Collections.IEnumerator.get_Current RVA 0x2a9cf3c =====

undefined4 FUN_02aacf3c(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


