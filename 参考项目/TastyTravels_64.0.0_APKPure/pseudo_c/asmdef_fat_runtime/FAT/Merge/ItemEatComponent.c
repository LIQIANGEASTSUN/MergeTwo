/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ItemEatComponent$$get_config RVA 0x2119938 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02129938(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb3c3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3c3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0229cbd4 + 0x229caf4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0229cbd8 + 0x229cb08),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0229cbdc + 0x229cbc4));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x1c);
}



// ===== FAT.Merge.ItemEatComponent$$get_eatGroupCount RVA 0x211998c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0212998c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_02129a18 + 0x21299a0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02129a1c + 0x21299b4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb3c4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3c4,0);
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
    uVar5 = func_0x0245498c(&uStack_30,0,0);
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0xc);
}



// ===== FAT.Merge.ItemEatComponent$$Validate RVA 0x2119a20 =====

undefined4 FUN_02129a20(int param_1)

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
  iVar1 = func_0x0229f06c(0xb3b5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3b5,0);
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
  if ((param_1 != 0) && (uVar3 = 0, *(int *)(param_1 + 0x34) != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}



// ===== FAT.Merge.ItemEatComponent$$OnStart RVA 0x2119a8c =====

/* WARNING: Removing unreachable block (ram,0x02129cb0) */
/* WARNING: Removing unreachable block (ram,0x02129cbc) */
/* WARNING: Removing unreachable block (ram,0x02129cc0) */
/* WARNING: Removing unreachable block (ram,0x02129ccc) */
/* WARNING: Removing unreachable block (ram,0x02129cd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02129a8c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xb3c5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3c5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = iStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar11 = *(int *)(iVar1 + 8);
    uVar12 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar11,uVar12,&uStack_30,uVar7,0,0);
    return;
  }
  iVar1 = FUN_02127488(param_1);
  if (iVar1 == 0) {
    return;
  }
  pcVar9 = (char *)(_UNK_0212a2ec + 0x2129b14);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212a2f0 + 0x2129b28));
    func_0x01384978(*(undefined4 *)(_UNK_0212a2f4 + 0x2129b34));
    func_0x01384978(*(undefined4 *)(_UNK_0212a2f8 + 0x2129b40));
    func_0x01384978(*(undefined4 *)(_UNK_0212a2fc + 0x2129b4c));
    func_0x01384978(*(undefined4 *)(_UNK_0212a300 + 0x2129b58));
    func_0x01384978(*(undefined4 *)(_UNK_0212a304 + 0x2129b64));
    func_0x01384978(*(undefined4 *)(_UNK_0212a308 + 0x2129b70));
    func_0x01384978(*(undefined4 *)(_UNK_0212a30c + 0x2129b7c));
    func_0x01384978(*(undefined4 *)(_UNK_0212a310 + 0x2129b88));
    func_0x01384978(*(undefined4 *)(_UNK_0212a314 + 0x2129b94));
    func_0x01384978(*(undefined4 *)(_UNK_0212a318 + 0x2129ba0));
    func_0x01384978(*(undefined4 *)(_UNK_0212a31c + 0x2129bac));
    func_0x01384978(*(undefined4 *)(_UNK_0212a320 + 0x2129bb8));
    func_0x01384978(*(undefined4 *)(_UNK_0212a324 + 0x2129bc4));
    func_0x01384978(*(undefined4 *)(_UNK_0212a328 + 0x2129bd0));
    func_0x01384978(*(undefined4 *)(_UNK_0212a32c + 0x2129bdc));
    *pcVar9 = '\x01';
  }
  iStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0xb3c6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3c6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar1,param_1,0xffffffff,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar11) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar11,0);
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x28);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    piVar2 = *(int **)(_UNK_0212a330 + 0x2129dac);
    while( true ) {
      iVar11 = *(int *)(param_1 + 0x1c);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(iVar11 + 0x1c);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar11 + 0xc) <= iVar1) break;
      iVar11 = func_0x01384be4(**(undefined4 **)(_UNK_0212a334 + 0x2129de0));
      func_0x021298ac();
      uVar12 = *(undefined4 *)(param_1 + 0x1c);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x02129568(iVar11,uVar12,iVar1);
      iVar4 = *(int *)(param_1 + 0x10);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar4 + 8);
      uVar14 = *(uint *)(iVar4 + 0xc);
      iVar13 = *piVar2;
      *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      if (uVar14 < *(uint *)(iVar8 + 0xc)) {
        *(uint *)(iVar4 + 0xc) = uVar14 + 1;
        *(int *)(iVar8 + uVar14 * 4 + 0x10) = iVar11;
      }
      else {
        func_0x0328f170(iVar4,iVar11,
                        *(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
      }
      iVar1 = iVar1 + 1;
    }
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar14 = 0xffffffff;
  if (0 < *(int *)(iVar1 + 0xc)) {
    piVar2 = (int *)func_0x021566f4(0);
    iVar1 = FUN_02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar12 = FUN_0210e2d4(iVar1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    piVar10 = *(int **)(_UNK_0212a338 + 0x2129d5c);
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    iVar11 = *piVar10;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar11) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x118);
          goto LAB_02129e8c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar11,0xb);
LAB_02129e8c:
    iVar1 = (*(code *)*puVar3)(piVar2,uVar12,puVar3[1]);
    if (iVar1 != 0) {
      piVar2 = (int *)func_0x021566f4(0);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar11 = *piVar2;
      iVar4 = *piVar10;
      uVar5 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar10[-1] == iVar4) {
            puVar3 = (undefined4 *)(iVar11 + *piVar10 * 8 + 0x208);
            goto LAB_02129f14;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar4,0x29);
LAB_02129f14:
      iVar11 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x02f7c01c(*(undefined4 *)(iVar11 + 0x20),*(undefined4 *)(iVar1 + 0x10),0,
                              **(undefined4 **)(_UNK_0212a33c + 0x2129f44));
      iVar8 = *(int *)(param_1 + 0x1c);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0x20);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      if (iVar4 < *(int *)(iVar8 + 0xc)) {
        iVar8 = *(int *)(param_1 + 0x1c);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar8 = *(int *)(iVar8 + 0x20);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uVar14 = func_0x0364c9b8(iVar8,iVar4,**(undefined4 **)(_UNK_0212a340 + 0x2129fb0));
        iVar11 = *(int *)(iVar11 + 0x20);
        uVar12 = *(undefined4 *)(iVar1 + 0x10);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        func_0x0345f108(iVar11,uVar12,iVar4 + 1,**(undefined4 **)(_UNK_0212a344 + 0x2129fe4));
        if (uVar14 < 0x80000000) goto LAB_0212a1a8;
      }
    }
  }
  if ((*(int *)(param_1 + 0x20) == 0) ||
     (uVar14 = func_0x0215104c(*(int *)(param_1 + 0x20),0), 0x7fffffff < uVar14)) {
    piVar2 = *(int **)(_UNK_0212a348 + 0x212a020);
    iVar1 = *piVar2;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar2;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    uStack_34 = uVar14;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_30,iVar1,&iStack_28,**(undefined4 **)(_UNK_0212a34c + 0x212a060));
    iVar1 = 0;
    puVar3 = *(undefined4 **)(_UNK_0212a350 + 0x212a078);
    piVar2 = *(int **)(_UNK_0212a354 + 0x212a080);
    while( true ) {
      iVar11 = *(int *)(param_1 + 0x1c);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(iVar11 + 0x1c);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar4 = iStack_28;
      if (*(int *)(iVar11 + 0xc) <= iVar1) break;
      iVar11 = *(int *)(param_1 + 0x1c);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x03003b84(*(undefined4 *)(iVar11 + 0x28),iVar1,2,*puVar3);
      iVar11 = iStack_28;
      if (0 < iVar4) {
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar11 + 8);
        uVar14 = *(uint *)(iVar11 + 0xc);
        iVar8 = *piVar2;
        *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        if (uVar14 < *(uint *)(iVar4 + 0xc)) {
          *(uint *)(iVar11 + 0xc) = uVar14 + 1;
          *(int *)(iVar4 + uVar14 * 4 + 0x10) = iVar1;
        }
        else {
          func_0x0325970c(iVar11,iVar1,
                          *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
        }
      }
      iVar1 = iVar1 + 1;
    }
    uVar12 = func_0x01384be4(**(undefined4 **)(_UNK_0212a358 + 0x212a158));
    func_0x03a07058(uVar12,param_1,**(undefined4 **)(_UNK_0212a35c + 0x212a16c),0);
    uVar14 = func_0x02fbeea0(iVar4,uVar12,0,**(undefined4 **)(_UNK_0212a360 + 0x212a188));
    func_0x028c98a0(&uStack_30,0);
  }
LAB_0212a1a8:
  puVar3 = *(undefined4 **)(_UNK_0212a364 + 0x212a1b4);
  *(uint *)(param_1 + 0x14) = uVar14;
  iVar1 = func_0x01384be4(*puVar3);
  func_0x021298ac();
  uVar12 = *(undefined4 *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02129568(iVar1,uVar12,uVar14);
  iVar11 = *(int *)(param_1 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar11 + 8);
  uVar14 = *(uint *)(iVar11 + 0xc);
  piVar2 = *(int **)(_UNK_0212a368 + 0x212a214);
  *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
  iVar8 = *piVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  if (uVar14 < *(uint *)(iVar4 + 0xc)) {
    *(uint *)(iVar11 + 0xc) = uVar14 + 1;
    *(int *)(iVar4 + uVar14 * 4 + 0x10) = iVar1;
  }
  else {
    func_0x0328f170(iVar11,iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
  }
  return;
}



// ===== FAT.Merge.ItemEatComponent$$_InitEatGroup RVA 0x2119af8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02129af8(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar10 = (char *)(_UNK_0212a2ec + 0x2129b14);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212a2f0 + 0x2129b28));
    func_0x01384978(*(undefined4 *)(_UNK_0212a2f4 + 0x2129b34));
    func_0x01384978(*(undefined4 *)(_UNK_0212a2f8 + 0x2129b40));
    func_0x01384978(*(undefined4 *)(_UNK_0212a2fc + 0x2129b4c));
    func_0x01384978(*(undefined4 *)(_UNK_0212a300 + 0x2129b58));
    func_0x01384978(*(undefined4 *)(_UNK_0212a304 + 0x2129b64));
    func_0x01384978(*(undefined4 *)(_UNK_0212a308 + 0x2129b70));
    func_0x01384978(*(undefined4 *)(_UNK_0212a30c + 0x2129b7c));
    func_0x01384978(*(undefined4 *)(_UNK_0212a310 + 0x2129b88));
    func_0x01384978(*(undefined4 *)(_UNK_0212a314 + 0x2129b94));
    func_0x01384978(*(undefined4 *)(_UNK_0212a318 + 0x2129ba0));
    func_0x01384978(*(undefined4 *)(_UNK_0212a31c + 0x2129bac));
    func_0x01384978(*(undefined4 *)(_UNK_0212a320 + 0x2129bb8));
    func_0x01384978(*(undefined4 *)(_UNK_0212a324 + 0x2129bc4));
    func_0x01384978(*(undefined4 *)(_UNK_0212a328 + 0x2129bd0));
    func_0x01384978(*(undefined4 *)(_UNK_0212a32c + 0x2129bdc));
    *pcVar10 = '\x01';
  }
  iStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0xb3c6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3c6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar1,param_1,param_2,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar6) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar6,0);
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x28);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    piVar2 = *(int **)(_UNK_0212a330 + 0x2129dac);
    while( true ) {
      iVar6 = *(int *)(param_1 + 0x1c);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar6 + 0x1c);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar6 + 0xc) <= iVar1) break;
      iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_0212a334 + 0x2129de0));
      func_0x021298ac();
      uVar3 = *(undefined4 *)(param_1 + 0x1c);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x02129568(iVar6,uVar3,iVar1);
      iVar5 = *(int *)(param_1 + 0x10);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar5 + 8);
      uVar7 = *(uint *)(iVar5 + 0xc);
      iVar12 = *piVar2;
      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      if (uVar7 < *(uint *)(iVar9 + 0xc)) {
        *(uint *)(iVar5 + 0xc) = uVar7 + 1;
        *(int *)(iVar9 + uVar7 * 4 + 0x10) = iVar6;
      }
      else {
        func_0x0328f170(iVar5,iVar6,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38)
                       );
      }
      iVar1 = iVar1 + 1;
    }
    return;
  }
  if (-1 < (int)param_2) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if ((int)param_2 < *(int *)(iVar1 + 0xc)) goto LAB_0212a1a8;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar1 + 0xc)) {
    piVar2 = (int *)func_0x021566f4(0);
    iVar1 = FUN_02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = FUN_0210e2d4(iVar1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    piVar11 = *(int **)(_UNK_0212a338 + 0x2129d5c);
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    iVar6 = *piVar11;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar6) {
          puVar4 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x118);
          goto LAB_02129e8c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar6,0xb);
LAB_02129e8c:
    iVar1 = (*(code *)*puVar4)(piVar2,uVar3,puVar4[1]);
    if (iVar1 != 0) {
      piVar2 = (int *)func_0x021566f4(0);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar6 = *piVar2;
      iVar5 = *piVar11;
      uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar11[-1] == iVar5) {
            puVar4 = (undefined4 *)(iVar6 + *piVar11 * 8 + 0x208);
            goto LAB_02129f14;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar5,0x29);
LAB_02129f14:
      iVar6 = (*(code *)*puVar4)(piVar2,puVar4[1]);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x02f7c01c(*(undefined4 *)(iVar6 + 0x20),*(undefined4 *)(iVar1 + 0x10),0,
                              **(undefined4 **)(_UNK_0212a33c + 0x2129f44));
      iVar9 = *(int *)(param_1 + 0x1c);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0x20);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      if (iVar5 < *(int *)(iVar9 + 0xc)) {
        iVar9 = *(int *)(param_1 + 0x1c);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        iVar9 = *(int *)(iVar9 + 0x20);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        param_2 = func_0x0364c9b8(iVar9,iVar5,**(undefined4 **)(_UNK_0212a340 + 0x2129fb0));
        iVar6 = *(int *)(iVar6 + 0x20);
        uVar3 = *(undefined4 *)(iVar1 + 0x10);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0345f108(iVar6,uVar3,iVar5 + 1,**(undefined4 **)(_UNK_0212a344 + 0x2129fe4));
        if (param_2 < 0x80000000) goto LAB_0212a1a8;
      }
    }
  }
  if ((*(int *)(param_1 + 0x20) == 0) ||
     (param_2 = func_0x0215104c(*(int *)(param_1 + 0x20),0), 0x7fffffff < param_2)) {
    piVar2 = *(int **)(_UNK_0212a348 + 0x212a020);
    iVar1 = *piVar2;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar2;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_30,iVar1,&iStack_28,**(undefined4 **)(_UNK_0212a34c + 0x212a060));
    iVar1 = 0;
    puVar4 = *(undefined4 **)(_UNK_0212a350 + 0x212a078);
    piVar2 = *(int **)(_UNK_0212a354 + 0x212a080);
    while( true ) {
      iVar6 = *(int *)(param_1 + 0x1c);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar6 + 0x1c);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar5 = iStack_28;
      if (*(int *)(iVar6 + 0xc) <= iVar1) break;
      iVar6 = *(int *)(param_1 + 0x1c);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x03003b84(*(undefined4 *)(iVar6 + 0x28),iVar1,2,*puVar4);
      iVar6 = iStack_28;
      if (0 < iVar5) {
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar6 + 8);
        uVar7 = *(uint *)(iVar6 + 0xc);
        iVar9 = *piVar2;
        *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        if (uVar7 < *(uint *)(iVar5 + 0xc)) {
          *(uint *)(iVar6 + 0xc) = uVar7 + 1;
          *(int *)(iVar5 + uVar7 * 4 + 0x10) = iVar1;
        }
        else {
          func_0x0325970c(iVar6,iVar1,
                          *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
        }
      }
      iVar1 = iVar1 + 1;
    }
    uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_0212a358 + 0x212a158));
    func_0x03a07058(uVar3,param_1,**(undefined4 **)(_UNK_0212a35c + 0x212a16c),0);
    param_2 = func_0x02fbeea0(iVar5,uVar3,0,**(undefined4 **)(_UNK_0212a360 + 0x212a188));
    func_0x028c98a0(&uStack_30,0);
  }
LAB_0212a1a8:
  puVar4 = *(undefined4 **)(_UNK_0212a364 + 0x212a1b4);
  *(uint *)(param_1 + 0x14) = param_2;
  iVar1 = func_0x01384be4(*puVar4);
  func_0x021298ac();
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02129568(iVar1,uVar3,param_2);
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar6 + 8);
  uVar7 = *(uint *)(iVar6 + 0xc);
  piVar2 = *(int **)(_UNK_0212a368 + 0x212a214);
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
  iVar9 = *piVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  if (uVar7 < *(uint *)(iVar5 + 0xc)) {
    *(uint *)(iVar6 + 0xc) = uVar7 + 1;
    *(int *)(iVar5 + uVar7 * 4 + 0x10) = iVar1;
  }
  else {
    func_0x0328f170(iVar6,iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
  }
  return;
}



// ===== FAT.Merge.ItemEatComponent$$OnSerialize RVA 0x211a36c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0212a36c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar4 = (char *)(_UNK_0212a604 + 0x212a388);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212a608 + 0x212a39c));
    func_0x01384978(*(undefined4 *)(_UNK_0212a60c + 0x212a3a8));
    func_0x01384978(*(undefined4 *)(_UNK_0212a610 + 0x212a3b4));
    func_0x01384978(*(undefined4 *)(_UNK_0212a614 + 0x212a3c0));
    func_0x01384978(*(undefined4 *)(_UNK_0212a618 + 0x212a3cc));
    func_0x01384978(*(undefined4 *)(_UNK_0212a61c + 0x212a3d8));
    func_0x01384978(*(undefined4 *)(_UNK_0212a620 + 0x212a3e4));
    func_0x01384978(*(undefined4 *)(_UNK_0212a624 + 0x212a3f0));
    *pcVar4 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar2 = func_0x0229f06c(0xb3cc,0);
  if (iVar2 == 0) {
    FUN_02123514(param_1,param_2);
    uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_0212a628 + 0x212a478));
    func_0x0179f49c(uVar3,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(param_2 + 0x3c) = uVar3;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a200(&uStack_58,iVar2,**(undefined4 **)(_UNK_0212a62c + 0x212a4c0));
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    puVar6 = *(undefined4 **)(_UNK_0212a630 + 0x212a4ec);
    puVar5 = *(undefined4 **)(_UNK_0212a634 + 0x212a4f4);
    while (iVar2 = func_0x03f9975c(&uStack_40,*puVar6), uVar3 = uStack_34, iVar2 != 0) {
      iVar2 = *(int *)(param_2 + 0x3c);
      uVar1 = (undefined4)uStack_30;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0345eca8(iVar2,uVar3,uVar1,*puVar5);
    }
    func_0x03f9989c(&uStack_40,**(undefined4 **)(_UNK_0212a638 + 0x212a550));
    iVar2 = *(int *)(param_2 + 0x3c);
    uVar3 = *(undefined4 *)(param_1 + 0x14);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar2 + 0x20) = uVar3;
  }
  else {
    iVar2 = func_0x0229f13c(0xb3cc,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.ItemEatComponent$$OnDeserialize RVA 0x211a644 =====

/* WARNING: Removing unreachable block (ram,0x0212a924) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0212a644(int param_1,int param_2)

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
  undefined4 *puVar11;
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
  
  pcVar7 = (char *)(_UNK_0212a9fc + 0x212a660);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212aa00 + 0x212a674));
    func_0x01384978(*(undefined4 *)(_UNK_0212aa04 + 0x212a680));
    func_0x01384978(*(undefined4 *)(_UNK_0212aa08 + 0x212a68c));
    func_0x01384978(*(undefined4 *)(_UNK_0212aa0c + 0x212a698));
    func_0x01384978(*(undefined4 *)(_UNK_0212aa10 + 0x212a6a4));
    func_0x01384978(*(undefined4 *)(_UNK_0212aa14 + 0x212a6b0));
    func_0x01384978(*(undefined4 *)(_UNK_0212aa18 + 0x212a6bc));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb3cd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3cd,0);
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
    return;
  }
  FUN_021237d4(param_1,param_2);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(param_2 + 0x3c) == 0) {
    return;
  }
  FUN_02129af8(param_1,*(undefined4 *)(*(int *)(param_2 + 0x3c) + 0x20));
  iVar1 = *(int *)(param_2 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0345f9b0(iVar1,**(undefined4 **)(_UNK_0212aa1c + 0x212a76c));
  piVar10 = *(int **)(_UNK_0212aa20 + 0x212a788);
  puVar11 = *(undefined4 **)(_UNK_0212aa24 + 0x212a790);
  do {
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
          goto LAB_0212a7e8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_0212a7e8:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_0212aa28 + 0x212a81c)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_0212a864;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0212aa28 + 0x212a81c),0);
LAB_0212a864:
    (*(code *)*puVar3)(&uStack_30,piVar2,puVar3[1]);
    uVar6 = uStack_2c;
    uVar9 = uStack_30;
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59d7c(iVar1,uVar9,uVar6,*puVar11);
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_0212aa2c + 0x212a8c4)) {
          puVar11 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
          goto LAB_0212a90c;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar4 != 0);
    }
    puVar11 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0212aa2c + 0x212a8c4),0);
LAB_0212a90c:
    (*(code *)*puVar11)(piVar2,puVar11[1]);
  }
  return;
}



// ===== FAT.Merge.ItemEatComponent$$GetItemCountInStomach RVA 0x211aa34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0212aa34(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
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
  undefined4 uStack_28;
  undefined4 auStack_1c [2];
  
  pcVar8 = (char *)(_UNK_0212aad0 + 0x212aa4c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212aad4 + 0x212aa60));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e9b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e9b,0);
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
    uVar9 = func_0x0245498c(&uStack_38,0,0);
    return uVar9;
  }
  iVar1 = **(int **)(_UNK_0212aad8 + 0x212aac4);
  piVar2 = *(int **)(param_1 + 0x18);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x0140024c(iVar1);
  }
  auStack_1c[0] = 0;
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = **(int **)(iVar1 + 0x1c);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0(iVar1);
  }
  iVar7 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar1) {
        puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xf8);
        goto LAB_02f7c0c8;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar1,7);
LAB_02f7c0c8:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,auStack_1c,puVar3[1]);
  uVar9 = 0;
  if (iVar1 != 0) {
    uVar9 = auStack_1c[0];
  }
  return uVar9;
}



// ===== FAT.Merge.ItemEatComponent$$GetEatItemNeeded RVA 0x211aadc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0212aadc(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_0212ab88 + 0x212aaf4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212ab8c + 0x212ab08));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x9fca,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9fca,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0228b4f4 + 0x228b400);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0228b4f8 + 0x228b414),param_1,param_2,0);
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
    uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0228b4fc + 0x228b4e4));
    return uVar5;
  }
  iVar1 = func_0x03003ef0(*(undefined4 *)(param_1 + 0x10),param_2,2,
                          **(undefined4 **)(_UNK_0212ab90 + 0x212ab70));
  if (iVar1 != 0) {
    uVar5 = *(undefined4 *)(iVar1 + 8);
  }
  return uVar5;
}



// ===== FAT.Merge.ItemEatComponent$$GetMaxEatProgress RVA 0x211ab94 =====

void FUN_0212ab94(undefined4 param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_2c;
  undefined4 uStack_28;
  
  uStack_28 = 0;
  iStack_2c = 0;
  iVar2 = func_0x0229f06c(0xb3ce,0);
  if (iVar2 == 0) {
    *param_2 = 0;
    func_0x0212aca8(param_1,0,param_3,param_4);
    iVar2 = FUN_0212998c(param_1);
    if (1 < iVar2) {
      iVar2 = 1;
      do {
        func_0x0212aca8(param_1,iVar2,&uStack_28,&iStack_2c);
        uVar1 = uStack_28;
        iVar5 = iStack_2c;
        iVar3 = func_0x01457ae8(iStack_2c * 10000,uStack_28);
        iVar4 = func_0x01457ae8(*param_4 * 10000,*param_3);
        if (iVar4 < iVar3) {
          *param_2 = iVar2;
          *param_3 = uVar1;
          *param_4 = iVar5;
        }
        iVar5 = FUN_0212998c(param_1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar5);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xb3ce,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x021a7d0c(iVar2,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.Merge.ItemEatComponent$$GetEatProgress RVA 0x211aca8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0212aca8(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar4 = (char *)(_UNK_0212aeec + 0x212acc8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212aef0 + 0x212ace0));
    func_0x01384978(*(undefined4 *)(_UNK_0212aef4 + 0x212acec));
    func_0x01384978(*(undefined4 *)(_UNK_0212aef8 + 0x212acf8));
    func_0x01384978(*(undefined4 *)(_UNK_0212aefc + 0x212ad04));
    func_0x01384978(*(undefined4 *)(_UNK_0212af00 + 0x212ad10));
    func_0x01384978(*(undefined4 *)(_UNK_0212af04 + 0x212ad1c));
    func_0x01384978(*(undefined4 *)(_UNK_0212af08 + 0x212ad28));
    *pcVar4 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0xb3cf,0);
  if (iVar1 == 0) {
    *param_3 = 0;
    *param_4 = 0;
    iVar1 = FUN_0212aadc(param_1,param_2);
    if (iVar1 != 0) {
      func_0x03d5a200(&uStack_58,iVar1,**(undefined4 **)(_UNK_0212af0c + 0x212add4));
      uStack_40 = uStack_58;
      uStack_3c = uStack_54;
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      puVar6 = *(undefined4 **)(_UNK_0212af10 + 0x212ae00);
      puVar5 = *(undefined4 **)(_UNK_0212af14 + 0x212ae08);
      while (iVar1 = func_0x03f9975c(&uStack_40,*puVar6), iVar1 != 0) {
        uVar2 = *puVar5;
        *param_3 = *param_3 + (int)uStack_30;
        iVar3 = *param_4;
        iVar1 = func_0x02f7c01c(*(undefined4 *)(param_1 + 0x18),uStack_34,0,uVar2);
        *param_4 = iVar1 + iVar3;
      }
      func_0x03f9989c(&uStack_40,**(undefined4 **)(_UNK_0212af18 + 0x212ae58));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb3cf,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021964b0(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.Merge.ItemEatComponent$$OnPostAttach RVA 0x211af24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0212af24(int param_1)

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
  
  pcVar7 = (char *)(_UNK_0212b070 + 0x212af38);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212b074 + 0x212af4c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb3d0,0);
  if (iVar1 == 0) {
    piVar2 = (int *)func_0x021566f4(0);
    iVar1 = FUN_02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar9 = FUN_0210e2d4(iVar1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_0212b078 + 0x212afe8)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x110);
          goto LAB_0212b030;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0212b078 + 0x212afe8),10);
LAB_0212b030:
    iVar1 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar1 + 0x34);
    func_0x0212b07c(param_1);
    iVar1 = func_0x0229f06c(0x279,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = func_0x0229f13c(0x279,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb3d0,0);
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
  iVar8 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 2;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
  return;
}



// ===== FAT.Merge.ItemEatComponent$$_CreateRandomMethod RVA 0x211b07c =====

void FUN_0212b07c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb3d1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3d1,0);
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
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar1 + 0x24) != 1) {
    return;
  }
  iVar1 = FUN_02123568(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_02116f08(iVar1,0);
  iVar3 = FUN_02123568(param_1);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = FUN_0210e2d4(iVar3,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0214225c(iVar1,uVar4,0xd,0);
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  return;
}



// ===== FAT.Merge.ItemEatComponent$$EatItem RVA 0x211b15c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0212b15c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
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
  
  iVar1 = func_0x0229f06c(0x9e98,0);
  if (iVar1 == 0) {
    pcVar5 = (char *)(_UNK_0212b3a8 + 0x212b1d8);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0212b3ac + 0x212b1ec));
      func_0x01384978(*(undefined4 *)(_UNK_0212b3b0 + 0x212b1f8));
      *pcVar5 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x9e99,0);
    if (iVar1 == 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
        iVar1 = FUN_02116ae0(0,0);
        if (iVar1 == 0) {
          return 0;
        }
        func_0x01384bf0();
      }
      else {
        iVar1 = FUN_02116ae0(param_2,0);
        if (iVar1 == 0) {
          return 0;
        }
      }
      uVar3 = 0;
      uVar6 = FUN_0210e2d4(param_2,0);
      iVar1 = func_0x0212b420(param_1,uVar6);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0x18);
        if (param_2 == 0) {
          func_0x01384bf0();
          uVar6 = FUN_0210e2d4(0,0);
          uVar3 = *(undefined4 *)(param_1 + 0x18);
          func_0x01384bf0();
        }
        else {
          uVar6 = FUN_0210e2d4(param_2,0);
          uVar3 = *(undefined4 *)(param_1 + 0x18);
        }
        uVar2 = FUN_0210e2d4(param_2,0);
        iVar4 = func_0x02f7c01c(uVar3,uVar2,0,**(undefined4 **)(_UNK_0212b3b4 + 0x212b310));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03d59d54(iVar1,uVar6,iVar4 + 1,**(undefined4 **)(_UNK_0212b3b8 + 0x212b33c));
        iVar1 = FUN_02123568(param_1);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = FUN_0210cd28(iVar1,0);
        uVar6 = FUN_02123568(param_1);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        FUN_020ec120(iVar1,uVar6,0);
        func_0x0212b814(param_1);
        uVar3 = 1;
      }
      return uVar3;
    }
    iVar1 = func_0x0229f13c(0x9e99,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e98,0);
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
  uVar6 = func_0x0245496c(&uStack_38,0,0);
  return uVar6;
}



// ===== FAT.Merge.ItemEatComponent$$_EatItem RVA 0x211b1c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0212b1c0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
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
  
  pcVar5 = (char *)(_UNK_0212b3a8 + 0x212b1d8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212b3ac + 0x212b1ec));
    func_0x01384978(*(undefined4 *)(_UNK_0212b3b0 + 0x212b1f8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e99,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
      iVar1 = FUN_02116ae0(0,0);
      if (iVar1 == 0) {
        return 0;
      }
      func_0x01384bf0();
    }
    else {
      iVar1 = FUN_02116ae0(param_2,0);
      if (iVar1 == 0) {
        return 0;
      }
    }
    uVar3 = 0;
    uVar6 = FUN_0210e2d4(param_2,0);
    iVar1 = func_0x0212b420(param_1,uVar6);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x18);
      if (param_2 == 0) {
        func_0x01384bf0();
        uVar6 = FUN_0210e2d4(0,0);
        uVar3 = *(undefined4 *)(param_1 + 0x18);
        func_0x01384bf0();
      }
      else {
        uVar6 = FUN_0210e2d4(param_2,0);
        uVar3 = *(undefined4 *)(param_1 + 0x18);
      }
      uVar2 = FUN_0210e2d4(param_2,0);
      iVar4 = func_0x02f7c01c(uVar3,uVar2,0,**(undefined4 **)(_UNK_0212b3b4 + 0x212b310));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d54(iVar1,uVar6,iVar4 + 1,**(undefined4 **)(_UNK_0212b3b8 + 0x212b33c));
      iVar1 = FUN_02123568(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_0210cd28(iVar1,0);
      uVar6 = FUN_02123568(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_020ec120(iVar1,uVar6,0);
      func_0x0212b814(param_1);
      uVar3 = 1;
    }
    return uVar3;
  }
  iVar1 = func_0x0229f13c(0x9e99,0);
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
  uVar6 = func_0x0245496c(&uStack_38,0,0);
  return uVar6;
}



// ===== FAT.Merge.ItemEatComponent$$CanEatItemId RVA 0x211b3bc =====

/* WARNING: Possible PIC construction at 0x0212b538: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0212b53c) */
/* WARNING: Removing unreachable block (ram,0x0212b674) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0212b3bc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  undefined4 unaff_r5;
  int unaff_r6;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *unaff_r7;
  undefined4 unaff_r8;
  undefined4 *puVar7;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 *puVar8;
  undefined4 unaff_lr;
  undefined1 auStack_70 [4];
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  iVar1 = func_0x0229f06c(0x9e61,0);
  if (iVar1 == 0) {
    pcVar5 = (char *)(_UNK_0212b7bc + 0x212b43c);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0212b7c0 + 0x212b450));
      func_0x01384978(*(undefined4 *)(_UNK_0212b7c4 + 0x212b45c));
      func_0x01384978(*(undefined4 *)(_UNK_0212b7c8 + 0x212b468));
      func_0x01384978(*(undefined4 *)(_UNK_0212b7cc + 0x212b474));
      func_0x01384978(*(undefined4 *)(_UNK_0212b7d0 + 0x212b480));
      func_0x01384978(*(undefined4 *)(_UNK_0212b7d4 + 0x212b48c));
      func_0x01384978(*(undefined4 *)(_UNK_0212b7d8 + 0x212b498));
      func_0x01384978(*(undefined4 *)(_UNK_0212b7dc + 0x212b4a4));
      func_0x01384978(*(undefined4 *)(_UNK_0212b7e0 + 0x212b4b0));
      func_0x01384978(*(undefined4 *)(_UNK_0212b7e4 + 0x212b4bc));
      func_0x01384978(*(undefined4 *)(_UNK_0212b7e8 + 0x212b4c8));
      *pcVar5 = '\x01';
    }
    uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    unaff_r7 = &uStack_50;
    uStack_38 = 0;
    uStack_50 = 0;
    uStack_40 = 0;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = iStack_44;
    iVar1 = func_0x0229f06c(0x9e62,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_68,iVar1,**(undefined4 **)(_UNK_0212b7ec + 0x212b564));
      uStack_38 = uStack_68;
      uStack_34 = uStack_64;
      uStack_30 = uStack_60;
      iStack_2c = iStack_5c;
      uStack_6c = 0;
      puVar7 = *(undefined4 **)(_UNK_0212b7f0 + 0x212b590);
      puVar8 = *(undefined4 **)(_UNK_0212b7f4 + 0x212b598);
      do {
        iVar3 = func_0x03f5f428(&uStack_38,**(undefined4 **)(_UNK_0212b800 + 0x212b5a0));
        iVar1 = iStack_2c;
        if (iVar3 == 0) {
          iVar1 = 8;
          break;
        }
        if (iStack_2c == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03d5a200(&uStack_68,iVar1,**(undefined4 **)(_UNK_0212b7f8 + 0x212b5dc));
        uStack_50 = uStack_68;
        uStack_4c = uStack_64;
        uStack_48 = uStack_60;
        iStack_44 = iStack_5c;
        uStack_40 = uStack_58;
        do {
          do {
            iVar1 = func_0x03f9975c(unaff_r7,*puVar7);
            if (iVar1 == 0) {
              iVar1 = 3;
              goto LAB_0212b658;
            }
          } while (iStack_44 != param_2);
          iVar1 = (int)uStack_40;
          iVar3 = func_0x02f7c01c(*(undefined4 *)(param_1 + 0x18),param_2,0,*puVar8);
        } while (iVar1 <= iVar3);
        iVar1 = 7;
        uStack_6c = 1;
LAB_0212b658:
        func_0x03f9989c(unaff_r7,**(undefined4 **)(_UNK_0212b7fc + 0x212b664));
      } while (iVar1 == 3 || iVar1 == 0);
      func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_0212b804 + 0x212b6c4));
      return uStack_6c & iVar1 == 7;
    }
    iVar1 = func_0x0229f13c(0x9e62,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x212b53c;
    unaff_r4 = param_2;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_70;
  }
  else {
    iVar1 = func_0x0229f13c(0x9e61,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 **)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
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
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
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
  func_0x0245495c(iVar3,uVar6,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
  uVar2 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x38),0,0);
  return uVar2;
}



// ===== FAT.Merge.ItemEatComponent$$_CanEatItem RVA 0x211b420 =====

/* WARNING: Removing unreachable block (ram,0x0212b674) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0212b420(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar3 = (char *)(_UNK_0212b7bc + 0x212b43c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212b7c0 + 0x212b450));
    func_0x01384978(*(undefined4 *)(_UNK_0212b7c4 + 0x212b45c));
    func_0x01384978(*(undefined4 *)(_UNK_0212b7c8 + 0x212b468));
    func_0x01384978(*(undefined4 *)(_UNK_0212b7cc + 0x212b474));
    func_0x01384978(*(undefined4 *)(_UNK_0212b7d0 + 0x212b480));
    func_0x01384978(*(undefined4 *)(_UNK_0212b7d4 + 0x212b48c));
    func_0x01384978(*(undefined4 *)(_UNK_0212b7d8 + 0x212b498));
    func_0x01384978(*(undefined4 *)(_UNK_0212b7dc + 0x212b4a4));
    func_0x01384978(*(undefined4 *)(_UNK_0212b7e0 + 0x212b4b0));
    func_0x01384978(*(undefined4 *)(_UNK_0212b7e4 + 0x212b4bc));
    func_0x01384978(*(undefined4 *)(_UNK_0212b7e8 + 0x212b4c8));
    *pcVar3 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  iStack_2c = iStack_44;
  iVar1 = func_0x0229f06c(0x9e62,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_68,iVar1,**(undefined4 **)(_UNK_0212b7ec + 0x212b564));
    uStack_38 = uStack_68;
    uStack_34 = uStack_64;
    uStack_30 = uStack_60;
    iStack_2c = iStack_5c;
    uStack_6c = 0;
    puVar4 = *(undefined4 **)(_UNK_0212b7f0 + 0x212b590);
    puVar5 = *(undefined4 **)(_UNK_0212b7f4 + 0x212b598);
    do {
      iVar2 = func_0x03f5f428(&uStack_38,**(undefined4 **)(_UNK_0212b800 + 0x212b5a0));
      iVar1 = iStack_2c;
      if (iVar2 == 0) {
        iVar1 = 8;
        break;
      }
      if (iStack_2c == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d5a200(&uStack_68,iVar1,**(undefined4 **)(_UNK_0212b7f8 + 0x212b5dc));
      uStack_50 = uStack_68;
      uStack_4c = uStack_64;
      uStack_48 = uStack_60;
      iStack_44 = iStack_5c;
      uStack_40 = uStack_58;
      do {
        do {
          iVar1 = func_0x03f9975c(&uStack_50,*puVar4);
          if (iVar1 == 0) {
            iVar1 = 3;
            goto LAB_0212b658;
          }
        } while (iStack_44 != param_2);
        iVar1 = (int)uStack_40;
        iVar2 = func_0x02f7c01c(*(undefined4 *)(param_1 + 0x18),param_2,0,*puVar5);
      } while (iVar1 <= iVar2);
      iVar1 = 7;
      uStack_6c = 1;
LAB_0212b658:
      func_0x03f9989c(&uStack_50,**(undefined4 **)(_UNK_0212b7fc + 0x212b664));
    } while (iVar1 == 3 || iVar1 == 0);
    func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_0212b804 + 0x212b6c4));
    uStack_6c = uStack_6c & iVar1 == 7;
  }
  else {
    iVar1 = func_0x0229f13c(0x9e62,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_6c = func_0x02179234(iVar1,param_1,param_2,0);
  }
  return uStack_6c;
}



// ===== FAT.Merge.ItemEatComponent$$_TryFinishEat RVA 0x211b814 =====

/* WARNING: Removing unreachable block (ram,0x0212ba2c) */
/* WARNING: Removing unreachable block (ram,0x0212ba38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0212b814(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar7 = (char *)(_UNK_0212bc00 + 0x212b82c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212bc04 + 0x212b840));
    func_0x01384978(*(undefined4 *)(_UNK_0212bc08 + 0x212b84c));
    func_0x01384978(*(undefined4 *)(_UNK_0212bc0c + 0x212b858));
    func_0x01384978(*(undefined4 *)(_UNK_0212bc10 + 0x212b864));
    func_0x01384978(*(undefined4 *)(_UNK_0212bc14 + 0x212b870));
    func_0x01384978(*(undefined4 *)(_UNK_0212bc18 + 0x212b87c));
    func_0x01384978(*(undefined4 *)(_UNK_0212bc1c + 0x212b888));
    func_0x01384978(*(undefined4 *)(_UNK_0212bc20 + 0x212b894));
    func_0x01384978(*(undefined4 *)(_UNK_0212bc24 + 0x212b8a0));
    func_0x01384978(*(undefined4 *)(_UNK_0212bc28 + 0x212b8ac));
    *pcVar7 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  iStack_2c = iStack_44;
  iVar2 = func_0x0229f06c(0x9e9a,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_68,iVar2,**(undefined4 **)(_UNK_0212bc2c + 0x212b948));
    uStack_38 = uStack_68;
    uStack_34 = uStack_64;
    uStack_30 = uStack_60;
    iStack_2c = iStack_5c;
    puVar8 = *(undefined4 **)(_UNK_0212bc30 + 0x212b96c);
    do {
      iVar4 = func_0x03f5f428(&uStack_38,**(undefined4 **)(_UNK_0212bc34 + 0x212b974));
      iVar2 = iStack_2c;
      if (iVar4 == 0) {
        func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_0212bc4c + 0x212ba8c));
        goto LAB_0212ba94;
      }
      if (iStack_2c == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar2 + 8);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x03d5a200(&uStack_68,iVar4,**(undefined4 **)(_UNK_0212bc38 + 0x212b9b8));
      uStack_50 = uStack_68;
      uStack_4c = uStack_64;
      uStack_48 = uStack_60;
      iStack_44 = iStack_5c;
      uStack_40 = uStack_58;
      do {
        iVar4 = func_0x03f9975c(&uStack_50,*puVar8);
        if (iVar4 == 0) break;
        iVar1 = (int)uStack_40;
        iVar5 = FUN_0212aa34(param_1,iStack_44);
      } while (iVar1 <= iVar5);
      func_0x03f9989c(&uStack_50,**(undefined4 **)(_UNK_0212bc3c + 0x212ba1c));
    } while (iVar4 != 0);
    func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_0212bc40 + 0x212baa8));
    if (iVar2 == 0) {
LAB_0212ba94:
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar2 + 0xc);
      iVar2 = FUN_02123568(param_1);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = FUN_0210cd28(iVar2,0);
      uVar6 = FUN_02123568(param_1);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      FUN_020e56a0(iVar2,uVar6,uVar3,6,10,0);
      uVar3 = 1;
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x9e9a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x021742f8(iVar2,param_1,0);
  }
  return uVar3;
}



// ===== FAT.Merge.ItemEatComponent$$.ctor RVA 0x211bc54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0212bc54(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0212bd20 + 0x212bc68);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212bd24 + 0x212bc7c));
    func_0x01384978(*(undefined4 *)(_UNK_0212bd28 + 0x212bc88));
    func_0x01384978(*(undefined4 *)(_UNK_0212bd2c + 0x212bc94));
    func_0x01384978(*(undefined4 *)(_UNK_0212bd30 + 0x212bca0));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0212bd34 + 0x212bcb4));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_0212bd38 + 0x212bcc8));
  puVar2 = *(undefined4 **)(_UNK_0212bd3c + 0x212bcdc);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03d59324(uVar1,**(undefined4 **)(_UNK_0212bd40 + 0x212bcf4));
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined2 *)(param_1 + 0xc) = 0x101;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemEatComponent$$<_InitEatGroup>b__22_0 RVA 0x211bd44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0212bd44(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_r2;
  int extraout_r3;
  int iVar5;
  char *pcVar6;
  longlong lVar7;
  
  pcVar6 = (char *)(_UNK_0212bdb4 + 0x212bd5c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212bdb8 + 0x212bd70));
    *pcVar6 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x1c);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar5 + 0x28);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar4 = **(undefined4 **)(_UNK_0212bdbc + 0x212bda8);
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(iVar5 + 0xc))) {
    iVar5 = *(int *)(iVar5 + 8);
    if (iVar5 == 0) {
      func_0x02457d50();
    }
    if (*(uint *)(iVar5 + 0xc) <= param_2) {
      func_0x02457d5c();
    }
    return *(int *)(iVar5 + param_2 * 4 + 0x10);
  }
  func_0x02457d6c(*(undefined4 *)(iRam0364ca44 + 0x364ca10));
  uVar1 = func_0x02457d58();
  uVar2 = func_0x02457d6c(*(undefined4 *)(iRam0364ca48 + 0x364ca24));
  func_0x047901e8(uVar1,uVar2,0);
  func_0x02457d90(uVar1,uVar4);
  lVar7 = func_0x02457d94();
  uVar3 = (uint)((ulonglong)lVar7 >> 0x20);
  pcVar6 = (char *)(iRam0364cb28 + 0x364ca68);
  if (*pcVar6 == '\0') {
    func_0x02457d54(*(undefined4 *)(iRam0364cb2c + 0x364ca80));
    *pcVar6 = '\x01';
  }
  if ((-1 < lVar7) && ((int)uVar3 < *(int *)((int)lVar7 + 0xc))) {
    func_0x03031db0(extraout_r2,**(undefined4 **)(iRam0364cb30 + 0x364cab0),
                    *(undefined4 *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0x80));
    iVar5 = *(int *)((int)lVar7 + 8);
    if (iVar5 == 0) {
      func_0x02457d50();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar3) {
      func_0x02457d5c();
    }
    iVar5 = iVar5 + uVar3 * 4;
    *(undefined4 *)(iVar5 + 0x10) = extraout_r2;
    return iVar5;
  }
  func_0x02457d6c(*(undefined4 *)(iRam0364cb34 + 0x364caf4));
  uVar4 = func_0x02457d58();
  uVar1 = func_0x02457d6c(*(undefined4 *)(iRam0364cb38 + 0x364cb08));
  func_0x047901e8(uVar4,uVar1,0);
  func_0x02457d90(uVar4,extraout_r3);
  func_0x02457d94();
  return 0;
}



// ===== FAT.Merge.ItemEatComponent$$<>iFixBaseProxy_OnStart RVA 0x211bdc0 =====

void thunk_FUN_0212774c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x294,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x294,0);
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



// ===== FAT.Merge.ItemEatComponent$$<>iFixBaseProxy_OnSerialize RVA 0x211bdc4 =====

void thunk_FUN_02123514(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5c7d,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5c7d,0);
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



// ===== FAT.Merge.ItemEatComponent$$<>iFixBaseProxy_OnDeserialize RVA 0x211bdc8 =====

void thunk_FUN_021237d4(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5c62,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5c62,0);
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



// ===== FAT.Merge.ItemEatComponent$$<>iFixBaseProxy_OnPostAttach RVA 0x211bdcc =====

void thunk_FUN_02127894(undefined4 param_1)

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


