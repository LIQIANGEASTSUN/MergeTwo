/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBResHolderTrig$$OnInit RVA 0x1dfe4c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0e4c0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
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
  
  iVar1 = func_0x0229f06c(0xa064,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa064,0);
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
  *(undefined4 *)(param_1 + 0x28) = param_2;
  iVar1 = func_0x0229f06c(0xa065,0);
  if (iVar1 == 0) {
    pcVar3 = (char *)(_UNK_01e0eafc + 0x1e0e764);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e0eb00 + 0x1e0e778));
      func_0x01384978(*(undefined4 *)(_UNK_01e0eb04 + 0x1e0e784));
      func_0x01384978(*(undefined4 *)(_UNK_01e0eb08 + 0x1e0e790));
      func_0x01384978(*(undefined4 *)(_UNK_01e0eb0c + 0x1e0e79c));
      func_0x01384978(*(undefined4 *)(_UNK_01e0eb10 + 0x1e0e7a8));
      func_0x01384978(*(undefined4 *)(_UNK_01e0eb14 + 0x1e0e7b4));
      *pcVar3 = '\x01';
    }
    uStack_28 = 0;
    iVar1 = func_0x0229f06c(0x9ff5,0);
    if (iVar1 == 0) {
      if (((*(int *)(param_1 + 0x28) != 0) &&
          (iVar1 = func_0x02feb4f8(*(int *)(param_1 + 0x28),0,
                                   **(undefined4 **)(_UNK_01e0eb18 + 0x1e0e824)), iVar1 != 0)) &&
         (iVar6 = func_0x02138e68(iVar1,0), iVar6 != 0)) {
        iVar6 = func_0x021392bc(iVar1,0);
        if (iVar6 == 0) {
          iVar6 = func_0x02138f10(iVar1,0);
          iVar6 = iVar6 + -1;
        }
        else {
          iVar6 = func_0x02138ebc(iVar1,0);
        }
        iVar4 = 0;
        puVar9 = *(undefined4 **)(_UNK_01e0eb1c + 0x1e0e890);
        while( true ) {
          iVar7 = *(int *)(param_1 + 0x1c);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar7 + 0xc) <= iVar4) break;
          iVar7 = *(int *)(param_1 + 0x1c);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          iVar7 = func_0x0328eea8(iVar7,iVar4,*puVar9);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          iVar7 = func_0x0244ffd4(iVar7,0);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar7,iVar6 == iVar4,0);
          iVar7 = func_0x02138e68(iVar1,0);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          iVar7 = func_0x03005894(*(undefined4 *)(iVar7 + 0x1c),iVar4,&uStack_28,
                                  **(undefined4 **)(_UNK_01e0eb20 + 0x1e0e944));
          if (iVar7 != 0) {
            iVar7 = *(int *)(param_1 + 0x1c);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            iVar7 = func_0x0328eea8(iVar7,iVar4,*puVar9);
            uVar8 = uStack_28;
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            func_0x0267cc24(iVar7,uVar8,0);
          }
          iVar4 = iVar4 + 1;
        }
        iVar6 = 0;
        puVar9 = *(undefined4 **)(_UNK_01e0eb24 + 0x1e0e9b0);
        while( true ) {
          iVar4 = *(int *)(param_1 + 0x20);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar4 + 0xc) <= iVar6) break;
          iVar4 = *(int *)(param_1 + 0x20);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar4 = func_0x0328eea8(iVar4,iVar6,*puVar9);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar4 = func_0x02450790(iVar4,0);
          iVar7 = func_0x02138f10(iVar1,0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar4,iVar6 < iVar7,0);
          iVar6 = iVar6 + 1;
        }
        uVar5 = 0;
        iVar6 = func_0x02138f10(iVar1,0);
        iVar1 = func_0x02138ebc(iVar1,0);
        while( true ) {
          iVar4 = *(int *)(param_1 + 0x24);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar4 + 0xc) <= (int)uVar5) break;
          iVar4 = *(int *)(param_1 + 0x24);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar4 = func_0x0328eea8(iVar4,uVar5,*puVar9);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar4 = func_0x02450790(iVar4,0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar4,uVar5 < (uint)(iVar6 - iVar1 & ~(iVar6 - iVar1 >> 0x1f)),0);
          uVar5 = uVar5 + 1;
        }
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x9ff5,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x021744a8(iVar1,param_1,1,0);
    }
    return;
  }
  iVar1 = func_0x0229f13c(0xa065,0);
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
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar6,uVar8,&uStack_30,uVar2);
  return;
}



