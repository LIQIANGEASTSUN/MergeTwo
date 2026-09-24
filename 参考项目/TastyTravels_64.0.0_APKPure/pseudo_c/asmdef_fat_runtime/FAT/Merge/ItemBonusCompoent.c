/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ItemBonusCompoent$$get_bonusId RVA 0x210d680 =====

undefined4 FUN_0211d680(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5c26,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c26,0);
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
  return *(undefined4 *)(iVar1 + 0x1c);
}



// ===== FAT.Merge.ItemBonusCompoent$$get_bonusCount RVA 0x210d6e4 =====

undefined4 FUN_0211d6e4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5c27,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c27,0);
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
  return *(undefined4 *)(iVar1 + 0x18);
}



// ===== FAT.Merge.ItemBonusCompoent$$get_funcType RVA 0x210d748 =====

undefined4 FUN_0211d748(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5c24,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c24,0);
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
  return *(undefined4 *)(iVar1 + 0x20);
}



// ===== FAT.Merge.ItemBonusCompoent$$get_autoUse RVA 0x210d7ac =====

uint FUN_0211d7ac(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5f00,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f00,0);
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
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return (uint)(*(int *)(iVar1 + 0x14) == 1);
}



// ===== FAT.Merge.ItemBonusCompoent$$get_scaleAnim RVA 0x210d81c =====

uint FUN_0211d81c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x1663,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1663,0);
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
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return (uint)*(byte *)(iVar1 + 0x25);
}



// ===== FAT.Merge.ItemBonusCompoent$$get_inventoryAutoUse RVA 0x210d880 =====

uint FUN_0211d880(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x75e6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x75e6,0);
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
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return (uint)*(byte *)(iVar1 + 0x24);
}



// ===== FAT.Merge.ItemBonusCompoent$$Validate RVA 0x210d8e4 =====

undefined4 FUN_0211d8e4(int param_1)

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
  iVar1 = func_0x0229f06c(0xb36f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb36f,0);
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
  if ((param_1 != 0) && (uVar3 = 0, *(int *)(param_1 + 0xc) != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}



// ===== FAT.Merge.ItemBonusCompoent$$OnPostAttach RVA 0x210d950 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0211d950(int param_1)

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
  
  pcVar8 = (char *)(_UNK_0211daa0 + 0x211d964);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211daa4 + 0x211d978));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xb370,0);
  if (iVar2 == 0) {
    func_0x02127894(param_1,0);
    piVar3 = (int *)func_0x021566f4(0);
    iVar2 = func_0x02123568(param_1,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar10 = FUN_0210e2d4(iVar2);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_0211daa8 + 0x211da20)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0x110);
          goto LAB_0211da68;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0211daa8 + 0x211da20),10);
