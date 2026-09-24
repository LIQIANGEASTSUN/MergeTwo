/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ConfigMergeBonusHandler$$FAT.Merge.IMergeBonusHandler.get_priority RVA 0x212d828 =====

undefined4 FUN_0213d828(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb429,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb429,0);
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
  return 100;
}



// ===== FAT.Merge.ConfigMergeBonusHandler$$FAT.Merge.IMergeBonusHandler.Process RVA 0x212d87c =====

/* WARNING: Removing unreachable block (ram,0x0213de50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0213d87c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  undefined4 uVar13;
  int *piVar14;
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
  
  pcVar11 = (char *)(_UNK_0213df70 + 0x213d898);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213df74 + 0x213d8ac));
    func_0x01384978(*(undefined4 *)(_UNK_0213df78 + 0x213d8b8));
    func_0x01384978(*(undefined4 *)(_UNK_0213df7c + 0x213d8c4));
    func_0x01384978(*(undefined4 *)(_UNK_0213df80 + 0x213d8d0));
    func_0x01384978(*(undefined4 *)(_UNK_0213df84 + 0x213d8dc));
    func_0x01384978(*(undefined4 *)(_UNK_0213df88 + 0x213d8e8));
    func_0x01384978(*(undefined4 *)(_UNK_0213df8c + 0x213d8f4));
    func_0x01384978(*(undefined4 *)(_UNK_0213df90 + 0x213d900));
    func_0x01384978(*(undefined4 *)(_UNK_0213df94 + 0x213d90c));
    func_0x01384978(*(undefined4 *)(_UNK_0213df98 + 0x213d918));
    *pcVar11 = '\x01';
  }
  iVar3 = func_0x0229f06c(0xb42a,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xb42a,0);
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
    func_0x01485278(&uStack_38,param_2,0);
    iVar12 = *(int *)(iVar3 + 8);
    uVar13 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 3;
    if (iVar3 == 0) {
      uVar9 = 2;
    }
    func_0x0245495c(iVar12,uVar13,&uStack_38,uVar9,0,0);
    return;
  }
  piVar4 = (int *)func_0x021566f4(0);
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *piVar4;
  piVar14 = *(int **)(_UNK_0213df9c + 0x213d994);
  uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
  iVar12 = *piVar14;
  if (uVar7 != 0) {
    piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar8[-1] == iVar12) {
        puVar5 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0x1d0);
        goto LAB_0213d9dc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar4,iVar12,0x22);
LAB_0213d9dc:
  iVar3 = (*(code *)*puVar5)(piVar4,puVar5[1]);
  if (iVar3 != 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(param_2 + 0x14);
    piVar4 = (int *)func_0x021566f4(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar13 = FUN_0210e2d4(iVar3,0);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar4;
    iVar6 = *piVar14;
    uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar7 != 0) {
      piVar14 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar14[-1] == iVar6) {
          puVar5 = (undefined4 *)(iVar12 + *piVar14 * 8 + 0x108);
          goto LAB_0213da88;
        }
        uVar7 = uVar7 - 1;
        piVar14 = piVar14 + 2;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar4,iVar6,9);
LAB_0213da88:
    iVar12 = (*(code *)*puVar5)(piVar4,uVar13,puVar5[1]);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    iVar12 = *(int *)(iVar12 + 0x48);
    iStack_34 = param_2;
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    piVar4 = (int *)func_0x0364c2b4(iVar12,**(undefined4 **)(_UNK_0213dfa0 + 0x213dacc));
LAB_0213dadc:
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar4;
    uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar7 != 0) {
      piVar14 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar14[-1] == **(int **)(_UNK_0213dfa4 + 0x213daf8)) {
          puVar5 = (undefined4 *)(iVar12 + *piVar14 * 8 + 0xc0);
          goto LAB_0213db40;
        }
        uVar7 = uVar7 - 1;
        piVar14 = piVar14 + 2;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0213dfa4 + 0x213daf8),0);
LAB_0213db40:
    iVar12 = (*(code *)*puVar5)(piVar4,puVar5[1]);
    if (iVar12 != 0) {
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar12 = *piVar4;
      uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(int *)(iVar12 + 0x58) + 4);
        do {
          if (piVar14[-1] == **(int **)(_UNK_0213dfa8 + 0x213db74)) {
            puVar5 = (undefined4 *)(iVar12 + *piVar14 * 8 + 0xc0);
            goto LAB_0213dbbc;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 2;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0213dfa8 + 0x213db74),0);
LAB_0213dbbc:
      iVar6 = (*(code *)*puVar5)(piVar4,puVar5[1]);
      iVar12 = iStack_34;
      if (0 < iVar6) {
        if (iStack_34 == 0) {
          func_0x01384bf0();
        }
        iVar12 = *(int *)(iVar12 + 8);
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        iVar12 = FUN_02139cf4(iVar12);
        uVar13 = FUN_020d8024(iVar3,0,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        FUN_0210cd7c(&uStack_30,iVar3,0);
        uVar9 = uStack_30;
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        FUN_0210cd7c(&uStack_30,iVar3,0);
        uVar1 = uStack_2c;
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        uStack_50 = uVar1;
        uStack_4c = 0;
        uStack_48 = 0;
        uStack_44 = 0;
        iVar12 = FUN_020ded9c(iVar12,iVar6,uVar13,uVar9);
        if (iVar12 == 0) {
          iVar12 = func_0x01c24918(0);
          if (iVar12 == 0) {
            func_0x01384bf0();
          }
          iVar10 = *(int *)(iVar12 + 0x40);
          iVar12 = **(int **)(_UNK_0213dfac + 0x213dcb4);
          if (*(int *)(iVar12 + 0x74) == 0) {
            func_0x01384ab4();
            iVar12 = **(int **)(_UNK_0213dfb0 + 0x213dcd4);
          }
          uVar13 = *(undefined4 *)(*(int *)(iVar12 + 0x5c) + 0x2c);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          uStack_40 = **(undefined4 **)(_UNK_0213dfb4 + 0x213dcf4);
          uStack_3c = **(undefined4 **)(_UNK_0213dfb8 + 0x213dd00);
          uStack_44 = 0x1e;
          uStack_38 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          uStack_48 = 0;
          uVar13 = func_0x01cdcbac(iVar10,iVar6,1,uVar13);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          FUN_0210cd7c(&uStack_30,iVar3,0);
          uVar1 = uStack_2c;
          uVar9 = uStack_30;
          if (*(int *)(**(int **)(_UNK_0213dfbc + 0x213dd5c) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x01dd876c(&uStack_30,uVar9,uVar1,0);
          uVar2 = uStack_28;
          uVar1 = uStack_2c;
          uVar9 = uStack_30;
          if (*(int *)(**(int **)(_UNK_0213dfc0 + 0x213dd98) + 0x74) == 0) {
            func_0x01384ab4();
          }
          uStack_50 = 0;
          uStack_4c = 0;
          uStack_48 = 0;
          uStack_44 = 0;
          func_0x0206de24(uVar13,uVar9,uVar1,uVar2);
        }
      }
      goto LAB_0213dadc;
    }
    if (piVar4 != (int *)0x0) {
      iVar3 = *piVar4;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar14[-1] == **(int **)(_UNK_0213dfc4 + 0x213ddf0)) {
            puVar5 = (undefined4 *)(iVar3 + *piVar14 * 8 + 0xc0);
            goto LAB_0213de38;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 2;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0213dfc4 + 0x213ddf0),0);
LAB_0213de38:
      (*(code *)*puVar5)(piVar4,puVar5[1]);
    }
  }
  return;
}



// ===== FAT.Merge.ConfigMergeBonusHandler$$FAT.Merge.IMergeBonusHandler.OnRegister RVA 0x212dfcc =====

void FUN_0213dfcc(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb42b,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb42b,0);
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



// ===== FAT.Merge.ConfigMergeBonusHandler$$FAT.Merge.IMergeBonusHandler.OnUnRegister RVA 0x212e018 =====

void FUN_0213e018(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb42c,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb42c,0);
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



// ===== FAT.Merge.ConfigMergeBonusHandler$$.ctor RVA 0x212e064 =====

void FUN_0213e064(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}