// ===== FAT.MBResHolderTrig$$_InitShowInfo RVA 0x1dfe524 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0e524(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
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
  
  iVar1 = func_0x0229f06c(0xa065,0);
  if (iVar1 == 0) {
    pcVar3 = (char *)(_UNK_01e0eafc + 0x1e0e764);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e0eb00 + 0x1e0e778));
      func_0x01384978(*(undefined4 *)(_UNK_01e0eb04 + 0x1e0e784));
      func_0x01384978(*(undefined4 *)(_UNK_01e0eb08 + 0x1e0e790));
      func_0x01384978(*(undefined4 *)(_UNK_01e0eb0c + 0x1e0e79c));
      func_0x01384978(*(undefined4 *)(_UNK_01e0eb10 + 0x1e0e7a8));
      func_0x01384978(*(undefined4 *)(_UNK_01e0eb14 + 0x1e0e7b4));
      *pcVar3 = '\x01';
    }
    uStack_28 = 0;
    iVar1 = func_0x0229f06c(0x9ff5,0);
    if (iVar1 == 0) {
      if (((*(int *)(param_1 + 0x28) != 0) &&
          (iVar1 = func_0x02feb4f8(*(int *)(param_1 + 0x28),0,
                                   **(undefined4 **)(_UNK_01e0eb18 + 0x1e0e824)), iVar1 != 0)) &&
         (iVar6 = func_0x02138e68(iVar1,0), iVar6 != 0)) {
        iVar6 = func_0x021392bc(iVar1,0);
        if (iVar6 == 0) {
          iVar6 = func_0x02138f10(iVar1,0);
          iVar6 = iVar6 + -1;
        }
        else {
          iVar6 = func_0x02138ebc(iVar1,0);
        }
        iVar4 = 0;
        puVar9 = *(undefined4 **)(_UNK_01e0eb1c + 0x1e0e890);
        while( true ) {
          iVar7 = *(int *)(param_1 + 0x1c);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar7 + 0xc) <= iVar4) break;
          iVar7 = *(int *)(param_1 + 0x1c);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          iVar7 = func_0x0328eea8(iVar7,iVar4,*puVar9);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          iVar7 = func_0x0244ffd4(iVar7,0);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar7,iVar6 == iVar4,0);
          iVar7 = func_0x02138e68(iVar1,0);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          iVar7 = func_0x03005894(*(undefined4 *)(iVar7 + 0x1c),iVar4,&uStack_28,
                                  **(undefined4 **)(_UNK_01e0eb20 + 0x1e0e944));
          if (iVar7 != 0) {
            iVar7 = *(int *)(param_1 + 0x1c);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            iVar7 = func_0x0328eea8(iVar7,iVar4,*puVar9);
            uVar8 = uStack_28;
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            func_0x0267cc24(iVar7,uVar8,0);
          }
          iVar4 = iVar4 + 1;
        }
        iVar6 = 0;
        puVar9 = *(undefined4 **)(_UNK_01e0eb24 + 0x1e0e9b0);
        while( true ) {
          iVar4 = *(int *)(param_1 + 0x20);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar4 + 0xc) <= iVar6) break;
          iVar4 = *(int *)(param_1 + 0x20);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar4 = func_0x0328eea8(iVar4,iVar6,*puVar9);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar4 = func_0x02450790(iVar4,0);
          iVar7 = func_0x02138f10(iVar1,0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar4,iVar6 < iVar7,0);
          iVar6 = iVar6 + 1;
        }
        uVar5 = 0;
        iVar6 = func_0x02138f10(iVar1,0);
        iVar1 = func_0x02138ebc(iVar1,0);
        while( true ) {
          iVar4 = *(int *)(param_1 + 0x24);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar4 + 0xc) <= (int)uVar5) break;
          iVar4 = *(int *)(param_1 + 0x24);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar4 = func_0x0328eea8(iVar4,uVar5,*puVar9);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar4 = func_0x02450790(iVar4,0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar4,uVar5 < (uint)(iVar6 - iVar1 & ~(iVar6 - iVar1 >> 0x1f)),0);
          uVar5 = uVar5 + 1;
        }
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x9ff5,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x021744a8(iVar1,param_1,1,0);
    }
    return;
  }
  iVar1 = func_0x0229f13c(0xa065,0);
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
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar6,uVar8,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.MBResHolderTrig$$OnClear RVA 0x1dfe580 =====

