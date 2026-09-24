/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.AreaBoardActivity$$get_Valid RVA 0x2bafa98 =====

undefined4 FUN_02bbfa98(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7820,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7820,0);
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
  if ((iVar1 != 0) && (uVar5 = 0, *(int *)(param_1 + 0x3c) != 0)) {
    uVar5 = 1;
  }
  return uVar5;
}



// ===== FAT.AreaBoardActivity$$get_Conf RVA 0x2bafb28 =====

undefined4 FUN_02bbfb28(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// ===== FAT.AreaBoardActivity$$set_Conf RVA 0x2bafb30 =====

void FUN_02bbfb30(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}



// ===== FAT.AreaBoardActivity$$get_BoardSkinId RVA 0x2bafb38 =====

undefined4 FUN_02bbfb38(int param_1)

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
  iVar1 = func_0x0229f06c(0x7822,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7822,0);
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
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x14);
  }
  return uVar4;
}



// ===== FAT.AreaBoardActivity$$get_MainCategoryId RVA 0x2bafb9c =====

undefined4 FUN_02bbfb9c(undefined4 param_1)

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
  iVar1 = func_0x0229f06c(0x7823,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7823,0);
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
  iVar1 = func_0x02bbfc04(param_1);
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(iVar1 + 0x44);
  }
  return uVar4;
}



// ===== FAT.AreaBoardActivity$$GetGroupConfig RVA 0x2bafc04 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bbfc04(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x5d1,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5d1,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_0218fa4c + 0x218f96c);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0218fa50 + 0x218f980),param_1,0);
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
    uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0218fa54 + 0x218fa3c));
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
  iVar7 = func_0x0229f06c(0x5d3,0,0);
  if (iVar7 == 0) {
    pcVar8 = (char *)(_UNK_017d5bf0 + 0x17d5b94);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_017d5bf4 + 0x17d5ba8),0);
      func_0x01384978(*(undefined4 *)(_UNK_017d5bf8 + 0x17d5bb4));
      *pcVar8 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_017d5bfc + 0x17d5bc8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = **(int **)(_UNK_017d5c00 + 0x17d5be4);
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
  iVar7 = func_0x0229f13c(0x5d3,0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  pcVar8 = (char *)(_UNK_0218f944 + 0x218f850);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0218f948 + 0x218f864),iVar2,uVar9,0);
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
  uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0218f94c + 0x218f934));
  return uVar9;
}



// ===== FAT.AreaBoardActivity$$get_DetailId RVA 0x2bafc90 =====

undefined4 FUN_02bbfc90(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ===== FAT.AreaBoardActivity$$set_DetailId RVA 0x2bafc98 =====

void FUN_02bbfc98(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}



// ===== FAT.AreaBoardActivity$$get_UnlockMilestoneLevel RVA 0x2bafca0 =====

undefined4 FUN_02bbfca0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ===== FAT.AreaBoardActivity$$set_UnlockMilestoneLevel RVA 0x2bafca8 =====

void FUN_02bbfca8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}



// ===== FAT.AreaBoardActivity$$get_UnlockCloudLevel RVA 0x2bafcb0 =====

undefined4 FUN_02bbfcb0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// ===== FAT.AreaBoardActivity$$set_UnlockCloudLevel RVA 0x2bafcb8 =====

void FUN_02bbfcb8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}



// ===== FAT.AreaBoardActivity$$get_World RVA 0x2bafcc0 =====

undefined4 FUN_02bbfcc0(int param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



// ===== FAT.AreaBoardActivity$$set_World RVA 0x2bafcc8 =====

void FUN_02bbfcc8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 100) = param_2;
  return;
}



// ===== FAT.AreaBoardActivity$$get_WorldTracer RVA 0x2bafcd0 =====

undefined4 FUN_02bbfcd0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



// ===== FAT.AreaBoardActivity$$set_WorldTracer RVA 0x2bafcd8 =====

void FUN_02bbfcd8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x68) = param_2;
  return;
}



// ===== FAT.AreaBoardActivity$$get_Feature RVA 0x2bafce0 =====

undefined4 FUN_02bbfce0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x6c);
}



// ===== FAT.AreaBoardActivity$$get_OutputMethod RVA 0x2bafce8 =====

undefined4 FUN_02bbfce8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}



// ===== FAT.AreaBoardActivity$$set_OutputMethod RVA 0x2bafcf0 =====

void FUN_02bbfcf0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x70) = param_2;
  return;
}



// ===== FAT.AreaBoardActivity$$get_OutputType RVA 0x2bafcf8 =====

undefined4 FUN_02bbfcf8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}



// ===== FAT.AreaBoardActivity$$set_OutputType RVA 0x2bafd00 =====

void FUN_02bbfd00(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x74) = param_2;
  return;
}



// ===== FAT.AreaBoardActivity$$get_Visual RVA 0x2bafd08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bbfd08(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7824,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7824,0);
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
  return *(undefined4 *)(param_1 + 0x94);
}



// ===== FAT.AreaBoardActivity$$get_GuideRes RVA 0x2bafd5c =====

void FUN_02bbfd5c(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x7826,0);
  if (iVar1 == 0) {
    uStack_18 = *(undefined4 *)(param_2 + 0xc4);
    uStack_14 = *(undefined4 *)(param_2 + 200);
  }
  else {
    iVar1 = func_0x0229f13c(0x7826,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021e4730(&uStack_18,iVar1,param_2,0);
  }
  *param_1 = uStack_18;
  param_1[1] = uStack_14;
  return;
}



// ===== FAT.AreaBoardActivity$$get_TokenBoost RVA 0x2bafdd0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bbfdd0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7828,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7828,0);
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
  return *(undefined4 *)(param_1 + 0x8c);
}



// ===== FAT.AreaBoardActivity$$get_ProgressPhase RVA 0x2bafe24 =====

undefined4 FUN_02bbfe24(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7829,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7829,0);
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



// ===== FAT.AreaBoardActivity$$get_ProgressNum RVA 0x2bafe78 =====

undefined4 FUN_02bbfe78(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x782a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x782a,0);
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



// ===== FAT.AreaBoardActivity$$get_GalleryRewardClaimed RVA 0x2bafecc =====

uint FUN_02bbfecc(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x782b,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x782b,0);
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
  return (uint)*(byte *)(param_1 + 0x5c);
}



// ===== FAT.AreaBoardActivity$$get_AllItemIdList RVA 0x2baff20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bbff20(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x782c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x782c,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021a9f80 + 0x21a9f68));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x80);
}



// ===== FAT.AreaBoardActivity$$get_MilestoneItemIdList RVA 0x2baff74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bbff74(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x782d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x782d,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021a9f80 + 0x21a9f68));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x84);
}



// ===== FAT.AreaBoardActivity$$get_ChainRewardClaimed RVA 0x2baffc8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bbffc8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x782e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x782e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_022524bc + 0x22523dc);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022524c0 + 0x22523f0),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_022524c4 + 0x22524ac));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x60);
}



// ===== FAT.AreaBoardActivity$$get_TokenNum RVA 0x2bb001c =====

undefined4 FUN_02bc001c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x782f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x782f,0);
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
  return *(undefined4 *)(param_1 + 0x58);
}



// ===== FAT.AreaBoardActivity$$get_VisualBoard RVA 0x2bb0070 =====

void FUN_02bc0070(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x94);
  *param_1 = *(undefined4 *)(param_2 + 0x90);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.AreaBoardActivity$$get_StartPopup RVA 0x2bb007c =====

void FUN_02bc007c(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0xa0);
  *param_1 = uVar1;
  return;
}



// ===== FAT.AreaBoardActivity$$get_EndPopup RVA 0x2bb0090 =====

void FUN_02bc0090(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0xac);
  *param_1 = uVar1;
  return;
}



// ===== FAT.AreaBoardActivity$$get_ConvertPopup RVA 0x2bb00a4 =====

void FUN_02bc00a4(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0xb8);
  *param_1 = uVar1;
  return;
}



// ===== FAT.AreaBoardActivity$$get_VisualLoading RVA 0x2bb00b8 =====

void FUN_02bc00b8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc0);
  *param_1 = *(undefined4 *)(param_2 + 0xbc);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.AreaBoardActivity$$get_VisualHelp RVA 0x2bb00cc =====

void FUN_02bc00cc(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 200);
  *param_1 = *(undefined4 *)(param_2 + 0xc4);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.AreaBoardActivity$$get_VisualComplete RVA 0x2bb00e0 =====

void FUN_02bc00e0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xd0);
  *param_1 = *(undefined4 *)(param_2 + 0xcc);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.AreaBoardActivity$$get_VisualMilestone RVA 0x2bb00f4 =====

void FUN_02bc00f4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xd8);
  *param_1 = *(undefined4 *)(param_2 + 0xd4);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.AreaBoardActivity$$get_VisualMilestoneReward RVA 0x2bb0108 =====

void FUN_02bc0108(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xe0);
  *param_1 = *(undefined4 *)(param_2 + 0xdc);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.AreaBoardActivity$$get_VisualHandbook RVA 0x2bb011c =====

void FUN_02bc011c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xe8);
  *param_1 = *(undefined4 *)(param_2 + 0xe4);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.AreaBoardActivity$$get_VisualHandBookComplete RVA 0x2bb0130 =====

void FUN_02bc0130(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xf0);
  *param_1 = *(undefined4 *)(param_2 + 0xec);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.AreaBoardActivity$$get_VisualTokenTip RVA 0x2bb0144 =====

void FUN_02bc0144(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xf8);
  *param_1 = *(undefined4 *)(param_2 + 0xf4);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.AreaBoardActivity$$.ctor RVA 0x2bb0158 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc0158(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_02bc05cc + 0x2bc0174);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc05d0 + 0x2bc0188));
    func_0x01384978(*(undefined4 *)(_UNK_02bc05d4 + 0x2bc0194));
    func_0x01384978(*(undefined4 *)(_UNK_02bc05d8 + 0x2bc01a0));
    func_0x01384978(*(undefined4 *)(_UNK_02bc05dc + 0x2bc01ac));
    func_0x01384978(*(undefined4 *)(_UNK_02bc05e0 + 0x2bc01b8));
    func_0x01384978(*(undefined4 *)(_UNK_02bc05e4 + 0x2bc01c4));
    func_0x01384978(*(undefined4 *)(_UNK_02bc05e8 + 0x2bc01d0));
    func_0x01384978(*(undefined4 *)(_UNK_02bc05ec + 0x2bc01dc));
    *pcVar6 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02bc05f0 + 0x2bc022c));
  func_0x03d4e3b0(uVar1,**(undefined4 **)(_UNK_02bc05f4 + 0x2bc0240));
  puVar5 = *(undefined4 **)(_UNK_02bc05f8 + 0x2bc0258);
  *(undefined4 *)(param_1 + 0x6c) = 0x76;
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  uVar1 = func_0x01384be4(*puVar5);
  puVar7 = *(undefined4 **)(_UNK_02bc05fc + 0x2bc0274);
  func_0x03258eb8(uVar1,*puVar7);
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x03258eb8(uVar1,*puVar7);
  puVar5 = *(undefined4 **)(_UNK_02bc0600 + 0x2bc029c);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  uVar1 = func_0x01384be4(*puVar5);
  func_0x03d34a50(uVar1,**(undefined4 **)(_UNK_02bc0604 + 0x2bc02b4));
  piVar8 = *(int **)(_UNK_02bc0608 + 0x2bc02c8);
  iVar3 = *piVar8;
  iVar4 = *(int *)(iVar3 + 0x74);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  if (iVar4 == 0) {
    func_0x01384ab4();
    iVar3 = *piVar8;
  }
  uStack_2c = 0;
  uStack_30 = 0;
  FUN_02b644a0(&uStack_30,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x970),0);
  uStack_3c = 0;
  *(undefined4 *)(param_1 + 0x90) = uStack_30;
  *(undefined4 *)(param_1 + 0x94) = uStack_2c;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_02b64854(&uStack_40,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x974),0);
  iVar3 = *piVar8;
  *(undefined4 *)(param_1 + 0xa0) = uStack_38;
  *(ulonglong *)(param_1 + 0x98) = CONCAT44(uStack_3c,uStack_40);
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_02b64854(&uStack_50,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x978),0);
  iVar3 = *piVar8;
  *(undefined4 *)(param_1 + 0xac) = uStack_48;
  *(ulonglong *)(param_1 + 0xa4) = CONCAT44(uStack_4c,uStack_50);
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_02b64854(&uStack_60,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x980),0);
  iVar3 = *piVar8;
  *(undefined4 *)(param_1 + 0xb8) = uStack_58;
  *(ulonglong *)(param_1 + 0xb0) = CONCAT44(uStack_5c,uStack_60);
  uStack_64 = 0;
  uStack_68 = 0;
  FUN_02b644a0(&uStack_68,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x988),0);
  *(undefined4 *)(param_1 + 0xbc) = uStack_68;
  *(undefined4 *)(param_1 + 0xc0) = uStack_64;
  uStack_6c = 0;
  uStack_70 = 0;
  FUN_02b644a0(&uStack_70,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x97c),0);
  *(undefined4 *)(param_1 + 0xc4) = uStack_70;
  *(undefined4 *)(param_1 + 200) = uStack_6c;
  uStack_74 = 0;
  uStack_78 = 0;
  FUN_02b644a0(&uStack_78,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x984),0);
  *(undefined4 *)(param_1 + 0xcc) = uStack_78;
  *(undefined4 *)(param_1 + 0xd0) = uStack_74;
  uStack_7c = 0;
  uStack_80 = 0;
  FUN_02b644a0(&uStack_80,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x98c),0);
  *(undefined4 *)(param_1 + 0xd4) = uStack_80;
  *(undefined4 *)(param_1 + 0xd8) = uStack_7c;
  uStack_84 = 0;
  uStack_88 = 0;
  FUN_02b644a0(&uStack_88,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x990),0);
  *(undefined4 *)(param_1 + 0xdc) = uStack_88;
  *(undefined4 *)(param_1 + 0xe0) = uStack_84;
  uStack_8c = 0;
  uStack_90 = 0;
  FUN_02b644a0(&uStack_90,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x994),0);
  *(undefined4 *)(param_1 + 0xe4) = uStack_90;
  *(undefined4 *)(param_1 + 0xe8) = uStack_8c;
  uStack_94 = 0;
  uStack_98 = 0;
  FUN_02b644a0(&uStack_98,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x998),0);
  *(undefined4 *)(param_1 + 0xec) = uStack_98;
  *(undefined4 *)(param_1 + 0xf0) = uStack_94;
  uStack_9c = 0;
  uStack_a0 = 0;
  FUN_02b644a0(&uStack_a0,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x99c),0);
  *(undefined4 *)(param_1 + 0xf4) = uStack_a0;
  *(undefined4 *)(param_1 + 0xf8) = uStack_9c;
  FUN_02b4dc04(param_1,0);
  *(int **)(param_1 + 0x10) = param_2;
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar1 = (**(code **)(*param_2 + 0x100))(param_2,*(undefined4 *)(*param_2 + 0x104));
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x01cab418(iVar3,uVar1,0);
  puVar5 = *(undefined4 **)(_UNK_02bc060c + 0x2bc059c);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = func_0x01384be4(*puVar5);
  func_0x021552d4(uVar1,param_1,0);
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  func_0x02bc0610(param_1);
  return;
}



// ===== FAT.AreaBoardActivity$$_AddListener RVA 0x2bb0610 =====