LAB_0211da68:
    iVar2 = (*(code *)*puVar4)(piVar3,uVar10,puVar4[1]);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = func_0x0229f06c(0xb371,0);
    if (iVar2 == 0) {
      iVar9 = FUN_0211d7ac(param_1);
      iVar2 = 0;
      if (iVar9 != 0) {
        iVar2 = func_0x02123568(param_1,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar9 = FUN_0210cd28(iVar2);
        iVar2 = 0;
        if (iVar9 != 0) {
          iVar2 = func_0x02123568(param_1,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = FUN_02116a8c(iVar2);
          if (iVar2 == 0) {
            iVar2 = func_0x02123568(param_1,0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = FUN_02116ae0(iVar2);
            if (iVar2 != 0) {
              iVar2 = func_0x02123568(param_1,0);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar2 = FUN_0210cd28(iVar2);
              iVar9 = func_0x02123568(param_1,0);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              pcVar8 = (char *)(_UNK_020e6ee4 + 34500000);
              if (*pcVar8 == '\0') {
                func_0x01384978(*(undefined4 *)(_UNK_020e6ee8 + 0x20e6db4),iVar9,0);
                func_0x01384978(*(undefined4 *)(_UNK_020e6eec + 0x20e6dc0));
                func_0x01384978(*(undefined4 *)(_UNK_020e6ef0 + 0x20e6dcc));
                *pcVar8 = '\x01';
              }
              iVar1 = func_0x0229f06c(0x75e7,0);
              if (iVar1 == 0) {
                iVar1 = FUN_020e6c44(iVar2,iVar9);
                if (iVar1 == 0) {
                  if (iVar9 == 0) {
                    func_0x01384bf0();
                  }
                  iVar2 = 0;
                  FUN_0210e2d4(iVar9,0);
                  uVar10 = func_0x01384abc(**(undefined4 **)(_UNK_020e6ef4 + 0x20e6e84),
                                           &stack0xffffffec);
                  uVar10 = func_0x0244f6a0(**(undefined4 **)(_UNK_020e6ef8 + 0x20e6ea8),uVar10,0);
                  if (*(int *)(**(int **)(_UNK_020e6efc + 0x20e6ebc) + 0x74) == 0) {
                    func_0x01384ab4();
                  }
                  func_0x028c2874(uVar10,0);
                }
                else {
                  iVar2 = *(int *)(iVar2 + 0x98);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x021463e8(iVar2,iVar9,0);
                  iVar2 = 1;
                }
                return iVar2;
              }
              iVar1 = func_0x0229f13c(0x75e7,0);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              uStack_38 = 0;
              uStack_28 = 0;
              func_0x0245494c(&uStack_50,0,iVar9,0);
              uStack_38 = uStack_50;
              uStack_34 = uStack_4c;
              uStack_30 = uStack_48;
              uStack_2c = uStack_44;
              uStack_28 = uStack_40;
              if (*(int *)(iVar1 + 0x10) != 0) {
                func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
              }
              func_0x01485278(&uStack_38,iVar2,0);
              func_0x01485278(&uStack_38,iVar9,0);
              iVar9 = *(int *)(iVar1 + 8);
              uVar10 = *(undefined4 *)(iVar1 + 0xc);
              iVar2 = *(int *)(iVar1 + 0x10);
              if (iVar9 == 0) {
                func_0x01384bf0();
              }
              uVar7 = 3;
              if (iVar2 == 0) {
                uVar7 = 2;
              }
              func_0x0245495c(iVar9,uVar10,&uStack_38,uVar7,0,0);
              iVar2 = func_0x0245496c(&uStack_38,0,0);
              return iVar2;
            }
            return 0;
          }
        }
      }
      return iVar2;
    }
    iVar2 = func_0x0229f13c(0xb371,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xb370,0);
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
  iVar9 = *(int *)(iVar2 + 8);
  uVar10 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar2 == 0) {
    uVar7 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  iVar2 = func_0x0245495c(iVar9,uVar10,&uStack_30,uVar7);
  return iVar2;
}



// ===== FAT.Merge.ItemBonusCompoent$$_TryAutoUse RVA 0x210daac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0211daac(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
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
  
  iVar2 = func_0x0229f06c(0xb371,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xb371,0);
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
  iVar4 = FUN_0211d7ac(param_1);
  iVar2 = 0;
  if (iVar4 != 0) {
    iVar2 = func_0x02123568(param_1,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar4 = FUN_0210cd28(iVar2);
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = func_0x02123568(param_1,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = FUN_02116a8c(iVar2);
      if (iVar2 == 0) {
        iVar2 = func_0x02123568(param_1,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = FUN_02116ae0(iVar2);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = func_0x02123568(param_1,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = FUN_0210cd28(iVar2);
        iVar4 = func_0x02123568(param_1,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        pcVar5 = (char *)(_UNK_020e6ee4 + 34500000);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_020e6ee8 + 0x20e6db4),iVar4,0);
          func_0x01384978(*(undefined4 *)(_UNK_020e6eec + 0x20e6dc0));
          func_0x01384978(*(undefined4 *)(_UNK_020e6ef0 + 0x20e6dcc));
          *pcVar5 = '\x01';
        }
        iVar1 = func_0x0229f06c(0x75e7,0);
        if (iVar1 != 0) {
          iVar1 = func_0x0229f13c(0x75e7,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_38 = 0;
          uStack_28 = 0;
          func_0x0245494c(&uStack_50,0,iVar4,0);
          uStack_38 = uStack_50;
          uStack_34 = uStack_4c;
          uStack_30 = uStack_48;
          uStack_2c = uStack_44;
          uStack_28 = uStack_40;
          if (*(int *)(iVar1 + 0x10) != 0) {
            func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
          }
          func_0x01485278(&uStack_38,iVar2,0);
          func_0x01485278(&uStack_38,iVar4,0);
          iVar4 = *(int *)(iVar1 + 8);
          uVar6 = *(undefined4 *)(iVar1 + 0xc);
          iVar2 = *(int *)(iVar1 + 0x10);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          uVar3 = 3;
          if (iVar2 == 0) {
            uVar3 = 2;
          }
          func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
          iVar2 = func_0x0245496c(&uStack_38,0,0);
          return iVar2;
        }
        iVar1 = FUN_020e6c44(iVar2,iVar4);
        if (iVar1 == 0) {
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar2 = 0;
          FUN_0210e2d4(iVar4,0);
          uVar6 = func_0x01384abc(**(undefined4 **)(_UNK_020e6ef4 + 0x20e6e84),&stack0xffffffec);
          uVar6 = func_0x0244f6a0(**(undefined4 **)(_UNK_020e6ef8 + 0x20e6ea8),uVar6,0);
          if (*(int *)(**(int **)(_UNK_020e6efc + 0x20e6ebc) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x028c2874(uVar6,0);
        }
        else {
          iVar2 = *(int *)(iVar2 + 0x98);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x021463e8(iVar2,iVar4,0);
          iVar2 = 1;
        }
        return iVar2;
      }
    }
  }
  return iVar2;
}



// ===== FAT.Merge.ItemBonusCompoent$$OnUpdate RVA 0x210dbe8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0211dbe8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
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
  
  iVar2 = func_0x0229f06c(0xb372,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xb372,0);
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
  iVar2 = func_0x0229f06c(0xb371,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xb371,0);
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
  iVar4 = FUN_0211d7ac(param_1);
  iVar2 = 0;
  if (iVar4 != 0) {
    iVar2 = func_0x02123568(param_1,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar4 = FUN_0210cd28(iVar2);
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = func_0x02123568(param_1,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = FUN_02116a8c(iVar2);
      if (iVar2 == 0) {
        iVar2 = func_0x02123568(param_1,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = FUN_02116ae0(iVar2);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = func_0x02123568(param_1,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = FUN_0210cd28(iVar2);
        iVar4 = func_0x02123568(param_1,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        pcVar5 = (char *)(_UNK_020e6ee4 + 34500000);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_020e6ee8 + 0x20e6db4),iVar4,0);
          func_0x01384978(*(undefined4 *)(_UNK_020e6eec + 0x20e6dc0));
          func_0x01384978(*(undefined4 *)(_UNK_020e6ef0 + 0x20e6dcc));
          *pcVar5 = '\x01';
        }
        iVar1 = func_0x0229f06c(0x75e7,0);
        if (iVar1 != 0) {
          iVar1 = func_0x0229f13c(0x75e7,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_38 = 0;
          uStack_28 = 0;
          func_0x0245494c(&uStack_50,0,iVar4,0);
          uStack_38 = uStack_50;
          uStack_34 = uStack_4c;
          uStack_30 = uStack_48;
          uStack_2c = uStack_44;
          uStack_28 = uStack_40;
          if (*(int *)(iVar1 + 0x10) != 0) {
            func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
          }
          func_0x01485278(&uStack_38,iVar2,0);
          func_0x01485278(&uStack_38,iVar4,0);
          iVar4 = *(int *)(iVar1 + 8);
          uVar6 = *(undefined4 *)(iVar1 + 0xc);
          iVar2 = *(int *)(iVar1 + 0x10);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          uVar3 = 3;
          if (iVar2 == 0) {
            uVar3 = 2;
          }
          func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
          iVar2 = func_0x0245496c(&uStack_38,0,0);
          return iVar2;
        }
        iVar1 = FUN_020e6c44(iVar2,iVar4);
        if (iVar1 == 0) {
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar2 = 0;
          FUN_0210e2d4(iVar4,0);
          uVar6 = func_0x01384abc(**(undefined4 **)(_UNK_020e6ef4 + 0x20e6e84),&stack0xffffffec);
          uVar6 = func_0x0244f6a0(**(undefined4 **)(_UNK_020e6ef8 + 0x20e6ea8),uVar6,0);
          if (*(int *)(**(int **)(_UNK_020e6efc + 0x20e6ebc) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x028c2874(uVar6,0);
        }
        else {
          iVar2 = *(int *)(iVar2 + 0x98);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x021463e8(iVar2,iVar4,0);
          iVar2 = 1;
        }
        return iVar2;
      }
    }
  }
  return iVar2;
}



// ===== FAT.Merge.ItemBonusCompoent$$CanUse RVA 0x210dc48 =====

/* WARNING: Removing unreachable block (ram,0x01cc08fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0211dc48(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
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
  
  pcVar8 = (char *)(_UNK_0211dd58 + 0x211dc5c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211dd5c + 0x211dc70));
    *pcVar8 = '\x01';
  }
  uVar9 = 0;
  iVar3 = func_0x0229f06c(0x1664,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x1664,0);
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
    uVar7 = 2;
    if (iVar3 == 0) {
      uVar7 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar10,uVar12,&uStack_30,uVar7);
    uVar9 = func_0x0245496c(&uStack_30,0,0);
    return uVar9;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar3 = func_0x01489db8(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x28),0);
    uVar9 = 1;
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0148d518(*(undefined4 *)(iVar3 + 0x28),
                              **(undefined4 **)(_UNK_0211dd60 + 0x211dd04),0);
      if (iVar3 != 0) {
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
            pcVar8 = (char *)(_UNK_01cc09d4 + 0x1cc0538);
            if (*pcVar8 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01cc09d8 + 0x1cc054c));
              func_0x01384978(*(undefined4 *)(_UNK_01cc09dc + 0x1cc0558));
              func_0x01384978(*(undefined4 *)(_UNK_01cc09e0 + 0x1cc0564));
              func_0x01384978(*(undefined4 *)(_UNK_01cc09e4 + 0x1cc0570));
              func_0x01384978(*(undefined4 *)(_UNK_01cc09e8 + 0x1cc057c));
              func_0x01384978(*(undefined4 *)(_UNK_01cc09ec + 0x1cc0588));
              func_0x01384978(*(undefined4 *)(_UNK_01cc09f0 + 0x1cc0594));
              *pcVar8 = '\x01';
            }
            iVar10 = func_0x0229f06c(0xf9,0);
            if (iVar10 == 0) {
              iVar10 = *(int *)(iVar3 + 8);
              if (iVar10 == 0) {
                func_0x01384bf0();
              }
              iVar10 = func_0x02451990(iVar10,0x98,**(undefined4 **)(_UNK_01cc09f4 + 0x1cc0604));
              uVar9 = 1;
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
                uVar9 = 0;
                iVar11 = func_0x01dd2b98(iVar11,0);
                iVar4 = *(int *)(iVar3 + 0x18);
                if (iVar4 <= iVar11) {
                  iVar4 = *(int *)(iVar3 + 0x3c);
                }
                if (iVar4 <= iVar11) {
                  iVar11 = *(int *)(iVar3 + 0x40);
                  if (iVar11 == 0) {
                    func_0x01384bf0();
                    iVar4 = iRam0000000c;
                    iVar11 = *(int *)(iVar3 + 0x40);
                    if (iVar11 == 0) {
                      func_0x01384bf0();
                      iVar11 = 0;
                    }
                  }
                  else {
                    iVar4 = *(int *)(iVar11 + 0xc);
                  }
                  uVar9 = (uint)(iVar4 < 1);
                  piVar1 = (int *)func_0x0364c2b4(iVar11,**(undefined4 **)
                                                           (_UNK_01cc09fc + 0x1cc0758));
                  piVar13 = *(int **)(_UNK_01cc0a00 + 0x1cc0770);
                  piVar14 = *(int **)(_UNK_01cc0a04 + 0x1cc0778);
                  do {
                    if (piVar1 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    iVar3 = *piVar1;
                    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
                    if (uVar5 != 0) {
                      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                      do {
                        if (piVar6[-1] == *piVar13) {
                          puVar2 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
                          goto LAB_01cc07d0;
                        }
                        uVar5 = uVar5 - 1;
                        piVar6 = piVar6 + 2;
                      } while (uVar5 != 0);
                    }
                    puVar2 = (undefined4 *)func_0x014002dc(piVar1,*piVar13,0);
LAB_01cc07d0:
                    iVar3 = (*(code *)*puVar2)(piVar1,puVar2[1]);
                    if (iVar3 == 0) goto LAB_01cc0884;
                    if (piVar1 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    iVar3 = *piVar1;
                    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
                    if (uVar5 != 0) {
                      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                      do {
                        if (piVar6[-1] == *piVar14) {
                          puVar2 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
                          goto LAB_01cc0848;
                        }
                        uVar5 = uVar5 - 1;
                        piVar6 = piVar6 + 2;
                      } while (uVar5 != 0);
                    }
                    puVar2 = (undefined4 *)func_0x014002dc(piVar1,*piVar14,0);
LAB_01cc0848:
                    uVar12 = (*(code *)*puVar2)(piVar1,puVar2[1]);
                    if (iVar10 == 0) {
                      func_0x01384bf0();
                    }
                    iVar3 = func_0x01e6c0b0(iVar10,uVar12,0);
                  } while (iVar3 == 0);
                  uVar9 = 1;
LAB_01cc0884:
                  if (piVar1 != (int *)0x0) {
                    iVar3 = *piVar1;
                    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
                    if (uVar5 != 0) {
                      piVar13 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                      do {
                        if (piVar13[-1] == **(int **)(_UNK_01cc0a08 + 0x1cc089c)) {
                          puVar2 = (undefined4 *)(iVar3 + *piVar13 * 8 + 0xc0);
                          goto LAB_01cc08e4;
                        }
                        uVar5 = uVar5 - 1;
                        piVar13 = piVar13 + 2;
                      } while (uVar5 != 0);
                    }
                    puVar2 = (undefined4 *)
                             func_0x014002dc(piVar1,**(int **)(_UNK_01cc0a08 + 0x1cc089c),0);
LAB_01cc08e4:
                    (*(code *)*puVar2)(piVar1,puVar2[1]);
                  }
                }
              }
              return uVar9;
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
        uVar7 = 3;
        if (iVar3 == 0) {
          uVar7 = 2;
        }
        func_0x0245495c(iVar11,uVar12,&uStack_38,uVar7,0,0);
        uVar9 = func_0x0245496c(&uStack_38,0,0);
        return uVar9;
      }
    }
  }
  return uVar9;
}



// ===== FAT.Merge.ItemBonusCompoent$$CanPutInInventory RVA 0x210dd64 =====

uint FUN_0211dd64(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x9e89,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e89,0);
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
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x60);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01cc0100(iVar1,0x98,0);
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    else {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar1 + 0xc);
      iVar1 = func_0x02123568(param_1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = FUN_0210e2d4(iVar1);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01c946b8(iVar3,uVar5,0);
      uVar4 = (uint)(iVar1 == 0);
    }
  }
  return uVar4;
}



// ===== FAT.Merge.ItemBonusCompoent$$.ctor RVA 0x210de7c =====

void FUN_0211de7c(int param_1)

{
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined2 *)(param_1 + 0xc) = 0x101;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemBonusCompoent$$<>iFixBaseProxy_OnPostAttach RVA 0x210de84 =====

void FUN_0211de84(undefined4 param_1)

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



// ===== FAT.Merge.ItemBonusCompoent$$<>iFixBaseProxy_OnUpdate RVA 0x210de8c =====

void FUN_0211de8c(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5e59,0,0);
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