void FUN_01e0e580(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa066,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    func_0x01e0e5e8(param_1);
    iVar1 = func_0x0229f06c(0x9ff9,0);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x30) != 0) {
        func_0x02450608(param_1,*(int *)(param_1 + 0x30),0);
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x9ff9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa066,0);
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



// ===== FAT.MBResHolderTrig$$_ClearRewardCo RVA 0x1dfe5e8 =====

void FUN_01e0e5e8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9fb2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9fb2,0);
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
  if (*(int *)(param_1 + 0x2c) != 0) {
    func_0x02450608(param_1,*(int *)(param_1 + 0x2c),0);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



// ===== FAT.MBResHolderTrig$$_ClearSoundCo RVA 0x1dfe658 =====

void FUN_01e0e658(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9ff9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ff9,0);
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
  if (*(int *)(param_1 + 0x30) != 0) {
    func_0x02450608(param_1,*(int *)(param_1 + 0x30),0);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}



// ===== FAT.MBResHolderTrig$$OnTrigAutoSourceSucc RVA 0x1dfe6c8 =====

void FUN_01e0e6c8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9ff4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ff4,0);
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
  func_0x01e0e748(param_1,0);
  FUN_01e0e658(param_1);
  uVar4 = func_0x01e0eb28(param_1);
  uVar4 = func_0x02450640(param_1,uVar4,0);
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  return;
}