/* WARNING: Possible PIC construction at 0x034a7030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x034a7034) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc0610(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_r4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int *unaff_lr;
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
  int *apiStack_18 [2];
  
  pcVar6 = (char *)(_UNK_02bc073c + 0x2bc0624);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc0740 + 0x2bc0638));
    func_0x01384978(*(undefined4 *)(_UNK_02bc0744 + 0x2bc0644));
    func_0x01384978(*(undefined4 *)(_UNK_02bc0748 + 0x2bc0650));
    func_0x01384978(*(undefined4 *)(_UNK_02bc074c + 0x2bc065c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc0750 + 0x2bc0668));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7872,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7872,0);
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
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar5,uVar8,&uStack_30,uVar4,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02bc0754 + 0x2bc06c0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02bc0758 + 0x2bc06dc));
  uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_02bc075c + 0x2bc06f0));
  func_0x03db5c90(uVar8,param_1,**(undefined4 **)(_UNK_02bc0760 + 0x2bc070c),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = **(int **)(_UNK_02bc0764 + 0x2bc0730);
  iVar5 = 0;
  apiStack_18[0] = unaff_r4;
  piVar2 = (int *)func_0x0487907c(*(undefined4 *)(iVar1 + 8),uVar8,0);
  iVar7 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 4);
  if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = func_0x02457d84(iVar7);
  }
  if ((piVar2 == (int *)0x0) || (iVar5 = func_0x02457d4c(piVar2,iVar7), iVar5 != 0)) {
    iVar7 = *(int *)(iVar3 + 0x10);
    *(int *)(iVar1 + 8) = iVar5;
    iVar7 = *(int *)(*(int *)(iVar7 + 0x60) + 4);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = func_0x02457d84(iVar7);
    }
    if (piVar2 == (int *)0x0) {
      return;
    }
    iVar1 = func_0x02457d4c(piVar2,iVar7);
    if (iVar1 != 0) {
      return;
    }
  }
  else {
    unaff_lr = (int *)0x34a7034;
    apiStack_18[0] = piVar2;
    register0x00000054 = (BADSPACEBASE *)apiStack_18;
  }
  *(int **)((int)register0x00000054 + -4) = unaff_lr;
  *(int **)((int)register0x00000054 + -8) = apiStack_18[0];
  func_0x0142996c((int **)((int)register0x00000054 + -0x14),*(undefined4 *)(*piVar2 + 0x20),iVar7);
  piVar2 = *(int **)((int)register0x00000054 + -0xc);
  if (((uint)*(int **)((int)register0x00000054 + -0x14) & 1) == 0) {
    piVar2 = (int *)((uint)((int)register0x00000054 + -0x14) | 1);
  }
  iVar1 = func_0x01419d2c(piVar2);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  func_0x01418ff0(iVar1,0);
  if (((uint)*(int **)((int)register0x00000054 + -0x14) & 1) != 0) {
    func_0x0148d9d4(*(int **)((int)register0x00000054 + -0xc));
  }
  return;
}



// ===== FAT.AreaBoardActivity$$SaveSetup RVA 0x2bb0768 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc0768(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined8 uStack_28;
  
  pcVar3 = (char *)(_UNK_02bc0c10 + 0x2bc0784);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc0c14 + 0x2bc0798));
    func_0x01384978(*(undefined4 *)(_UNK_02bc0c18 + 0x2bc07a4));
    func_0x01384978(*(undefined4 *)(_UNK_02bc0c1c + 0x2bc07b0));
    func_0x01384978(*(undefined4 *)(_UNK_02bc0c20 + 0x2bc07bc));
    func_0x01384978(*(undefined4 *)(_UNK_02bc0c24 + 0x2bc07c8));
    func_0x01384978(*(undefined4 *)(_UNK_02bc0c28 + 0x2bc07d4));
    func_0x01384978(*(undefined4 *)(_UNK_02bc0c2c + 0x2bc07e0));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x7830,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 0x28);
    uVar2 = func_0x01c23578(0,*(undefined4 *)(param_1 + 0x40),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar6 = *(undefined4 **)(_UNK_02bc0c30 + 0x2bc0894);
    func_0x03652b00(iVar1,uVar2,*puVar6);
    uVar2 = func_0x01c23578(1,*(undefined4 *)(param_1 + 0x48),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar1,uVar2,*puVar6);
    uVar2 = func_0x01c23578(2,*(undefined4 *)(param_1 + 0x4c),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar1,uVar2,*puVar6);
    uVar2 = func_0x01c23578(3,*(undefined4 *)(param_1 + 0x50),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar1,uVar2,*puVar6);
    uVar2 = func_0x01c23578(4,*(undefined4 *)(param_1 + 0x54),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar1,uVar2,*puVar6);
    uVar2 = func_0x01c23578(5,*(undefined4 *)(param_1 + 0x44),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar1,uVar2,*puVar6);
    uVar2 = func_0x01c23ac8(6,*(undefined1 *)(param_1 + 0x5c),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar1,uVar2,*puVar6);
    uVar2 = func_0x01c23578(7,*(undefined4 *)(param_1 + 0x58),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar1,uVar2,*puVar6);
    if (*(int *)(param_1 + 0x8c) == 0) {
      uVar2 = func_0x01c23578(8,0xffffffff,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar1,uVar2,*puVar6);
      uVar2 = func_0x01c23578(9,0xffffffff,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar1,uVar2,*puVar6);
      uVar2 = func_0x01c23578(10,0xffffffff,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar1,uVar2,*puVar6);
    }
    else {
      func_0x02bf03d8(*(int *)(param_1 + 0x8c),iVar1,8,9,10,0);
    }
    iVar5 = *(int *)(param_1 + 0x100);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x021553e0(iVar5,iVar1,1000,0);
    iVar5 = *(int *)(param_1 + 0x60);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x03d4f2c8(&uStack_50,iVar5,**(undefined4 **)(_UNK_02bc0c34 + 0x2bc0af0));
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = iStack_44;
    uStack_28 = uStack_40;
    puVar4 = *(undefined4 **)(_UNK_02bc0c38 + 0x2bc0b20);
    while (iVar5 = func_0x03f97a34(&uStack_38,*puVar4), iVar5 != 0) {
      uVar2 = func_0x01c23ac8(iStack_2c + 10000,(char)uStack_28 != '\0',0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar1,uVar2,*puVar6);
    }
    func_0x03f97b7c(&uStack_38,**(undefined4 **)(_UNK_02bc0c3c + 0x2bc0b7c));
  }
  else {
    iVar1 = func_0x0229f13c(0x7830,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.AreaBoardActivity$$LoadSetup RVA 0x2bb0c48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc0c48(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
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
  
  pcVar5 = (char *)(_UNK_02bc0f34 + 0x2bc0c64);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc0f38 + 0x2bc0c78));
    func_0x01384978(*(undefined4 *)(_UNK_02bc0f3c + 0x2bc0c84));
    func_0x01384978(*(undefined4 *)(_UNK_02bc0f40 + 0x2bc0c90));
    func_0x01384978(*(undefined4 *)(_UNK_02bc0f44 + 0x2bc0c9c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc0f48 + 0x2bc0ca8));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x7834,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7834,0);
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
    iVar7 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar4,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(param_2 + 0x28);
  uVar8 = func_0x01c23c30(0,iVar7,0);
  *(undefined4 *)(param_1 + 0x40) = uVar8;
  uVar8 = func_0x01c23c30(1,iVar7,0);
  *(undefined4 *)(param_1 + 0x48) = uVar8;
  uVar8 = func_0x01c23c30(2,iVar7,0);
  *(undefined4 *)(param_1 + 0x4c) = uVar8;
  uVar8 = func_0x01c23c30(3,iVar7,0);
  *(undefined4 *)(param_1 + 0x50) = uVar8;
  uVar8 = func_0x01c23c30(4,iVar7,0);
  *(undefined4 *)(param_1 + 0x54) = uVar8;
  uVar8 = func_0x01c23c30(5,iVar7,0);
  *(undefined4 *)(param_1 + 0x44) = uVar8;
  uVar1 = func_0x01c23b88(6,iVar7,0);
  *(undefined1 *)(param_1 + 0x5c) = uVar1;
  uVar8 = func_0x01c23c30(7,iVar7,0);
  *(undefined4 *)(param_1 + 0x58) = uVar8;
  iVar2 = FUN_02bbfc04(param_1);
  if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x1c))) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02bc0f4c + 0x2bc0dd4));
    func_0x02bf44e8(iVar2,0);
    *(int *)(param_1 + 0x8c) = iVar2;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = 10;
    uStack_2c = 0;
    func_0x02bf061c(iVar2,iVar7,8,9);
  }
  iVar2 = *(int *)(param_1 + 0x100);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x02155594(iVar2,iVar7,1000,0);
  iVar2 = *(int *)(param_1 + 0x60);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x03d4f020(iVar2,**(undefined4 **)(_UNK_02bc0f50 + 0x2bc0e54));
  iVar2 = 7;
  puVar10 = *(undefined4 **)(_UNK_02bc0f54 + 0x2bc0e70);
  while( true ) {
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar7 + 0xc) <= iVar2) break;
    iVar3 = func_0x03653d1c(iVar7,iVar2,*puVar10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0xc);
    if (10000 < iVar3) {
      iVar6 = *(int *)(param_1 + 0x60);
      uVar8 = func_0x01c23b88(iVar3,iVar7,0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x03d50c54(iVar6,iVar3 + -10000,uVar8,**(undefined4 **)(_UNK_02bc0f58 + 0x2bc0eec));
    }
    iVar2 = iVar2 + 1;
  }
  func_0x02bc0f5c(param_1);
  func_0x02bc11f4(param_1);
  func_0x02bc1cec(param_1);
  func_0x02bc1e44(param_1);
  func_0x02bc1f48(param_1);
  pcVar5 = (char *)(_UNK_02bc2224 + 0x2bc2110);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc2228 + 0x2bc2124));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x7848,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7848,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar8,&uStack_30,uVar4);
    return;
  }
  iVar2 = FUN_02bbfc04(param_1);
  if ((iVar2 == 0) || (iVar2 = *(int *)(iVar2 + 0x1c), iVar2 < 1)) {
    return;
  }
  iVar7 = *(int *)(param_1 + 0x8c);
  if (iVar7 == 0) {
    iVar7 = func_0x01384be4(**(undefined4 **)(_UNK_02bc222c + 0x2bc21a4));
    func_0x02bf44e8(iVar7,0);
    *(int *)(param_1 + 0x8c) = iVar7;
    if (iVar7 == 0) {
      func_0x01384bf0();
      iVar7 = 0;
    }
  }
  func_0x02befbb0(iVar7,iVar2,param_1,0);
  iVar2 = *(int *)(param_1 + 0x8c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x02bf02d0(iVar2,0);
  uVar8 = *(undefined4 *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x8c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_02befe10 + 0x2befcf4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02befe14 + 0x2befd08),uVar8,0);
    *pcVar5 = '\x01';
  }
  iVar7 = func_0x0229f06c(0x5ca,0);
  if (iVar7 != 0) {
    iVar7 = func_0x0229f13c(0x5ca,0);
    if (iVar7 == 0) {
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
    if (*(int *)(iVar7 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar7 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485238(&uStack_38,uVar8,0);
    iVar3 = *(int *)(iVar7 + 8);
    uVar8 = *(undefined4 *)(iVar7 + 0xc);
    iVar2 = *(int *)(iVar7 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar3,uVar8,&uStack_38,uVar4,0,0);
    return;
  }
  iVar7 = func_0x02beec64(iVar2);
  if (iVar7 != 0) {
    iVar7 = *(int *)(iVar2 + 8);
    uVar9 = *(uint *)(iVar2 + 0x14);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar7 + 0x14);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar2 + 0x14);
    iVar7 = *(int *)(iVar7 + 0xc);
    if (iVar3 + 1 < iVar7) {
      do {
        iVar3 = iVar3 + 1;
        iVar6 = func_0x02befe18(iVar2,iVar3,uVar8);
        if (iVar6 == 0) {
          iVar3 = *(int *)(iVar2 + 0x14);
          break;
        }
        *(int *)(iVar2 + 0x14) = iVar3;
      } while (iVar7 + -1 != iVar3);
    }
    if ((int)uVar9 < iVar3) {
      iVar7 = *(int *)(iVar2 + 0x20);
      if (0x7fffffff < (*(uint *)(iVar2 + 0x10) & uVar9)) {
        *(int *)(iVar2 + 0x10) = iVar3;
      }
      if (iVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02befe08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar7 + 0xc))(*(undefined4 *)(iVar7 + 0x20),*(undefined4 *)(iVar7 + 0x14));
        return;
      }
    }
  }
  return;
}



// ===== FAT.AreaBoardActivity$$_RefreshPopupInfo RVA 0x2bb0f5c =====

void FUN_02bc0f5c(int *param_1)

{
  int iVar1;
  undefined8 uStack_30;
  int iStack_28;
  int iStack_20;
  int iStack_1c;
  
  iStack_1c = 0;
  iStack_20 = 0;
  uStack_30 = 0;
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x7839,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (iVar1 != 0) {
      iVar1 = param_1[0xf];
      iStack_20 = param_1[0x24];
      iStack_1c = param_1[0x25];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_02b64540(&iStack_20,*(undefined4 *)(iVar1 + 0x3c),0);
      iVar1 = param_1[0xf];
      uStack_30 = *(undefined8 *)(param_1 + 0x26);
      iStack_28 = param_1[0x28];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_02b64928(&uStack_30,*(undefined4 *)(iVar1 + 0x44),param_1,0,1,0);
      iVar1 = param_1[0xf];
      uStack_30 = *(undefined8 *)(param_1 + 0x29);
      iStack_28 = param_1[0x2b];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_02b64928(&uStack_30,*(undefined4 *)(iVar1 + 0x1c),param_1,0,0,0);
      iVar1 = param_1[0xf];
      uStack_30 = *(undefined8 *)(param_1 + 0x2c);
      iStack_28 = param_1[0x2e];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_02b64928(&uStack_30,*(undefined4 *)(iVar1 + 0x24),param_1,0,0,0);
      iVar1 = param_1[0xf];
      iStack_20 = param_1[0x2f];
      iStack_1c = param_1[0x30];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_02b64540(&iStack_20,*(undefined4 *)(iVar1 + 0x38),0);
      iVar1 = param_1[0xf];
      iStack_20 = param_1[0x31];
      iStack_1c = param_1[0x32];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_02b64540(&iStack_20,*(undefined4 *)(iVar1 + 0x34),0);
      iVar1 = param_1[0xf];
      iStack_20 = param_1[0x33];
      iStack_1c = param_1[0x34];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_02b64540(&iStack_20,*(undefined4 *)(iVar1 + 0x28),0);
      iVar1 = param_1[0xf];
      iStack_20 = param_1[0x35];
      iStack_1c = param_1[0x36];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_02b64540(&iStack_20,*(undefined4 *)(iVar1 + 0x40),0);
      iStack_20 = param_1[0x39];
      iStack_1c = param_1[0x3a];
      iVar1 = param_1[0xf];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_02b64540(&iStack_20,*(undefined4 *)(iVar1 + 0x30),0);
      iVar1 = param_1[0xf];
      iStack_20 = param_1[0x3b];
      iStack_1c = param_1[0x3c];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_02b64540(&iStack_20,*(undefined4 *)(iVar1 + 0x2c),0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7839,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.AreaBoardActivity$$_RefreshAllItemIdList RVA 0x2bb11f4 =====

/* WARNING: Removing unreachable block (ram,0x02bc16a0) */
/* WARNING: Removing unreachable block (ram,0x02bc191c) */
/* WARNING: Removing unreachable block (ram,0x02bc1928) */
/* WARNING: Removing unreachable block (ram,0x02bc16ac) */
/* WARNING: Removing unreachable block (ram,0x02bc16b4) */
/* WARNING: Removing unreachable block (ram,0x02bc1774) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc11f4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_02bc1c74 + 0x2bc120c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc1c78 + 0x2bc1220));
    func_0x01384978(*(undefined4 *)(_UNK_02bc1c7c + 0x2bc122c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc1c80 + 0x2bc1238));
    func_0x01384978(*(undefined4 *)(_UNK_02bc1c84 + 0x2bc1244));
    func_0x01384978(*(undefined4 *)(_UNK_02bc1c88 + 0x2bc1250));
    func_0x01384978(*(undefined4 *)(_UNK_02bc1c8c + 0x2bc125c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc1c90 + 0x2bc1268));
    func_0x01384978(*(undefined4 *)(_UNK_02bc1c94 + 0x2bc1274));
    func_0x01384978(*(undefined4 *)(_UNK_02bc1c98 + 0x2bc1280));
    func_0x01384978(*(undefined4 *)(_UNK_02bc1c9c + 0x2bc128c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc1ca0 + 0x2bc1298));
    func_0x01384978(*(undefined4 *)(_UNK_02bc1ca4 + 0x2bc12a4));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7842,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7842,0);
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
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_30,uVar4,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x80);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  iVar8 = *(int *)(param_1 + 0x84);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar8 + 0xc) = 0;
  iVar1 = *(int *)(param_1 + 0x88);
  *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d3570c(iVar1,**(undefined4 **)(_UNK_02bc1ca8 + 0x2bc1354));
  iStack_34 = FUN_02bbfc04(param_1);
  iVar1 = 0;
  if (iStack_34 != 0) {
    iVar1 = *(int *)(param_1 + 0x3c);
  }
  if (iStack_34 == 0 || iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(iStack_34 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piStack_3c = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_02bc1cac + 0x2bc13a0));
  piVar13 = *(int **)(_UNK_02bc1cb0 + 0x2bc13b8);
  piVar11 = *(int **)(_UNK_02bc1cb4 + 0x2bc13c0);
  puVar12 = *(undefined4 **)(_UNK_02bc1cb8 + 0x2bc13c8);
  piVar7 = piStack_3c;
LAB_02bc13c8:
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar7;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == *piVar13) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
        goto LAB_02bc1424;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar13,0);
LAB_02bc1424:
  iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
  iStack_38 = 0;
  if (iVar1 != 0) {
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar7;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_02bc14a0;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar11,0);
LAB_02bc14a0:
    uVar10 = (*(code *)*puVar2)(piVar7,puVar2[1]);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01db1884(iVar1,uVar10,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar5 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_02bc1cbc + 0x2bc1518));
    do {
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar5;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar13) {
            puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_02bc1580;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar5,*piVar13,0);
LAB_02bc1580:
      iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
      piVar6 = piStack_3c;
      if (iVar1 == 0) goto LAB_02bc1618;
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar5;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar11) {
            puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_02bc15f4;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar5,*piVar11,0);
LAB_02bc15f4:
      uVar10 = (*(code *)*puVar2)(piVar5,puVar2[1]);
      func_0x02f622a4(*(undefined4 *)(param_1 + 0x80),uVar10,*puVar12);
    } while( true );
  }
  iStack_38 = 0;
  if (piVar7 != (int *)0x0) {
    iVar1 = *piVar7;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 == 0) {
LAB_02bc1734:
      puVar2 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_02bc1cc8 + 0x2bc1708),0);
    }
    else {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      while (piVar5[-1] != **(int **)(_UNK_02bc1cc8 + 0x2bc1708)) {
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
        if (uVar3 == 0) goto LAB_02bc1734;
      }
      puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
    }
    (*(code *)*puVar2)(piVar7,puVar2[1]);
  }
  if (iStack_38 != 0) {
    func_0x01384bec();
  }
  iVar1 = *(int *)(iStack_34 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar7 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_02bc1ccc + 0x2bc179c));
  do {
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar7;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar13) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_02bc1804;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar13,0);
LAB_02bc1804:
    iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
    if (iVar1 == 0) {
      if (piVar7 == (int *)0x0) goto LAB_02bc1914;
      iVar1 = *piVar7;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 == 0) {
LAB_02bc18e8:
        puVar12 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_02bc1cd4 + 0x2bc18bc),0);
      }
      else {
        piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        while (piVar11[-1] != **(int **)(_UNK_02bc1cd4 + 0x2bc18bc)) {
          uVar3 = uVar3 - 1;
          piVar11 = piVar11 + 2;
          if (uVar3 == 0) goto LAB_02bc18e8;
        }
        puVar12 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
      }
      (*(code *)*puVar12)(piVar7,puVar12[1]);
LAB_02bc1914:
      iVar1 = 0;
      piVar7 = *(int **)(_UNK_02bc1cd8 + 0x2bc1948);
      puVar2 = *(undefined4 **)(_UNK_02bc1cdc + 0x2bc1950);
      puVar12 = *(undefined4 **)(_UNK_02bc1ce0 + 0x2bc1958);
      while( true ) {
        iVar8 = *(int *)(iStack_34 + 0x48);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar8 + 0xc) <= iVar1) break;
        iVar8 = *(int *)(iStack_34 + 0x48);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uVar10 = func_0x03653d1c(iVar8,iVar1,**(undefined4 **)(_UNK_02bc1ce8 + 0x2bc1998));
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x02566088(&uStack_30,uVar10,0);
        uVar4 = uStack_2c;
        uVar10 = uStack_30;
        iVar8 = *(int *)(param_1 + 0x88);
        uStack_2c = 0;
        uStack_30 = 0;
        func_0x038fd264(&uStack_30,uVar10,uVar4,*puVar2);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uStack_40 = *puVar12;
        func_0x03d373d8(iVar8,iVar1,uStack_30,uStack_2c);
        iVar1 = iVar1 + 1;
      }
      return;
    }
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar7;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_02bc1878;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar11,0);
LAB_02bc1878:
    uVar10 = (*(code *)*puVar2)(piVar7,puVar2[1]);
    func_0x02f622a4(*(undefined4 *)(param_1 + 0x84),uVar10,*puVar12);
  } while( true );
LAB_02bc1618:
  if (piVar5 != (int *)0x0) {
    iVar1 = *piVar5;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_02bc1cc0 + 0x2bc1638)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_02bc1688;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_02bc1cc0 + 0x2bc1638),0);
LAB_02bc1688:
    (*(code *)*puVar2)(piVar5,puVar2[1]);
    piVar7 = piVar6;
  }
  goto LAB_02bc13c8;
}



// ===== FAT.AreaBoardActivity$$RefreshOutputMethod RVA 0x2bb1cec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc1cec(int param_1)

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
  
  pcVar6 = (char *)(_UNK_02bc1e38 + 0x2bc1d00);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc1e3c + 0x2bc1d14));
    func_0x01384978(*(undefined4 *)(_UNK_02bc1e40 + 0x2bc1d20));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x7843,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7843,0);
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
  pcVar3 = (char *)FUN_02bbfc04(param_1);
  iVar2 = 0;
  if (pcVar3 != (char *)0x0) {
    iVar2 = *(int *)(param_1 + 0x3c);
    pcVar6 = pcVar3;
  }
  if (pcVar3 == (char *)0x0 || iVar2 == 0) {
    return;
  }
  iVar2 = *(int *)(pcVar6 + 0x54);
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
    iVar2 = *(int *)(pcVar6 + 0x60);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    if ((bool)(bVar1 & 0 < iVar2)) goto LAB_02bc1e0c;
    if (iVar2 < 1) {
      if (bVar1) {
        uVar7 = 2;
      }
      else {
        uVar7 = 0;
      }
      goto LAB_02bc1e20;
    }
  }
  else if (bVar1) {
LAB_02bc1e0c:
    uVar7 = 3;
    goto LAB_02bc1e20;
  }
  uVar7 = 1;
LAB_02bc1e20:
  *(undefined4 *)(param_1 + 0x70) = uVar7;
  return;
}



// ===== FAT.AreaBoardActivity$$RefreshOutputType RVA 0x2bb1e44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc1e44(int param_1)

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
  
  pcVar5 = (char *)(_UNK_02bc1f3c + 0x2bc1e58);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc1f40 + 0x2bc1e6c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc1f44 + 0x2bc1e78));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7845,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7845,0);
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
  pcVar2 = (char *)FUN_02bbfc04(param_1);
  iVar1 = 0;
  if (pcVar2 != (char *)0x0) {
    iVar1 = *(int *)(param_1 + 0x3c);
    pcVar5 = pcVar2;
  }
  if (pcVar2 == (char *)0x0 || iVar1 == 0) {
    return;
  }
  if (*(int *)(pcVar5 + 0x30) == 0) {
    iVar1 = *(int *)(pcVar5 + 0x60);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
      iVar1 = *(int *)(pcVar5 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) == 0) {
        uVar6 = 1;
        goto LAB_02bc1f2c;
      }
    }
  }
  uVar6 = 2;
LAB_02bc1f2c:
  *(undefined4 *)(param_1 + 0x74) = uVar6;
  return;
}



// ===== FAT.AreaBoardActivity$$_RefreshScoreEntity RVA 0x2bb1f48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc1f48(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02bc20e0 + 0x2bc1f60);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc20e4 + 0x2bc1f74));
    func_0x01384978(*(undefined4 *)(_UNK_02bc20e8 + 0x2bc1f80));
    func_0x01384978(*(undefined4 *)(_UNK_02bc20ec + 0x2bc1f8c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7847,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7847,0);
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
  iVar1 = func_0x02bc686c(param_1);
  if ((((iVar1 != 0) && (*(int *)(param_1 + 0x74) == 2)) && (*(int *)(param_1 + 0x3c) != 0)) &&
     (iVar1 = FUN_02bbfc04(param_1), iVar1 != 0)) {
    iVar3 = *(int *)(param_1 + 0xfc);
    if (iVar3 == 0) {
      iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02bc20f0 + 0x2bc2030));
      FUN_02afb3e0(iVar3,0);
      *(int *)(param_1 + 0xfc) = iVar3;
    }
    piVar8 = *(int **)(_UNK_02bc20f4 + 0x2bc2050);
    uVar5 = *(undefined4 *)(iVar1 + 0x30);
    uVar2 = *(undefined4 *)(iVar1 + 100);
    iVar1 = *piVar8;
    uVar7 = *(undefined4 *)(param_1 + 0x58);
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar8;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x1a4);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_40 = **(undefined4 **)(_UNK_02bc20f8 + 0x2bc209c);
    uStack_3c = 1;
    uStack_34 = 0x3f;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_48 = uVar5;
    uStack_44 = uVar6;
    FUN_02af6c48(iVar3,uVar7,param_1,uVar2);
  }
  return;
}



// ===== FAT.AreaBoardActivity$$_InitBoost RVA 0x2bb20fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc20fc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int iVar4;
  int iVar5;
  undefined4 unaff_r5;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar6 = (char *)(_UNK_02bc2224 + 0x2bc2110);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc2228 + 0x2bc2124));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7848,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7848,0);
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
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar7,&uStack_30,uVar3);
    return;
  }
  iVar1 = FUN_02bbfc04(param_1);
  if ((iVar1 == 0) || (iVar1 = *(int *)(iVar1 + 0x1c), iVar1 < 1)) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x8c);
  if (iVar4 == 0) {
    iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_02bc222c + 0x2bc21a4));
    func_0x02bf44e8(iVar4,0);
    *(int *)(param_1 + 0x8c) = iVar4;
    if (iVar4 == 0) {
      func_0x01384bf0();
      iVar4 = 0;
    }
  }
  func_0x02befbb0(iVar4,iVar1,param_1,0);
  iVar1 = *(int *)(param_1 + 0x8c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02bf02d0(iVar1,0);
  uVar7 = *(undefined4 *)(param_1 + 0x58);
  iVar1 = *(int *)(param_1 + 0x8c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_02befe10 + 0x2befcf4);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02befe14 + 0x2befd08),uVar7,0);
    *pcVar6 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x5ca,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x5ca,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = uStack_14;
    uStack_20 = uStack_18;
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
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485238(&uStack_38,uVar7,0);
    iVar5 = *(int *)(iVar4 + 8);
    uVar7 = *(undefined4 *)(iVar4 + 0xc);
    iVar1 = *(int *)(iVar4 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  iVar4 = func_0x02beec64(iVar1);
  if (iVar4 != 0) {
    iVar4 = *(int *)(iVar1 + 8);
    uVar8 = *(uint *)(iVar1 + 0x14);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0x14);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar1 + 0x14);
    iVar4 = *(int *)(iVar4 + 0xc);
    if (iVar5 + 1 < iVar4) {
      do {
        iVar5 = iVar5 + 1;
        iVar2 = func_0x02befe18(iVar1,iVar5,uVar7);
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar1 + 0x14);
          break;
        }
        *(int *)(iVar1 + 0x14) = iVar5;
      } while (iVar4 + -1 != iVar5);
    }
    if ((int)uVar8 < iVar5) {
      iVar4 = *(int *)(iVar1 + 0x20);
      if (0x7fffffff < (*(uint *)(iVar1 + 0x10) & uVar8)) {
        *(int *)(iVar1 + 0x10) = iVar5;
      }
      if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02befe08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x14));
        return;
      }
    }
  }
  return;
}



// ===== FAT.AreaBoardActivity$$SetupFresh RVA 0x2bb2230 =====

void FUN_02bc2230(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x7849,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(param_1 + 0x3c);
    iVar1 = *(int *)(iVar1 + 0x2c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = *(undefined4 *)(iVar2 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x01cf6408(iVar1,uVar3,0);
    *(undefined4 *)(param_1 + 0x40) = uVar3;
    func_0x02bc2354(param_1);
    FUN_02bc1cec(param_1);
    FUN_02bc1e44(param_1);
    func_0x02bc2f08(param_1);
    FUN_02bc1f48(param_1);
    func_0x02bc2fa4(param_1);
    func_0x02bc34b4(param_1);
    FUN_02bc0f5c(param_1);
    func_0x02bc35b0(param_1);
    func_0x02bc3674(param_1);
    FUN_02bc20fc(param_1);
    uStack_20 = *(undefined8 *)(param_1 + 0x98);
    uStack_18 = *(undefined4 *)(param_1 + 0xa0);
    FUN_02b64cc4(&uStack_20,0,0,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x7849,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.AreaBoardActivity$$_InitBoardData RVA 0x2bb2354 =====

/* WARNING: Removing unreachable block (ram,0x02bc2800) */
/* WARNING: Removing unreachable block (ram,0x02bc2a7c) */
/* WARNING: Removing unreachable block (ram,0x02bc2a88) */
/* WARNING: Removing unreachable block (ram,0x02bc280c) */
/* WARNING: Removing unreachable block (ram,0x02bc2814) */
/* WARNING: Removing unreachable block (ram,0x02bc28d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc2354(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_02bc2e90 + 0x2bc236c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc2e94 + 0x2bc2380));
    func_0x01384978(*(undefined4 *)(_UNK_02bc2e98 + 0x2bc238c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc2e9c + 0x2bc2398));
    func_0x01384978(*(undefined4 *)(_UNK_02bc2ea0 + 0x2bc23a4));
    func_0x01384978(*(undefined4 *)(_UNK_02bc2ea4 + 0x2bc23b0));
    func_0x01384978(*(undefined4 *)(_UNK_02bc2ea8 + 0x2bc23bc));
    func_0x01384978(*(undefined4 *)(_UNK_02bc2eac + 0x2bc23c8));
    func_0x01384978(*(undefined4 *)(_UNK_02bc2eb0 + 0x2bc23d4));
    func_0x01384978(*(undefined4 *)(_UNK_02bc2eb4 + 0x2bc23e0));
    func_0x01384978(*(undefined4 *)(_UNK_02bc2eb8 + 0x2bc23ec));
    func_0x01384978(*(undefined4 *)(_UNK_02bc2ebc + 0x2bc23f8));
    func_0x01384978(*(undefined4 *)(_UNK_02bc2ec0 + 0x2bc2404));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x784a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x784a,0);
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
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_30,uVar4,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x80);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  iVar8 = *(int *)(param_1 + 0x84);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar8 + 0xc) = 0;
  iVar1 = *(int *)(param_1 + 0x88);
  *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d3570c(iVar1,**(undefined4 **)(_UNK_02bc2ec4 + 0x2bc24b4));
  iStack_34 = FUN_02bbfc04(param_1);
  iVar1 = 0;
  if (iStack_34 != 0) {
    iVar1 = *(int *)(param_1 + 0x3c);
  }
  if (iStack_34 == 0 || iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(iStack_34 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piStack_3c = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_02bc2ec8 + 0x2bc2500));
  piVar13 = *(int **)(_UNK_02bc2ecc + 0x2bc2518);
  piVar11 = *(int **)(_UNK_02bc2ed0 + 0x2bc2520);
  puVar12 = *(undefined4 **)(_UNK_02bc2ed4 + 0x2bc2528);
  piVar7 = piStack_3c;
LAB_02bc2528:
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar7;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == *piVar13) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
        goto LAB_02bc2584;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar13,0);
LAB_02bc2584:
  iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
  iStack_38 = 0;
  if (iVar1 != 0) {
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar7;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_02bc2600;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar11,0);
LAB_02bc2600:
    uVar10 = (*(code *)*puVar2)(piVar7,puVar2[1]);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01db1884(iVar1,uVar10,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar5 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_02bc2ed8 + 0x2bc2678));
    do {
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar5;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar13) {
            puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_02bc26e0;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar5,*piVar13,0);
LAB_02bc26e0:
      iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
      piVar6 = piStack_3c;
      if (iVar1 == 0) goto LAB_02bc2778;
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar5;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar11) {
            puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_02bc2754;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar5,*piVar11,0);
LAB_02bc2754:
      uVar10 = (*(code *)*puVar2)(piVar5,puVar2[1]);
      func_0x02f622a4(*(undefined4 *)(param_1 + 0x80),uVar10,*puVar12);
    } while( true );
  }
  iStack_38 = 0;
  if (piVar7 != (int *)0x0) {
    iVar1 = *piVar7;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 == 0) {
LAB_02bc2894:
      puVar2 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_02bc2ee4 + 0x2bc2868),0);
    }
    else {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      while (piVar5[-1] != **(int **)(_UNK_02bc2ee4 + 0x2bc2868)) {
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
        if (uVar3 == 0) goto LAB_02bc2894;
      }
      puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
    }
    (*(code *)*puVar2)(piVar7,puVar2[1]);
  }
  if (iStack_38 != 0) {
    func_0x01384bec();
  }
  iVar1 = *(int *)(iStack_34 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar7 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_02bc2ee8 + 0x2bc28fc));
  do {
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar7;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar13) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_02bc2964;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar13,0);
LAB_02bc2964:
    iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
    if (iVar1 == 0) {
      if (piVar7 == (int *)0x0) goto LAB_02bc2a74;
      iVar1 = *piVar7;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 == 0) {
LAB_02bc2a48:
        puVar12 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_02bc2ef0 + 0x2bc2a1c),0);
      }
      else {
        piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        while (piVar11[-1] != **(int **)(_UNK_02bc2ef0 + 0x2bc2a1c)) {
          uVar3 = uVar3 - 1;
          piVar11 = piVar11 + 2;
          if (uVar3 == 0) goto LAB_02bc2a48;
        }
        puVar12 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
      }
      (*(code *)*puVar12)(piVar7,puVar12[1]);
LAB_02bc2a74:
      iVar1 = 0;
      piVar7 = *(int **)(_UNK_02bc2ef4 + 0x2bc2aa8);
      puVar2 = *(undefined4 **)(_UNK_02bc2ef8 + 0x2bc2ab0);
      puVar12 = *(undefined4 **)(_UNK_02bc2efc + 0x2bc2ab8);
      while( true ) {
        iVar8 = *(int *)(iStack_34 + 0x48);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar8 + 0xc) <= iVar1) break;
        iVar8 = *(int *)(iStack_34 + 0x48);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uVar10 = func_0x03653d1c(iVar8,iVar1,**(undefined4 **)(_UNK_02bc2f04 + 0x2bc2af8));
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x02566088(&uStack_30,uVar10,0);
        uVar4 = uStack_2c;
        uVar10 = uStack_30;
        iVar8 = *(int *)(param_1 + 0x88);
        uStack_2c = 0;
        uStack_30 = 0;
        func_0x038fd264(&uStack_30,uVar10,uVar4,*puVar2);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uStack_40 = *puVar12;
        func_0x03d373d8(iVar8,iVar1,uStack_30,uStack_2c);
        iVar1 = iVar1 + 1;
      }
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x3c);
      uVar10 = *(undefined4 *)(param_1 + 0x80);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01cc1cc8(iVar1,uVar10,0);
      func_0x02bc5d0c(param_1,*(undefined4 *)(iStack_34 + 0x14),1);
      iVar1 = *(int *)(param_1 + 100);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02139cf4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x020da680(&uStack_30,iVar1,0);
      uVar10 = uStack_2c;
      uVar4 = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0x44) = uStack_2c;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x020dc7e4(iVar1,uVar10,uVar4,0);
      return;
    }
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar7;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_02bc29d8;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar11,0);
LAB_02bc29d8:
    uVar10 = (*(code *)*puVar2)(piVar7,puVar2[1]);
    func_0x02f622a4(*(undefined4 *)(param_1 + 0x84),uVar10,*puVar12);
  } while( true );
LAB_02bc2778:
  if (piVar5 != (int *)0x0) {
    iVar1 = *piVar5;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_02bc2edc + 0x2bc2798)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_02bc27e8;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_02bc2edc + 0x2bc2798),0);
LAB_02bc27e8:
    (*(code *)*puVar2)(piVar5,puVar2[1]);
    piVar7 = piVar6;
  }
  goto LAB_02bc2528;
}



// ===== FAT.AreaBoardActivity$$_RefreshSpawnBonusHandler RVA 0x2bb2f08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc2f08(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x7861,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7861,0);
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
  iVar2 = func_0x02bc6808(param_1);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  piVar6 = *(int **)(param_1 + 0x100);
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



// ===== FAT.AreaBoardActivity$$_InitStartItem RVA 0x2bb2fa4 =====

/* WARNING: Removing unreachable block (ram,0x02bc335c) */
/* WARNING: Removing unreachable block (ram,0x02bc3368) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc2fa4(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int unaff_r6;
  int *piVar12;
  int *piVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_02bc3468 + 0x2bc2fbc);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc346c + 0x2bc2fd0));
    func_0x01384978(*(undefined4 *)(_UNK_02bc3470 + 0x2bc2fdc));
    func_0x01384978(*(undefined4 *)(_UNK_02bc3474 + 0x2bc2fe8));
    func_0x01384978(*(undefined4 *)(_UNK_02bc3478 + 0x2bc2ff4));
    func_0x01384978(*(undefined4 *)(_UNK_02bc347c + 0x2bc3000));
    func_0x01384978(*(undefined4 *)(_UNK_02bc3480 + 0x2bc300c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc3484 + 0x2bc3018));
    func_0x01384978(*(undefined4 *)(_UNK_02bc3488 + 0x2bc3024));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7863,0);
  if (iVar1 == 0) {
    iVar2 = FUN_02bbfc04(param_1);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(param_1 + 0x3c);
      unaff_r6 = iVar2;
    }
    if (iVar2 == 0 || iVar1 == 0) {
      return;
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x40);
    uVar11 = *(undefined4 *)(param_1 + 100);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01cdef00(iVar1,uVar11,0,0);
    iVar2 = *(int *)(unaff_r6 + 0x34);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x03653608(iVar2,**(undefined4 **)(_UNK_02bc348c + 0x2bc30f8));
    piVar12 = *(int **)(_UNK_02bc3490 + 0x2bc3110);
    piVar13 = *(int **)(_UNK_02bc3494 + 0x2bc3118);
LAB_02bc3114:
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar12) {
          puVar4 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
          goto LAB_02bc3170;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar12,0);
LAB_02bc3170:
    iVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    if (iVar2 != 0) {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar3;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_02bc3498 + 0x2bc31a4)) {
            puVar4 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
            goto LAB_02bc31ec;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02bc3498 + 0x2bc31a4),0);
LAB_02bc31ec:
      uVar11 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (*(int *)(*piVar13 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x02565a88(uVar11,0);
      if (iVar2 != 0) {
        uVar11 = *(undefined4 *)(iVar2 + 8);
        uVar6 = *(undefined4 *)(iVar2 + 0xc);
        iVar2 = **(int **)(_UNK_02bc349c + 0x2bc3238);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = **(int **)(_UNK_02bc34a0 + 0x2bc325c);
        }
        uVar10 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x19c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_30 = **(undefined4 **)(_UNK_02bc34a4 + 0x2bc327c);
        uStack_2c = **(undefined4 **)(_UNK_02bc34a8 + 0x2bc3288);
        uStack_34 = 0x318;
        uStack_28 = 0;
        uStack_40 = 0;
        uStack_3c = 0;
        uStack_38 = 0;
        uVar11 = func_0x01cdcbac(iVar1,uVar11,uVar6,uVar10);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01cdf088(iVar1,uVar11,0);
      }
      goto LAB_02bc3114;
    }
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar12 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar12[-1] == **(int **)(_UNK_02bc34ac + 0x2bc32fc)) {
            puVar4 = (undefined4 *)(iVar2 + *piVar12 * 8 + 0xc0);
            goto LAB_02bc3344;
          }
          uVar5 = uVar5 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02bc34ac + 0x2bc32fc),0);
LAB_02bc3344:
      (*(code *)*puVar4)(piVar3,puVar4[1]);
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar9 = (char *)(_UNK_01cdf07c + 0x1cdefe8);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01cdf080 + 0x1cdeffc),0);
      *pcVar9 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x54e,0);
    if (iVar2 == 0) {
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x036890ec(&stack0xffffffe8,iVar1,**(undefined4 **)(_UNK_01cdf084 + 0x1cdf06c));
      return;
    }
    iVar2 = func_0x0229f13c(0x54e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x7863,0);
    iVar1 = param_1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_30 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,iVar1,0);
  iVar8 = *(int *)(iVar2 + 8);
  uVar11 = *(undefined4 *)(iVar2 + 0xc);
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 2;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  func_0x0245495c(iVar8,uVar11,&uStack_30,uVar6,0,0);
  return;
}



// ===== FAT.AreaBoardActivity$$_InitStartToken RVA 0x2bb34b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc34b4(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02bc35a4 + 0x2bc34cc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc35a8 + 0x2bc34e0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7864,0);
  if (iVar1 == 0) {
    uVar7 = FUN_02bbfc04(param_1);
    iVar1 = (int)((ulonglong)uVar7 >> 0x20);
    iVar3 = (int)uVar7;
    if (iVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0x3c);
    }
    if ((iVar3 != 0 && iVar1 != 0) && (*(int *)(param_1 + 0x74) == 2)) {
      piVar6 = *(int **)(_UNK_02bc35ac + 0x2bc3568);
      uVar5 = *(undefined4 *)(iVar3 + 0x38);
      uVar2 = *(undefined4 *)(iVar3 + 100);
      iVar1 = *piVar6;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4(iVar1);
        iVar1 = *piVar6;
      }
      func_0x02bc98c4(param_1,uVar2,uVar5,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x19c));
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x7864,0);
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



// ===== FAT.AreaBoardActivity$$_InitBoardMoveHandler RVA 0x2bb35b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc35b0(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02bc3668 + 0x2bc35c8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc366c + 0x2bc35dc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7865,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7865,0);
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
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02bc3670 + 0x2bc363c));
  uStack_20 = 0;
  func_0x02c06bbc(uVar5,param_1,2,uVar2);
  *(undefined4 *)(param_1 + 0x78) = uVar5;
  return;
}



// ===== FAT.AreaBoardActivity$$_InitBoardExtremeHandler RVA 0x2bb3674 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc3674(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02bc3714 + 0x2bc3688);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc3718 + 0x2bc369c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7866,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7866,0);
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
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02bc371c + 0x2bc36f4));
  func_0x02c05f90(uVar5,param_1,2,0);
  *(undefined4 *)(param_1 + 0x7c) = uVar5;
  return;
}



// ===== FAT.AreaBoardActivity$$ResEnumerate RVA 0x2bb3720 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bc3720(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_02bc37d0 + 0x2bc3734);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc37d4 + 0x2bc3748));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7867,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7867,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
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
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02bc37d8 + 0x2bc37a0));
  func_0x04874ed4(iVar1,0);
  *(undefined4 *)(iVar1 + 8) = 0xfffffffe;
  uVar5 = func_0x048799ac(0);
  *(undefined4 *)(iVar1 + 0x14) = uVar5;
  *(undefined4 *)(iVar1 + 0x18) = param_1;
  return iVar1;
}



// ===== FAT.AreaBoardActivity.<ResEnumerate>d__116$$.ctor RVA 0x2bb37dc =====

void FUN_02bc37dc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  func_0x04874ed4(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  uVar1 = func_0x048799ac(0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}



// ===== FAT.AreaBoardActivity$$_RemoveListener RVA 0x2bb3804 =====

/* WARNING: Possible PIC construction at 0x034a7290: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x034a7294) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc3804(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_r4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int *unaff_lr;
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
  int *apiStack_18 [2];
  
  pcVar6 = (char *)(_UNK_02bc3930 + 0x2bc3818);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc3934 + 0x2bc382c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc3938 + 0x2bc3838));
    func_0x01384978(*(undefined4 *)(_UNK_02bc393c + 0x2bc3844));
    func_0x01384978(*(undefined4 *)(_UNK_02bc3940 + 0x2bc3850));
    func_0x01384978(*(undefined4 *)(_UNK_02bc3944 + 0x2bc385c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7874,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7874,0);
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
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02bc3948 + 0x2bc38b4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02bc394c + 0x2bc38d0));
  iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02bc3950 + 0x2bc38e4));
  func_0x03db5c90(iVar5,param_1,**(undefined4 **)(_UNK_02bc3954 + 0x2bc3900),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = **(int **)(_UNK_02bc3958 + 0x2bc3924);
  if (iVar5 != 0) {
    iVar8 = 0;
    apiStack_18[0] = unaff_r4;
    piVar2 = (int *)func_0x0487929c(*(undefined4 *)(iVar1 + 8),iVar5,0);
    iVar5 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 4);
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = func_0x02457d84(iVar5);
    }
    if ((piVar2 == (int *)0x0) || (iVar8 = func_0x02457d4c(piVar2,iVar5), iVar8 != 0)) {
      iVar5 = *(int *)(iVar3 + 0x10);
      *(int *)(iVar1 + 8) = iVar8;
      iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 4);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = func_0x02457d84(iVar5);
      }
      if (piVar2 == (int *)0x0) {
        return;
      }
      iVar1 = func_0x02457d4c(piVar2,iVar5);
      if (iVar1 != 0) {
        return;
      }
    }
    else {
      unaff_lr = (int *)0x34a7294;
      apiStack_18[0] = piVar2;
      register0x00000054 = (BADSPACEBASE *)apiStack_18;
    }
    *(int **)((int)register0x00000054 + -4) = unaff_lr;
    *(int **)((int)register0x00000054 + -8) = apiStack_18[0];
    func_0x0142996c((int **)((int)register0x00000054 + -0x14),*(undefined4 *)(*piVar2 + 0x20),iVar5)
    ;
    piVar2 = *(int **)((int)register0x00000054 + -0xc);
    if (((uint)*(int **)((int)register0x00000054 + -0x14) & 1) == 0) {
      piVar2 = (int *)((uint)((int)register0x00000054 + -0x14) | 1);
    }
    iVar1 = func_0x01419d2c(piVar2);
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    func_0x01418ff0(iVar1,0);
    if (((uint)*(int **)((int)register0x00000054 + -0x14) & 1) != 0) {
      func_0x0148d9d4(*(int **)((int)register0x00000054 + -0xc));
    }
    return;
  }
  return;
}



// ===== FAT.AreaBoardActivity$$WhenReset RVA 0x2bb395c =====

/* WARNING: Possible PIC construction at 0x034a7290: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x034a7294) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc395c(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_r4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int *unaff_lr;
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
  int *apiStack_18 [2];
  
  iVar1 = func_0x0229f06c(0x7875,0);
  if (iVar1 == 0) {
    func_0x02bc39bc(param_1);
    pcVar6 = (char *)(_UNK_02bc3930 + 0x2bc3818);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02bc3934 + 0x2bc382c));
      func_0x01384978(*(undefined4 *)(_UNK_02bc3938 + 0x2bc3838));
      func_0x01384978(*(undefined4 *)(_UNK_02bc393c + 0x2bc3844));
      func_0x01384978(*(undefined4 *)(_UNK_02bc3940 + 0x2bc3850));
      func_0x01384978(*(undefined4 *)(_UNK_02bc3944 + 0x2bc385c));
      *pcVar6 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x7874,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_02bc3948 + 0x2bc38b4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02bc394c + 0x2bc38d0));
      iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02bc3950 + 0x2bc38e4));
      func_0x03db5c90(iVar5,param_1,**(undefined4 **)(_UNK_02bc3954 + 0x2bc3900),0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = **(int **)(_UNK_02bc3958 + 0x2bc3924);
      if (iVar5 == 0) {
        return;
      }
      iVar8 = 0;
      apiStack_18[0] = unaff_r4;
      piVar2 = (int *)func_0x0487929c(*(undefined4 *)(iVar1 + 8),iVar5,0);
      iVar5 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = func_0x02457d84(iVar5);
      }
      if ((piVar2 == (int *)0x0) || (iVar8 = func_0x02457d4c(piVar2,iVar5), iVar8 != 0)) {
        iVar5 = *(int *)(iVar3 + 0x10);
        *(int *)(iVar1 + 8) = iVar8;
        iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 4);
        if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
          iVar5 = func_0x02457d84(iVar5);
        }
        if (piVar2 == (int *)0x0) {
          return;
        }
        iVar1 = func_0x02457d4c(piVar2,iVar5);
        if (iVar1 != 0) {
          return;
        }
      }
      else {
        unaff_lr = (int *)0x34a7294;
        apiStack_18[0] = piVar2;
        register0x00000054 = (BADSPACEBASE *)apiStack_18;
      }
      *(int **)((int)register0x00000054 + -4) = unaff_lr;
      *(int **)((int)register0x00000054 + -8) = apiStack_18[0];
      func_0x0142996c((int **)((int)register0x00000054 + -0x14),*(undefined4 *)(*piVar2 + 0x20),
                      iVar5);
      piVar2 = *(int **)((int)register0x00000054 + -0xc);
      if (((uint)*(int **)((int)register0x00000054 + -0x14) & 1) == 0) {
        piVar2 = (int *)((uint)((int)register0x00000054 + -0x14) | 1);
      }
      iVar1 = func_0x01419d2c(piVar2);
      *(undefined4 *)(iVar1 + 0x1c) = 0;
      *(undefined4 *)(iVar1 + 0x20) = 0;
      func_0x01418ff0(iVar1,0);
      if (((uint)*(int **)((int)register0x00000054 + -0x14) & 1) != 0) {
        func_0x0148d9d4(*(int **)((int)register0x00000054 + -0xc));
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x7874,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7875,0);
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
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar5,uVar7,&uStack_30,uVar4,0,0);
  return;
}



// ===== FAT.AreaBoardActivity$$_ClearScoreEntity RVA 0x2bb39bc =====

void FUN_02bc39bc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7876,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7876,0);
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
  iVar1 = func_0x02bc686c(param_1);
  if (((iVar1 != 0) && (*(int *)(param_1 + 0x74) == 2)) && (*(int *)(param_1 + 0xfc) != 0)) {
    FUN_02af7520(*(int *)(param_1 + 0xfc),0);
  }
  *(undefined4 *)(param_1 + 0xfc) = 0;
  return;
}



// ===== FAT.AreaBoardActivity$$WhenEnd RVA 0x2bb3a44 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc3a44(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int aiStack_44 [4];
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_02bc3e74 + 0x2bc3a5c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc3e78 + 0x2bc3a70));
    func_0x01384978(*(undefined4 *)(_UNK_02bc3e7c + 0x2bc3a7c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc3e80 + 0x2bc3a88));
    func_0x01384978(*(undefined4 *)(_UNK_02bc3e84 + 0x2bc3a94));
    func_0x01384978(*(undefined4 *)(_UNK_02bc3e88 + 0x2bc3aa0));
    func_0x01384978(*(undefined4 *)(_UNK_02bc3e8c + 0x2bc3aac));
    func_0x01384978(*(undefined4 *)(_UNK_02bc3e90 + 0x2bc3ab8));
    func_0x01384978(*(undefined4 *)(_UNK_02bc3e94 + 0x2bc3ac4));
    *pcVar3 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  iStack_34 = 0;
  aiStack_44[2] = 0;
  aiStack_44[1] = 0;
  aiStack_44[0] = 0;
  iVar1 = func_0x0229f06c(0x7877,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bbfc04(param_1);
    if (iVar1 != 0) {
      piVar8 = *(int **)(_UNK_02bc3e98 + 0x2bc3b50);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x028c8d78(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0302a7c0(&uStack_50,iVar2,&uStack_28,**(undefined4 **)(_UNK_02bc3e9c + 0x2bc3b8c));
      if (*(int *)(param_1 + 0x74) == 2) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x028c8d78(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0302a45c(aiStack_44 + 1,iVar2,aiStack_44,**(undefined4 **)(_UNK_02bc3ea0 + 0x2bc3be8)
                       );
        iVar2 = aiStack_44[0];
        uVar6 = *(undefined4 *)(param_1 + 0x58);
        uVar4 = *(undefined4 *)(iVar1 + 100);
        if (aiStack_44[0] == 0) {
          func_0x01384bf0();
        }
        func_0x03d59d54(iVar2,uVar4,uVar6,**(undefined4 **)(_UNK_02bc3ea4 + 0x2bc3c14));
        uVar4 = uStack_28;
        piVar5 = *(int **)(_UNK_02bc3ea8 + 0x2bc3c30);
        uVar6 = *(undefined4 *)(iVar1 + 0x2c);
        iVar1 = *piVar5;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar5;
        }
        FUN_02b4aed4(uVar6,uVar4,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x1ac),aiStack_44[0],0);
        func_0x028c98a0(aiStack_44 + 1,0);
      }
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar6 = *(undefined4 *)(param_1 + 0xac);
      iVar1 = *(int *)(iVar1 + 0xfc);
      puVar7 = *(undefined4 **)(_UNK_02bc3eac + 0x2bc3ca8);
      uVar4 = func_0x01384abc(*puVar7,&uStack_50);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01e7437c(iVar1,uVar6,0,uVar4,0);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x028c8d78(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0302a7c0(&uStack_30,iVar1,&iStack_34,**(undefined4 **)(_UNK_02bc3eb0 + 0x2bc3d20));
      uVar4 = func_0x02c0389c(iStack_34,*(undefined4 *)(param_1 + 100),0);
      func_0x0230d6f0(param_1,uVar4,0);
      iVar1 = iStack_34;
      if (iStack_34 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) < 1) {
        func_0x03633b24(&uStack_30,**(undefined4 **)(_UNK_02bc3eb4 + 0x2bc3ddc));
      }
      else {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_50 = uStack_30;
        uVar6 = *(undefined4 *)(param_1 + 0xb8);
        iVar1 = *(int *)(iVar1 + 0xfc);
        uStack_4c = uStack_2c;
        uVar4 = func_0x01384abc(*puVar7,&uStack_50);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01e7437c(iVar1,uVar6,0xffffffff,uVar4,0);
      }
    }
    FUN_02bc39bc(param_1);
    func_0x02bc3eb8(param_1);
  }
  else {
    iVar1 = func_0x0229f13c(0x7877,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.AreaBoardActivity$$_ClearBoardData RVA 0x2bb3eb8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc3eb8(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02bc409c + 0x2bc3ecc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc40a0 + 0x2bc3ee0));
    func_0x01384978(*(undefined4 *)(_UNK_02bc40a4 + 0x2bc3eec));
    func_0x01384978(*(undefined4 *)(_UNK_02bc40a8 + 0x2bc3ef8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7878,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7878,0);
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
  func_0x02bc60a4(param_1);
  if (*(int *)(param_1 + 100) != 0) {
    func_0x021421a8(*(int *)(param_1 + 100),param_1,0);
    if ((*(int *)(param_1 + 100) != 0) &&
       (iVar1 = func_0x02139cf4(*(int *)(param_1 + 100),0), iVar1 != 0)) {
      uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02bc40ac + 0x2bc3f90));
      func_0x03db6898(uVar5,param_1,**(undefined4 **)(_UNK_02bc40b0 + 0x2bc3fac),0);
      func_0x020d8530(iVar1,uVar5,0);
    }
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x3c);
  uVar5 = *(undefined4 *)(param_1 + 0x80);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01cc1cc8(iVar1,uVar5,0);
  iVar1 = *(int *)(param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x5c) = 0;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d4f020(iVar1,**(undefined4 **)(_UNK_02bc40b4 + 0x2bc4030));
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  uVar5 = *(undefined4 *)(param_1 + 100);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbc0ec(iVar1,uVar5,0);
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    func_0x02befc68(*(int *)(param_1 + 0x8c),0);
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  return;
}



// ===== FAT.AreaBoardActivity$$IsReadyToMove RVA 0x2bb40b8 =====

uint FUN_02bc40b8(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x787a,0);
  if (iVar2 == 0) {
    param_1 = *(int *)(param_1 + 0x78);
    if (param_1 == 0) {
      return 0;
    }
    iVar2 = func_0x0229f06c(0x787b,0);
    if (iVar2 == 0) {
      return (uint)*(byte *)(param_1 + 0x18);
    }
    iVar2 = func_0x0229f13c(0x787b,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x787a,0);
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



// ===== FAT.AreaBoardActivity$$StartMoveUpBoard RVA 0x2bb4124 =====

void FUN_02bc4124(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r6;
  bool bVar5;
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
  
  iVar1 = func_0x0229f06c(0x787c,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x78);
    if (param_1 == 0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x787d,0);
    if (iVar1 == 0) {
      iVar1 = func_0x0229f06c(0x787e,0);
      if (iVar1 == 0) {
        bVar5 = *(char *)(param_1 + 0x18) != '\0';
        if (bVar5) {
          unaff_r6 = *(int *)(param_1 + 0x1c);
        }
        if (!bVar5 || unaff_r6 == -1) {
          return;
        }
        iVar1 = func_0x024508e0(0);
        if (unaff_r6 == iVar1) {
          return;
        }
        *(undefined1 *)(param_1 + 0x18) = 0;
        *(undefined1 *)(param_1 + 0x20) = 1;
        iVar1 = *(int *)(param_1 + 0x24);
        if (iVar1 != 0) {
          (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
        }
        *(undefined1 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
        return;
      }
      iVar1 = func_0x0229f13c(0x787e,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x787d,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x787c,0);
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



// ===== FAT.AreaBoardActivity$$TryClaimHandbookReward RVA 0x2bb418c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bc418c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  bool bVar9;
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
  
  iVar3 = func_0x0229f06c(0x787f,0);
  uStack_30 = param_4;
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x787f,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = param_5;
    uStack_28 = 0;
    iVar3 = func_0x021dc2d4(iVar3,param_1,param_2,param_3);
    return iVar3;
  }
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x3c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uStack_28 = 0x40;
  uStack_24 = 0;
  uStack_2c = param_5;
  func_0x01cc2a1c(iVar3,param_1,param_2,param_3);
  func_0x02bc42a0(param_1,param_2);
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x18);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_01e2d18c + 0x1e2d058);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2d190 + 0x1e2d06c),1,0);
    func_0x01384978(*(undefined4 *)(_UNK_01e2d194 + 0x1e2d078));
    func_0x01384978(*(undefined4 *)(_UNK_01e2d198 + 0x1e2d084));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x327,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x327,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar7 = (char *)(_UNK_0218506c + 0x2184f78);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02185070 + 0x2184f8c),iVar3,1,0);
      *pcVar7 = '\x01';
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar3,0);
    func_0x01485228(&uStack_38,1,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar3 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar3 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar5,uVar8,&uStack_38,uVar4,0,0);
    iVar3 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02185074 + 0x218505c));
    return iVar3;
  }
  iVar2 = *(int *)(iVar3 + 0x5c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01e2d1ac(iVar2);
  bVar9 = *(char *)(iVar3 + 0x20) != '\0';
  cVar1 = '\0';
  if (bVar9) {
    cVar1 = *(char *)(iVar3 + 0x10);
  }
  if (bVar9 && cVar1 != '\0') {
    if (*(int *)(iVar3 + 0x18) == 0) {
      func_0x01e2d204(iVar3);
    }
    else {
      if (*(int *)(**(int **)(_UNK_01e2d19c + 0x1e2d154) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0199d1cc(**(undefined4 **)(_UNK_01e2d1a0 + 0x1e2d174),0);
    }
    return *(int *)(iVar3 + 0x18);
  }
  if (*(int *)(**(int **)(_UNK_01e2d1a4 + 0x1e2d10c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x0199d1cc(**(undefined4 **)(_UNK_01e2d1a8 + 0x1e2d12c),0);
  pcVar7 = (char *)(_UNK_028bcdbc + 0x28bcce4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028bcdc0 + 0x28bccf8));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x32c,0);
  if (iVar3 == 0) {
    piVar6 = *(int **)(_UNK_028bcdc4 + 0x28bcd50);
    iVar3 = *(int *)(*(int *)(*piVar6 + 0x5c) + 4);
    if (iVar3 == 0) {
      iVar3 = func_0x01384be4();
      func_0x0244fedc(iVar3,0);
      *(int *)(*(int *)(*piVar6 + 0x5c) + 4) = iVar3;
      uVar8 = extraout_r1;
      if (iVar3 == 0) {
        func_0x01384bf0();
        uVar8 = extraout_r1_00;
      }
      func_0x028bcdc8(iVar3,uVar8,0,0);
      iVar3 = *(int *)(*(int *)(*piVar6 + 0x5c) + 4);
    }
    return iVar3;
  }
  iVar3 = func_0x0229f13c(0x32c,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_02184f4c + 0x2184e7c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02184f50 + 0x2184e90),0);
    *pcVar7 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar8 = 0;
  uStack_30 = 0;
  func_0x0245494c(&uStack_48,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
    uVar8 = 0;
    if (*(int *)(iVar3 + 0x10) != 0) {
      uVar8 = 1;
    }
  }
  iVar2 = *(int *)(iVar3 + 8);
  uVar4 = *(undefined4 *)(iVar3 + 0xc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar2,uVar4,&uStack_30,uVar8);
  iVar3 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02184f54 + 0x2184f3c));
  return iVar3;
}



// ===== FAT.AreaBoardActivity$$TrackHandBookClaim RVA 0x2bb42a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc42a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_02bc443c + 0x2bc42bc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc4440 + 0x2bc42d0));
    func_0x01384978(*(undefined4 *)(_UNK_02bc4444 + 0x2bc42dc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7886,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7886,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_38,uVar2,0,0);
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
  if ((iVar1 != 0) && (iVar6 = FUN_02bbfc04(param_1), iVar6 != 0)) {
    iVar4 = *(int *)(iVar1 + 0x44);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0364c54c(iVar4,param_2,**(undefined4 **)(_UNK_02bc4448 + 0x2bc43a8));
    iVar5 = *(int *)(iVar1 + 0x44);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(param_1 + 100);
    uVar8 = *(undefined4 *)(iVar6 + 0x24);
    iVar6 = *(int *)(iVar5 + 0xc);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x02139cf4(iVar7,0);
    uStack_34 = 0;
    if (iVar5 != 0) {
      uStack_34 = *(undefined4 *)(iVar5 + 8);
    }
    uStack_30 = *(undefined4 *)(param_1 + 0x44);
    uStack_38 = (uint)(iVar4 + 1 == iVar6);
    uStack_2c = *(undefined4 *)(iVar1 + 0x10);
    uStack_28 = 0;
    func_0x019bb348(param_1,iVar4 + 1,iVar6,uVar8);
  }
  return;
}



// ===== FAT.AreaBoardActivity$$TryGetItemState RVA 0x2bb444c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bc444c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  char *pcVar5;
  undefined4 unaff_lr;
  
  iVar2 = func_0x0229f06c(0x7887,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7887,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02252a84(iVar2,param_1,param_2,param_3,0);
    return uVar3;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x3c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_01cc4798 + 0x1cc46f4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc479c + 0x1cc4708),param_2,param_3,0);
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7888,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7888,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02252a84(iVar1,iVar2,param_2,param_3,0);
    return uVar3;
  }
  iVar2 = *(int *)(iVar2 + 0x14);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = func_0x03d5de60(iVar2,param_2,
                          *(undefined4 *)
                           (*(int *)(*(int *)(**(int **)(_UNK_01cc47a0 + 0x1cc4788) + 0x10) + 0x60)
                           + 0x84),**(int **)(_UNK_01cc47a0 + 0x1cc4788),unaff_r4,unaff_r5,unaff_r6,
                          unaff_lr);
  if ((int)uVar3 < 0) {
    uVar4 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar2 == 0) {
      func_0x02457d50();
    }
    if (*(uint *)(iVar2 + 0xc) <= uVar3) {
      func_0x02457d5c();
    }
    uVar4 = *(undefined4 *)(iVar2 + uVar3 * 0x10 + 0x1c);
  }
  *param_3 = uVar4;
  return ~uVar3 >> 0x1f;
}



// ===== FAT.AreaBoardActivity$$TryGetCategoryStateByItem RVA 0x2bb44f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bc44f8(int param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar4;
  undefined4 unaff_r6;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 unaff_lr;
  
  pcVar6 = (char *)(_UNK_02bc4610 + 0x2bc4518);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc4614 + 0x2bc452c));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x7889,0);
  if (iVar2 == 0) {
    *param_3 = 0;
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x50);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01dd0230(iVar2,param_2,0);
    if (iVar2 != 0) {
      iVar4 = *(int *)(param_1 + 0x60);
      uVar5 = *(undefined4 *)(iVar2 + 0x10);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x03d4f5d8(iVar4,uVar5,
                              *(undefined4 *)
                               (*(int *)(*(int *)(**(int **)(_UNK_02bc4618 + 0x2bc45f4) + 0x10) +
                                        0x60) + 0x84),**(int **)(_UNK_02bc4618 + 0x2bc45f4),unaff_r4
                              ,unaff_r5,unaff_r6,unaff_lr);
      if ((int)uVar3 < 0) {
        uVar1 = 0;
      }
      else {
        iVar2 = *(int *)(iVar4 + 0xc);
        if (iVar2 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar2 + 0xc) <= uVar3) {
          func_0x02457d5c();
        }
        uVar1 = *(undefined1 *)(iVar2 + uVar3 * 0x10 + 0x1c);
      }
      *param_3 = uVar1;
      return ~uVar3 >> 0x1f;
    }
    uVar3 = 0;
  }
  else {
    iVar2 = func_0x0229f13c(0x7889,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02252ba0(iVar2,param_1,param_2,param_3,0);
  }
  return uVar3;
}



// ===== FAT.AreaBoardActivity$$GetTokenNum RVA 0x2bb461c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bc461c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x788a,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x74) != 1) {
      return *(undefined4 *)(param_1 + 0x58);
    }
    param_1 = *(int *)(param_1 + 100);
    if (param_1 == 0) {
      return 0;
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
    iVar1 = func_0x0229f13c(0x788a,0);
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



// ===== FAT.AreaBoardActivity$$TryUseToken RVA 0x2bb469c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bc469c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_02bc4794 + 0x2bc46bc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc4798 + 0x2bc46d4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x788b,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bbfc04(param_1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      piVar4 = *(int **)(_UNK_02bc479c + 0x2bc474c);
      uVar2 = *(undefined4 *)(iVar1 + 100);
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar4;
      }
      uVar2 = func_0x02bc47a0(param_1,uVar2,1,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x1a8),
                              param_2,param_3,param_4);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x788b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021ed9d4(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.AreaBoardActivity$$_TryUseToken RVA 0x2bb47a0 =====

/* WARNING: Removing unreachable block (ram,0x02bc4e30) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bc47a0(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
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
  
  pcVar14 = (char *)(_UNK_02bc55a0 + 0x2bc47cc);
  if (*pcVar14 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc55a4 + 0x2bc47e0));
    func_0x01384978(*(undefined4 *)(_UNK_02bc55a8 + 0x2bc47ec));
    func_0x01384978(*(undefined4 *)(_UNK_02bc55ac + 0x2bc47f8));
    func_0x01384978(*(undefined4 *)(_UNK_02bc55b0 + 0x2bc4804));
    func_0x01384978(*(undefined4 *)(_UNK_02bc55b4 + 0x2bc4810));
    func_0x01384978(*(undefined4 *)(_UNK_02bc55b8 + 0x2bc481c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc55bc + 0x2bc4828));
    func_0x01384978(*(undefined4 *)(_UNK_02bc55c0 + 0x2bc4834));
    func_0x01384978(*(undefined4 *)(_UNK_02bc55c4 + 0x2bc4840));
    func_0x01384978(*(undefined4 *)(_UNK_02bc55c8 + 0x2bc484c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc55cc + 0x2bc4858));
    func_0x01384978(*(undefined4 *)(_UNK_02bc55d0 + 0x2bc4864));
    func_0x01384978(*(undefined4 *)(_UNK_02bc55d4 + 0x2bc4870));
    func_0x01384978(*(undefined4 *)(_UNK_02bc55d8 + 0x2bc487c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc55dc + 0x2bc4888));
    func_0x01384978(*(undefined4 *)(_UNK_02bc55e0 + 0x2bc4894));
    func_0x01384978(*(undefined4 *)(_UNK_02bc55e4 + 0x2bc48a0));
    func_0x01384978(*(undefined4 *)(_UNK_02bc55e8 + 0x2bc48ac));
    func_0x01384978(*(undefined4 *)(_UNK_02bc55ec + 0x2bc48b8));
    func_0x01384978(*(undefined4 *)(_UNK_02bc55f0 + 0x2bc48c4));
    func_0x01384978(*(undefined4 *)(_UNK_02bc55f4 + 0x2bc48d0));
    func_0x01384978(*(undefined4 *)(_UNK_02bc55f8 + 0x2bc48dc));
    func_0x01384978(*(undefined4 *)(_UNK_02bc55fc + 0x2bc48e8));
    func_0x01384978(*(undefined4 *)(_UNK_02bc5600 + 0x2bc48f4));
    func_0x01384978(*(undefined4 *)(_UNK_02bc5604 + 0x2bc4900));
    func_0x01384978(*(undefined4 *)(_UNK_02bc5608 + 0x2bc490c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc560c + 0x2bc4918));
    func_0x01384978(*(undefined4 *)(_UNK_02bc5610 + 0x2bc4924));
    *pcVar14 = '\x01';
  }
  iVar15 = 0;
  aiStack_4c[4] = 0;
  aiStack_4c[3] = 0;
  aiStack_4c[2] = 0;
  aiStack_4c[1] = 0;
  aiStack_4c[0] = 0;
  uStack_50 = 0;
  iVar4 = func_0x0229f06c(0x788c,0);
  if (iVar4 == 0) {
    iVar4 = FUN_02bbfc04(param_1);
    if (iVar4 != 0) {
      iVar5 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
      iVar6 = 0;
      if (iVar5 != 0) {
        iVar6 = param_1[0x19];
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
            if (param_1[0x1d] == 2) {
              iVar5 = *(int *)(iVar4 + 100);
              iStack_74 = iVar6;
            }
            if (param_1[0x1d] == 2 && iVar5 == iVar2) {
              iVar15 = func_0x020ece38(iStack_74,0);
              if (iVar15 == 0) {
                iVar15 = func_0x01c24918(0);
                if (iVar15 == 0) {
                  func_0x01384bf0();
                }
                iVar4 = *(int *)(iVar15 + 0x10);
                iVar6 = **(int **)(_UNK_02bc5614 + 0x2bc4cec);
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
                func_0x01bf3284(iVar4,**(undefined4 **)(_UNK_02bc5618 + 0x2bc4da8),0);
              }
              else {
                uVar7 = func_0x03003b84(*(undefined4 *)(iVar4 + 0x5c),param_1[0x14],1,
                                        **(undefined4 **)(_UNK_02bc561c + 0x2bc4a5c));
                iVar15 = func_0x01c24918(0);
                if (iVar15 == 0) {
                  func_0x01384bf0();
                }
                iVar6 = *(int *)(iVar15 + 0xc);
                if (iVar6 == 0) {
                  func_0x01384bf0();
                }
                iVar15 = 0;
                iVar6 = func_0x01cab5a8(iVar6,uVar7,0);
                if (iVar6 != 0) {
                  iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02bc5620 + 0x2bc4ac4));
                  func_0x0443c630(iVar5,**(undefined4 **)(_UNK_02bc5624 + 0x2bc4ad4));
                  iVar15 = *(int *)(iVar6 + 0x1c);
                  if (iVar15 == 0) {
                    func_0x01384bf0();
                  }
                  piVar8 = (int *)func_0x03653608(iVar15,**(undefined4 **)
                                                           (_UNK_02bc5628 + 0x2bc4af8));
LAB_02bc4b04:
                  if (piVar8 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar15 = *piVar8;
                  uVar12 = (uint)*(ushort *)(iVar15 + 0xb6);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(int *)(iVar15 + 0x58) + 4);
                    do {
                      if (piVar13[-1] == **(int **)(_UNK_02bc5638 + 0x2bc4b20)) {
                        puVar9 = (undefined4 *)(iVar15 + *piVar13 * 8 + 0xc0);
                        goto LAB_02bc4b68;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 2;
                    } while (uVar12 != 0);
                  }
                  puVar9 = (undefined4 *)
                           func_0x014002dc(piVar8,**(int **)(_UNK_02bc5638 + 0x2bc4b20),0);
LAB_02bc4b68:
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
                        if (piVar13[-1] == **(int **)(_UNK_02bc562c + 0x2bc4b9c)) {
                          puVar9 = (undefined4 *)(iVar15 + *piVar13 * 8 + 0xc0);
                          goto LAB_02bc4be4;
                        }
                        uVar12 = uVar12 - 1;
                        piVar13 = piVar13 + 2;
                      } while (uVar12 != 0);
                    }
                    puVar9 = (undefined4 *)
                             func_0x014002dc(piVar8,**(int **)(_UNK_02bc562c + 0x2bc4b9c),0);
LAB_02bc4be4:
                    uVar7 = (*(code *)*puVar9)(piVar8,puVar9[1]);
                    if (*(int *)(**(int **)(_UNK_02bc5630 + 0x2bc4c04) + 0x74) == 0) {
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
                    piVar13 = *(int **)(_UNK_02bc5634 + 0x2bc4c64);
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
                    goto LAB_02bc4b04;
                  }
                  if (piVar8 != (int *)0x0) {
                    iVar15 = *piVar8;
                    uVar12 = (uint)*(ushort *)(iVar15 + 0xb6);
                    if (uVar12 != 0) {
                      piVar13 = (int *)(*(int *)(iVar15 + 0x58) + 4);
                      do {
                        if (piVar13[-1] == **(int **)(_UNK_02bc563c + 0x2bc4dd0)) {
                          puVar9 = (undefined4 *)(iVar15 + *piVar13 * 8 + 0xc0);
                          goto LAB_02bc4e18;
                        }
                        uVar12 = uVar12 - 1;
                        piVar13 = piVar13 + 2;
                      } while (uVar12 != 0);
                    }
                    puVar9 = (undefined4 *)
                             func_0x014002dc(piVar8,**(int **)(_UNK_02bc563c + 0x2bc4dd0),0);
LAB_02bc4e18:
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
                    iVar6 = func_0x02beee40(param_1[0x23],param_3,aiStack_4c + 4,aiStack_4c + 3,0);
                    if (iVar6 != 0) {
                      iVar15 = 0;
                      iVar6 = func_0x02bc9a3c(param_1,0,aiStack_4c[4]);
                      if (iVar6 == 0) {
                        if (param_1[0x23] != 0) {
                          iVar15 = 0;
                          func_0x02bf0144(param_1[0x23],param_3,param_1[0x16],0);
                        }
                      }
                      else {
                        iVar6 = func_0x02bc686c(param_1);
                        if (iVar6 != 0) {
                          iVar15 = param_1[0x3f];
                        }
                        if (iVar6 != 0 && iVar15 != 0) {
                          uVar7 = FUN_02bc001c(param_1);
                          FUN_02af96e4(iVar15,uVar7,0);
                        }
                        func_0x019a4b9c(param_2,-aiStack_4c[4],param_1[0x16],param_4,0);
                        if (*(int *)(**(int **)(_UNK_02bc5644 + 0x2bc4ee0) + 0x74) == 0) {
                          func_0x01384ab4();
                        }
                        iVar6 = func_0x0300d558(**(undefined4 **)(_UNK_02bc5648 + 0x2bc4efc));
                        iVar15 = aiStack_4c[4];
                        if (iVar6 == 0) {
                          func_0x01384bf0();
                        }
                        func_0x034a0af8(iVar6,param_2,iVar15,
                                        **(undefined4 **)(_UNK_02bc564c + 0x2bc4f28));
                        piVar8 = *(int **)(_UNK_02bc5650 + 0x2bc4f3c);
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
                          iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02bc5654 + 0x2bc4f84));
                          func_0x03a06bcc(iVar6,uVar7,**(undefined4 **)(_UNK_02bc5658 + 0x2bc4fa4),0
                                         );
                          *(int *)(*(int *)(*piVar8 + 0x5c) + 4) = iVar6;
                        }
                        func_0x02fbdda8(&uStack_60,iVar5,iVar6,0,
                                        **(undefined4 **)(_UNK_02bc565c + 0x2bc4fcc));
                        uVar3 = uStack_5c;
                        uVar7 = uStack_60;
                        if (*(int *)(**(int **)(_UNK_02bc5660 + 0x2bc4fe8) + 0x74) == 0) {
                          func_0x01384ab4();
                        }
                        iVar15 = func_0x028c8d78(0);
                        if (iVar15 == 0) {
                          func_0x01384bf0();
                        }
                        func_0x0302a45c(aiStack_4c + 1,iVar15,aiStack_4c,
                                        **(undefined4 **)(_UNK_02bc5664 + 0x2bc502c));
                        if (param_1[0x23] == 0) {
                          uStack_50 = uVar7;
                        }
                        else {
                          func_0x02bf06e8(param_1[0x23],uVar7,uVar3,&uStack_50,aiStack_4c[0],0);
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
                                            **(undefined4 **)(_UNK_02bc5668 + 0x2bc50f0));
                            uVar7 = uStack_5c;
                          }
                        }
                        iVar15 = param_1[0x20];
                        iVar6 = param_1[0x14];
                        if (iVar15 == 0) {
                          func_0x01384bf0();
                        }
                        uVar17 = uStack_50;
                        iVar5 = param_1[0x11];
                        uVar18 = *(undefined4 *)(iVar4 + 0x24);
                        uVar16 = *(undefined4 *)(iVar15 + 0xc);
                        uVar10 = func_0x02157e88(uStack_50,0);
                        func_0x0230d9c4(param_1,iVar6 + 1,uVar16,uVar18,uVar7,iVar5,uVar17,uVar10,
                                        aiStack_4c[3],0);
                        if (*(int *)(**(int **)(_UNK_02bc566c + 0x2bc517c) + 0x74) == 0) {
                          func_0x01384ab4();
                        }
                        func_0x01dd7d28(0);
                        func_0x020da680(&uStack_60,iStack_74,0);
                        uVar17 = uStack_5c;
                        uVar7 = uStack_60;
                        pcVar14 = (char *)(_UNK_02bc5670 + 0x2bc51bc);
                        if (*pcVar14 == '\0') {
                          func_0x01384978(*(undefined4 *)(_UNK_02bc5674 + 0x2bc51d0));
                          *pcVar14 = '\x01';
                        }
                        bVar1 = false;
                        piVar8 = *(int **)(_UNK_02bc5678 + 0x2bc51e8);
                        if (*(int *)(*piVar8 + 0x74) == 0) {
                          func_0x01384ab4();
                          bVar1 = *pcVar14 == '\0';
                        }
                        fVar19 = (float)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
                        fVar11 = (float)func_0x02450364(fVar19 * 0.5);
                        fVar19 = _UNK_02bc559c;
                        uVar12 = in_fpscr & 0xfffffff | (uint)(fVar11 == _UNK_02bc559c) << 0x1e;
                        iVar15 = (int)fVar11;
                        if (SUB41(uVar12 >> 0x1e,0)) {
                          iVar15 = -0x80000000;
                        }
                        if (bVar1) {
                          func_0x01384978(*(undefined4 *)(_UNK_02bc567c + 0x2bc5248));
                          *pcVar14 = '\x01';
                        }
                        if (*(int *)(*piVar8 + 0x74) == 0) {
                          func_0x01384ab4();
                        }
                        fVar11 = (float)VectorSignedToFloat(uVar17,(byte)(uVar12 >> 0x16) & 3);
                        fVar11 = (float)func_0x02450364(fVar11 * 0.5);
                        uVar7 = uStack_50;
                        iVar6 = (int)fVar11;
                        iVar4 = **(int **)(_UNK_02bc5680 + 0x2bc5290);
                        if (fVar11 == fVar19) {
                          iVar6 = -0x80000000;
                        }
                        if (*(int *)(iVar4 + 0x74) == 0) {
                          func_0x01384ab4();
                          iVar4 = **(int **)(_UNK_02bc5684 + 0x2bc52c0);
                        }
                        func_0x01dd7f28(iStack_74,uVar7,uVar3,param_5,param_6,param_7,iVar15,iVar6,
                                        *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x1a8),0x1e,0);
                        iVar4 = 0;
                        puVar9 = *(undefined4 **)(_UNK_02bc5688 + 0x2bc5310);
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
                          iVar5 = **(int **)(_UNK_02bc568c + 0x2bc5358);
                          if (*(int *)(iVar5 + 0x74) == 0) {
                            func_0x01384ab4();
                            iVar5 = **(int **)(_UNK_02bc5690 + 0x2bc537c);
                          }
                          uVar17 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x1a8);
                          if (*(int *)(**(int **)(_UNK_02bc5694 + 0x2bc5388) + 0x74) == 0) {
                            func_0x01384ab4(**(int **)(_UNK_02bc5694 + 0x2bc5388));
                          }
                          func_0x01dd7f28(iStack_74,uVar7,uVar3,param_5,param_6,param_7,iVar15,iVar6
                                          ,uVar17,0x1e,0);
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
    iVar15 = func_0x0229f13c(0x788c,0);
    if (iVar15 == 0) {
      func_0x01384bf0();
    }
    iVar15 = func_0x02249dec(iVar15,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return iVar15;
}



// ===== FAT.AreaBoardActivity$$GetCloudIdList RVA 0x2bb5698 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bc5698(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
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
  
  pcVar3 = (char *)(_UNK_02bc5944 + 0x2bc56b0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc5948 + 0x2bc56c4));
    func_0x01384978(*(undefined4 *)(_UNK_02bc594c + 0x2bc56d0));
    func_0x01384978(*(undefined4 *)(_UNK_02bc5950 + 0x2bc56dc));
    func_0x01384978(*(undefined4 *)(_UNK_02bc5954 + 0x2bc56e8));
    func_0x01384978(*(undefined4 *)(_UNK_02bc5958 + 0x2bc56f4));
    func_0x01384978(*(undefined4 *)(_UNK_02bc595c + 0x2bc5700));
    func_0x01384978(*(undefined4 *)(_UNK_02bc5960 + 0x2bc570c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc5964 + 0x2bc5718));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  iVar2 = func_0x0229f06c(0x7891,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02bc5968 + 0x2bc5788));
    func_0x03258eb8(iVar2,**(undefined4 **)(_UNK_02bc596c + 0x2bc579c));
    iVar4 = *(int *)(param_1 + 0x88);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x03d352e4(iVar4,**(undefined4 **)(_UNK_02bc5970 + 0x2bc57c0));
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x03824c6c(&uStack_50,iVar4,**(undefined4 **)(_UNK_02bc5974 + 0x2bc57ec));
    uStack_28 = uStack_40;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    puVar8 = *(undefined4 **)(_UNK_02bc5978 + 0x2bc5818);
    piVar7 = *(int **)(_UNK_02bc597c + 0x2bc5820);
    while (iVar4 = func_0x03f93db4(&uStack_38,*puVar8), uVar1 = uStack_2c, iVar4 != 0) {
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar2 + 8);
      uVar5 = *(uint *)(iVar2 + 0xc);
      iVar6 = *piVar7;
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (uVar5 < *(uint *)(iVar4 + 0xc)) {
        *(uint *)(iVar2 + 0xc) = uVar5 + 1;
        *(undefined4 *)(iVar4 + uVar5 * 4 + 0x10) = uVar1;
      }
      else {
        func_0x0325970c(iVar2,uVar1,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38))
        ;
      }
    }
    func_0x03f93db0(&uStack_38,**(undefined4 **)(_UNK_02bc5980 + 0x2bc58ac));
  }
  else {
    iVar2 = func_0x0229f13c(0x7891,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x021a9e7c(iVar2,param_1,0);
  }
  return iVar2;
}



// ===== FAT.AreaBoardActivity$$UnlockCloudIsGetChessItem RVA 0x2bb598c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bc598c(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uStack_18;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_02bc5a60 + 0x2bc59a4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc5a64 + 0x2bc59b8));
    *pcVar3 = '\x01';
  }
  iStack_14 = 0;
  uStack_18 = 0;
  iVar1 = func_0x0229f06c(0x7892,0);
  if (iVar1 == 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x4c);
    iVar1 = *(int *)(param_1 + 0x88);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d37358(iVar1,uVar4,&uStack_18,**(undefined4 **)(_UNK_02bc5a68 + 0x2bc5a38));
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = (uint)(iStack_14 == 0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7892,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021742f8(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.AreaBoardActivity$$Open RVA 0x2bb5a6c =====

void FUN_02bc5a6c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7893,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7893,0);
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
  func_0x02b57d14(param_1,*(undefined4 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0xc0),
                  *(undefined4 *)(param_1 + 0x90));
  return;
}



// ===== FAT.AreaBoardActivity$$BoardEntryAsset RVA 0x2bb5ae8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bc5ae8(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_02bc5bf8 + 0x2bc5b00);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc5bfc + 0x2bc5b14));
    func_0x01384978(*(undefined4 *)(_UNK_02bc5c00 + 0x2bc5b20));
    func_0x01384978(*(undefined4 *)(_UNK_02bc5c04 + 0x2bc5b2c));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x7894,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x94);
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
    iVar1 = func_0x03470a60(iVar1,**(undefined4 **)(_UNK_02bc5c0c + 0x2bc5bcc),&uStack_14,
                            **(undefined4 **)(_UNK_02bc5c08 + 0x2bc5bc0));
    if (iVar1 == 0) {
      uStack_14 = **(undefined4 **)(_UNK_02bc5c10 + 0x2bc5bf0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7894,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.AreaBoardActivity$$SetBoardData RVA 0x2bb5c14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc5c14(int param_1,int param_2)

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
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x7895,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7895,0);
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
  if (param_2 != 0) {
    func_0x02bc5d0c(param_1,*(undefined4 *)(param_2 + 0x38),0);
    iVar1 = *(int *)(param_1 + 100);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0214a9e8(iVar1,param_2,0,0);
    iVar1 = *(int *)(param_1 + 100);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02139cf4(iVar1,0);
    uVar5 = *(undefined4 *)(param_1 + 0x44);
    uVar2 = *(undefined4 *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x020dc7e4(iVar1,uVar5,uVar2,0);
    FUN_02bc2f08(param_1);
    FUN_02bc35b0(param_1);
    pcVar4 = (char *)(_UNK_02bc3714 + 0x2bc3688);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02bc3718 + 0x2bc369c));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x7866,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0x7866,0);
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
      uStack_50 = 0;
      uStack_4c = 0;
      func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2);
      return;
    }
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02bc371c + 0x2bc36f4));
    func_0x02c05f90(uVar5,param_1,2,0);
    *(undefined4 *)(param_1 + 0x7c) = uVar5;
    return;
  }
  return;
}



// ===== FAT.AreaBoardActivity$$_InitWorld RVA 0x2bb5d0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc5d0c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  pcVar6 = (char *)(_UNK_02bc5ff4 + 0x2bc5d2c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc5ff8 + 0x2bc5d40));
    func_0x01384978(*(undefined4 *)(_UNK_02bc5ffc + 0x2bc5d4c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc6000 + 0x2bc5d58));
    func_0x01384978(*(undefined4 *)(_UNK_02bc6004 + 0x2bc5d64));
    func_0x01384978(*(undefined4 *)(_UNK_02bc6008 + 0x2bc5d70));
    func_0x01384978(*(undefined4 *)(_UNK_02bc600c + 0x2bc5d7c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc6010 + 0x2bc5d88));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x784b,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x784b,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0217f950(iVar2,param_1,param_2,param_3,0);
    return;
  }
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02bc6014 + 0x2bc5df0));
  func_0x02143488(uVar3,0);
  puVar4 = *(undefined4 **)(_UNK_02bc6018 + 0x2bc5e0c);
  *(undefined4 *)(param_1 + 100) = uVar3;
  uVar3 = func_0x01384be4(*puVar4);
  func_0x0478dedc(uVar3,param_1,**(undefined4 **)(_UNK_02bc601c + 0x2bc5e2c),0);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02bc6020 + 0x2bc5e40));
  func_0x0214d6c8(uVar5,uVar3,0,0);
  *(undefined4 *)(param_1 + 0x68) = uVar5;
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar2 + 0x4c);
  iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02bc6024 + 0x2bc5e80));
  func_0x01db7f44(iVar2,0);
  uVar3 = *(undefined4 *)(param_1 + 100);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar2 + 8) = 0xd;
  *(undefined4 *)(iVar2 + 0xc) = uVar3;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  func_0x01db7f4c(iVar8,iVar2,0);
  iVar2 = *(int *)(param_1 + 0x68);
  uVar3 = *(undefined4 *)(param_1 + 100);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0214e900(iVar2,uVar3,0);
  iVar2 = *(int *)(param_1 + 100);
  uVar3 = *(undefined4 *)(param_1 + 0x68);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x02141f58(iVar2,uVar3,0);
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  uVar3 = *(undefined4 *)(param_1 + 100);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbe654(iVar2,param_1,uVar3,param_2,param_3,0);
  iVar2 = *(int *)(param_1 + 100);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x02142104(iVar2,param_1,0);
  iVar2 = *(int *)(param_1 + 100);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x02139cf4(iVar2,0);
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02bc6028 + 0x2bc5fac));
  func_0x03db6898(uVar3,param_1,**(undefined4 **)(_UNK_02bc602c + 0x2bc5fc8),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_020d8524 + 0x20d8498);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d8528 + 0x20d84ac),uVar3,0);
    *pcVar6 = '\x01';
  }
  puVar4 = *(undefined4 **)(_UNK_020d852c + 0x20d84c4);
  iVar8 = *(int *)(iVar2 + 0xc);
  do {
    iVar7 = 0;
    iVar1 = func_0x024507e8(iVar8,uVar3,0);
    if (iVar1 != 0) {
      uVar5 = *puVar4;
      iVar7 = func_0x01384ab8(iVar1,uVar5);
      if (iVar7 == 0) {
        func_0x01384fb4(iVar1,uVar5);
        iVar7 = 0;
      }
    }
    iVar1 = func_0x0138b0ec((int *)(iVar2 + 0xc),iVar7,iVar8);
    bVar9 = iVar8 != iVar1;
    iVar8 = iVar1;
  } while (bVar9);
  return;
}



// ===== FAT.AreaBoardActivity$$FillBoardData RVA 0x2bb6030 =====

/* WARNING: Possible PIC construction at 0x02147e04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02147e08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc6030(int param_1,int param_2)

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
  
  iVar4 = func_0x0229f06c(0x7896,0);
  if (iVar4 == 0) {
    param_1 = *(int *)(param_1 + 100);
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
    iVar4 = func_0x0229f13c(0x7896,0);
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



// ===== FAT.AreaBoardActivity$$_ClearSpawnBonusHandler RVA 0x2bb60a4 =====

void FUN_02bc60a4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7879,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7879,0);
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
  iVar1 = func_0x02bc6808(param_1);
  if (iVar1 != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar4 = *(undefined4 *)(param_1 + 0x100);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbba60(iVar1,uVar4,0);
  }
  *(undefined4 *)(param_1 + 0x100) = 0;
  return;
}



// ===== FAT.AreaBoardActivity$$_OnBoardItemChange RVA 0x2bb6148 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc6148(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
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
  
  iVar1 = func_0x0229f06c(0x784d,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x78) != 0) {
      func_0x02c06e70(*(int *)(param_1 + 0x78),0);
    }
    param_1 = *(int *)(param_1 + 0x7c);
    if (param_1 == 0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x785a,0);
    if (iVar1 == 0) {
      pcVar7 = (char *)(_UNK_02c062e4 + 0x2c061d4);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02c062e8 + 0x2c061e8));
        *pcVar7 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x785b,0);
      if (iVar1 == 0) {
        piVar8 = *(int **)(param_1 + 8);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar8;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_02c062ec + 0x2c06254)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 200);
              goto LAB_02c0629c;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_02c062ec + 0x2c06254),1);
LAB_02c0629c:
        iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
        if (iVar1 == 0) {
          return;
        }
        if (*(char *)(param_1 + 0x14) != '\0') {
          return;
        }
        iVar1 = func_0x02c067c8(param_1);
        if (iVar1 != 0) {
          *(undefined1 *)(param_1 + 0x14) = 1;
          *(undefined4 *)(param_1 + 0x10) = 0;
        }
        return;
      }
      iVar1 = func_0x0229f13c(0x785b,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x785a,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x784d,0);
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
  iVar6 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar6,uVar9,&uStack_30,uVar4,0,0);
  return;
}



// ===== FAT.AreaBoardActivity$$GetMoveNeedRowCount RVA 0x2bb61c4 =====

undefined4 FUN_02bc61c4(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x7897,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7897,0);
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



// ===== FAT.AreaBoardActivity$$GetMoveCountByRowId RVA 0x2bb6220 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bc6220(undefined4 param_1,undefined4 param_2)

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
  undefined4 uStack_18;
  
  pcVar5 = (char *)(_UNK_02bc6328 + 0x2bc623c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc632c + 0x2bc6250));
    func_0x01384978(*(undefined4 *)(_UNK_02bc6330 + 0x2bc625c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7898,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7898,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01cab4e0(iVar1,param_2,0);
  if (iVar1 != 0) {
    uStack_18 = 0;
    func_0x03507d38(&uStack_18,*(undefined4 *)(iVar1 + 0x18),
                    **(undefined4 **)(_UNK_02bc6334 + 0x2bc6300));
  }
  return 0;
}



// ===== FAT.AreaBoardActivity$$FAT.IBoardMoveAdapter.GetBoard RVA 0x2bb6338 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bc6338(int *param_1)

{
  int *piVar1;
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
  
  iVar2 = func_0x0229f06c(0x789a,0);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    piVar1 = (int *)0x0;
    if (iVar2 != 0) {
      piVar1 = (int *)param_1[0x19];
    }
    param_1 = piVar1;
    if (iVar2 == 0 || param_1 == (int *)0x0) {
      return 0;
    }
    iVar2 = func_0x0229f06c(0x142,0);
    if (iVar2 == 0) {
      return param_1[0x13];
    }
    iVar2 = func_0x0229f13c(0x142,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x789a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar5 = (char *)(_UNK_0217a7a0 + 0x217a6c0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0217a7a4 + 0x217a6d4),param_1,0);
    *pcVar5 = '\x01';
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
  iVar2 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0217a7a8 + 0x217a790));
  return iVar2;
}



// ===== FAT.AreaBoardActivity$$OnDepthIndexUpdate RVA 0x2bb63b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc63b8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar3 = func_0x0229f06c(0x789b,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x789b,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    iStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar3 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar4,0,0);
    return;
  }
  iVar3 = *(int *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x44) = param_2;
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x02139cf4(iVar3,0);
  iVar7 = *(int *)(param_1 + 0x44);
  uVar8 = *(undefined4 *)(param_1 + 0x4c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_020dc9ec + 0x20dc804);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dc9f0 + 0x20dc818),iVar7,uVar8,0);
    func_0x01384978(*(undefined4 *)(_UNK_020dc9f4 + 0x20dc824));
    func_0x01384978(*(undefined4 *)(_UNK_020dc9f8 + 0x20dc830));
    func_0x01384978(*(undefined4 *)(_UNK_020dc9fc + 0x20dc83c));
    *pcVar5 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x57b,0);
  if (iVar1 == 0) {
    func_0x020da680(&uStack_38,iVar3);
    iVar1 = *(int *)(iVar3 + 0x70);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_30,iVar1,**(undefined4 **)(_UNK_020dca00 + 0x20dc8d4));
    puVar6 = *(undefined4 **)(_UNK_020dca04 + 0x20dc8ec);
    while (iVar2 = func_0x03f5f428(&uStack_30,*puVar6), iVar1 = iStack_24, iVar2 != 0) {
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      func_0x0210c12c(iVar1,iStack_34,iVar7 - iStack_34,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0210c518(iVar1,uVar8,0);
    }
    func_0x03f5f424(&uStack_30,**(undefined4 **)(_UNK_020dca08 + 0x20dc94c));
    func_0x020dca14(iVar3);
  }
  else {
    iVar1 = func_0x0229f13c(0x57b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_40 = 0;
    func_0x02179a68(iVar1,iVar3,iVar7,uVar8);
  }
  return;
}



// ===== FAT.AreaBoardActivity$$GetRowConfIdList RVA 0x2bb645c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bc645c(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x789c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x789c,0);
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
  iVar1 = func_0x01cab47c(iVar1,param_2,0);
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(iVar1 + 0x14);
  }
  return uVar4;
}



// ===== FAT.AreaBoardActivity$$GetRowConfStr RVA 0x2bb64fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bc64fc(undefined4 param_1,undefined4 param_2)

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
  
  pcVar5 = (char *)(_UNK_02bc65d4 + 0x2bc6514);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc65d8 + 0x2bc6528));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x789e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x789e,0);
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
  iVar1 = func_0x01cab4e0(iVar1,param_2,0);
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0x14);
  }
  iVar1 = **(int **)(_UNK_02bc65dc + 0x2bc65cc);
  if (iVar3 != 0) {
    iVar1 = iVar3;
  }
  return iVar1;
}



// ===== FAT.AreaBoardActivity$$GetCycleStartRowId RVA 0x2bb65e0 =====

undefined4 FUN_02bc65e0(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x789f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x789f,0);
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



// ===== FAT.AreaBoardActivity$$CanCheckExtreme RVA 0x2bb663c =====

uint FUN_02bc663c(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x78a0,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x78a0,0);
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
  if (*(int *)(param_1 + 0x78) != 0) {
    uVar1 = func_0x02c07260(*(int *)(param_1 + 0x78),0);
    return uVar1 ^ 1;
  }
  return 1;
}



// ===== FAT.AreaBoardActivity$$FAT.IBoardExtremeAdapter.GetBoard RVA 0x2bb66ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bc66ac(int *param_1)

{
  int *piVar1;
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
  
  iVar2 = func_0x0229f06c(0x78a2,0);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    piVar1 = (int *)0x0;
    if (iVar2 != 0) {
      piVar1 = (int *)param_1[0x19];
    }
    param_1 = piVar1;
    if (iVar2 == 0 || param_1 == (int *)0x0) {
      return 0;
    }
    iVar2 = func_0x0229f06c(0x142,0);
    if (iVar2 == 0) {
      return param_1[0x13];
    }
    iVar2 = func_0x0229f13c(0x142,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x78a2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar5 = (char *)(_UNK_0217a7a0 + 0x217a6c0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0217a7a4 + 0x217a6d4),param_1,0);
    *pcVar5 = '\x01';
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
  iVar2 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0217a7a8 + 0x217a790));
  return iVar2;
}



// ===== FAT.AreaBoardActivity$$CheckBoardExtremeCase RVA 0x2bb672c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc672c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
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
  
  iVar1 = func_0x0229f06c(0x78a3,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x7c);
    if (param_1 == 0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x78a4,0);
    if (iVar1 == 0) {
      pcVar7 = (char *)(_UNK_02c062e4 + 0x2c061d4);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02c062e8 + 0x2c061e8));
        *pcVar7 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x785b,0);
      if (iVar1 == 0) {
        piVar8 = *(int **)(param_1 + 8);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar8;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_02c062ec + 0x2c06254)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 200);
              goto LAB_02c0629c;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_02c062ec + 0x2c06254),1);
LAB_02c0629c:
        iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
        if (iVar1 == 0) {
          return;
        }
        if (*(char *)(param_1 + 0x14) != '\0') {
          return;
        }
        iVar1 = func_0x02c067c8(param_1);
        if (iVar1 != 0) {
          *(undefined1 *)(param_1 + 0x14) = 1;
          *(undefined4 *)(param_1 + 0x10) = 0;
        }
        return;
      }
      iVar1 = func_0x0229f13c(0x785b,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x78a4,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x78a3,0);
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
  iVar6 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar6,uVar9,&uStack_30,uVar4,0,0);
  return;
}



// ===== FAT.AreaBoardActivity$$ActivityUpdate RVA 0x2bb6794 =====

void FUN_02bc6794(int param_1,float param_2)

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
  
  iVar1 = func_0x0229f06c(0x78a5,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x7c);
    if (param_1 == 0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x78a6,0,0);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x14) != '\0') {
        param_2 = *(float *)(param_1 + 0x10) + param_2;
        *(float *)(param_1 + 0x10) = param_2;
        if (param_2 <= 1.0) {
          return;
        }
        func_0x02c06384(param_1);
        *(undefined1 *)(param_1 + 0x14) = 0;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x78a6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x78a5,0);
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



// ===== FAT.AreaBoardActivity$$IsEnergyMethod RVA 0x2bb6808 =====

uint FUN_02bc6808(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x7862,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7862,0);
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
  return (uint)((*(uint *)(param_1 + 0x70) & 0xfffffffd) == 1);
}



// ===== FAT.AreaBoardActivity$$IsOrderMethod RVA 0x2bb686c =====

uint FUN_02bc686c(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x5d6,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5d6,0);
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
  return (uint)((*(uint *)(param_1 + 0x70) & 0xfffffffe) == 2);
}



// ===== FAT.AreaBoardActivity$$IsTokenType RVA 0x2bb68d0 =====

uint FUN_02bc68d0(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x78ab,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x78ab,0);
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
  return (uint)(*(int *)(param_1 + 0x74) == 2);
}



// ===== FAT.AreaBoardActivity$$IsItemType RVA 0x2bb6930 =====

uint FUN_02bc6930(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x78ac,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x78ac,0);
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
  return (uint)(*(int *)(param_1 + 0x74) == 1);
}



// ===== FAT.AreaBoardActivity$$FAT.IBoardActivityOutput.IsValidForOrder RVA 0x2bb6990 =====

uint FUN_02bc6990(int *param_1)

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
  
  iVar2 = func_0x0229f06c(0x78ad,0);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = func_0x0229f06c(0x5d6,0);
    if (iVar2 == 0) {
      return (uint)((param_1[0x1c] & 0xfffffffeU) == 2);
    }
    iVar2 = func_0x0229f13c(0x5d6,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x78ad,0);
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



// ===== FAT.AreaBoardActivity$$FAT.IBoardActivityOutput.GetFlyType RVA 0x2bb6a0c =====

undefined4 FUN_02bc6a0c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x78ae,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x78ae,0);
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
  return 0x4a;
}



// ===== FAT.AreaBoardActivity$$FAT.IBoardActivityOutput.GetReasonString RVA 0x2bb6a60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bc6a60(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
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
  
  pcVar5 = (char *)(_UNK_02bc6b00 + 0x2bc6a74);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc6b04 + 0x2bc6a88));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x78af,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x78af,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_0221b1d4 + 0x221b0f4);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0221b1d8 + 0x221b108),param_1,0);
      *pcVar5 = '\x01';
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
    uVar6 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0221b1dc + 0x221b1c4));
    return uVar6;
  }
  piVar3 = *(int **)(_UNK_02bc6b08 + 0x2bc6ae0);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x1a4);
}



// ===== FAT.AreaBoardActivity$$GetSpawnOutputsOne RVA 0x2bb6b0c =====

/* WARNING: Removing unreachable block (ram,0x02bc719c) */
/* WARNING: Removing unreachable block (ram,0x02bc6f30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc6b0c(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
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
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_02bc7348 + 0x2bc6b28);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc734c + 0x2bc6b3c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc7350 + 0x2bc6b48));
    func_0x01384978(*(undefined4 *)(_UNK_02bc7354 + 0x2bc6b54));
    func_0x01384978(*(undefined4 *)(_UNK_02bc7358 + 0x2bc6b60));
    func_0x01384978(*(undefined4 *)(_UNK_02bc735c + 0x2bc6b6c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc7360 + 0x2bc6b78));
    func_0x01384978(*(undefined4 *)(_UNK_02bc7364 + 0x2bc6b84));
    func_0x01384978(*(undefined4 *)(_UNK_02bc7368 + 0x2bc6b90));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x78b0,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x78b0,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    iStack_34 = uStack_4c;
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
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_38,uVar5,0,0);
    return;
  }
  if (param_2 == (int *)0x0) {
    return;
  }
  iVar2 = *param_2;
  uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_02bc736c + 0x2bc6bfc)) {
        puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xd8);
        goto LAB_02bc6c44;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_02bc736c + 0x2bc6bfc),3);
LAB_02bc6c44:
  (*(code *)*puVar3)(param_2,puVar3[1]);
  iVar2 = FUN_02bbfc04(param_1);
  if (iVar2 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x74) == 1) {
    uVar10 = func_0x03003b84(*(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(param_1 + 0x50),1,
                             **(undefined4 **)(_UNK_02bc7370 + 0x2bc6c84));
    iVar9 = func_0x01c24918(0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0xc);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = func_0x01cab5a8(iVar9,uVar10,0);
    if (iVar9 == 0) {
      return;
    }
    iVar9 = *(int *)(iVar9 + 0x18);
    iStack_34 = iVar2;
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x03653608(iVar9,**(undefined4 **)(_UNK_02bc7374 + 0x2bc6cf4));
    piVar11 = *(int **)(_UNK_02bc7378 + 0x2bc6d10);
    do {
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar6;
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar11) {
            puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
            goto LAB_02bc6d68;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar6,*piVar11,0);
LAB_02bc6d68:
      iVar2 = (*(code *)*puVar3)(piVar6,puVar3[1]);
      if (iVar2 == 0) goto LAB_02bc6eac;
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar6;
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_02bc737c + 0x2bc6d9c)) {
            puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
            goto LAB_02bc6de4;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02bc737c + 0x2bc6d9c),0);
LAB_02bc6de4:
      uVar10 = (*(code *)*puVar3)(piVar6,puVar3[1]);
      if (*(int *)(**(int **)(_UNK_02bc7380 + 0x2bc6e04) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02566088(&uStack_30,uVar10,0);
      uVar1 = uStack_28;
      uVar5 = uStack_2c;
      uVar10 = uStack_30;
      iVar2 = *param_2;
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_02bc7384 + 0x2bc6e40)) {
            puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xd0);
            goto LAB_02bc6e88;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_02bc7384 + 0x2bc6e40),2);
LAB_02bc6e88:
      uStack_38 = puVar3[1];
      (*(code *)*puVar3)(param_2,uVar10,uVar5,uVar1);
    } while( true );
  }
  iVar2 = *(int *)(iVar2 + 0x60);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    return;
  }
  piVar6 = (int *)func_0x03653608(iVar2,**(undefined4 **)(_UNK_02bc738c + 0x2bc6f68));
  piVar11 = *(int **)(_UNK_02bc7390 + 0x2bc6f84);
  do {
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar6;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar11) {
          puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
          goto LAB_02bc6fdc;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar6,*piVar11,0);
LAB_02bc6fdc:
    iVar2 = (*(code *)*puVar3)(piVar6,puVar3[1]);
    if (iVar2 == 0) goto LAB_02bc7120;
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar6;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_02bc7398 + 0x2bc7010)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
          goto LAB_02bc7058;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02bc7398 + 0x2bc7010),0);
LAB_02bc7058:
    uVar10 = (*(code *)*puVar3)(piVar6,puVar3[1]);
    if (*(int *)(**(int **)(_UNK_02bc739c + 0x2bc7078) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02566088(&uStack_30,uVar10,0);
    uVar1 = uStack_28;
    uVar5 = uStack_2c;
    uVar10 = uStack_30;
    iVar2 = *param_2;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_02bc73a0 + 0x2bc70b4)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xd0);
          goto LAB_02bc70fc;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_02bc73a0 + 0x2bc70b4),2);
LAB_02bc70fc:
    uStack_38 = puVar3[1];
    (*(code *)*puVar3)(param_2,uVar10,uVar5,uVar1);
  } while( true );
LAB_02bc6eac:
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar2 = *piVar6;
  uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar4 != 0) {
    piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar11[-1] == **(int **)(_UNK_02bc7388 + 0x2bc6ed0)) {
        puVar3 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xc0);
        goto LAB_02bc6f18;
      }
      uVar4 = uVar4 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02bc7388 + 0x2bc6ed0),0);
LAB_02bc6f18:
  (*(code *)*puVar3)(piVar6,puVar3[1]);
  return;
LAB_02bc7120:
  if (piVar6 != (int *)0x0) {
    iVar2 = *piVar6;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_02bc73a4 + 0x2bc713c)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xc0);
          goto LAB_02bc7184;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02bc73a4 + 0x2bc713c),0);
LAB_02bc7184:
    (*(code *)*puVar3)(piVar6,puVar3[1]);
  }
  return;
}



// ===== FAT.AreaBoardActivity$$TryGetOutputFixedOne RVA 0x2bb73ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bc73ac(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  pcVar5 = (char *)(_UNK_02bc7548 + 0x2bc73cc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc754c + 0x2bc73e0));
    func_0x01384978(*(undefined4 *)(_UNK_02bc7550 + 0x2bc73ec));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x78b1,0);
  if (iVar1 == 0) {
    *param_2 = 0;
    *param_3 = 0;
    uVar6 = FUN_02bbfc04(param_1);
    iVar1 = (int)((ulonglong)uVar6 >> 0x20);
    iVar3 = (int)uVar6;
    if (iVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0x74);
    }
    if (iVar3 != 0 && iVar1 != 2) {
      uVar4 = func_0x03003b84(*(undefined4 *)(iVar3 + 0x28),*(undefined4 *)(param_1 + 0x50),1,
                              **(undefined4 **)(_UNK_02bc7554 + 0x2bc7484));
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01cab5a8(iVar1,uVar4,0);
      if (iVar1 != 0) {
        uVar4 = *(undefined4 *)(iVar1 + 0x14);
        if (*(int *)(**(int **)(_UNK_02bc7558 + 0x2bc74e0) + 0x74) == 0) {
          func_0x01384ab4(**(int **)(_UNK_02bc7558 + 0x2bc74e0));
        }
        iVar1 = func_0x02565a88(uVar4,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        *param_2 = *(int *)(iVar1 + 8);
        iVar1 = *(int *)(iVar1 + 0xc);
        *param_3 = iVar1;
        return (uint)(0 < iVar1 && 0 < *param_2);
      }
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x78b1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021cc06c(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.AreaBoardActivity$$GetWithOutputTimeRange RVA 0x2bb755c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc755c(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_02bc7780 + 0x2bc7578);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc7784 + 0x2bc758c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc7788 + 0x2bc7598));
    func_0x01384978(*(undefined4 *)(_UNK_02bc778c + 0x2bc75a4));
    func_0x01384978(*(undefined4 *)(_UNK_02bc7790 + 0x2bc75b0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x78b2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x78b2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217edb0(&uStack_28,iVar1,param_2,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
    return;
  }
  uVar8 = FUN_02bbfc04(param_2);
  iVar1 = (int)((ulonglong)uVar8 >> 0x20);
  iVar2 = (int)uVar8;
  if (iVar2 != 0) {
    iVar1 = *(int *)(param_2 + 0x74);
  }
  if (iVar2 != 0 && iVar1 != 2) {
    uVar4 = func_0x03003b84(*(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(param_2 + 0x50),1,
                            **(undefined4 **)(_UNK_02bc7798 + 0x2bc7660));
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01cab5a8(iVar1,uVar4,0);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x20);
      if ((iVar2 != 0) && (iVar6 = *(int *)(iVar2 + 0xc), 0 < iVar6)) {
        puVar7 = *(undefined4 **)(_UNK_02bc77a0 + 0x2bc76e4);
        iVar2 = func_0x0364c9b8(iVar2,0,*puVar7);
        iVar3 = iVar2;
        if (iVar6 == 1) {
          puVar7 = *(undefined4 **)(_UNK_02bc77a4 + 0x2bc7704);
          *param_1 = 0;
          param_1[1] = 0;
          uVar4 = *puVar7;
        }
        else {
          iVar1 = *(int *)(iVar1 + 0x20);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0364c9b8(iVar1,1,*puVar7);
          *param_1 = 0;
          param_1[1] = 0;
          if (iVar2 <= iVar1) {
            iVar3 = iVar1;
            iVar1 = iVar2;
          }
          iVar2 = iVar1;
          uVar4 = **(undefined4 **)(_UNK_02bc77a8 + 0x2bc7778);
        }
        goto LAB_02bc7644;
      }
      goto LAB_02bc7620;
    }
    puVar7 = *(undefined4 **)(_UNK_02bc779c + 0x2bc7720);
    *param_1 = 0;
    param_1[1] = 0;
    uVar4 = *puVar7;
  }
  else {
LAB_02bc7620:
    uVar4 = **(undefined4 **)(_UNK_02bc7794 + 0x2bc762c);
    *param_1 = 0;
    param_1[1] = 0;
  }
  iVar2 = 0;
  iVar3 = 0;
LAB_02bc7644:
  func_0x038fd264(param_1,iVar2,iVar3,uVar4);
  return;
}



// ===== FAT.AreaBoardActivity$$FAT.IActivityOrderHandler.OnPreUpdate RVA 0x2bb77ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bc77ac(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar10 = (char *)(_UNK_02bc7bbc + 0x2bc77cc);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc7bc0 + 0x2bc77e4));
    func_0x01384978(*(undefined4 *)(_UNK_02bc7bc4 + 0x2bc77f0));
    func_0x01384978(*(undefined4 *)(_UNK_02bc7bc8 + 0x2bc77fc));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x78b3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x78b3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021d2b64(iVar1,param_1,param_2,param_3,param_4,0);
    return uVar2;
  }
  iVar1 = FUN_02bc686c(param_1);
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
      if (piVar8[-1] == **(int **)(_UNK_02bc7bcc + 0x2bc7884)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x268);
        goto LAB_02bc78cc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_02bc7bcc + 0x2bc7884),0x35);
LAB_02bc78cc:
  iVar1 = (*(code *)*puVar3)(param_2,puVar3[1]);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = FUN_02bbfc04(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if (1 < param_1[0x1d] - 1U) {
    return 0;
  }
  uVar2 = FUN_02b449f8(param_1,0);
  iVar4 = func_0x01e4b758(param_2,uVar2,0);
  piVar8 = *(int **)(_UNK_02bc7bd0 + 0x2bc7934);
  iVar5 = *piVar8;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x01384ab4();
    iVar5 = *piVar8;
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x5c) + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x01e4b23c(iVar5,param_2,0);
  if (iVar5 == 0) {
LAB_02bc79cc:
    if (param_1[0x1d] == 1) {
      iVar5 = *param_1;
      uVar11 = *(undefined4 *)(iVar1 + 0x54);
      uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
      uVar2 = *(undefined4 *)(iVar1 + 0x58);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_02bc7bd4 + 0x2bc79ec)) {
            puVar3 = (undefined4 *)(iVar5 + *piVar9 * 8 + 0xf0);
            goto LAB_02bc7a74;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_02bc7bd4 + 0x2bc79ec),6);
LAB_02bc7a74:
      iVar1 = (*(code *)*puVar3)(param_1,param_2,uVar2,uVar11,puVar3[1]);
      uVar2 = 1;
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      iVar5 = param_1[0x3f];
      uVar2 = *(undefined4 *)(iVar1 + 100);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      FUN_02afa744(iVar5,param_2,param_4,uVar2,0);
      uVar2 = 1;
    }
  }
  else {
    iVar5 = *piVar8;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x01384ab4();
      iVar5 = *piVar8;
    }
    iVar5 = *(int *)(*(int *)(iVar5 + 0x5c) + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar5 = func_0x01e4b2b0(iVar5,param_2,0);
    iVar6 = FUN_02b449f8(param_1,0);
    if (iVar5 != iVar6) goto LAB_02bc79cc;
  }
  if (iVar4 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x01e4b23c(0,param_2,0);
    if (iVar1 != 0) {
      func_0x01384bf0();
      goto LAB_02bc7af4;
    }
  }
  else {
    iVar1 = func_0x01e4b23c(iVar4,param_2,0);
    if (iVar1 != 0) {
LAB_02bc7af4:
      uVar11 = 0;
      iVar1 = func_0x01e4b2b0(iVar4,param_2,0);
      iVar5 = FUN_02b449f8(param_1,0);
      if (iVar1 == iVar5) goto LAB_02bc7ba4;
    }
  }
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar8;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4b3b8(&uStack_2c,iVar1,param_2,0);
  uVar11 = FUN_02b449f8(param_1,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4ba84(iVar4,param_2,uVar11,uStack_28,uStack_2c,0);
  uVar11 = 1;
LAB_02bc7ba4:
  iVar1 = func_0x01f2a218(0);
  if (iVar1 != 0) {
    return uVar11;
  }
  return uVar2;
}



// ===== FAT.AreaBoardActivity$$TrackOrderGetItem RVA 0x2bb7bd8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc7bd8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_02bc7df8 + 0x2bc7bf8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc7dfc + 0x2bc7c10));
    func_0x01384978(*(undefined4 *)(_UNK_02bc7e00 + 0x2bc7c1c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc7e04 + 0x2bc7c28));
    func_0x01384978(*(undefined4 *)(_UNK_02bc7e08 + 0x2bc7c34));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x78b4,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bbfc04(param_1);
    if (iVar1 != 0) {
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x4c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01dbb000(iVar2,0);
      uVar6 = 0;
      if (iVar2 != 0) {
        iVar2 = func_0x02139cf4(iVar2,0);
        uVar6 = 0;
        if (iVar2 != 0) {
          uStack_2c = 0;
          uStack_30 = 0;
          func_0x03507d38(&uStack_30,*(undefined4 *)(iVar2 + 8),
                          **(undefined4 **)(_UNK_02bc7e0c + 0x2bc7d04));
          uVar6 = uStack_2c;
        }
      }
      iVar2 = FUN_02bc6930(param_1);
      if (iVar2 == 0) {
        iVar1 = FUN_02bc68d0(param_1);
        if (iVar1 != 0) {
          piVar9 = *(int **)(_UNK_02bc7e10 + 0x2bc7db8);
          uVar6 = *(undefined4 *)(param_1 + 0x58);
          iVar1 = *piVar9;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *piVar9;
          }
          func_0x019a4b9c(param_2,param_3,uVar6,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x1a4),0);
        }
      }
      else {
        iVar7 = *(int *)(iVar1 + 0x50);
        iVar2 = *(int *)(param_1 + 0x50);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uVar5 = *(undefined4 *)(iVar1 + 0x24);
        uVar8 = *(undefined4 *)(iVar7 + 0xc);
        uVar10 = *(undefined4 *)(param_1 + 0x44);
        uVar3 = func_0x02157e88(param_2,0);
        func_0x0230d318(param_1,iVar2 + 1,uVar8,uVar5,uVar6,1,uVar10,param_2,uVar3,param_3,param_4,0
                       );
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x78b4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179c40(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.AreaBoardActivity$$_SetBonusHandlerDirty RVA 0x2bb7e14 =====

void FUN_02bc7e14(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x78b5,0);
  if (iVar1 == 0) {
    iVar3 = FUN_02bc6808(param_1);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0x100);
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
    iVar1 = func_0x0229f13c(0x78b5,0);
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



// ===== FAT.AreaBoardActivity$$TrackBonusGetItem RVA 0x2bb7e84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc7e84(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  pcVar3 = (char *)(_UNK_02bc7fec + 0x2bc7ea4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc7ff0 + 0x2bc7eb8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x78b6,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bbfc04(param_1);
    if (iVar1 != 0) {
      iVar4 = *(int *)(iVar1 + 0x50);
      iVar9 = *(int *)(param_1 + 0x50);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar7 = *(undefined4 *)(iVar1 + 0x24);
      uVar8 = *(undefined4 *)(iVar4 + 0xc);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01dbb000(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02139cf4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar6 = *(undefined4 *)(iVar1 + 8);
      uVar5 = *(undefined4 *)(param_1 + 0x44);
      uVar2 = func_0x02157e88(param_2,0);
      func_0x0230d50c(param_1,iVar9 + 1,uVar8,uVar7,uVar6,1,uVar5,param_2,uVar2,param_3,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x78b6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.AreaBoardActivity$$GetProgressInfo RVA 0x2bb7ff4 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bc7ff4(int param_1)

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
  
  pcVar8 = (char *)(_UNK_02bc8104 + 0x2bc8008);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc8108 + 0x2bc801c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc810c + 0x2bc8028));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x78b7,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x78b7,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02253238 + 0x2253158);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0225323c + 0x225316c),param_1,0);
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
    uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02253240 + 0x2253228));
    return uVar9;
  }
  iVar7 = *(int *)(param_1 + 0x50);
  iVar2 = FUN_02bbfc04(param_1);
  if (iVar2 != 0) {
    param_1 = *(int *)(iVar2 + 0x50);
  }
  if (((iVar2 != 0 && param_1 != 0) && (-1 < iVar7)) && (iVar7 < *(int *)(param_1 + 0xc))) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    uVar9 = func_0x0364c9b8(param_1,iVar7,**(undefined4 **)(_UNK_02bc8110 + 0x2bc80d4));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x0229f06c(0x78b8,0,0);
    if (iVar7 != 0) {
      iVar7 = func_0x0229f13c(0x78b8,0);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      pcVar8 = (char *)(_UNK_02253130 + 0x225303c);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02253134 + 0x2253050),iVar2,uVar9,0);
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
      uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02253138 + 0x2253120));
      return uVar9;
    }
    pcVar8 = (char *)(_UNK_017d6a24 + 0x17d69c8);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_017d6a28 + 0x17d69dc),0);
      func_0x01384978(*(undefined4 *)(_UNK_017d6a2c + 0x17d69e8));
      *pcVar8 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_017d6a30 + 0x17d69fc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = **(int **)(_UNK_017d6a34 + 0x17d6a18);
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
  return 0;
}



// ===== FAT.AreaBoardActivity$$CheckProgressFinish RVA 0x2bb8114 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bc8114(int param_1)

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
  
  pcVar5 = (char *)(_UNK_02bc81c4 + 0x2bc8128);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc81c8 + 0x2bc813c));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x78b9,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x78b9,0);
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
  iVar4 = FUN_02bbfc04(param_1);
  iVar2 = 0;
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 0x50);
  }
  if (iVar4 != 0 && iVar2 != 0) {
    return (uint)(*(int *)(iVar2 + 0xc) <= *(int *)(param_1 + 0x50));
  }
  return 1;
}



// ===== FAT.AreaBoardActivity$$AddMilestoneScore RVA 0x2bb81cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc81cc(int param_1,int param_2)

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
  
  pcVar5 = (char *)(_UNK_02bc838c + 0x2bc81e8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc8390 + 0x2bc81fc));
    func_0x01384978(*(undefined4 *)(_UNK_02bc8394 + 0x2bc8208));
    func_0x01384978(*(undefined4 *)(_UNK_02bc8398 + 0x2bc8214));
    func_0x01384978(*(undefined4 *)(_UNK_02bc839c + 0x2bc8220));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x78ba,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x78ba,0);
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
  iVar1 = FUN_02bbfc04(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x03003b84(*(undefined4 *)(iVar1 + 0x50),*(undefined4 *)(param_1 + 0x50),1,
                          **(undefined4 **)(_UNK_02bc83a0 + 0x2bc829c));
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01cab544(iVar1,uVar4,0);
  param_2 = *(int *)(param_1 + 0x54) + param_2;
  *(int *)(param_1 + 0x54) = param_2;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (param_2 < *(int *)(iVar1 + 0x18)) {
    if (*(int *)(**(int **)(_UNK_02bc83a4 + 0x2bc8318) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02bc83a8 + 0x2bc8334));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = **(undefined4 **)(_UNK_02bc83ac + 0x2bc8360);
    func_0x034a79d8(iVar1,0,0,0);
    return;
  }
  func_0x02bc83b0(param_1);
  pcVar5 = (char *)(_UNK_02bc8b78 + 0x2bc8a68);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc8b7c + 0x2bc8a7c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x78bc,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bbfc04(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x03003b84(*(undefined4 *)(iVar1 + 0x50),*(undefined4 *)(param_1 + 0x50),1,
                            **(undefined4 **)(_UNK_02bc8b80 + 0x2bc8af0));
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01cab544(iVar1,uVar4,0);
    iVar3 = *(int *)(param_1 + 0x54);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(int *)(param_1 + 0x54) = iVar3 - *(int *)(iVar1 + 0x18);
    func_0x02bc8b84(param_1);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    iVar1 = func_0x0229f06c(0x78b5,0);
    if (iVar1 == 0) {
      iVar3 = FUN_02bc6808(param_1);
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = *(int *)(param_1 + 0x100);
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
      iVar1 = func_0x0229f13c(0x78b5,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x78bc,0);
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
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2);
  return;
}



// ===== FAT.AreaBoardActivity$$_BeginMilestoneReward RVA 0x2bb83b0 =====

/* WARNING: Removing unreachable block (ram,0x02bc8868) */
/* WARNING: Removing unreachable block (ram,0x02bc8874) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc83b0(int param_1)

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
  
  pcVar9 = (char *)(_UNK_02bc89d4 + 0x2bc83c8);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc89d8 + 0x2bc83dc));
    func_0x01384978(*(undefined4 *)(_UNK_02bc89dc + 0x2bc83e8));
    func_0x01384978(*(undefined4 *)(_UNK_02bc89e0 + 0x2bc83f4));
    func_0x01384978(*(undefined4 *)(_UNK_02bc89e4 + 0x2bc8400));
    func_0x01384978(*(undefined4 *)(_UNK_02bc89e8 + 0x2bc840c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc89ec + 0x2bc8418));
    func_0x01384978(*(undefined4 *)(_UNK_02bc89f0 + 0x2bc8424));
    func_0x01384978(*(undefined4 *)(_UNK_02bc89f4 + 0x2bc8430));
    func_0x01384978(*(undefined4 *)(_UNK_02bc89f8 + 0x2bc843c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc89fc + 0x2bc8448));
    func_0x01384978(*(undefined4 *)(_UNK_02bc8a00 + 0x2bc8454));
    func_0x01384978(*(undefined4 *)(_UNK_02bc8a04 + 0x2bc8460));
    func_0x01384978(*(undefined4 *)(_UNK_02bc8a08 + 0x2bc846c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc8a0c + 0x2bc8478));
    func_0x01384978(*(undefined4 *)(_UNK_02bc8a10 + 0x2bc8484));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x78bb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x78bb,0);
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
  iVar1 = FUN_02bbfc04(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar10 = func_0x03003b84(*(undefined4 *)(iVar1 + 0x50),*(undefined4 *)(param_1 + 0x50),1,
                           **(undefined4 **)(_UNK_02bc8a14 + 0x2bc84fc));
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01cab544(iVar1,uVar10,0);
  iVar8 = func_0x01384be4(**(undefined4 **)(_UNK_02bc8a18 + 0x2bc8554));
  func_0x0328e950(iVar8,**(undefined4 **)(_UNK_02bc8a1c + 0x2bc8568));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar1 + 0x14);
  iStack_34 = iVar1;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x03653608(iVar7,**(undefined4 **)(_UNK_02bc8a20 + 0x2bc859c));
  piVar12 = *(int **)(_UNK_02bc8a24 + 0x2bc85b8);
LAB_02bc85b4:
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_02bc8a3c + 0x2bc85d0)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
        goto LAB_02bc8618;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02bc8a3c + 0x2bc85d0),0);
LAB_02bc8618:
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
        if (piVar6[-1] == **(int **)(_UNK_02bc8a28 + 0x2bc864c)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_02bc8694;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02bc8a28 + 0x2bc864c),0);
LAB_02bc8694:
    uVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (*(int *)(**(int **)(_UNK_02bc8a2c + 0x2bc86b4) + 0x74) == 0) {
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
    uVar11 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x1a0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_40 = **(undefined4 **)(_UNK_02bc8a30 + 0x2bc8730);
    uStack_3c = **(undefined4 **)(_UNK_02bc8a34 + 0x2bc873c);
    uStack_44 = 0x470;
    uStack_38 = 0;
    uStack_48 = 0;
    uVar10 = func_0x01cdcbac(iVar1,uVar10,uVar5,uVar11,0,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar8 + 8);
    uVar4 = *(uint *)(iVar8 + 0xc);
    piVar6 = *(int **)(_UNK_02bc8a38 + 0x2bc879c);
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
    goto LAB_02bc85b4;
  }
  if (piVar2 != (int *)0x0) {
    iVar7 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar12[-1] == **(int **)(_UNK_02bc8a40 + 0x2bc8808)) {
          puVar3 = (undefined4 *)(iVar7 + *piVar12 * 8 + 0xc0);
          goto LAB_02bc8850;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02bc8a40 + 0x2bc8808),0);
LAB_02bc8850:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  if (*(int *)(**(int **)(_UNK_02bc8a44 + 0x2bc8888) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar7 = func_0x0300d558(**(undefined4 **)(_UNK_02bc8a48 + 0x2bc88a4));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar10 = *(undefined4 *)(iVar1 + 0x18);
  uVar5 = *(undefined4 *)(iVar1 + 0x1c);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  func_0x034a79d8(iVar7,iVar8,uVar5,uVar10,**(undefined4 **)(_UNK_02bc8a4c + 0x2bc88e4));
  return;
}



// ===== FAT.AreaBoardActivity$$_EnterNextMile RVA 0x2bb8a54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc8a54(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02bc8b78 + 0x2bc8a68);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc8b7c + 0x2bc8a7c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x78bc,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bbfc04(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x03003b84(*(undefined4 *)(iVar1 + 0x50),*(undefined4 *)(param_1 + 0x50),1,
                            **(undefined4 **)(_UNK_02bc8b80 + 0x2bc8af0));
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01cab544(iVar1,uVar5,0);
    iVar3 = *(int *)(param_1 + 0x54);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(int *)(param_1 + 0x54) = iVar3 - *(int *)(iVar1 + 0x18);
    func_0x02bc8b84(param_1);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    iVar1 = func_0x0229f06c(0x78b5,0);
    if (iVar1 == 0) {
      iVar3 = FUN_02bc6808(param_1);
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = *(int *)(param_1 + 0x100);
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
      iVar1 = func_0x0229f13c(0x78b5,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x78bc,0);
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



// ===== FAT.AreaBoardActivity$$TrackAreaMilestone RVA 0x2bb8b84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc8b84(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02bc8ca8 + 0x2bc8b9c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc8cac + 0x2bc8bb0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x78bd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x78bd,0);
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
  iVar1 = FUN_02bbfc04(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(param_1 + 0x50);
  iVar6 = *(int *)(iVar1 + 0x50);
  iVar3 = iVar7;
  if (iVar6 == 0) {
    func_0x01384bf0();
    iVar3 = *(int *)(param_1 + 0x50);
  }
  iVar8 = *(int *)(iVar6 + 0xc);
  iVar6 = *(int *)(param_1 + 100);
  uVar5 = *(undefined4 *)(iVar1 + 0x24);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02139cf4(iVar6,0);
  uStack_34 = 0;
  if (iVar1 != 0) {
    uStack_34 = *(undefined4 *)(iVar1 + 8);
  }
  uStack_30 = *(undefined4 *)(param_1 + 0x44);
  uStack_38 = (uint)(iVar7 == iVar8 + -1);
  uStack_2c = 0;
  func_0x019bb1a0(param_1,iVar3 + 1,iVar8,uVar5);
  return;
}



// ===== FAT.AreaBoardActivity$$CanUseItem RVA 0x2bb8cb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bc8cb0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iStack_28;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_02bc921c + 0x2bc8ccc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc9220 + 0x2bc8ce0));
    func_0x01384978(*(undefined4 *)(_UNK_02bc9224 + 0x2bc8cec));
    func_0x01384978(*(undefined4 *)(_UNK_02bc9228 + 0x2bc8cf8));
    func_0x01384978(*(undefined4 *)(_UNK_02bc922c + 0x2bc8d04));
    func_0x01384978(*(undefined4 *)(_UNK_02bc9230 + 0x2bc8d10));
    func_0x01384978(*(undefined4 *)(_UNK_02bc9234 + 0x2bc8d1c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc9238 + 0x2bc8d28));
    func_0x01384978(*(undefined4 *)(_UNK_02bc923c + 0x2bc8d34));
    func_0x01384978(*(undefined4 *)(_UNK_02bc9240 + 0x2bc8d40));
    func_0x01384978(*(undefined4 *)(_UNK_02bc9244 + 0x2bc8d4c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc9248 + 0x2bc8d58));
    *pcVar5 = '\x01';
  }
  uVar9 = 0;
  iStack_24 = 0;
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x78be,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bbfc04(param_1);
    if (iVar1 != 0) {
      iVar6 = *(int *)(param_1 + 0x88);
      uVar10 = *(undefined4 *)(param_1 + 0x4c);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x03d37358(iVar6,uVar10,&iStack_28,**(undefined4 **)(_UNK_02bc924c + 0x2bc8df4));
      iVar6 = iStack_28;
      if (iVar2 != 0) {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x02116990(param_2,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (iVar6 == *(int *)(iVar2 + 0x10)) {
          return (uint)(iStack_24 == 1);
        }
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x02116990(param_2,0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar10 = *(undefined4 *)(iVar6 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0364bc1c(iVar1,uVar10,**(undefined4 **)(_UNK_02bc9250 + 0x2bc8e9c));
      uVar9 = 0;
      if (iVar1 != 0) {
        iVar1 = FUN_02bc8114(param_1);
        uVar9 = 1;
        if (iVar1 != 0) {
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x38);
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          uVar10 = func_0x0210e2d4(param_2,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01cca5b0(iVar1,uVar10,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar10 = *(undefined4 *)(iVar1 + 0x1c);
          if (*(int *)(**(int **)(_UNK_02bc9254 + 0x2bc8f34) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar1 = func_0x025550ec(uVar10,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0xc);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          puVar11 = *(undefined4 **)(_UNK_02bc9258 + 0x2bc8f8c);
          iVar1 = func_0x046755e8(iVar1,*puVar11,0,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar1 + 0xc) == 0) {
            func_0x01384bf4();
          }
          uVar10 = *(undefined4 *)(iVar1 + 0x10);
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar6 = *(int *)(iVar1 + 0x38);
          iVar1 = FUN_02bbfc04(param_1);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar7 = *(undefined4 *)(iVar1 + 0x20);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01cca5b0(iVar6,uVar7,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x025550ec(*(undefined4 *)(iVar1 + 0x1c),0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0xc);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x046755e8(iVar1,*puVar11,0,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar1 + 0xc) == 0) {
            func_0x01384bf4();
          }
          uVar7 = *(undefined4 *)(iVar1 + 0x10);
          if (*(int *)(**(int **)(_UNK_02bc925c + 0x2bc9084) + 0x74) == 0) {
            func_0x01384ab4();
          }
          puVar8 = *(undefined4 **)(_UNK_02bc9260 + 0x2bc90a8);
          puVar11 = *(undefined4 **)(_UNK_02bc9264 + 0x2bc90b4);
          iVar1 = func_0x01a332cc(*puVar11,uVar10,*puVar8);
          iVar6 = func_0x01a332cc(*puVar11,uVar7,*puVar8);
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x10);
          piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02bc9268 + 0x2bc90f8),2);
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          if ((iVar1 != 0) &&
             (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)) {
            uVar10 = func_0x01384c10();
            func_0x01384aa0(uVar10,0);
          }
          if (piVar3[3] == 0) {
            func_0x01384bf4();
          }
          piVar3[4] = iVar1;
          if ((iVar6 != 0) &&
             (iVar1 = func_0x01384ab8(iVar6,*(undefined4 *)(*piVar3 + 0x20)), iVar1 == 0)) {
            uVar10 = func_0x01384c10();
            func_0x01384aa0(uVar10,0);
          }
          if ((uint)piVar3[3] < 2) {
            func_0x01384bf4();
          }
          piVar3[5] = iVar6;
          if (*(int *)(**(int **)(_UNK_02bc926c + 0x2bc919c) + 0x74) == 0) {
            func_0x01384ab4();
          }
          uVar9 = 0;
          uVar10 = func_0x028c1688(**(undefined4 **)(_UNK_02bc9270 + 0x2bc91c4),piVar3,0);
          uVar7 = func_0x028c1350(**(undefined4 **)(_UNK_02bc9274 + 0x2bc91dc),0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x01ca28e4(iVar2,uVar10,uVar7,0,0,1,0);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x78be,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar9 = func_0x021734d8(iVar1,param_1,param_2,0);
  }
  return uVar9;
}



// ===== FAT.AreaBoardActivity$$TrySpawnItem RVA 0x2bb9278 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bc9278(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int aiStack_28 [2];
  
  pcVar5 = (char *)(_UNK_02bc9458 + 0x2bc9298);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc945c + 0x2bc92b0));
    func_0x01384978(*(undefined4 *)(_UNK_02bc9460 + 0x2bc92bc));
    *pcVar5 = '\x01';
  }
  aiStack_28[1] = 0;
  aiStack_28[0] = 0;
  iVar1 = func_0x0229f06c(0x78bf,0);
  if (iVar1 == 0) {
    *param_4 = 0;
    *param_3 = 0xffffffff;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_02bc9464 + 0x2bc9350));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0211b24c(iVar1,0);
    if (iVar3 != 0) {
      iVar3 = *(int *)(param_1 + 0x88);
      uVar2 = *(undefined4 *)(param_1 + 0x4c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x03d37358(iVar3,uVar2,aiStack_28,**(undefined4 **)(_UNK_02bc9468 + 0x2bc93a4));
      iVar3 = aiStack_28[0];
      if (iVar4 != 0) {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x02116990(param_2,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        if (iVar3 == *(int *)(iVar4 + 0x10)) {
          iVar3 = *(int *)(param_1 + 100);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x02139cf4(iVar3,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x020dd560(iVar3,param_2,0x12,0);
          if (iVar3 == 0) {
            return 0;
          }
        }
      }
      func_0x02bc946c(param_1,param_2,iVar1);
      uVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x78bf,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x022365c4(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.AreaBoardActivity$$_OnUseItem RVA 0x2bb946c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc946c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int aiStack_30 [3];
  
  pcVar7 = (char *)(_UNK_02bc9880 + 0x2bc948c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc9884 + 0x2bc94a0));
    func_0x01384978(*(undefined4 *)(_UNK_02bc9888 + 0x2bc94ac));
    func_0x01384978(*(undefined4 *)(_UNK_02bc988c + 0x2bc94b8));
    func_0x01384978(*(undefined4 *)(_UNK_02bc9890 + 0x2bc94c4));
    func_0x01384978(*(undefined4 *)(_UNK_02bc9894 + 0x2bc94d0));
    func_0x01384978(*(undefined4 *)(_UNK_02bc9898 + 0x2bc94dc));
    func_0x01384978(*(undefined4 *)(_UNK_02bc989c + 0x2bc94e8));
    func_0x01384978(*(undefined4 *)(_UNK_02bc98a0 + 0x2bc94f4));
    *pcVar7 = '\x01';
  }
  aiStack_30[1] = 0;
  aiStack_30[0] = 0;
  iVar4 = func_0x0229f06c(0x78c0,0);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x88);
    uVar8 = *(undefined4 *)(param_1 + 0x4c);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x03d37358(iVar4,uVar8,aiStack_30,**(undefined4 **)(_UNK_02bc98a4 + 0x2bc9580));
    iVar4 = aiStack_30[0];
    if (iVar5 != 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x02116990(param_2,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      if (iVar4 == *(int *)(iVar5 + 0x10)) {
        iVar4 = *(int *)(param_1 + 100);
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x02139cf4(iVar4,0);
        uVar9 = *(undefined4 *)(param_1 + 0x44);
        uVar8 = *(undefined4 *)(param_1 + 0x4c);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x020dc7e4(iVar4,uVar9,uVar8,0);
        if (*(int *)(**(int **)(_UNK_02bc98a8 + 0x2bc9628) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar4 = func_0x0300d558(**(undefined4 **)(_UNK_02bc98ac + 0x2bc9644));
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0349eb38(iVar4,param_2,**(undefined4 **)(_UNK_02bc98b0 + 0x2bc9668));
        return;
      }
    }
    iVar4 = FUN_02bc8114(param_1);
    if (iVar4 == 0) {
      if (param_3 == 0) {
        func_0x01384bf0();
      }
      uVar8 = func_0x0211b2b0(param_3,0);
      FUN_02bc81cc(param_1,uVar8);
      if (*(int *)(**(int **)(_UNK_02bc98b4 + 0x2bc96b4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0204f2f0(&uStack_3c,0x49,0);
      uVar3 = uStack_34;
      uVar9 = uStack_38;
      uVar8 = uStack_3c;
      iVar4 = func_0x01c24918(0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar4 + 0x50);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x0210e2d4(param_2,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x01dd0230(iVar4,uVar6,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar4 + 0x44);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x0364c9b8(iVar4,0,**(undefined4 **)(_UNK_02bc98b8 + 0x2bc976c));
      if (param_3 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x0211b194(param_3,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar10 = *(undefined4 *)(iVar4 + 0x14);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_3c,param_2,0);
      uVar2 = uStack_38;
      uVar1 = uStack_3c;
      if (*(int *)(**(int **)(_UNK_02bc98bc + 0x2bc97cc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x01dd876c(&uStack_3c,uVar1,uVar2,0);
      if (*(int *)(**(int **)(_UNK_02bc98c0 + 0x2bc9808) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0207405c(uVar6,uVar10,uStack_3c,uStack_38,uStack_34,uVar8,uVar9,uVar3,2,0x49,0,0,0,3,0)
      ;
    }
  }
  else {
    iVar4 = func_0x0229f13c(0x78c0,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar4,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.AreaBoardActivity$$TryAddToken RVA 0x2bb98c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc98c4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  bool bVar5;
  
  pcVar3 = (char *)(_UNK_02bc9a30 + 0x2bc98e4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc9a34 + 0x2bc98fc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5d0,0);
  if (iVar1 == 0) {
    iVar2 = FUN_02bbfc04(param_1);
    iVar1 = param_3;
    if (0 < param_3) {
      iVar1 = param_2;
    }
    if (((0 < iVar1) && (iVar2 != 0)) && (*(int *)(param_1 + 0x58) <= 0x7fffffff - param_3)) {
      bVar5 = *(int *)(param_1 + 0x74) == 2;
      if (bVar5) {
        iVar2 = *(int *)(iVar2 + 100);
      }
      if ((bVar5 && iVar2 == param_2) && (iVar1 = func_0x02bc9a3c(param_1,1,param_3), iVar1 != 0)) {
        piVar4 = *(int **)(_UNK_02bc9a38 + 0x2bc99c8);
        iVar1 = *piVar4;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar4;
        }
        if (param_4 != *(int *)(*(int *)(iVar1 + 0x5c) + 0x1a4)) {
          iVar2 = FUN_02bc686c(param_1);
          iVar1 = 0;
          if (iVar2 != 0) {
            iVar1 = *(int *)(param_1 + 0xfc);
          }
          if (iVar2 != 0 && iVar1 != 0) {
            FUN_02af96e4(iVar1,*(undefined4 *)(param_1 + 0x58),0);
          }
          func_0x019a4b9c(param_2,param_3,*(undefined4 *)(param_1 + 0x58),param_4,0);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5d0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179974(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.AreaBoardActivity$$ChangeItemToken RVA 0x2bb9a3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bc9a3c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  
  pcVar5 = (char *)(_UNK_02bc9c9c + 0x2bc9a5c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc9ca0 + 0x2bc9a70));
    func_0x01384978(*(undefined4 *)(_UNK_02bc9ca4 + 0x2bc9a7c));
    func_0x01384978(*(undefined4 *)(_UNK_02bc9ca8 + 0x2bc9a88));
    func_0x01384978(*(undefined4 *)(_UNK_02bc9cac + 0x2bc9a94));
    *pcVar5 = '\x01';
  }
  uVar6 = 0;
  iVar1 = func_0x0229f06c(0x5d5,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bbfc04(param_1);
    if (iVar1 != 0) {
      if ((param_3 < 1) || (param_2 == 0)) {
        if (param_2 != 0) {
          return 0;
        }
        if (*(int *)(param_1 + 0x58) < param_3) {
          uVar6 = *(undefined4 *)(iVar1 + 100);
          if (*(int *)(**(int **)(_UNK_02bc9cbc + 0x2bc9ba0) + 0x74) == 0) {
            func_0x01384ab4(**(int **)(_UNK_02bc9cbc + 0x2bc9ba0));
          }
          iVar1 = func_0x02085f3c(uVar6,0);
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x10);
          piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02bc9cc0 + 0x2bc9bf0),1);
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
          func_0x01ca1c50(iVar2,0x4a,piVar3,0);
          return 0;
        }
        piVar3 = *(int **)(_UNK_02bc9cb8 + 0x2bc9c88);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - param_3;
        iVar1 = *(int *)(*piVar3 + 0x74);
      }
      else {
        param_3 = *(int *)(param_1 + 0x58) + param_3;
        *(int *)(param_1 + 0x58) = param_3;
        if (*(int *)(param_1 + 0x8c) != 0) {
          func_0x02befcdc(*(int *)(param_1 + 0x8c),param_3,0);
        }
        iVar1 = *(int *)(**(int **)(_UNK_02bc9cb0 + 0x2bc9b3c) + 0x74);
      }
      if (iVar1 == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02bc9cb4 + 0x2bc9b58));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x028c3fd8(iVar1,0);
      uVar6 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5d5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x0218ebd4(iVar1,param_1,param_2,param_3,0);
  }
  return uVar6;
}



// ===== FAT.AreaBoardActivity$$CheckIsBoardItem RVA 0x2bb9cc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bc9cc4(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
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
  
  pcVar6 = (char *)(_UNK_02bc9d98 + 0x2bc9cdc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc9d9c + 0x2bc9cf0));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x78c1,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x78c1,0);
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
  iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if ((0 < param_2) && (iVar2 != 0)) {
    iVar2 = param_1[0x20];
    if (iVar2 == 0) {
      func_0x01384bf0();
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
  return 0;
}



// ===== FAT.AreaBoardActivity$$OnMergeItem RVA 0x2bb9da4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc9da4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_02bc9f70 + 0x2bc9dc4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc9f74 + 0x2bc9ddc));
    func_0x01384978(*(undefined4 *)(_UNK_02bc9f78 + 0x2bc9de8));
    func_0x01384978(*(undefined4 *)(_UNK_02bc9f7c + 0x2bc9df4));
    func_0x01384978(*(undefined4 *)(_UNK_02bc9f80 + 0x2bc9e00));
    *pcVar4 = '\x01';
  }
  iStack_24 = 0;
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x7860,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x88);
    uVar5 = *(undefined4 *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03d37358(iVar1,uVar5,&iStack_28,**(undefined4 **)(_UNK_02bc9f84 + 0x2bc9e8c));
    iVar1 = iStack_28;
    if (iVar2 != 0) {
      if (param_4 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02116990(param_4,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar2 + 0x10);
      iVar2 = iVar3;
      if (iVar1 == iVar3) {
        iVar2 = iStack_24;
      }
      if (iVar1 == iVar3 && iVar2 == 0) {
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        if ((*(int *)(param_1 + 100) != 0) &&
           (iVar1 = func_0x02139cf4(*(int *)(param_1 + 100),0), iVar1 != 0)) {
          func_0x020dc7e4(iVar1,*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x4c),0);
        }
        if (*(int *)(**(int **)(_UNK_02bc9f88 + 0x2bc9f20) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02bc9f8c + 0x2bc9f3c));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0349eb38(iVar1,param_4,**(undefined4 **)(_UNK_02bc9f90 + 0x2bc9f60));
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7860,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02175714(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.AreaBoardActivity$$OnNewItemUnlock RVA 0x2bb9f94 =====

void FUN_02bc9f94(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x78c2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x78c2,0);
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
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if (iVar1 == 0) {
    return;
  }
  if (param_1[0x23] != 0) {
    func_0x02befcdc(param_1[0x23],param_1[0x16],0);
  }
  iVar1 = func_0x02bca024(param_1);
  param_1[0x12] = iVar1;
  return;
}



// ===== FAT.AreaBoardActivity$$_GetCurMilestoneUnlockItemMaxLevel RVA 0x2bba024 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bca024(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
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
  
  pcVar5 = (char *)(_UNK_02bca144 + 0x2bca038);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bca148 + 0x2bca04c));
    func_0x01384978(*(undefined4 *)(_UNK_02bca14c + 0x2bca058));
    *pcVar5 = '\x01';
  }
  iVar6 = 0;
  iVar1 = func_0x0229f06c(0x78c3,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (iVar1 != 0) {
      puVar9 = *(undefined4 **)(_UNK_02bca150 + 0x2bca0d8);
      iVar6 = 0;
      iVar1 = 0;
      while( true ) {
        iVar8 = param_1[0x21];
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar8 + 0xc) <= iVar1) break;
        iVar8 = param_1[0x21];
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uVar7 = func_0x03259410(iVar8,iVar1,*puVar9);
        iVar2 = func_0x02bcade4(param_1,uVar7);
        iVar3 = iVar1 + 1;
        iVar8 = iVar3;
        if (iVar1 < iVar6) {
          iVar8 = iVar6;
        }
        iVar1 = iVar3;
        if (iVar2 != 0) {
          iVar6 = iVar8;
        }
      }
    }
    return iVar6;
  }
  iVar6 = func_0x0229f13c(0x78c3,0);
  if (iVar6 == 0) {
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
  if (*(int *)(iVar6 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar6 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar1 = *(int *)(iVar6 + 8);
  uVar7 = *(undefined4 *)(iVar6 + 0xc);
  iVar6 = *(int *)(iVar6 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar6 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar1,uVar7,&uStack_30,uVar4,0,0);
  iVar6 = func_0x0245498c(&uStack_30,0,0);
  return iVar6;
}



// ===== FAT.AreaBoardActivity$$OnNewItemShow RVA 0x2bba154 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bca154(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
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
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_02bca31c + 0x2bca16c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bca320 + 0x2bca180));
    func_0x01384978(*(undefined4 *)(_UNK_02bca324 + 0x2bca18c));
    func_0x01384978(*(undefined4 *)(_UNK_02bca328 + 0x2bca198));
    func_0x01384978(*(undefined4 *)(_UNK_02bca32c + 0x2bca1a4));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x78c5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x78c5,0);
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
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar5,0,0);
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
    iVar7 = func_0x02116990(iVar1,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *param_1;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    uVar8 = *(undefined4 *)(iVar7 + 0x10);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_02bca330 + 0x2bca258)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
          goto LAB_02bca2a4;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_02bca330 + 0x2bca258),0);
LAB_02bca2a4:
    iVar7 = (*(code *)*puVar3)(param_1,uVar8,puVar3[1]);
    if (iVar7 != 0) {
      if (*(int *)(**(int **)(_UNK_02bca334 + 0x2bca2cc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar7 = func_0x0300d558(**(undefined4 **)(_UNK_02bca338 + 0x2bca2e8));
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar7 = *(int *)(iVar7 + 8);
      if (iVar7 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar7 + 0xc))(*(undefined4 *)(iVar7 + 0x20),iVar1,*(undefined4 *)(iVar7 + 0x14));
      return;
    }
  }
  return;
}



// ===== FAT.AreaBoardActivity$$CheckClaimBoardCategoryReward RVA 0x2bba340 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bca340(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char cStack_11;
  
  pcVar3 = (char *)(_UNK_02bca408 + 0x2bca35c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bca40c + 0x2bca370));
    *pcVar3 = '\x01';
  }
  cStack_11 = '\0';
  iVar1 = func_0x0229f06c(0x78c6,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x60);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d50be8(iVar1,param_2,&cStack_11,**(undefined4 **)(_UNK_02bca410 + 0x2bca3ec));
    uVar2 = (uint)(cStack_11 == '\0');
  }
  else {
    iVar1 = func_0x0229f13c(0x78c6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02179234(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.AreaBoardActivity$$CheckClaimBoardHandBookAllReward RVA 0x2bba414 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bca414(int *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_02bca620 + 0x2bca42c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bca624 + 0x2bca440));
    func_0x01384978(*(undefined4 *)(_UNK_02bca628 + 0x2bca44c));
    func_0x01384978(*(undefined4 *)(_UNK_02bca62c + 0x2bca458));
    func_0x01384978(*(undefined4 *)(_UNK_02bca630 + 0x2bca464));
    func_0x01384978(*(undefined4 *)(_UNK_02bca634 + 0x2bca470));
    *pcVar3 = '\x01';
  }
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_14 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar4 = 0;
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x78c7,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if ((iVar1 != 0) && ((char)param_1[0x17] == '\0')) {
      iVar2 = param_1[0x20];
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0xc);
      }
      if (iVar2 != 0 && iVar1 != 0) {
        func_0x0325a3b4(&uStack_30,iVar2,**(undefined4 **)(_UNK_02bca638 + 0x2bca51c));
        uStack_20 = uStack_30;
        uStack_1c = uStack_2c;
        uStack_18 = uStack_28;
        iStack_14 = iStack_24;
        puVar5 = *(undefined4 **)(_UNK_02bca63c + 0x2bca538);
        do {
          iVar1 = func_0x03f597e0(&uStack_20,*puVar5);
          if (iVar1 == 0) {
            iVar1 = 10;
            goto LAB_02bca570;
          }
        } while ((iStack_14 < 1) || (iVar1 = func_0x02bca64c(param_1), iVar1 != 0));
        iVar1 = 9;
LAB_02bca570:
        func_0x03f597dc(&uStack_20,**(undefined4 **)(_UNK_02bca640 + 0x2bca57c));
        uVar4 = 0;
        if (iVar1 != 9) {
          uVar4 = 1;
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x78c7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x021742f8(iVar1,param_1,0);
  }
  return uVar4;
}



// ===== FAT.AreaBoardActivity$$IsItemReceived RVA 0x2bba64c =====

/* WARNING: Possible PIC construction at 0x01cc42c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cc42c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bca64c(int param_1,undefined4 param_2)

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
  int iStack_14;
  
  iVar2 = func_0x0229f06c(0x78c8,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar2 + 0x3c);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_01cc4318 + 0x1cc425c);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01cc431c + 0x1cc4270),param_2,0);
      *pcVar5 = '\x01';
    }
    iStack_14 = 0;
    iVar2 = func_0x0229f06c(0x5c2f,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02451924(iVar2,param_2,&iStack_14,**(undefined4 **)(_UNK_01cc4320 + 0x1cc42ec))
      ;
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = (uint)(iStack_14 == 3);
      }
      return uVar1;
    }
    iVar2 = func_0x0229f13c(0x5c2f,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1cc42c4;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar2;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar2 = func_0x0229f13c(0x78c8,0);
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



// ===== FAT.AreaBoardActivity$$get_HandBookRewards RVA 0x2bba6dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bca6dc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x78c9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x78c9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021cb2a0 + 0x21cb1c0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021cb2a4 + 0x21cb1d4),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021cb2a8 + 0x21cb290));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x104);
}



// ===== FAT.AreaBoardActivity$$ProcessAllUnlockReward RVA 0x2bba730 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bca730(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
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
  
  pcVar4 = (char *)(_UNK_02bca9c4 + 0x2bca748);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bca9c8 + 0x2bca75c));
    func_0x01384978(*(undefined4 *)(_UNK_02bca9cc + 0x2bca768));
    func_0x01384978(*(undefined4 *)(_UNK_02bca9d0 + 0x2bca774));
    func_0x01384978(*(undefined4 *)(_UNK_02bca9d4 + 0x2bca780));
    func_0x01384978(*(undefined4 *)(_UNK_02bca9d8 + 0x2bca78c));
    func_0x01384978(*(undefined4 *)(_UNK_02bca9dc + 0x2bca798));
    func_0x01384978(*(undefined4 *)(_UNK_02bca9e0 + 0x2bca7a4));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x78ca,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x78ca,0);
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
    uVar5 = func_0x0245496c(&uStack_30,0,0);
    return uVar5;
  }
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if ((iVar1 != 0) && (iVar1 = FUN_02bbfc04(param_1), iVar1 != 0)) {
    uVar5 = *(undefined4 *)(iVar1 + 0x40);
    if (*(int *)(**(int **)(_UNK_02bca9e4 + 0x2bca830) + 0x74) == 0) {
      func_0x01384ab4(**(int **)(_UNK_02bca9e4 + 0x2bca830));
    }
    iVar1 = func_0x02565a88(uVar5,0);
    uVar5 = 1;
    if (iVar1 != 0) {
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      piVar10 = *(int **)(_UNK_02bca9e8 + 0x2bca888);
      uVar2 = *(undefined4 *)(iVar1 + 8);
      uVar8 = *(undefined4 *)(iVar1 + 0xc);
      iVar1 = *piVar10;
      iVar3 = *(int *)(iVar3 + 0x40);
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar10;
      }
      uVar7 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x38);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uStack_30 = **(undefined4 **)(_UNK_02bca9ec + 0x2bca8d0);
      uStack_2c = **(undefined4 **)(_UNK_02bca9f0 + 0x2bca8dc);
      uStack_34 = 0x640;
      uStack_28 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uVar2 = func_0x01cdcbac(iVar3,uVar2,uVar8,uVar7);
      iVar1 = param_1[0x41];
      if (iVar1 == 0) {
        iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02bca9f4 + 0x2bca924));
        func_0x0328e950(iVar1,**(undefined4 **)(_UNK_02bca9f8 + 0x2bca938));
        param_1[0x41] = iVar1;
        if (iVar1 == 0) {
          func_0x01384bf0();
          iVar1 = 0;
        }
      }
      iVar3 = *(int *)(iVar1 + 8);
      uVar6 = *(uint *)(iVar1 + 0xc);
      piVar10 = *(int **)(_UNK_02bca9fc + 0x2bca974);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      iVar9 = *piVar10;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (uVar6 < *(uint *)(iVar3 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar6 + 1;
        *(undefined4 *)(iVar3 + uVar6 * 4 + 0x10) = uVar2;
      }
      else {
        func_0x0328f170(iVar1,uVar2,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38))
        ;
      }
    }
  }
  return uVar5;
}



// ===== FAT.AreaBoardActivity$$OnClaimHandbookReward RVA 0x2bbaa00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bcaa00(int param_1,int *param_2,undefined4 param_3,uint param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  byte bStack_25;
  
  pcVar5 = (char *)(_UNK_02bcad98 + 0x2bcaa20);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bcad9c + 0x2bcaa38));
    func_0x01384978(*(undefined4 *)(_UNK_02bcada0 + 0x2bcaa44));
    func_0x01384978(*(undefined4 *)(_UNK_02bcada4 + 0x2bcaa50));
    func_0x01384978(*(undefined4 *)(_UNK_02bcada8 + 0x2bcaa5c));
    func_0x01384978(*(undefined4 *)(_UNK_02bcadac + 0x2bcaa68));
    func_0x01384978(*(undefined4 *)(_UNK_02bcadb0 + 0x2bcaa74));
    func_0x01384978(*(undefined4 *)(_UNK_02bcadb4 + 0x2bcaa80));
    func_0x01384978(*(undefined4 *)(_UNK_02bcadb8 + 0x2bcaa8c));
    func_0x01384978(*(undefined4 *)(_UNK_02bcadbc + 0x2bcaa98));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7873,0);
  if (iVar1 == 0) {
    if (param_2 != (int *)0x0) {
      uVar4 = (uint)*(byte *)(**(int **)(_UNK_02bcadc0 + 0x2bcab0c) + 0xb8);
      if ((uVar4 <= *(byte *)(*param_2 + 0xb8)) &&
         (*(int *)(*(int *)(*param_2 + 100) + uVar4 * 4 + -4) ==
          **(int **)(_UNK_02bcadc0 + 0x2bcab0c))) {
        uVar4 = param_4 & 1;
        if (uVar4 != 0) {
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x50);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01dd0230(iVar1,param_3,0);
          if (iVar1 == 0) {
            return;
          }
          iVar8 = *(int *)(param_1 + 0x60);
          uVar6 = *(undefined4 *)(iVar1 + 0x10);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          func_0x03d4edf0(iVar8,uVar6,1,**(undefined4 **)(_UNK_02bcadc4 + 0x2bcabb0));
        }
        if ((param_4 & 0x100) != 0) {
          *(undefined1 *)(param_1 + 0x5c) = 1;
        }
        if (*(int *)(**(int **)(_UNK_02bcadc8 + 0x2bcabd0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02bcadcc + 0x2bcabec));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x034a5074(iVar1,param_3,uVar4,(param_4 & 0x100) != 0,
                        **(undefined4 **)(_UNK_02bcadd0 + 0x2bcac20));
        if (uVar4 != 0) {
          iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_02bcadd4 + 0x2bcac44));
          piVar7 = *(int **)(_UNK_02bcadd8 + 0x2bcac58);
          iVar8 = *piVar7;
          if (*(int *)(iVar8 + 0x74) == 0) {
            func_0x01384ab4();
            iVar8 = *piVar7;
          }
          uVar6 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x9a0);
          piVar7 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02bcaddc + 0x2bcac7c),3);
          if (piVar7 == (int *)0x0) {
            func_0x01384bf0();
          }
          if ((param_1 != 0) &&
             (iVar8 = func_0x01384ab8(param_1,*(undefined4 *)(*piVar7 + 0x20)), iVar8 == 0)) {
            uVar2 = func_0x01384c10();
            func_0x01384aa0(uVar2,0);
          }
          if (piVar7[3] == 0) {
            func_0x01384bf4();
          }
          piVar7[4] = param_1;
          if ((param_5 != 0) &&
             (iVar8 = func_0x01384ab8(param_5,*(undefined4 *)(*piVar7 + 0x20)), iVar8 == 0)) {
            uVar2 = func_0x01384c10();
            func_0x01384aa0(uVar2,0);
          }
          if ((uint)piVar7[3] < 2) {
            func_0x01384bf4();
          }
          piVar7[5] = param_5;
          bStack_25 = (byte)((param_4 << 0x17) >> 0x1f);
          iVar8 = func_0x01384abc(**(undefined4 **)(_UNK_02bcade0 + 0x2bcad28),&bStack_25);
          if ((iVar8 != 0) &&
             (iVar3 = func_0x01384ab8(iVar8,*(undefined4 *)(*piVar7 + 0x20)), iVar3 == 0)) {
            uVar2 = func_0x01384c10();
            func_0x01384aa0(uVar2,0);
          }
          if ((uint)piVar7[3] < 3) {
            func_0x01384bf4();
          }
          piVar7[6] = iVar8;
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x01ee858c(iVar1,uVar6,piVar7,0);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7873,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0223513c(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.AreaBoardActivity$$IsItemUnlock RVA 0x2bbade4 =====

/* WARNING: Possible PIC construction at 0x01cc4568: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cc456c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bcade4(int param_1,undefined4 param_2)

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
  
  iVar2 = func_0x0229f06c(0x78c4,0);
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
    iVar2 = func_0x0229f13c(0x78c4,0);
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



// ===== FAT.AreaBoardActivity$$IsItemLock RVA 0x2bbae74 =====

/* WARNING: Possible PIC construction at 0x01cc43a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cc43a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bcae74(int param_1,undefined4 param_2)

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
  int iStack_14;
  
  iVar2 = func_0x0229f06c(0x78cb,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar2 + 0x3c);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_01cc43f8 + 0x1cc4340);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01cc43fc + 0x1cc4354),param_2,0);
      *pcVar5 = '\x01';
    }
    iStack_14 = 0;
    iVar2 = func_0x0229f06c(0xf47,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02451924(iVar2,param_2,&iStack_14,**(undefined4 **)(_UNK_01cc4400 + 0x1cc43d0))
      ;
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = (uint)(iStack_14 == 0);
      }
      return uVar1;
    }
    iVar2 = func_0x0229f13c(0xf47,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1cc43a8;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar2;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar2 = func_0x0229f13c(0x78cb,0);
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



// ===== FAT.AreaBoardActivity$$IsItemPreview RVA 0x2bbaf04 =====

/* WARNING: Possible PIC construction at 0x01cc4484: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cc4488) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bcaf04(int param_1,undefined4 param_2)

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
  int iStack_14;
  
  iVar2 = func_0x0229f06c(0x78cc,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar2 + 0x3c);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_01cc44dc + 0x1cc4420);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01cc44e0 + 0x1cc4434),param_2,0);
      *pcVar5 = '\x01';
    }
    iStack_14 = 0;
    iVar2 = func_0x0229f06c(0x5b5b,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02451924(iVar2,param_2,&iStack_14,**(undefined4 **)(_UNK_01cc44e4 + 0x1cc44b0))
      ;
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = (uint)(iStack_14 == 1);
      }
      return uVar1;
    }
    iVar2 = func_0x0229f13c(0x5b5b,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1cc4488;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar2;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar2 = func_0x0229f13c(0x78cc,0);
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



// ===== FAT.AreaBoardActivity$$add_Invalidate RVA 0x2bbaf94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bcaf94(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  
  pcVar4 = (char *)(_UNK_02bcb028 + 0x2bcafac);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bcb02c + 0x2bcafc0));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_02bcb030 + 0x2bcafd8);
  iVar1 = *(int *)(param_1 + 0x108);
  do {
    piVar2 = (int *)func_0x0487907c(iVar1,param_2,0);
    if (piVar2 == (int *)0x0) {
LAB_02bcb008:
      piVar2 = (int *)0x0;
    }
    else if (*piVar2 != *piVar5) {
      func_0x01384fb4(piVar2);
      goto LAB_02bcb008;
    }
    iVar3 = func_0x0138b0ec((int *)(param_1 + 0x108),piVar2,iVar1);
    bVar6 = iVar1 == iVar3;
    iVar1 = iVar3;
    if (bVar6) {
      return;
    }
  } while( true );
}



// ===== FAT.AreaBoardActivity$$remove_Invalidate RVA 0x2bbb034 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bcb034(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  
  pcVar4 = (char *)(_UNK_02bcb0c8 + 0x2bcb04c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bcb0cc + 0x2bcb060));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_02bcb0d0 + 0x2bcb078);
  iVar1 = *(int *)(param_1 + 0x108);
  do {
    piVar2 = (int *)func_0x0487929c(iVar1,param_2,0);
    if (piVar2 == (int *)0x0) {
LAB_02bcb0a8:
      piVar2 = (int *)0x0;
    }
    else if (*piVar2 != *piVar5) {
      func_0x01384fb4(piVar2);
      goto LAB_02bcb0a8;
    }
    iVar3 = func_0x0138b0ec((int *)(param_1 + 0x108),piVar2,iVar1);
    bVar6 = iVar1 == iVar3;
    iVar1 = iVar3;
    if (bVar6) {
      return;
    }
  } while( true );
}



// ===== FAT.AreaBoardActivity$$CheckIndicator RVA 0x2bbb0d4 =====

/* WARNING: Removing unreachable block (ram,0x02bcb488) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bcb0d4(int param_1,int param_2,undefined4 *param_3)

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
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int iStack_34;
  int iStack_30;
  int aiStack_28 [2];
  
  pcVar8 = (char *)(_UNK_02bcb568 + 0x2bcb0f4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bcb56c + 0x2bcb108));
    func_0x01384978(*(undefined4 *)(_UNK_02bcb570 + 0x2bcb114));
    func_0x01384978(*(undefined4 *)(_UNK_02bcb574 + 0x2bcb120));
    func_0x01384978(*(undefined4 *)(_UNK_02bcb578 + 0x2bcb12c));
    func_0x01384978(*(undefined4 *)(_UNK_02bcb57c + 0x2bcb138));
    func_0x01384978(*(undefined4 *)(_UNK_02bcb580 + 0x2bcb144));
    func_0x01384978(*(undefined4 *)(_UNK_02bcb584 + 0x2bcb150));
    *pcVar8 = '\x01';
  }
  aiStack_28[1] = 0;
  aiStack_28[0] = 0;
  iVar1 = func_0x0229f06c(0x78cd,0);
  if (iVar1 == 0) {
    *param_3 = 0;
    iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_02bcb588 + 0x2bcb1c8));
    iVar9 = *(int *)(param_1 + 0x90);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar10 = *(undefined4 *)(iVar9 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar1 = func_0x01eea2b8(iVar1,uVar10,0);
    if ((iVar1 != 0) && (iVar1 = FUN_02bbfc04(param_1), iVar1 != 0)) {
      iVar9 = *(int *)(param_1 + 100);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar2 = 0;
      iVar9 = func_0x02139cf4(iVar9,0);
      if (iVar9 != 0) {
        uVar2 = 0;
        iVar9 = func_0x020dd254(iVar9,0);
        if (iVar9 == 0) {
          uVar10 = *(undefined4 *)(param_1 + 0x4c);
          iVar9 = *(int *)(param_1 + 0x88);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x03d37358(iVar9,uVar10,aiStack_28,
                                  **(undefined4 **)(_UNK_02bcb58c + 0x2bcb284));
          iVar9 = 0;
          if (iVar3 != 0) {
            iVar9 = aiStack_28[0];
          }
          if (iVar3 == 0 || iVar9 == param_2) {
            iVar1 = *(int *)(iVar1 + 0x48);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            piVar4 = (int *)func_0x03653608(iVar1,**(undefined4 **)(_UNK_02bcb590 + 0x2bcb2b8));
            piVar11 = *(int **)(_UNK_02bcb594 + 0x2bcb2d4);
            piVar12 = *(int **)(_UNK_02bcb598 + 0x2bcb2dc);
            piVar13 = *(int **)(_UNK_02bcb59c + 0x2bcb2e4);
            do {
              if (piVar4 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar4;
              uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar7[-1] == *piVar11) {
                    puVar5 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                    goto LAB_02bcb33c;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined4 *)func_0x014002dc(piVar4,*piVar11,0);
LAB_02bcb33c:
              iVar1 = (*(code *)*puVar5)(piVar4,puVar5[1]);
              if (iVar1 == 0) {
                uVar2 = 0;
                goto LAB_02bcb410;
              }
              if (piVar4 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar4;
              uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar7[-1] == *piVar12) {
                    puVar5 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                    goto LAB_02bcb3b0;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined4 *)func_0x014002dc(piVar4,*piVar12,0);
LAB_02bcb3b0:
              uVar10 = (*(code *)*puVar5)(piVar4,puVar5[1]);
              if (*(int *)(*piVar13 + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x02566088(&iStack_34,uVar10,0);
              iVar1 = iStack_34;
              if (iStack_34 == param_2) {
                iVar1 = iStack_30;
              }
            } while (iStack_34 != param_2 || iVar1 != 1);
            uVar2 = 5;
LAB_02bcb410:
            if (piVar4 != (int *)0x0) {
              iVar1 = *piVar4;
              uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar6 != 0) {
                piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar11[-1] == **(int **)(_UNK_02bcb5a0 + 0x2bcb428)) {
                    puVar5 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
                    goto LAB_02bcb470;
                  }
                  uVar6 = uVar6 - 1;
                  piVar11 = piVar11 + 2;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_02bcb5a0 + 0x2bcb428),0)
              ;
LAB_02bcb470:
              (*(code *)*puVar5)(piVar4,puVar5[1]);
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x78cd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021ca740(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.AreaBoardActivity$$JumpTask RVA 0x2bbb5a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bcb5a8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_02bcb888 + 0x2bcb5c8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bcb88c + 0x2bcb5dc));
    func_0x01384978(*(undefined4 *)(_UNK_02bcb890 + 0x2bcb5e8));
    func_0x01384978(*(undefined4 *)(_UNK_02bcb894 + 0x2bcb5f4));
    func_0x01384978(*(undefined4 *)(_UNK_02bcb898 + 0x2bcb600));
    func_0x01384978(*(undefined4 *)(_UNK_02bcb89c + 0x2bcb60c));
    func_0x01384978(*(undefined4 *)(_UNK_02bcb8a0 + 0x2bcb618));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x78cf,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02bcb8a4 + 0x2bcb67c));
    func_0x04874ed4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar8 = *(undefined4 **)(_UNK_02bcb8a8 + 0x2bcb6a4);
    *(int *)(iVar1 + 8) = param_1;
    *(undefined4 *)(iVar1 + 0xc) = param_3;
    iVar2 = func_0x034aaa34(*puVar8);
    iVar6 = *(int *)(param_1 + 0x90);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar7 = *(undefined4 *)(iVar6 + 0xc);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01eea2b8(iVar2,uVar7,0);
    if (iVar2 == 0) {
      uVar9 = *(undefined4 *)(param_1 + 0x90);
      uVar4 = *(undefined4 *)(param_1 + 0xbc);
      uVar10 = *(undefined4 *)(param_1 + 0xc0);
      uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_02bcb8b4 + 0x2bcb838));
      func_0x0478dedc(uVar7,iVar1,**(undefined4 **)(_UNK_02bcb8b8 + 0x2bcb860),0);
      func_0x02b57d14(param_1,uVar4,uVar10,uVar9,uVar7,0);
    }
    else {
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x9c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01c74c1c(iVar2,0);
      if (iVar2 == 0) {
        iVar2 = func_0x034aaa34(*puVar8);
        iVar6 = *(int *)(param_1 + 0xe4);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar7 = *(undefined4 *)(iVar6 + 0xc);
        piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02bcb8ac + 0x2bcb758),2);
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar6 = func_0x01384ab8(param_1,*(undefined4 *)(*piVar3 + 0x20));
        if (iVar6 == 0) {
          uVar4 = func_0x01384c10();
          func_0x01384aa0(uVar4,0);
        }
        if (piVar3[3] == 0) {
          func_0x01384bf4();
        }
        piVar3[4] = param_1;
        uStack_24 = *(undefined4 *)(iVar1 + 0xc);
        iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02bcb8b0 + 0x2bcb7b8),&uStack_24);
        if ((iVar1 != 0) &&
           (iVar6 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar6 == 0)) {
          uVar4 = func_0x01384c10();
          func_0x01384aa0(uVar4,0);
        }
        if ((uint)piVar3[3] < 2) {
          func_0x01384bf4();
        }
        piVar3[5] = iVar1;
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01ee858c(iVar2,uVar7,piVar3,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x78cf,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.AreaBoardActivity.<>c__DisplayClass211_0$$.ctor RVA 0x2bbb8bc =====

void FUN_02bcb8bc(void)

{
  return;
}



// ===== FAT.AreaBoardActivity$$<>iFixBaseProxy_get_Valid RVA 0x2bbb8c4 =====

void FUN_02bcb8c4(int param_1)

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



// ===== FAT.AreaBoardActivity$$<>iFixBaseProxy_get_Visual RVA 0x2bbb8cc =====

undefined4 FUN_02bcb8cc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.AreaBoardActivity$$<>iFixBaseProxy_get_GuideRes RVA 0x2bbb8d4 =====

void FUN_02bcb8d4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  *param_1 = *(undefined4 *)(param_2 + 0x1c);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.AreaBoardActivity$$<>iFixBaseProxy_SetupFresh RVA 0x2bbb8e8 =====

void FUN_02bcb8e8(undefined4 param_1)

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



// ===== FAT.AreaBoardActivity$$<>iFixBaseProxy_ResEnumerate RVA 0x2bbb8f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bcb8f0(int *param_1)

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



// ===== FAT.AreaBoardActivity$$<>iFixBaseProxy_WhenReset RVA 0x2bbb8f8 =====

void FUN_02bcb8f8(undefined4 param_1)

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



// ===== FAT.AreaBoardActivity$$<>iFixBaseProxy_WhenEnd RVA 0x2bbb900 =====

void FUN_02bcb900(undefined4 param_1)

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



// ===== FAT.AreaBoardActivity.<>c$$.cctor RVA 0x2bbb908 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bcb908(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_02bcb960 + 0x2bcb918);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bcb964 + 0x2bcb92c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_02bcb968 + 0x2bcb940);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x04874ed4(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.AreaBoardActivity.<>c$$.ctor RVA 0x2bbb96c =====

void FUN_02bcb96c(void)

{
  return;
}



// ===== FAT.AreaBoardActivity.<>c$$<_TryUseToken>b__185_0 RVA 0x2bbb974 =====

undefined4 FUN_02bcb974(void)

{
  undefined4 in_r3;
  
  return in_r3;
}



// ===== FAT.AreaBoardActivity.<>c__DisplayClass211_0$$<JumpTask>b__0 RVA 0x2bbb97c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bcb97c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_02bcbb58 + 0x2bcb994);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bcbb5c + 0x2bcb9a8));
    func_0x01384978(*(undefined4 *)(_UNK_02bcbb60 + 0x2bcb9b4));
    func_0x01384978(*(undefined4 *)(_UNK_02bcbb64 + 0x2bcb9c0));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(param_1 + 8);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = (**(code **)(*piVar5 + 0x108))(piVar5,*(undefined4 *)(*piVar5 + 0x10c));
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
    if (iVar1 == 0) {
      iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_02bcbb68 + 0x2bcba3c));
      iVar6 = *(int *)(param_1 + 8);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar6 + 0xe4);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar7 = *(undefined4 *)(iVar6 + 0xc);
      piVar5 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02bcbb6c + 0x2bcba74),2);
      iVar6 = *(int *)(param_1 + 8);
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar6 != 0) &&
         (iVar2 = func_0x01384ab8(iVar6,*(undefined4 *)(*piVar5 + 0x20)), iVar2 == 0)) {
        uVar3 = func_0x01384c10();
        func_0x01384aa0(uVar3,0);
      }
      if (piVar5[3] == 0) {
        func_0x01384bf4();
      }
      piVar5[4] = iVar6;
      uStack_1c = *(undefined4 *)(param_1 + 0xc);
      iVar6 = func_0x01384abc(**(undefined4 **)(_UNK_02bcbb70 + 0x2bcbae0),&uStack_1c);
      if ((iVar6 != 0) &&
         (iVar2 = func_0x01384ab8(iVar6,*(undefined4 *)(*piVar5 + 0x20)), iVar2 == 0)) {
        uVar3 = func_0x01384c10();
        func_0x01384aa0(uVar3,0);
      }
      if ((uint)piVar5[3] < 2) {
        func_0x01384bf4();
      }
      piVar5[5] = iVar6;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee858c(iVar1,uVar7,piVar5,0);
    }
  }
  return;
}



// ===== FAT.AreaBoardActivity.<ResEnumerate>d__116$$System.IDisposable.Dispose RVA 0x2bbbb74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bcbb74(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0xfffffffc:
  case 2:
    break;
  case 0xfffffffd:
  case 1:
    pcVar5 = &UNK_02bcc110 + _UNK_02bcc1b0;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_02bcc124 + _UNK_02bcc1b4));
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
        if (piVar4[-1] == **(int **)(&UNK_02bcc150 + _UNK_02bcc1b8)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x02bcc19c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_02bcc150 + _UNK_02bcc1b8),0);
code_r0x02bcc19c:
                    /* WARNING: Could not recover jumptable at 0x02bcc1ac. Too many branches */
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
  pcVar5 = &UNK_02bcc1d0 + _UNK_02bcc270;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(&UNK_02bcc1e4 + _UNK_02bcc274));
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
      if (piVar4[-1] == **(int **)(&UNK_02bcc210 + _UNK_02bcc278)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto code_r0x02bcc25c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_02bcc210 + _UNK_02bcc278),0);
