/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MergeLevelMan$$get_canLevelup RVA 0x1dc29b8 =====

undefined4 FUN_01dd29b8(int param_1)

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
  iVar1 = func_0x0229f06c(0x548,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x548,0);
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
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar1 = func_0x01dd2a48(param_1);
    iVar4 = *(int *)(param_1 + 0x1c);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 0;
    if (*(int *)(iVar4 + 0x18) <= iVar1) {
      uVar3 = 1;
    }
  }
  return uVar3;
}



// ===== FAT.MergeLevelMan$$get_exp RVA 0x1dc2a48 =====

uint FUN_01dd2a48(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x549,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x549,0);
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
    uVar2 = func_0x0245498c(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = func_0x028d1a38(*(undefined4 *)(param_1 + 0xc),0);
  uVar2 = iVar1 - *(int *)(param_1 + 0x10);
  return uVar2 & ~((int)uVar2 >> 0x1f);
}



// ===== FAT.MergeLevelMan$$get_canLevelupAfterFly RVA 0x1dc2ab0 =====

undefined4 FUN_01dd2ab0(int param_1)

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
  iVar1 = func_0x0229f06c(0x9bf4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9bf4,0);
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
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar3 = 0;
    iVar1 = func_0x028d1a38(*(undefined4 *)(param_1 + 0xc),0);
    iVar4 = *(int *)(param_1 + 0x1c);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar4 + 0x18) <= iVar1) {
      uVar3 = 1;
    }
  }
  return uVar3;
}



// ===== FAT.MergeLevelMan$$get_nextLevelConfig RVA 0x1dc2b44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd2b44(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9db1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9db1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02284d78 + 0x2284c98);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02284d7c + 0x2284cac),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02284d80 + 0x2284d68));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x1c);
}