// ===== FAT.MBResHolderTrig$$_Refresh RVA 0x1dfe748 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0e748(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01e0eafc + 0x1e0e764);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e0eb00 + 0x1e0e778));
    func_0x01384978(*(undefined4 *)(_UNK_01e0eb04 + 0x1e0e784));
    func_0x01384978(*(undefined4 *)(_UNK_01e0eb08 + 0x1e0e790));
    func_0x01384978(*(undefined4 *)(_UNK_01e0eb0c + 0x1e0e79c));
    func_0x01384978(*(undefined4 *)(_UNK_01e0eb10 + 0x1e0e7a8));
    func_0x01384978(*(undefined4 *)(_UNK_01e0eb14 + 0x1e0e7b4));
    *pcVar4 = '\x01';
  }
  uStack_28 = 0;
  iVar2 = func_0x0229f06c(0x9ff5,0);
  if (iVar2 == 0) {
    if (((*(int *)(param_1 + 0x28) != 0) &&
        (iVar2 = func_0x02feb4f8(*(int *)(param_1 + 0x28),0,
                                 **(undefined4 **)(_UNK_01e0eb18 + 0x1e0e824)), iVar2 != 0)) &&
       (iVar3 = func_0x02138e68(iVar2,0), iVar3 != 0)) {
      iVar3 = func_0x021392bc(iVar2,0);
      if (iVar3 == 0) {
        iVar3 = func_0x02138f10(iVar2,0);
        iVar3 = iVar3 + -1;
      }
      else {
        iVar3 = func_0x02138ebc(iVar2,0);
      }
      iVar5 = 0;
      puVar8 = *(undefined4 **)(_UNK_01e0eb1c + 0x1e0e890);
      while( true ) {
        iVar7 = *(int *)(param_1 + 0x1c);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar5) break;
        iVar7 = *(int *)(param_1 + 0x1c);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar7 = func_0x0328eea8(iVar7,iVar5,*puVar8);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar7 = func_0x0244ffd4(iVar7,0);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar7,iVar3 == iVar5,0);
        if (param_2 != 0) {
          iVar7 = func_0x02138e68(iVar2,0);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          iVar7 = func_0x03005894(*(undefined4 *)(iVar7 + 0x1c),iVar5,&uStack_28,
                                  **(undefined4 **)(_UNK_01e0eb20 + 0x1e0e944));
          if (iVar7 != 0) {
            iVar7 = *(int *)(param_1 + 0x1c);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            iVar7 = func_0x0328eea8(iVar7,iVar5,*puVar8);
            uVar1 = uStack_28;
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            func_0x0267cc24(iVar7,uVar1,0);
          }
        }
        iVar5 = iVar5 + 1;
      }
      iVar3 = 0;
      puVar8 = *(undefined4 **)(_UNK_01e0eb24 + 0x1e0e9b0);
      while( true ) {
        iVar5 = *(int *)(param_1 + 0x20);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar5 + 0xc) <= iVar3) break;
        iVar5 = *(int *)(param_1 + 0x20);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x0328eea8(iVar5,iVar3,*puVar8);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x02450790(iVar5,0);
        iVar7 = func_0x02138f10(iVar2,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar5,iVar3 < iVar7,0);
        iVar3 = iVar3 + 1;
      }
      uVar6 = 0;
      iVar3 = func_0x02138f10(iVar2,0);
      iVar2 = func_0x02138ebc(iVar2,0);
      while( true ) {
        iVar5 = *(int *)(param_1 + 0x24);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar5 + 0xc) <= (int)uVar6) break;
        iVar5 = *(int *)(param_1 + 0x24);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x0328eea8(iVar5,uVar6,*puVar8);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x02450790(iVar5,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar5,uVar6 < (uint)(iVar3 - iVar2 & ~(iVar3 - iVar2 >> 0x1f)),0);
        uVar6 = uVar6 + 1;
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x9ff5,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x021744a8(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MBResHolderTrig$$_CoPlaySound RVA 0x1dfeb28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e0eb28(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_01e0ebcc + 0x1e0eb3c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e0ebd0 + 0x1e0eb50));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9ffa,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ffa,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_021784b0 + 0x21783d0);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021784b4 + 0x21783e4),param_1,0);
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
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021784b8 + 0x21784a0));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e0ebd4 + 0x1e0ebac));
  func_0x0244f5a0(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ===== FAT.MBResHolderTrig$$DelayFlyRewardList RVA 0x1dfebd8 =====

void FUN_01e0ebd8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x9fb1,0);
  if (iVar1 == 0) {
    FUN_01e0e5e8(param_1);
    uVar2 = func_0x01e0ec80(param_1,param_2,param_3,param_4,param_5);
    uVar2 = func_0x02450640(param_1,uVar2,0);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
  }
  else {
    iVar1 = func_0x0229f13c(0x9fb1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0218baa0(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.MBResHolderTrig$$_CoFlyRewardList RVA 0x1dfec80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e0ec80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01e0ed58 + 0x1e0eca0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e0ed5c + 0x1e0ecb8));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9fb3,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e0ed60 + 0x1e0ed24));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 0x14) = param_2;
    *(undefined4 *)(iVar1 + 0x18) = param_3;
    *(undefined4 *)(iVar1 + 0x1c) = param_4;
    *(undefined4 *)(iVar1 + 0x20) = param_5;
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x9fb3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0227c174(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return iVar1;
}



// ===== FAT.MBResHolderTrig.<_CoFlyRewardList>d__15$$.ctor RVA 0x1dfed64 =====