code_r0x02bcc25c:
                    /* WARNING: Could not recover jumptable at 0x02bcc26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.AreaBoardActivity.<ResEnumerate>d__116$$MoveNext RVA 0x2bbbbb8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bcbbb8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_02bcc0d4 + 0x2bcbbd0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bcc0d8 + 0x2bcbbe4));
    func_0x01384978(*(undefined4 *)(_UNK_02bcc0dc + 0x2bcbbf0));
    func_0x01384978(*(undefined4 *)(_UNK_02bcc0e0 + 0x2bcbbfc));
    *pcVar6 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 8);
  piVar7 = *(int **)(param_1 + 0x18);
  uStack_30 = 0;
  iStack_28 = 0;
  if (iVar1 == 2) {
    piVar7 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffc;
  }
  else {
    if (iVar1 == 1) {
      piVar2 = *(int **)(param_1 + 0x1c);
      *(undefined4 *)(param_1 + 8) = 0xfffffffd;
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = (**(code **)(*piVar7 + 0x108))(piVar7,*(undefined4 *)(*piVar7 + 0x10c));
      if (iVar1 == 0) {
        return 0;
      }
      iStack_28 = piVar7[0x28];
      uStack_30 = *(undefined8 *)(piVar7 + 0x26);
      piVar2 = (int *)FUN_02b64af8(&uStack_30,0);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_02bcc0e4 + 0x2bcbca0)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_02bcbd08;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02bcc0e4 + 0x2bcbca0),0);
LAB_02bcbd08:
      piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
      *(undefined4 *)(param_1 + 8) = 0xfffffffd;
      *(int **)(param_1 + 0x1c) = piVar2;
    }
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_02bcc0ec + 0x2bcbd44)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_02bcbd8c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02bcc0ec + 0x2bcbd44),0);
LAB_02bcbd8c:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 != 0) {
      piVar7 = *(int **)(param_1 + 0x1c);
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar7;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar2[-1] == **(int **)(_UNK_02bcc0e8 + 0x2bcbdc4)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
            goto LAB_02bcbeb4;
          }
          uVar4 = uVar4 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_02bcc0e8 + 0x2bcbdc4),0);
LAB_02bcbeb4:
      (*(code *)*puVar3)(&uStack_38,piVar7,puVar3[1]);
      *(undefined4 *)(param_1 + 8) = 1;
      goto LAB_02bcc020;
    }
    func_0x02bcc0fc(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = (**(code **)(*piVar7 + 0x118))(piVar7,*(undefined4 *)(*piVar7 + 0x11c));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar7 = (int *)FUN_02b61d48(iVar1,0);
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar7;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_02bcc0f0 + 0x2bcbe6c)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_02bcbee4;
        }
        uVar4 = uVar4 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_02bcc0f0 + 0x2bcbe6c),0);
LAB_02bcbee4:
    piVar7 = (int *)(*(code *)*puVar3)(piVar7,puVar3[1]);
    *(undefined4 *)(param_1 + 8) = 0xfffffffc;
    *(int **)(param_1 + 0x1c) = piVar7;
  }
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar7;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_02bcc0f8 + 0x2bcbf20)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
        goto LAB_02bcbf68;
      }
      uVar4 = uVar4 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_02bcc0f8 + 0x2bcbf20),0);
LAB_02bcbf68:
  iVar1 = (*(code *)*puVar3)(piVar7,puVar3[1]);
  if (iVar1 == 0) {
    func_0x02bcc1bc(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return 0;
  }
  piVar7 = *(int **)(param_1 + 0x1c);
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar7;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_02bcc0f4 + 0x2bcbfa0)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
        goto LAB_02bcbffc;
      }
      uVar4 = uVar4 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_02bcc0f4 + 0x2bcbfa0),0);
LAB_02bcbffc:
  (*(code *)*puVar3)(&uStack_38,piVar7,puVar3[1]);
  *(undefined4 *)(param_1 + 8) = 2;
LAB_02bcc020:
  *(undefined4 *)(param_1 + 0xc) = uStack_38;
  *(undefined4 *)(param_1 + 0x10) = uStack_34;
  return 1;
}



// ===== FAT.AreaBoardActivity.<ResEnumerate>d__116$$<>m__Finally1 RVA 0x2bbc0fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bcc0fc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_02bcc1b0 + 0x2bcc110);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bcc1b4 + 0x2bcc124));
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
      if (piVar4[-1] == **(int **)(_UNK_02bcc1b8 + 0x2bcc150)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_02bcc19c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02bcc1b8 + 0x2bcc150),0);
LAB_02bcc19c:
                    /* WARNING: Could not recover jumptable at 0x02bcc1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.AreaBoardActivity.<ResEnumerate>d__116$$<>m__Finally2 RVA 0x2bbc1bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bcc1bc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_02bcc270 + 0x2bcc1d0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bcc274 + 0x2bcc1e4));
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
      if (piVar4[-1] == **(int **)(_UNK_02bcc278 + 0x2bcc210)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_02bcc25c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02bcc278 + 0x2bcc210),0);
LAB_02bcc25c:
                    /* WARNING: Could not recover jumptable at 0x02bcc26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.AreaBoardActivity.<ResEnumerate>d__116$$System.Collections.Generic.IEnumerator<(System.String,EL.Resource.AssetTag)>.get_Current RVA 0x2bbc27c =====

void FUN_02bcc27c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *param_1 = *(undefined4 *)(param_2 + 0xc);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.AreaBoardActivity.<ResEnumerate>d__116$$System.Collections.IEnumerator.Reset RVA 0x2bbc290 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bcc290(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  func_0x01384988(*(undefined4 *)(iRam02bcc2cc + 0x2bcc2a0));
  uVar1 = func_0x01384be4();
  func_0x04827f0c(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(iRam02bcc2d0 + 0x2bcc2bc));
  func_0x01384aa0(uVar1,uVar2);
  iVar3 = func_0x01384928();
  pcVar4 = (char *)(_UNK_02bcc330 + 0x2bcc2ec);
  uStack_18 = uVar1;
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bcc334 + 0x2bcc300));
    *pcVar4 = '\x01';
  }
  uStack_20 = *(undefined4 *)(iVar3 + 0xc);
  uStack_1c = *(undefined4 *)(iVar3 + 0x10);
  func_0x01384abc(**(undefined4 **)(_UNK_02bcc338 + 0x2bcc31c),&uStack_20);
  return;
}



// ===== FAT.AreaBoardActivity.<ResEnumerate>d__116$$System.Collections.IEnumerator.get_Current RVA 0x2bbc2d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bcc2d4(int param_1)

{
  char *pcVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_02bcc330 + 0x2bcc2ec);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bcc334 + 0x2bcc300));
    *pcVar1 = '\x01';
  }
  uStack_18 = *(undefined4 *)(param_1 + 0xc);
  uStack_14 = *(undefined4 *)(param_1 + 0x10);
  func_0x01384abc(**(undefined4 **)(_UNK_02bcc338 + 0x2bcc31c),&uStack_18);
  return;
}



// ===== FAT.AreaBoardActivity.<ResEnumerate>d__116$$System.Collections.Generic.IEnumerable<(System.String,EL.Resource.AssetTag)>.GetEnumerator RVA 0x2bbc33c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bcc33c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_02bcc3dc + 0x2bcc350);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bcc3e0 + 0x2bcc364));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x048799ac(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02bcc3e4 + 0x2bcc3a8));
    func_0x04874ed4(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x048799ac(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}



// ===== FAT.AreaBoardActivity.<ResEnumerate>d__116$$System.Collections.IEnumerable.GetEnumerator RVA 0x2bbc3e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_02bcc33c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_02bcc3dc + 0x2bcc350);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bcc3e0 + 0x2bcc364));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x048799ac(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02bcc3e4 + 0x2bcc3a8));
    func_0x04874ed4(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x048799ac(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}