// ===== FAT.MergeLevelMan$$get_displayLevel RVA 0x1dc2b98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd2b98(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
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
  
  iVar1 = func_0x0229f06c(0xfc,0);
  if (iVar1 == 0) {
    param_1 = (int *)param_1[5];
    pcVar4 = (char *)(_UNK_028d1aec + 0x28d1a4c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_028d1af0 + 0x28d1a60),0);
      func_0x01384978(*(undefined4 *)(_UNK_028d1af4 + 0x28d1a6c));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x86,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_028d1af8 + 0x28d1ac4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = **(int **)(_UNK_028d1afc + 0x28d1ae0);
      if (param_1 == (int *)0x0) {
        func_0x02457d50();
      }
      iVar3 = (**(code **)(*param_1 + 0xc0))(param_1,0,*(undefined4 *)(*param_1 + 0xc4));
      if (iVar3 == 0) {
        iVar1 = *(int *)(iVar1 + 0x10);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x02457d84();
        }
        iVar3 = **(int **)(iVar1 + 0x60);
        iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x14);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x02457d84();
        }
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x02457d48();
        }
        iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x14);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x02457d84();
        }
        iVar3 = param_1[2];
        uVar6 = param_1[3];
        uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
        if (iVar3 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar3 + 0xc) <= uVar6) {
          func_0x02457d5c();
        }
                    /* WARNING: Could not recover jumptable at 0x03f2ce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (**(code **)(*param_1 + 0xe8))
                          (param_1,uVar5,*(undefined4 *)(iVar3 + uVar6 * 4 + 0x10),
                           *(undefined4 *)(*param_1 + 0xec));
        return uVar5;
      }
      return 0;
    }
    iVar1 = func_0x0229f13c(0x86,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xfc,0);
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
  uVar5 = func_0x0245498c(&uStack_30,0,0);
  return uVar5;
}



// ===== FAT.MergeLevelMan$$get_isLevelUp RVA 0x1dc2bf4 =====

undefined1 FUN_01dd2bf4(int param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



// ===== FAT.MergeLevelMan$$set_isLevelUp RVA 0x1dc2bfc =====

void FUN_01dd2bfc(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MergeLevelMan$$get_level RVA 0x1dc2c04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd2c04(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
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
  
  iVar1 = func_0x0229f06c(0x85,0);
  if (iVar1 == 0) {
    param_1 = (int *)param_1[5];
    pcVar4 = (char *)(_UNK_028d1aec + 0x28d1a4c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_028d1af0 + 0x28d1a60),0);
      func_0x01384978(*(undefined4 *)(_UNK_028d1af4 + 0x28d1a6c));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x86,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_028d1af8 + 0x28d1ac4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = **(int **)(_UNK_028d1afc + 0x28d1ae0);
      if (param_1 == (int *)0x0) {
        func_0x02457d50();
      }
      iVar3 = (**(code **)(*param_1 + 0xc0))(param_1,0,*(undefined4 *)(*param_1 + 0xc4));
      if (iVar3 == 0) {
        iVar1 = *(int *)(iVar1 + 0x10);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x02457d84();
        }
        iVar3 = **(int **)(iVar1 + 0x60);
        iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x14);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x02457d84();
        }
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x02457d48();
        }
        iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x14);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x02457d84();
        }
        iVar3 = param_1[2];
        uVar6 = param_1[3];
        uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
        if (iVar3 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar3 + 0xc) <= uVar6) {
          func_0x02457d5c();
        }
                    /* WARNING: Could not recover jumptable at 0x03f2ce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (**(code **)(*param_1 + 0xe8))
                          (param_1,uVar5,*(undefined4 *)(iVar3 + uVar6 * 4 + 0x10),
                           *(undefined4 *)(*param_1 + 0xec));
        return uVar5;
      }
      return 0;
    }
    iVar1 = func_0x0229f13c(0x86,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x85,0);
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
  uVar5 = func_0x0245498c(&uStack_30,0,0);
  return uVar5;
}



// ===== FAT.MergeLevelMan$$get_realExp RVA 0x1dc2c60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd2c60(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
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
  
  iVar1 = func_0x0229f06c(0x7ff,0);
  if (iVar1 == 0) {
    param_1 = (int *)param_1[3];
    pcVar4 = (char *)(_UNK_028d1aec + 0x28d1a4c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_028d1af0 + 0x28d1a60),0);
      func_0x01384978(*(undefined4 *)(_UNK_028d1af4 + 0x28d1a6c));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x86,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_028d1af8 + 0x28d1ac4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = **(int **)(_UNK_028d1afc + 0x28d1ae0);
      if (param_1 == (int *)0x0) {
        func_0x02457d50();
      }
      iVar3 = (**(code **)(*param_1 + 0xc0))(param_1,0,*(undefined4 *)(*param_1 + 0xc4));
      if (iVar3 == 0) {
        iVar1 = *(int *)(iVar1 + 0x10);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x02457d84();
        }
        iVar3 = **(int **)(iVar1 + 0x60);
        iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x14);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x02457d84();
        }
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x02457d48();
        }
        iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x14);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x02457d84();
        }
        iVar3 = param_1[2];
        uVar6 = param_1[3];
        uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
        if (iVar3 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar3 + 0xc) <= uVar6) {
          func_0x02457d5c();
        }
                    /* WARNING: Could not recover jumptable at 0x03f2ce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (**(code **)(*param_1 + 0xe8))
                          (param_1,uVar5,*(undefined4 *)(iVar3 + uVar6 * 4 + 0x10),
                           *(undefined4 *)(*param_1 + 0xec));
        return uVar5;
      }
      return 0;
    }
    iVar1 = func_0x0229f13c(0x86,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7ff,0);
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
  uVar5 = func_0x0245498c(&uStack_30,0,0);
  return uVar5;
}



// ===== FAT.MergeLevelMan$$FAT.IGameModule.Reset RVA 0x1dc2cbc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd2cbc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
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
  
  iVar1 = func_0x0229f06c(0x9db2,0);
  if (iVar1 == 0) {
    pcVar3 = (char *)(_UNK_01dd2e80 + 0x1dd2d28);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dd2e84 + 0x1dd2d3c));
      func_0x01384978(*(undefined4 *)(_UNK_01dd2e88 + 0x1dd2d48));
      func_0x01384978(*(undefined4 *)(_UNK_01dd2e8c + 0x1dd2d54));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x9db3,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      puVar5 = *(undefined4 **)(_UNK_01dd2e90 + 0x1dd2dc4);
      func_0x0245190c(iVar1,0,*puVar5);
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0245190c(iVar1,1,*puVar5);
      iVar1 = *(int *)(param_1 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0245190c(iVar1,0,*puVar5);
      iVar1 = *(int *)(param_1 + 0x28);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d611a0(iVar1,**(undefined4 **)(_UNK_01dd2e94 + 0x1dd2e28));
      iVar1 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x10) = 0;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar1 + 0xc);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (0 < iVar4) {
        func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
      }
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined1 *)(param_1 + 8) = 0;
      return;
    }
    iVar1 = func_0x0229f13c(0x9db3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9db2,0);
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



// ===== FAT.MergeLevelMan$$ClearResetState RVA 0x1dc2d14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd2d14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
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
  
  pcVar3 = (char *)(_UNK_01dd2e80 + 0x1dd2d28);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd2e84 + 0x1dd2d3c));
    func_0x01384978(*(undefined4 *)(_UNK_01dd2e88 + 0x1dd2d48));
    func_0x01384978(*(undefined4 *)(_UNK_01dd2e8c + 0x1dd2d54));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9db3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9db3,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_01dd2e90 + 0x1dd2dc4);
  func_0x0245190c(iVar1,0,*puVar5);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245190c(iVar1,1,*puVar5);
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245190c(iVar1,0,*puVar5);
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d611a0(iVar1,**(undefined4 **)(_UNK_01dd2e94 + 0x1dd2e28));
  iVar1 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar4) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



// ===== FAT.MergeLevelMan$$FAT.IGameModule.LoadConfig RVA 0x1dc2e98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd2e98(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9db4,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0x9db5,0);
    if (iVar1 == 0) {
      iVar1 = FUN_01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = FUN_01ca6b5c(iVar1,0);
      *(undefined4 *)(param_1 + 0x20) = uVar5;
      uVar5 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x14),0);
      pcVar4 = (char *)(_UNK_01dd38f0 + 0x1dd3808);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01dd38f4 + 0x1dd381c));
        *pcVar4 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x54b,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x14);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0245190c(iVar1,uVar5,**(undefined4 **)(_UNK_01dd38f8 + 0x1dd388c));
        *(undefined4 *)(param_1 + 0x1c) = 0;
        iVar1 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x14),0);
        iVar3 = FUN_01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 0xc);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar5 = FUN_01ca4b1c(iVar3,iVar1 + 1,0);
        *(undefined4 *)(param_1 + 0x1c) = uVar5;
        return;
      }
      iVar1 = func_0x0229f13c(0x54b,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,uVar5,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar1 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485238(&uStack_38,uVar5,0);
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
    iVar1 = func_0x0229f13c(0x9db5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9db4,0);
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
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2);
  return;
}



// ===== FAT.MergeLevelMan$$_OnConfigLoaded RVA 0x1dc2ef0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd2ef0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9db5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9db5,0);
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
  iVar1 = FUN_01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar5 = FUN_01ca6b5c(iVar1,0);
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  uVar5 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x14),0);
  pcVar4 = (char *)(_UNK_01dd38f0 + 0x1dd3808);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd38f4 + 0x1dd381c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x54b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x54b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,uVar5,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,uVar5,0);
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
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245190c(iVar1,uVar5,**(undefined4 **)(_UNK_01dd38f8 + 0x1dd388c));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x14),0);
  iVar3 = FUN_01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar5 = FUN_01ca4b1c(iVar3,iVar1 + 1,0);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  return;
}



// ===== FAT.MergeLevelMan$$FAT.IGameModule.Startup RVA 0x1dc2f94 =====

void FUN_01dd2f94(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x9db6,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x9db6,0);
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



// ===== FAT.MergeLevelMan$$FAT.IUserDataHolder.FillData RVA 0x1dc2fe0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01dd2fe0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
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
  
  pcVar5 = (char *)(_UNK_01dd3300 + 0x1dd2ffc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd3304 + 0x1dd3010));
    func_0x01384978(*(undefined4 *)(_UNK_01dd3308 + 0x1dd301c));
    func_0x01384978(*(undefined4 *)(_UNK_01dd330c + 0x1dd3028));
    func_0x01384978(*(undefined4 *)(_UNK_01dd3310 + 0x1dd3034));
    func_0x01384978(*(undefined4 *)(_UNK_01dd3314 + 0x1dd3040));
    func_0x01384978(*(undefined4 *)(_UNK_01dd3318 + 0x1dd304c));
    func_0x01384978(*(undefined4 *)(_UNK_01dd331c + 0x1dd3058));
    *pcVar5 = '\x01';
  }
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_60 = 0;
  uStack_64 = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_4c = uStack_5c;
  uStack_48 = uStack_58;
  uStack_44 = uStack_54;
  uStack_3c = uStack_5c;
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  iVar2 = func_0x0229f06c(0x9db7,0);
  if (iVar2 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(param_2 + 0xc);
    if (iVar2 != 0) {
      uVar3 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x18),0);
      uVar4 = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(iVar2 + 0x80) = uVar3;
      uVar3 = func_0x028d1a38(uVar4,0);
      uVar4 = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(iVar2 + 0x34) = uVar3;
      uVar3 = func_0x028d1a38(uVar4,0);
      *(undefined4 *)(iVar2 + 0x30) = uVar3;
    }
    iVar2 = *(int *)(param_2 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x24);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar2 + 0x44);
    if (iVar6 == 0) {
      iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01dd3320 + 0x1dd316c));
      func_0x01788d58(iVar6,0);
      *(int *)(iVar2 + 0x44) = iVar6;
    }
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03d61474(&uStack_98,iVar2,**(undefined4 **)(_UNK_01dd3324 + 0x1dd31a4));
    uStack_50 = uStack_98;
    uStack_4c = uStack_94;
    uStack_48 = uStack_90;
    uStack_44 = uStack_8c;
    uStack_40 = uStack_88;
    uStack_3c = uStack_84;
    uStack_38 = uStack_80;
    uStack_34 = uStack_7c;
    uStack_30 = uStack_78;
    uStack_2c = uStack_74;
    puVar7 = *(undefined4 **)(_UNK_01dd3328 + 0x1dd31d0);
    puVar8 = *(undefined4 **)(_UNK_01dd332c + 0x1dd31d8);
    while (iVar2 = func_0x014757b8(&uStack_50,*puVar7), iVar2 != 0) {
      uStack_60 = uStack_40;
      uStack_5c = uStack_3c;
      uStack_58 = uStack_38;
      uStack_54 = uStack_34;
      func_0x01484298(&uStack_60,&uStack_64,&uStack_70,**(undefined4 **)(_UNK_01dd3330 + 0x1dd31f4))
      ;
      uVar1 = uStack_64;
      uVar4 = uStack_6c;
      uVar3 = uStack_70;
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar6 + 0xc);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x03461fa8(iVar2,uVar1,uVar3,uVar4,*puVar8);
    }
    func_0x024523f8(&uStack_50,**(undefined4 **)(_UNK_01dd3334 + 0x1dd3264));
  }
  else {
    iVar2 = func_0x0229f13c(0x9db7,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MergeLevelMan$$FAT.IUserDataHolder.SetData RVA 0x1dc3340 =====

/* WARNING: Removing unreachable block (ram,0x01dd36d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd3340(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_01dd37b0 + 0x1dd335c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd37b4 + 0x1dd3370));
    func_0x01384978(*(undefined4 *)(_UNK_01dd37b8 + 0x1dd337c));
    func_0x01384978(*(undefined4 *)(_UNK_01dd37bc + 0x1dd3388));
    func_0x01384978(*(undefined4 *)(_UNK_01dd37c0 + 0x1dd3394));
    func_0x01384978(*(undefined4 *)(_UNK_01dd37c4 + 0x1dd33a0));
    func_0x01384978(*(undefined4 *)(_UNK_01dd37c8 + 0x1dd33ac));
    func_0x01384978(*(undefined4 *)(_UNK_01dd37cc + 0x1dd33b8));
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  iVar3 = func_0x0229f06c(0x9db8,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x9db8,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar3,param_1,param_2,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_2 + 0xc);
  iVar9 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar8 = *(undefined4 *)(iVar3 + 0x34);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  puVar10 = *(undefined4 **)(_UNK_01dd37d0 + 0x1dd3468);
  func_0x0245190c(iVar9,uVar8,*puVar10);
  iVar9 = *(int *)(param_1 + 0x18);
  uVar8 = *(undefined4 *)(iVar3 + 0x80);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x0245190c(iVar9,uVar8,*puVar10);
  iVar3 = *(int *)(iVar3 + 0x30);
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  func_0x01dd37f0(param_1,iVar3);
  iVar3 = *(int *)(param_2 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x24);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x44);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x03462894(iVar3,**(undefined4 **)(_UNK_01dd37d4 + 0x1dd34ec));
  do {
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar4;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01dd37e4 + 0x1dd3518)) {
          puVar10 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
          goto LAB_01dd3560;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar10 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01dd37e4 + 0x1dd3518),0);
LAB_01dd3560:
    iVar3 = (*(code *)*puVar10)(piVar4,puVar10[1]);
    if (iVar3 == 0) break;
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar4;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01dd37d8 + 0x1dd3594)) {
          puVar10 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
          goto LAB_01dd35dc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar10 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01dd37d8 + 0x1dd3594),0);
LAB_01dd35dc:
    (*(code *)*puVar10)(&uStack_58,piVar4,puVar10[1]);
    uStack_38 = uStack_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    func_0x01484298(&uStack_38,&uStack_3c,&uStack_48,**(undefined4 **)(_UNK_01dd37dc + 0x1dd35fc));
    uVar2 = uStack_3c;
    uVar1 = uStack_44;
    uVar8 = uStack_48;
    iVar3 = *(int *)(param_1 + 0x28);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x03d60f38(iVar3,uVar2,uVar8,uVar1,**(undefined4 **)(_UNK_01dd37e0 + 0x1dd363c));
  } while( true );
  if (piVar4 != (int *)0x0) {
    iVar3 = *piVar4;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01dd37e8 + 0x1dd3674)) {
          puVar10 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
          goto LAB_01dd36bc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar10 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01dd37e8 + 0x1dd3674),0);
LAB_01dd36bc:
    (*(code *)*puVar10)(piVar4,puVar10[1]);
  }
  return;
}



// ===== FAT.MergeLevelMan$$_RefreshLevel RVA 0x1dc37f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd37f0(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01dd38f0 + 0x1dd3808);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd38f4 + 0x1dd381c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x54b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x54b,0);
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
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245190c(iVar1,param_2,**(undefined4 **)(_UNK_01dd38f8 + 0x1dd388c));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x14),0);
  iVar3 = FUN_01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar5 = FUN_01ca4b1c(iVar3,iVar1 + 1,0);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  return;
}



// ===== FAT.MergeLevelMan$$DebugReset RVA 0x1dc38fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd38fc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
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
  
  pcVar3 = (char *)(_UNK_01dd3a40 + 0x1dd3910);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd3a44 + 0x1dd3924));
    func_0x01384978(*(undefined4 *)(_UNK_01dd3a48 + 0x1dd3930));
    func_0x01384978(*(undefined4 *)(_UNK_01dd3a4c + 0x1dd393c));
    func_0x01384978(*(undefined4 *)(_UNK_01dd3a50 + 0x1dd3948));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9db9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9db9,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_01dd3a54 + 0x1dd39b8);
  func_0x0245190c(iVar1,0,*puVar5);
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245190c(iVar1,0,*puVar5);
  FUN_01dd37f0(param_1,1);
  if (*(int *)(**(int **)(_UNK_01dd3a58 + 0x1dd39f4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01dd3a5c + 0x1dd3a10));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0349e128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),1,*(undefined4 *)(iVar1 + 0x14));
  return;
}



// ===== FAT.MergeLevelMan$$RecordOf RVA 0x1dc3a64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd3a64(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_01dd3b28 + 0x1dd3a80);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd3b2c + 0x1dd3a94));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  uStack_18 = 0;
  iVar1 = func_0x0229f06c(0x73ae,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d62e04(iVar1,param_2,&uStack_18,**(undefined4 **)(_UNK_01dd3b30 + 0x1dd3b14));
  }
  else {
    iVar1 = func_0x0229f13c(0x73ae,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_18 = func_0x021c41b4(iVar1,param_1,param_2,0);
  }
  return uStack_18;
}



// ===== FAT.MergeLevelMan$$TryLevelup RVA 0x1dc3b34 =====

/* WARNING: Removing unreachable block (ram,0x01dd4280) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd3b34(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_01dd4448 + 0x1dd3b50);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd444c + 0x1dd3b64));
    func_0x01384978(*(undefined4 *)(_UNK_01dd4450 + 0x1dd3b70));
    func_0x01384978(*(undefined4 *)(_UNK_01dd4454 + 0x1dd3b7c));
    func_0x01384978(*(undefined4 *)(_UNK_01dd4458 + 0x1dd3b88));
    func_0x01384978(*(undefined4 *)(_UNK_01dd445c + 0x1dd3b94));
    func_0x01384978(*(undefined4 *)(_UNK_01dd4460 + 0x1dd3ba0));
    func_0x01384978(*(undefined4 *)(_UNK_01dd4464 + 0x1dd3bac));
    func_0x01384978(*(undefined4 *)(_UNK_01dd4468 + 0x1dd3bb8));
    func_0x01384978(*(undefined4 *)(_UNK_01dd446c + 0x1dd3bc4));
    func_0x01384978(*(undefined4 *)(_UNK_01dd4470 + 0x1dd3bd0));
    func_0x01384978(*(undefined4 *)(_UNK_01dd4474 + 0x1dd3bdc));
    func_0x01384978(*(undefined4 *)(_UNK_01dd4478 + 0x1dd3be8));
    func_0x01384978(*(undefined4 *)(_UNK_01dd447c + 0x1dd3bf4));
    func_0x01384978(*(undefined4 *)(_UNK_01dd4480 + 0x1dd3c00));
    func_0x01384978(*(undefined4 *)(_UNK_01dd4484 + 0x1dd3c0c));
    func_0x01384978(*(undefined4 *)(_UNK_01dd4488 + 0x1dd3c18));
    func_0x01384978(*(undefined4 *)(_UNK_01dd448c + 0x1dd3c24));
    func_0x01384978(*(undefined4 *)(_UNK_01dd4490 + 0x1dd3c30));
    func_0x01384978(*(undefined4 *)(_UNK_01dd4494 + 0x1dd3c3c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x54a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x54a,0);
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
    iVar9 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar9,uVar11,&uStack_38,uVar6,0,0);
    uVar11 = func_0x0245496c(&uStack_38,0,0);
    return uVar11;
  }
  iVar9 = FUN_01dd29b8(param_1);
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar9 == 0) {
    if (iVar1 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined4 *)(iVar1 + 0x18);
    }
    piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01dd44d8 + 0x1dd4074),4);
    iVar1 = *(int *)(param_1 + 0x14);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar1 != 0) && (iVar9 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar9 == 0)
       ) {
      uVar6 = func_0x01384c10();
      func_0x01384aa0(uVar6,0);
    }
    if (piVar2[3] == 0) {
      func_0x01384bf4();
    }
    piVar2[4] = iVar1;
    iVar1 = *(int *)(param_1 + 0xc);
    if ((iVar1 != 0) && (iVar9 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar9 == 0)
       ) {
      uVar6 = func_0x01384c10();
      func_0x01384aa0(uVar6,0);
    }
    if ((uint)piVar2[3] < 2) {
      func_0x01384bf4();
    }
    piVar2[5] = iVar1;
    iVar1 = *(int *)(param_1 + 0x18);
    if ((iVar1 != 0) && (iVar9 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar9 == 0)
       ) {
      uVar6 = func_0x01384c10();
      func_0x01384aa0(uVar6,0);
    }
    if ((uint)piVar2[3] < 3) {
      func_0x01384bf4();
    }
    piVar2[6] = iVar1;
    uStack_28 = uVar11;
    iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01dd44dc + 0x1dd4164),&uStack_28);
    if ((iVar1 != 0) && (iVar9 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar9 == 0)
       ) {
      uVar11 = func_0x01384c10();
      func_0x01384aa0(uVar11,0);
    }
    if ((uint)piVar2[3] < 4) {
      func_0x01384bf4();
    }
    piVar2[7] = iVar1;
    uVar6 = 0;
    uVar11 = func_0x0244f708(**(undefined4 **)(_UNK_01dd44e0 + 0x1dd41c8),piVar2,0);
    if (*(int *)(**(int **)(_UNK_01dd44e4 + 0x1dd41dc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(uVar11,0);
  }
  else {
    iVar8 = *(int *)(param_1 + 0xc);
    iVar9 = func_0x028d1a38(iVar8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar1 + 0x18);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x0245190c(iVar8,iVar9 - iVar10,**(undefined4 **)(_UNK_01dd4498 + 0x1dd3ce4));
    iVar8 = *(int *)(param_1 + 0x28);
    iVar9 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x14),0);
    uVar14 = FUN_01c34eb8(0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uStack_50 = **(undefined4 **)(_UNK_01dd449c + 0x1dd3d34);
    func_0x03d60f38(iVar8,iVar9 + 1,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
    iVar9 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x14),0);
    FUN_01dd37f0(param_1,iVar9 + 1);
    iVar9 = FUN_01c24918(0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar9 + 0x40);
    iVar9 = FUN_01c24918(0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0x5c);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar11 = func_0x01db7b78(iVar9,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    FUN_01cdef00(iVar8,uVar11,0,0);
    if (*(int *)(iVar1 + 0x20) != 0) {
      iStack_30 = iVar1;
      iStack_2c = param_1;
      piVar2 = (int *)func_0x03653608(*(int *)(iVar1 + 0x20),
                                      **(undefined4 **)(_UNK_01dd44a0 + 0x1dd3df0));
      piVar13 = *(int **)(_UNK_01dd44a4 + 0x1dd3e04);
LAB_01dd3e00:
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01dd44bc + 0x1dd3e1c)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01dd3e64;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dd44bc + 0x1dd3e1c),0);
LAB_01dd3e64:
      iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      param_1 = iStack_2c;
      if (iVar1 != 0) {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar2;
        uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_01dd44a8 + 0x1dd3e98)) {
              puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
              goto LAB_01dd3ee0;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dd44a8 + 0x1dd3e98),0);
LAB_01dd3ee0:
        uVar11 = (*(code *)*puVar3)(piVar2,puVar3[1]);
        iVar1 = FUN_01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x40);
        if (*(int *)(**(int **)(_UNK_01dd44ac + 0x1dd3f18) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar9 = func_0x02565a88(uVar11,0);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        uVar6 = *(undefined4 *)(iVar9 + 8);
        iVar9 = func_0x02565a88(uVar11,0);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        iVar8 = *piVar13;
        uVar11 = *(undefined4 *)(iVar9 + 0xc);
        if (*(int *)(iVar8 + 0x74) == 0) {
          func_0x01384ab4();
          iVar8 = *piVar13;
        }
        uVar12 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x9c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_40 = **(undefined4 **)(_UNK_01dd44b0 + 0x1dd3fa4);
        uStack_3c = **(undefined4 **)(_UNK_01dd44b4 + 0x1dd3fb0);
        uStack_44 = 0x84;
        uStack_38 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0;
        uVar11 = FUN_01cdcbac(iVar1,uVar6,uVar11,uVar12);
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(param_2 + 8);
        uVar4 = *(uint *)(param_2 + 0xc);
        piVar5 = *(int **)(_UNK_01dd44b8 + 0x1dd4010);
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
        iVar9 = *piVar5;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (uVar4 < *(uint *)(iVar1 + 0xc)) {
          *(uint *)(param_2 + 0xc) = uVar4 + 1;
          *(undefined4 *)(iVar1 + uVar4 * 4 + 0x10) = uVar11;
        }
        else {
          func_0x0328f170(param_2,uVar11,
                          *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
        }
        goto LAB_01dd3e00;
      }
      iVar1 = iStack_30;
      if (piVar2 != (int *)0x0) {
        iVar1 = *piVar2;
        uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar4 != 0) {
          piVar13 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar13[-1] == **(int **)(_UNK_01dd44c0 + 0x1dd421c)) {
              puVar3 = (undefined4 *)(iVar1 + *piVar13 * 8 + 0xc0);
              goto LAB_01dd4264;
            }
            uVar4 = uVar4 - 1;
            piVar13 = piVar13 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dd44c0 + 0x1dd421c),0);
LAB_01dd4264:
        (*(code *)*puVar3)(piVar2,puVar3[1]);
        iVar1 = iStack_30;
      }
    }
    iVar9 = FUN_01c24918(0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0x40);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    FUN_01cdefd0(iVar9,0);
    func_0x01dd44e8(param_1,iVar1);
    if (*(int *)(**(int **)(_UNK_01dd44c4 + 0x1dd42d4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01dd44c8 + 0x1dd42f0));
    iVar9 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x14),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349e110(iVar1,iVar9 + -1,**(undefined4 **)(_UNK_01dd44cc + 0x1dd4324));
    iVar1 = **(int **)(**(int **)(_UNK_01dd44d0 + 0x1dd4338) + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x020a3250(iVar1,0);
    uVar6 = 1;
  }
  return uVar6;
}



// ===== FAT.MergeLevelMan$$_OnMergeLevelChange RVA 0x1dc44e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd44e8(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_01dd472c + 0x1dd4500);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd4730 + 0x1dd4514));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x54f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x54f,0);
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
  if (*(int *)(**(int **)(_UNK_01dd4734 + 0x1dd4570) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x01999cf0(0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x02567478(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x14),0);
  iVar1 = FUN_01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x60);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  FUN_01cc0b24(iVar1,0);
  iVar1 = FUN_01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 100);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01cd0108(iVar1,0);
  iVar1 = FUN_01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x74);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01c8e5fc(iVar1,0);
  iVar1 = FUN_01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01e6bfec(iVar1,0);
  func_0x01c8725c(0);
  iVar1 = FUN_01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x104);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01e2a7e4(iVar1,0);
  iVar1 = FUN_01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbb05c(iVar1,0);
  *(undefined1 *)(param_1 + 8) = 1;
  iVar1 = FUN_01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02b46318(iVar1,0);
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



// ===== FAT.MergeLevelMan$$AddFlyExp RVA 0x1dc4738 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd4738(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r1;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_01dd4900 + 0x1dd4758);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd4904 + 0x1dd476c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7fd,0);
  if (iVar1 == 0) {
    iVar1 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x18),0);
    if (iVar1 < 1) {
      iVar2 = *(int *)(param_1 + 0xc);
      iVar1 = func_0x028d1a38(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = iVar1 + param_2;
    }
    else {
      iVar1 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x18),0);
      if (param_2 <= iVar1) {
        iVar2 = *(int *)(param_1 + 0x18);
        iVar1 = func_0x028d1a38(iVar2,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0245190c(iVar2,iVar1 - param_2,**(undefined4 **)(_UNK_01dd4908 + 0x1dd48e4));
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_2;
        return;
      }
      iVar5 = *(int *)(param_1 + 0xc);
      iVar1 = 0;
      iVar2 = func_0x028d1a38(iVar5,0);
      iVar3 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x18),0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x0245190c(iVar5,(iVar2 + param_2) - iVar3,**(undefined4 **)(_UNK_01dd490c + 0x1dd482c));
      iVar2 = *(int *)(param_1 + 0x18);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
    func_0x0245190c(iVar2,iVar1,**(undefined4 **)(_UNK_01dd4910 + 0x1dd4884));
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_2;
    func_0x019a49e4(param_3,extraout_r1,param_2,param_2 >> 0x1f,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x7fd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217ab90(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MergeLevelMan$$FinishFlyExp RVA 0x1dc4914 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd4914(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
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
  
  pcVar6 = (char *)(_UNK_01dd4a40 + 0x1dd4934);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd4a44 + 0x1dd4948));
    func_0x01384978(*(undefined4 *)(_UNK_01dd4a48 + 0x1dd4954));
    func_0x01384978(*(undefined4 *)(_UNK_01dd4a4c + 0x1dd4960));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x546,0);
  if (iVar1 == 0) {
    iVar1 = **(int **)(_UNK_01dd4a50 + 0x1dd49c8);
    if (0x7fffffff < param_2) {
      param_2 = *(uint *)(param_1 + 0x10);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) - param_2;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01dd4a54 + 0x1dd49f4));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349e110(iVar1,param_2,**(undefined4 **)(_UNK_01dd4a58 + 0x1dd4a18));
    if (param_3 != 0) {
      pcVar6 = (char *)(_UNK_01dd4cfc + 0x1dd4a70);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01dd4d00 + 0x1dd4a84));
        func_0x01384978(*(undefined4 *)(_UNK_01dd4d04 + 0x1dd4a90));
        func_0x01384978(*(undefined4 *)(_UNK_01dd4d08 + 0x1dd4a9c));
        func_0x01384978(*(undefined4 *)(_UNK_01dd4d0c + 0x1dd4aa8));
        func_0x01384978(*(undefined4 *)(_UNK_01dd4d10 + 0x1dd4ab4));
        func_0x01384978(*(undefined4 *)(_UNK_01dd4d14 + 0x1dd4ac0));
        *pcVar6 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x547,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0x547,0);
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
      iVar1 = FUN_01dd29b8(param_1);
      if (iVar1 != 0) {
        puVar8 = *(undefined4 **)(_UNK_01dd4d18 + 0x1dd4b28);
        iVar1 = func_0x034aaa34(*puVar8);
        piVar7 = *(int **)(_UNK_01dd4d1c + 0x1dd4b3c);
        iVar4 = *piVar7;
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar7;
        }
        uVar5 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x98);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01eea2b8(iVar1,uVar5,0);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0x24);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(iVar1 + 0xc);
          *(undefined4 *)(iVar1 + 0xc) = 0;
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          if (0 < iVar4) {
            func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
          }
          iVar1 = FUN_01dd3b34(param_1,*(undefined4 *)(param_1 + 0x24));
          if (iVar1 != 0) {
            iVar1 = func_0x034aaa34(*puVar8);
            iVar4 = *piVar7;
            if (*(int *)(iVar4 + 0x74) == 0) {
              func_0x01384ab4();
              iVar4 = *piVar7;
            }
            uVar5 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x98);
            piVar7 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01dd4d20 + 0x1dd4c04),2);
            iVar4 = *(int *)(param_1 + 0x24);
            if (piVar7 == (int *)0x0) {
              func_0x01384bf0();
            }
            if ((iVar4 != 0) &&
               (iVar2 = func_0x01384ab8(iVar4,*(undefined4 *)(*piVar7 + 0x20)), iVar2 == 0)) {
              uVar3 = func_0x01384c10();
              func_0x01384aa0(uVar3,0);
            }
            if (piVar7[3] == 0) {
              func_0x01384bf4();
            }
            piVar7[4] = iVar4;
            iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01dd4d24 + 0x1dd4c70));
            func_0x024500b4(iVar4,param_1,**(undefined4 **)(_UNK_01dd4d28 + 0x1dd4c8c),0);
            if ((iVar4 != 0) &&
               (iVar2 = func_0x01384ab8(iVar4,*(undefined4 *)(*piVar7 + 0x20)), iVar2 == 0)) {
              uVar3 = func_0x01384c10();
              func_0x01384aa0(uVar3,0);
            }
            if ((uint)piVar7[3] < 2) {
              func_0x01384bf4();
            }
            piVar7[5] = iVar4;
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar4 = func_0x0229f06c(0xd,0,piVar7,0);
            if (iVar4 == 0) {
              func_0x01ee81d4(iVar1,uVar5,0,piVar7);
            }
            else {
              iVar4 = func_0x0229f13c(0xd,0);
              if (iVar4 == 0) {
                func_0x01384bf0();
              }
              uStack_20 = 0;
              func_0x02174858(iVar4,iVar1,uVar5,piVar7);
            }
            return;
          }
        }
      }
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x546,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x0217f950(iVar1,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.MergeLevelMan$$CheckLevelup RVA 0x1dc4a5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd4a5c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
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
  
  pcVar4 = (char *)(_UNK_01dd4cfc + 0x1dd4a70);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd4d00 + 0x1dd4a84));
    func_0x01384978(*(undefined4 *)(_UNK_01dd4d04 + 0x1dd4a90));
    func_0x01384978(*(undefined4 *)(_UNK_01dd4d08 + 0x1dd4a9c));
    func_0x01384978(*(undefined4 *)(_UNK_01dd4d0c + 0x1dd4aa8));
    func_0x01384978(*(undefined4 *)(_UNK_01dd4d10 + 0x1dd4ab4));
    func_0x01384978(*(undefined4 *)(_UNK_01dd4d14 + 0x1dd4ac0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x547,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x547,0);
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
  iVar1 = FUN_01dd29b8(param_1);
  if (iVar1 != 0) {
    puVar8 = *(undefined4 **)(_UNK_01dd4d18 + 0x1dd4b28);
    iVar1 = func_0x034aaa34(*puVar8);
    piVar7 = *(int **)(_UNK_01dd4d1c + 0x1dd4b3c);
    iVar5 = *piVar7;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x01384ab4();
      iVar5 = *piVar7;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x98);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eea2b8(iVar1,uVar6,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x24);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar1 + 0xc);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (0 < iVar5) {
        func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar5,0);
      }
      iVar1 = FUN_01dd3b34(param_1,*(undefined4 *)(param_1 + 0x24));
      if (iVar1 != 0) {
        iVar1 = func_0x034aaa34(*puVar8);
        iVar5 = *piVar7;
        if (*(int *)(iVar5 + 0x74) == 0) {
          func_0x01384ab4();
          iVar5 = *piVar7;
        }
        uVar6 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x98);
        piVar7 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01dd4d20 + 0x1dd4c04),2);
        iVar5 = *(int *)(param_1 + 0x24);
        if (piVar7 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar5 != 0) &&
           (iVar2 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar7 + 0x20)), iVar2 == 0)) {
          uVar3 = func_0x01384c10();
          func_0x01384aa0(uVar3,0);
        }
        if (piVar7[3] == 0) {
          func_0x01384bf4();
        }
        piVar7[4] = iVar5;
        iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01dd4d24 + 0x1dd4c70));
        func_0x024500b4(iVar5,param_1,**(undefined4 **)(_UNK_01dd4d28 + 0x1dd4c8c),0);
        if ((iVar5 != 0) &&
           (iVar2 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar7 + 0x20)), iVar2 == 0)) {
          uVar3 = func_0x01384c10();
          func_0x01384aa0(uVar3,0);
        }
        if ((uint)piVar7[3] < 2) {
          func_0x01384bf4();
        }
        piVar7[5] = iVar5;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x0229f06c(0xd,0,piVar7,0);
        if (iVar5 == 0) {
          func_0x01ee81d4(iVar1,uVar6,0,piVar7);
        }
        else {
          iVar5 = func_0x0229f13c(0xd,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uStack_20 = 0;
          func_0x02174858(iVar5,iVar1,uVar6,piVar7);
        }
        return;
      }
    }
  }
  return;
}



// ===== FAT.MergeLevelMan$$AddExp RVA 0x1dc4d2c =====

/* WARNING: Removing unreachable block (ram,0x01dd4a28) */
/* WARNING: Removing unreachable block (ram,0x01dd4a78) */
/* WARNING: Removing unreachable block (ram,0x01dd4ac8) */
/* WARNING: Removing unreachable block (ram,0x01dd4adc) */
/* WARNING: Removing unreachable block (ram,0x01dd4af4) */
/* WARNING: Removing unreachable block (ram,0x01dd4af8) */
/* WARNING: Removing unreachable block (ram,0x02173fd4) */
/* WARNING: Removing unreachable block (ram,0x02173fe0) */
/* WARNING: Removing unreachable block (ram,0x02174008) */
/* WARNING: Removing unreachable block (ram,0x0217400c) */
/* WARNING: Removing unreachable block (ram,0x02174018) */
/* WARNING: Removing unreachable block (ram,0x0217401c) */
/* WARNING: Removing unreachable block (ram,0x01dd4b0c) */
/* WARNING: Removing unreachable block (ram,0x01dd4b1c) */
/* WARNING: Removing unreachable block (ram,0x01dd4b48) */
/* WARNING: Removing unreachable block (ram,0x01dd4b50) */
/* WARNING: Removing unreachable block (ram,0x01dd4b60) */
/* WARNING: Removing unreachable block (ram,0x01dd4b64) */
/* WARNING: Removing unreachable block (ram,0x01dd4b7c) */
/* WARNING: Removing unreachable block (ram,0x01dd4b88) */
/* WARNING: Removing unreachable block (ram,0x01dd4b8c) */
/* WARNING: Removing unreachable block (ram,0x01dd4bac) */
/* WARNING: Removing unreachable block (ram,0x01dd4bbc) */
/* WARNING: Removing unreachable block (ram,0x01dd4bd0) */
/* WARNING: Removing unreachable block (ram,0x01dd4bec) */
/* WARNING: Removing unreachable block (ram,0x01dd4bf4) */
/* WARNING: Removing unreachable block (ram,0x01dd4c20) */
/* WARNING: Removing unreachable block (ram,0x01dd4c24) */
/* WARNING: Removing unreachable block (ram,0x01dd4c2c) */
/* WARNING: Removing unreachable block (ram,0x01dd4c44) */
/* WARNING: Removing unreachable block (ram,0x01dd4c50) */
/* WARNING: Removing unreachable block (ram,0x01dd4c5c) */
/* WARNING: Removing unreachable block (ram,0x01dd4c60) */
/* WARNING: Removing unreachable block (ram,0x01dd4c9c) */
/* WARNING: Removing unreachable block (ram,0x01dd4cb4) */
/* WARNING: Removing unreachable block (ram,0x01dd4cc0) */
/* WARNING: Removing unreachable block (ram,0x01dd4ccc) */
/* WARNING: Removing unreachable block (ram,0x01dd4cd0) */
/* WARNING: Removing unreachable block (ram,0x01dd4cdc) */
/* WARNING: Removing unreachable block (ram,0x01dd4ce0) */
/* WARNING: Removing unreachable block (ram,0x01ee85f0) */
/* WARNING: Removing unreachable block (ram,0x01ee85b4) */
/* WARNING: Removing unreachable block (ram,0x01ee85d0) */
/* WARNING: Removing unreachable block (ram,0x01ee85d4) */
/* WARNING: Removing unreachable block (ram,0x01ee8604) */
/* WARNING: Removing unreachable block (ram,0x01dd4cf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd4d2c(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = func_0x0229f06c(0x9dba,0);
  if (iVar1 == 0) {
    FUN_01dd4738(param_1,param_2,param_3);
    pcVar2 = (char *)(_UNK_01dd4a40 + 0x1dd4934);
    if (*pcVar2 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dd4a44 + 0x1dd4948));
      func_0x01384978(*(undefined4 *)(_UNK_01dd4a48 + 0x1dd4954));
      func_0x01384978(*(undefined4 *)(_UNK_01dd4a4c + 0x1dd4960));
      *pcVar2 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x546,0);
    if (iVar1 == 0) {
      iVar1 = **(int **)(_UNK_01dd4a50 + 0x1dd49c8);
      if (0x7fffffff < param_2) {
        param_2 = *(uint *)(param_1 + 0x10);
      }
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) - param_2;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01dd4a54 + 0x1dd49f4));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0349e110(iVar1,param_2,**(undefined4 **)(_UNK_01dd4a58 + 0x1dd4a18));
    }
    else {
      iVar1 = func_0x0229f13c(0x546,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0217f950(iVar1,param_1,param_2,0,0);
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x9dba,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0217ab90(iVar1,param_1,param_2,param_3,0);
  return;
}



// ===== FAT.MergeLevelMan$$GetCurrentLevelRate RVA 0x1dc4dbc =====

undefined4 FUN_01dd4dbc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x84,0);
  if (iVar1 == 0) {
    uVar2 = FUN_01dd2c04(param_1);
    func_0x01dd4e38(param_1,uVar2,&uStack_14);
  }
  else {
    iVar1 = func_0x0229f13c(0x84,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x0217493c(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.MergeLevelMan$$TryGetLevelRate RVA 0x1dc4e38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd4e38(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  int iStack_1c;
  
  pcVar8 = (char *)(_UNK_01dd4f88 + 0x1dd4e58);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd4f8c + 0x1dd4e6c));
    *pcVar8 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x87,0);
  if (iVar1 == 0) {
    piVar7 = *(int **)(param_1 + 0x20);
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar7;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01dd4f90 + 0x1dd4eec)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xf8);
          goto LAB_01dd4f34;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01dd4f90 + 0x1dd4eec),7);
LAB_01dd4f34:
    iVar4 = (*(code *)*puVar3)(piVar7,param_2,&iStack_1c,puVar3[1]);
    iVar1 = iStack_1c;
    if (iVar4 == 0) {
      *param_3 = 1;
      uVar2 = 0;
    }
    else {
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      *param_3 = *(undefined4 *)(iVar1 + 0x14);
      uVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x87,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02175dd4(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.MergeLevelMan$$.ctor RVA 0x1dc4f94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd4f94(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_01dd5120 + 0x1dd4fa8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd5124 + 0x1dd4fbc));
    func_0x01384978(*(undefined4 *)(_UNK_01dd5128 + 0x1dd4fc8));
    func_0x01384978(*(undefined4 *)(_UNK_01dd512c + 0x1dd4fd4));
    func_0x01384978(*(undefined4 *)(_UNK_01dd5130 + 0x1dd4fe0));
    func_0x01384978(*(undefined4 *)(_UNK_01dd5134 + 0x1dd4fec));
    func_0x01384978(*(undefined4 *)(_UNK_01dd5138 + 0x1dd4ff8));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_01dd513c + 0x1dd500c);
  iVar1 = func_0x01384be4(*puVar5);
  func_0x028d1b00(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_01dd5140 + 0x1dd503c);
  uVar2 = func_0x0245190c(iVar1,0,*puVar6);
  uVar3 = *puVar5;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  iVar1 = func_0x01384be4(uVar3);
  func_0x028d1b00(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0245190c(iVar1,1,*puVar6);
  uVar3 = *puVar5;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  iVar1 = func_0x01384be4(uVar3);
  func_0x028d1b00(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0245190c(iVar1,1,*puVar6);
  puVar5 = *(undefined4 **)(_UNK_01dd5144 + 0x1dd50bc);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  uVar2 = func_0x01384be4(*puVar5);
  func_0x0328e950(uVar2,**(undefined4 **)(_UNK_01dd5148 + 0x1dd50d8));
  puVar5 = *(undefined4 **)(_UNK_01dd514c + 0x1dd50ec);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  uVar2 = func_0x01384be4(*puVar5);
  func_0x03d604ec(uVar2,**(undefined4 **)(_UNK_01dd5150 + 0x1dd5104));
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  (*(code *)0x4874ed4)(param_1,0);
  return;
}