void FUN_01e0ed64(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MBResHolderTrig.<_CoPlaySound>d__17$$.ctor RVA 0x1dfed80 =====

void FUN_01e0ed80(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MBResHolderTrig$$.ctor RVA 0x1dfed9c =====

void FUN_01e0ed9c(undefined4 param_1)

{
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}



// ===== FAT.MBResHolderTrig$$<>iFixBaseProxy_OnInit RVA 0x1dfeda4 =====

void thunk_FUN_01e0e33c(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x1619,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1619,0);
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



// ===== FAT.MBResHolderTrig$$<>iFixBaseProxy_OnClear RVA 0x1dfeda8 =====

void thunk_FUN_01e0e390(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x5d99,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5d99,0);
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



// ===== FAT.MBResHolderTrig.<_CoFlyRewardList>d__15$$System.IDisposable.Dispose RVA 0x1dfedac =====

void FUN_01e0edac(void)

{
  return;
}



// ===== FAT.MBResHolderTrig.<_CoFlyRewardList>d__15$$MoveNext RVA 0x1dfedb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e0edb0(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  pcVar2 = (char *)(_UNK_01e0eeb0 + 0x1e0edc8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e0eeb4 + 0x1e0eddc));
    func_0x01384978(*(undefined4 *)(_UNK_01e0eeb8 + 0x1e0ede8));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 1) {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    uVar5 = *(undefined4 *)(param_1 + 0x18);
    uVar6 = *(undefined4 *)(param_1 + 0x1c);
    uVar7 = *(undefined4 *)(param_1 + 0x20);
    iVar4 = **(int **)(_UNK_01e0eec0 + 0x1e0ee68);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar3 = 0;
    func_0x020718d0(uVar1,uVar5,uVar6,uVar7,0,0,0);
  }
  else {
    uVar3 = 0;
    if (*(int *)(param_1 + 8) == 0) {
      iVar4 = *(int *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar5 = *(undefined4 *)(iVar4 + 0x10);
      uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e0eebc + 0x1e0ee2c));
      func_0x0245031c(uVar1,uVar5,0);
      uVar3 = 1;
      *(undefined4 *)(param_1 + 0xc) = uVar1;
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return uVar3;
}



// ===== FAT.MBResHolderTrig.<_CoFlyRewardList>d__15$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x1dfeec4 =====

undefined4 FUN_01e0eec4(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MBResHolderTrig.<_CoFlyRewardList>d__15$$System.Collections.IEnumerator.Reset RVA 0x1dfeecc =====

undefined4 FUN_01e0eecc(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  func_0x01384988(*(undefined4 *)(iRam01e0ef08 + 0x1e0eedc));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(iRam01e0ef0c + 0x1e0eef8));
  func_0x01384aa0(uVar1,uVar2);
  iVar3 = func_0x01384928();
  return *(undefined4 *)(iVar3 + 0xc);
}



// ===== FAT.MBResHolderTrig.<_CoFlyRewardList>d__15$$System.Collections.IEnumerator.get_Current RVA 0x1dfef10 =====

undefined4 FUN_01e0ef10(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MBResHolderTrig.<_CoPlaySound>d__17$$System.IDisposable.Dispose RVA 0x1dfef18 =====

void FUN_01e0ef18(void)

{
  return;
}



// ===== FAT.MBResHolderTrig.<_CoPlaySound>d__17$$MoveNext RVA 0x1dfef1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e0ef1c(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  
  pcVar2 = (char *)(_UNK_01e0f010 + 0x1e0ef30);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e0f014 + 0x1e0ef44));
    func_0x01384978(*(undefined4 *)(_UNK_01e0f018 + 0x1e0ef50));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 8);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 0;
    func_0x01bf3284(iVar4,**(undefined4 **)(_UNK_01e0f020 + 0x1e0f000),0);
  }
  else {
    uVar3 = 0;
    if (*(int *)(param_1 + 8) == 0) {
      iVar4 = *(int *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar3 = *(undefined4 *)(iVar4 + 0x10);
      uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e0f01c + 0x1e0ef94));
      func_0x0245031c(uVar1,uVar3,0);
      uVar3 = 1;
      *(undefined4 *)(param_1 + 0xc) = uVar1;
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return uVar3;
}



// ===== FAT.MBResHolderTrig.<_CoPlaySound>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x1dff024 =====

undefined4 FUN_01e0f024(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MBResHolderTrig.<_CoPlaySound>d__17$$System.Collections.IEnumerator.Reset RVA 0x1dff02c =====

undefined4 FUN_01e0f02c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  func_0x01384988(*(undefined4 *)(iRam01e0f068 + 0x1e0f03c));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(iRam01e0f06c + 0x1e0f058));
  func_0x01384aa0(uVar1,uVar2);
  iVar3 = func_0x01384928();
  return *(undefined4 *)(iVar3 + 0xc);
}



// ===== FAT.MBResHolderTrig.<_CoPlaySound>d__17$$System.Collections.IEnumerator.get_Current RVA 0x1dff070 =====

undefined4 FUN_01e0f070(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


