/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MergeBoardMan$$RegisterMergeWorldEntry RVA 0x1da7f4c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01db7f4c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
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
  
  pcVar5 = (char *)(_UNK_01db80d4 + 0x1db7f64);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db80d8 + 0x1db7f78));
    func_0x01384978(*(undefined4 *)(_UNK_01db80dc + 0x1db7f84));
    func_0x01384978(*(undefined4 *)(_UNK_01db80e0 + 0x1db7f90));
    func_0x01384978(*(undefined4 *)(_UNK_01db80e4 + 0x1db7f9c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5baa,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5baa,0);
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
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbc0ec(param_1,*(undefined4 *)(param_2 + 0xc));
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 8);
  uVar7 = *(uint *)(iVar1 + 0xc);
  piVar2 = *(int **)(_UNK_01db80e8 + 0x1db8034);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar8 = *piVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  if (uVar7 < *(uint *)(iVar4 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar7 + 1;
    *(int *)(iVar4 + uVar7 * 4 + 0x10) = param_2;
  }
  else {
    func_0x0328f170(iVar1,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
  }
  if (*(int *)(**(int **)(_UNK_01db80ec + 0x1db8084) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01db80f0 + 0x1db80a0));
  uVar6 = *(undefined4 *)(param_2 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),uVar6,*(undefined4 *)(iVar1 + 0x14));
  return;
}



// ===== FAT.MergeBoardMan$$InitializeBoard RVA 0x1da8438 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x01db8a54) */
/* WARNING: Removing unreachable block (ram,0x01db8870) */
/* WARNING: Removing unreachable block (ram,0x01db8894) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01db8438(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
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
  int iStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_01db8a68 + 0x1db8458);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db8a6c + 0x1db8470));
    func_0x01384978(*(undefined4 *)(_UNK_01db8a70 + 0x1db847c));
    func_0x01384978(*(undefined4 *)(_UNK_01db8a74 + 0x1db8488));
    func_0x01384978(*(undefined4 *)(_UNK_01db8a78 + 0x1db8494));
    func_0x01384978(*(undefined4 *)(_UNK_01db8a7c + 0x1db84a0));
    func_0x01384978(*(undefined4 *)(_UNK_01db8a80 + 0x1db84ac));
    func_0x01384978(*(undefined4 *)(_UNK_01db8a84 + 0x1db84b8));
    func_0x01384978(*(undefined4 *)(_UNK_01db8a88 + 0x1db84c4));
    func_0x01384978(*(undefined4 *)(_UNK_01db8a8c + 0x1db84d0));
    func_0x01384978(*(undefined4 *)(_UNK_01db8a90 + 0x1db84dc));
    func_0x01384978(*(undefined4 *)(_UNK_01db8a94 + 0x1db84e8));
    *pcVar8 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_28 = 0;
  iStack_2c = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  iVar3 = func_0x0229f06c(0x601e,0);
  if (iVar3 == 0) {
    piVar9 = *(int **)(param_1 + 0x20);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar9;
    uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01db8a98 + 0x1db858c)) {
          puVar5 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xf8);
          goto LAB_01db85d4;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01db8a98 + 0x1db858c),7);
LAB_01db85d4:
    iVar3 = (*(code *)*puVar5)(piVar9,param_3,&iStack_28,puVar5[1]);
    if (iVar3 != 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x02139cf4(param_2,0);
      iVar3 = iStack_28;
      if ((iStack_28 == 0) && (func_0x01384bf0(), iStack_28 == 0)) goto LAB_01db897c;
      uVar10 = *(undefined4 *)(iStack_28 + 0x58);
      uVar11 = *(undefined4 *)(iVar3 + 0x24);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x020dabc4(iVar6,param_3,uVar11,uVar10,0);
      iVar3 = iStack_28;
      if ((iStack_28 == 0) && (func_0x01384bf0(), iStack_28 == 0)) goto LAB_01db897c;
      cVar1 = *(char *)(iStack_28 + 0x34);
      cVar2 = *(char *)(iVar3 + 0x2c);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x020daea4(iVar6,cVar2 != '\0',cVar1 != '\0',0);
      piVar9 = *(int **)(_UNK_01db8aac + 0x1db86c4);
      iVar3 = *piVar9;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar9;
      }
      iVar3 = **(int **)(iVar3 + 0x5c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c380(&uStack_38,iVar3,&iStack_2c,**(undefined4 **)(_UNK_01db8ab0 + 0x1db8700));
      func_0x01dbe040(param_1,param_3,iStack_2c);
      iVar3 = iStack_2c;
      if (iStack_2c == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_58,iVar3,**(undefined4 **)(_UNK_01db8ab4 + 0x1db8734));
      uStack_48 = uStack_58;
      uStack_44 = uStack_54;
      uStack_40 = uStack_50;
      uStack_3c = uStack_4c;
      puVar5 = *(undefined4 **)(_UNK_01db8ab8 + 0x1db8758);
      while (iVar3 = func_0x0145b12c(&uStack_48,*puVar5), uVar10 = uStack_3c, iVar3 != 0) {
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x020dbdd4(iVar6,uVar10,0);
      }
      func_0x0145b14c(&uStack_48,**(undefined4 **)(_UNK_01db8abc + 0x1db8860));
      func_0x028c98a0(&uStack_38,0);
      do {
        iVar3 = iStack_28;
        if (param_4 == 0) {
          if (param_5 != 0) {
            puVar5 = (undefined4 *)(param_5 + 0x6c);
            goto LAB_01db88c8;
          }
          uVar10 = 0;
        }
        else {
          if (iStack_28 == 0) {
            func_0x01384bf0();
          }
          puVar5 = (undefined4 *)(iVar3 + 0x50);
LAB_01db88c8:
          uVar10 = *puVar5;
        }
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x020eec64(iVar6,uVar10,0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x020dbfc8(iVar6,0);
        uVar4 = 1;
        if (param_4 == 0) goto LAB_01db8960;
        if (iStack_28 != 0) {
          uVar10 = *(undefined4 *)(iStack_28 + 0x20);
          iVar3 = iStack_28;
LAB_01db8940:
          func_0x01dbe4d4(param_1,iVar6,uVar10,*(undefined4 *)(iVar3 + 0x24),
                          *(undefined4 *)(iStack_28 + 0x58),0);
          goto LAB_01db8960;
        }
        func_0x01384bf0();
        iVar3 = iStack_28;
        uVar10 = uRam00000020;
        if ((iStack_28 != 0) || (func_0x01384bf0(), iStack_28 != 0)) goto LAB_01db8940;
LAB_01db897c:
        uVar12 = func_0x01384bf0();
        if ((int)((ulonglong)uVar12 >> 0x20) != 1) {
          func_0x028c98a0(&uStack_38,0);
          func_0x01459844((int)uVar12);
          func_0x01062280();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        piVar9 = (int *)func_0x0145b008((int)uVar12);
        iVar3 = *piVar9;
        func_0x0145b0f8();
        func_0x028c98a0(&uStack_38,0);
        if (iVar3 != 0) {
          func_0x01384bec(iVar3);
        }
      } while( true );
    }
    piVar9 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01db8a9c + 0x1db879c),1);
    uStack_58 = param_3;
    iVar3 = func_0x01384abc(**(undefined4 **)(_UNK_01db8aa0 + 0x1db87b4),&uStack_58);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar3 != 0) && (iVar6 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar9 + 0x20)), iVar6 == 0)
       ) {
      uVar10 = func_0x01384c10();
      func_0x01384aa0(uVar10,0);
    }
    if (piVar9[3] == 0) {
      func_0x01384bf4();
    }
    piVar9[4] = iVar3;
    if (*(int *)(**(int **)(_UNK_01db8aa4 + 0x1db8818) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar4 = 0;
    func_0x028c23bc(**(undefined4 **)(_UNK_01db8aa8 + 0x1db8840),piVar9,0);
  }
  else {
    iVar3 = func_0x0229f13c(0x601e,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0223a26c(iVar3,param_1,param_2,param_3,param_4,param_5,0);
  }
LAB_01db8960:
  return uVar4 & 1;
}



// ===== FAT.MergeBoardMan$$get_activeWorld RVA 0x1dab000 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dbb000(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x141,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x141,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0217a0d4 + 0x2179ff4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0217a0d8 + 0x217a008),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0217a0dc + 0x217a0c4));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.MergeBoardMan$$get_activeTracer RVA 0x1dab4bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dbb4bc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x949f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x949f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021b6424 + 0x21b6344);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021b6428 + 0x21b6358),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021b642c + 0x21b6414));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MergeBoardMan$$get_activeItem RVA 0x1dab510 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dbb510(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x94ae,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94ae,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02180ccc + 0x2180bec);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02180cd0 + 0x2180c00),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02180cd4 + 0x2180cbc));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x10);
}



// ===== FAT.MergeBoardMan$$get_recentActiveItem RVA 0x1dab564 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dbb564(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7647,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7647,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02180ccc + 0x2180bec);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02180cd0 + 0x2180c00),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02180cd4 + 0x2180cbc));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.MergeBoardMan$$get_globalData RVA 0x1dab5b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dbb5b8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9423,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9423,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02269728 + 0x2269648);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0226972c + 0x226965c),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02269730 + 0x2269718));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x2c);
}



// ===== FAT.MergeBoardMan$$RegisterGlobalMergeBonusHandler RVA 0x1dab60c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbb60c(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
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
  
  pcVar7 = (char *)(_UNK_01dbb728 + 0x1dbb624);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbb72c + 0x1dbb638));
    func_0x01384978(*(undefined4 *)(_UNK_01dbb730 + 0x1dbb644));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x16bb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x16bb,0);
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
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
    return;
  }
  iVar1 = func_0x02f6252c(*(undefined4 *)(param_1 + 0x30),param_2,
                          **(undefined4 **)(_UNK_01dbb734 + 0x1dbb6a4));
  if (param_2 == (int *)0x0 || iVar1 == 0) {
    return;
  }
  iVar1 = *param_2;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01dbb738 + 0x1dbb6cc)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
        goto LAB_01dbb714;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01dbb738 + 0x1dbb6cc),2);
LAB_01dbb714:
                    /* WARNING: Could not recover jumptable at 0x01dbb724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_2,puVar2[1]);
  return;
}



// ===== FAT.MergeBoardMan$$UnregisterGlobalMergeBonusHandler RVA 0x1dab73c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbb73c(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
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
  
  pcVar7 = (char *)(_UNK_01dbb868 + 0x1dbb754);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbb86c + 0x1dbb768));
    func_0x01384978(*(undefined4 *)(_UNK_01dbb870 + 0x1dbb774));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x736,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x736,0);
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
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03290900(iVar1,param_2,**(undefined4 **)(_UNK_01dbb874 + 0x1dbb7e4));
  if (param_2 == (int *)0x0 || iVar1 == 0) {
    return;
  }
  iVar1 = *param_2;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01dbb878 + 0x1dbb80c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd8);
        goto LAB_01dbb854;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01dbb878 + 0x1dbb80c),3);
LAB_01dbb854:
                    /* WARNING: Could not recover jumptable at 0x01dbb864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_2,puVar2[1]);
  return;
}



// ===== FAT.MergeBoardMan$$FillGlobalMergeBonusHandler RVA 0x1dab87c =====

/* WARNING: Removing unreachable block (ram,0x032907dc) */
/* WARNING: Removing unreachable block (ram,0x032907ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbb87c(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
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
  
  pcVar12 = (char *)(_UNK_01dbb924 + 0x1dbb894);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbb928 + 0x1dbb8a8));
    *pcVar12 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d57,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d57,0);
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
    func_0x01485278(&uStack_38,param_2,0);
    iVar11 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar1 == 0) {
      uVar8 = 2;
    }
    func_0x0245495c(iVar11,uVar13,&uStack_38,uVar8,0,0);
    return;
  }
  piVar10 = *(int **)(param_1 + 0x30);
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar6 = param_2[3];
  iVar1 = *(int *)(*(int *)(*(int *)(**(int **)(_UNK_01dbb92c + 0x1dbb918) + 0x10) + 0x60) + 0x48);
  pcVar12 = (char *)(_UNK_032908e8 + 0x3290348);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_032908ec + 0x3290360));
    func_0x01384978(*(undefined4 *)(_UNK_032908f0 + 0x329036c));
    *pcVar12 = '\x01';
  }
  if (piVar10 == (int *)0x0) {
    func_0x04839ccc(6,0);
  }
  if ((uint)param_2[3] < uVar6) {
    func_0x0484c9cc(0);
  }
  iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
  if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
    iVar11 = func_0x014001f0(iVar11);
  }
  piVar2 = (int *)func_0x01384ab8(piVar10,iVar11);
  if (piVar2 == (int *)0x0) {
    if ((int)uVar6 < param_2[3]) {
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x10);
      if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
        iVar11 = func_0x014001f0(iVar11);
      }
      iVar3 = *piVar10;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar11) {
            puVar4 = (undefined4 *)(iVar3 + *piVar2 * 8 + 0xc0);
            goto LAB_03290618;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar10,iVar11,0);
LAB_03290618:
      piVar10 = (int *)(*(code *)*puVar4)(piVar10,puVar4[1]);
      piVar2 = *(int **)(_UNK_032908f4 + 0x3290638);
      do {
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar11 = *piVar10;
        uVar7 = (uint)*(ushort *)(iVar11 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar11 + 0x58) + 4);
          do {
            if (piVar9[-1] == *piVar2) {
              puVar4 = (undefined4 *)(iVar11 + *piVar9 * 8 + 0xc0);
              goto LAB_03290690;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar10,*piVar2,0);
LAB_03290690:
        iVar11 = (*(code *)*puVar4)(piVar10,puVar4[1]);
        if (iVar11 == 0) goto LAB_0329075c;
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x98);
        if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
          iVar11 = func_0x014001f0(iVar11);
        }
        iVar3 = *piVar10;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar9[-1] == iVar11) {
              puVar4 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
              goto LAB_03290724;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar10,iVar11,0);
LAB_03290724:
        uVar13 = (*(code *)*puVar4)(piVar10,puVar4[1]);
        func_0x032900e0(param_2,uVar6,uVar13,
                        *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xa4));
        uVar6 = uVar6 + 1;
      } while( true );
    }
    func_0x032910b0(param_2,piVar10,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x20))
    ;
  }
  else {
    iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
    if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
      iVar11 = func_0x014001f0(iVar11);
    }
    iVar3 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar10[-1] == iVar11) {
          puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
          goto LAB_032904c0;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar11,0);
LAB_032904c0:
    iVar11 = (*(code *)*puVar4)(piVar2,puVar4[1]);
    if (0 < iVar11) {
      func_0x0328f754(param_2,param_2[3] + iVar11,
                      *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x3c));
      if ((int)uVar6 < param_2[3]) {
        uStack_30 = param_2[3] - uVar6;
        uStack_2c = 0;
        func_0x0484e904(param_2[2],uVar6,param_2[2],iVar11 + uVar6);
      }
      if (param_2 == piVar2) {
        uStack_2c = 0;
        uStack_30 = uVar6;
        func_0x0484e904(param_2[2],0,param_2[2],uVar6);
        uStack_30 = param_2[3] - uVar6;
        uStack_2c = 0;
        func_0x0484e904(param_2[2],iVar11 + uVar6,param_2[2],uVar6 << 1);
      }
      else {
        iVar3 = param_2[2];
        iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar5 = *piVar2;
        uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar1) {
              puVar4 = (undefined4 *)(iVar5 + *piVar10 * 8 + 0xe8);
              goto LAB_032905e4;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar1,5);
LAB_032905e4:
        (*(code *)*puVar4)(piVar2,iVar3,uVar6,puVar4[1]);
      }
      param_2[3] = param_2[3] + iVar11;
    }
  }
LAB_0329080c:
  param_2[4] = param_2[4] + 1;
  return;
LAB_0329075c:
  if (piVar10 != (int *)0x0) {
    iVar1 = *piVar10;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_032908f8 + 0x329077c)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_032907c4;
        }
        uVar6 = uVar6 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_032908f8 + 0x329077c),0);
LAB_032907c4:
    (*(code *)*puVar4)(piVar10,puVar4[1]);
  }
  goto LAB_0329080c;
}



// ===== FAT.MergeBoardMan$$RegisterGlobalSpawnBonusHandler RVA 0x1dab930 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbb930(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
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
  
  pcVar7 = (char *)(_UNK_01dbba4c + 0x1dbb948);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbba50 + 0x1dbb95c));
    func_0x01384978(*(undefined4 *)(_UNK_01dbba54 + 0x1dbb968));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x16b4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x16b4,0);
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
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
    return;
  }
  iVar1 = func_0x02f6252c(*(undefined4 *)(param_1 + 0x34),param_2,
                          **(undefined4 **)(_UNK_01dbba58 + 0x1dbb9c8));
  if (param_2 == (int *)0x0 || iVar1 == 0) {
    return;
  }
  iVar1 = *param_2;
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
  puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01dbba5c + 0x1dbb9f0),2);
LAB_01dbba38:
                    /* WARNING: Could not recover jumptable at 0x01dbba48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_2,puVar2[1]);
  return;
}



// ===== FAT.MergeBoardMan$$UnregisterGlobalSpawnBonusHandler RVA 0x1daba60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbba60(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
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
  
  pcVar7 = (char *)(_UNK_01dbbb8c + 0x1dbba78);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbbb90 + 0x1dbba8c));
    func_0x01384978(*(undefined4 *)(_UNK_01dbbb94 + 0x1dbba98));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x23f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x23f,0);
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
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03290900(iVar1,param_2,**(undefined4 **)(_UNK_01dbbb98 + 0x1dbbb08));
  if (param_2 == (int *)0x0 || iVar1 == 0) {
    return;
  }
  iVar1 = *param_2;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01dbbb9c + 0x1dbbb30)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd8);
        goto LAB_01dbbb78;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01dbbb9c + 0x1dbbb30),3);
LAB_01dbbb78:
                    /* WARNING: Could not recover jumptable at 0x01dbbb88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_2,puVar2[1]);
  return;
}



// ===== FAT.MergeBoardMan$$FillGlobalSpawnBonusHandler RVA 0x1dabba0 =====

/* WARNING: Removing unreachable block (ram,0x032907dc) */
/* WARNING: Removing unreachable block (ram,0x032907ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbbba0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
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
  
  pcVar12 = (char *)(_UNK_01dbbc48 + 0x1dbbbb8);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbbc4c + 0x1dbbbcc));
    *pcVar12 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d58,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d58,0);
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
    func_0x01485278(&uStack_38,param_2,0);
    iVar11 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar1 == 0) {
      uVar8 = 2;
    }
    func_0x0245495c(iVar11,uVar13,&uStack_38,uVar8,0,0);
    return;
  }
  piVar10 = *(int **)(param_1 + 0x34);
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar6 = param_2[3];
  iVar1 = *(int *)(*(int *)(*(int *)(**(int **)(_UNK_01dbbc50 + 0x1dbbc3c) + 0x10) + 0x60) + 0x48);
  pcVar12 = (char *)(_UNK_032908e8 + 0x3290348);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_032908ec + 0x3290360));
    func_0x01384978(*(undefined4 *)(_UNK_032908f0 + 0x329036c));
    *pcVar12 = '\x01';
  }
  if (piVar10 == (int *)0x0) {
    func_0x04839ccc(6,0);
  }
  if ((uint)param_2[3] < uVar6) {
    func_0x0484c9cc(0);
  }
  iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
  if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
    iVar11 = func_0x014001f0(iVar11);
  }
  piVar2 = (int *)func_0x01384ab8(piVar10,iVar11);
  if (piVar2 == (int *)0x0) {
    if ((int)uVar6 < param_2[3]) {
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x10);
      if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
        iVar11 = func_0x014001f0(iVar11);
      }
      iVar3 = *piVar10;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar11) {
            puVar4 = (undefined4 *)(iVar3 + *piVar2 * 8 + 0xc0);
            goto LAB_03290618;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar10,iVar11,0);
LAB_03290618:
      piVar10 = (int *)(*(code *)*puVar4)(piVar10,puVar4[1]);
      piVar2 = *(int **)(_UNK_032908f4 + 0x3290638);
      do {
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar11 = *piVar10;
        uVar7 = (uint)*(ushort *)(iVar11 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar11 + 0x58) + 4);
          do {
            if (piVar9[-1] == *piVar2) {
              puVar4 = (undefined4 *)(iVar11 + *piVar9 * 8 + 0xc0);
              goto LAB_03290690;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar10,*piVar2,0);
LAB_03290690:
        iVar11 = (*(code *)*puVar4)(piVar10,puVar4[1]);
        if (iVar11 == 0) goto LAB_0329075c;
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x98);
        if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
          iVar11 = func_0x014001f0(iVar11);
        }
        iVar3 = *piVar10;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar9[-1] == iVar11) {
              puVar4 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
              goto LAB_03290724;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar10,iVar11,0);
LAB_03290724:
        uVar13 = (*(code *)*puVar4)(piVar10,puVar4[1]);
        func_0x032900e0(param_2,uVar6,uVar13,
                        *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xa4));
        uVar6 = uVar6 + 1;
      } while( true );
    }
    func_0x032910b0(param_2,piVar10,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x20))
    ;
  }
  else {
    iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
    if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
      iVar11 = func_0x014001f0(iVar11);
    }
    iVar3 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar10[-1] == iVar11) {
          puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
          goto LAB_032904c0;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar11,0);
LAB_032904c0:
    iVar11 = (*(code *)*puVar4)(piVar2,puVar4[1]);
    if (0 < iVar11) {
      func_0x0328f754(param_2,param_2[3] + iVar11,
                      *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x3c));
      if ((int)uVar6 < param_2[3]) {
        uStack_30 = param_2[3] - uVar6;
        uStack_2c = 0;
        func_0x0484e904(param_2[2],uVar6,param_2[2],iVar11 + uVar6);
      }
      if (param_2 == piVar2) {
        uStack_2c = 0;
        uStack_30 = uVar6;
        func_0x0484e904(param_2[2],0,param_2[2],uVar6);
        uStack_30 = param_2[3] - uVar6;
        uStack_2c = 0;
        func_0x0484e904(param_2[2],iVar11 + uVar6,param_2[2],uVar6 << 1);
      }
      else {
        iVar3 = param_2[2];
        iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar5 = *piVar2;
        uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar1) {
              puVar4 = (undefined4 *)(iVar5 + *piVar10 * 8 + 0xe8);
              goto LAB_032905e4;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar1,5);
LAB_032905e4:
        (*(code *)*puVar4)(piVar2,iVar3,uVar6,puVar4[1]);
      }
      param_2[3] = param_2[3] + iVar11;
    }
  }
LAB_0329080c:
  param_2[4] = param_2[4] + 1;
  return;
LAB_0329075c:
  if (piVar10 != (int *)0x0) {
    iVar1 = *piVar10;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_032908f8 + 0x329077c)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_032907c4;
        }
        uVar6 = uVar6 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_032908f8 + 0x329077c),0);
LAB_032907c4:
    (*(code *)*puVar4)(piVar10,puVar4[1]);
  }
  goto LAB_0329080c;
}



// ===== FAT.MergeBoardMan$$RegisterGlobalDisposeBonusHandler RVA 0x1dabc54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbbc54(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
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
  
  pcVar7 = (char *)(_UNK_01dbbd70 + 0x1dbbc6c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbbd74 + 0x1dbbc80));
    func_0x01384978(*(undefined4 *)(_UNK_01dbbd78 + 0x1dbbc8c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x4ce5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4ce5,0);
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
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
    return;
  }
  iVar1 = func_0x02f6252c(*(undefined4 *)(param_1 + 0x38),param_2,
                          **(undefined4 **)(_UNK_01dbbd7c + 0x1dbbcec));
  if (param_2 == (int *)0x0 || iVar1 == 0) {
    return;
  }
  iVar1 = *param_2;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01dbbd80 + 0x1dbbd14)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
        goto LAB_01dbbd5c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01dbbd80 + 0x1dbbd14),2);
LAB_01dbbd5c:
                    /* WARNING: Could not recover jumptable at 0x01dbbd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_2,puVar2[1]);
  return;
}



// ===== FAT.MergeBoardMan$$UnregisterGlobalDisposeBonusHandler RVA 0x1dabd84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbbd84(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
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
  
  pcVar7 = (char *)(_UNK_01dbbeb0 + 0x1dbbd9c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbbeb4 + 0x1dbbdb0));
    func_0x01384978(*(undefined4 *)(_UNK_01dbbeb8 + 0x1dbbdbc));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x4cf2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4cf2,0);
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
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03290900(iVar1,param_2,**(undefined4 **)(_UNK_01dbbebc + 0x1dbbe2c));
  if (param_2 == (int *)0x0 || iVar1 == 0) {
    return;
  }
  iVar1 = *param_2;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01dbbec0 + 0x1dbbe54)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd8);
        goto LAB_01dbbe9c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01dbbec0 + 0x1dbbe54),3);
LAB_01dbbe9c:
                    /* WARNING: Could not recover jumptable at 0x01dbbeac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_2,puVar2[1]);
  return;
}



// ===== FAT.MergeBoardMan$$FillGlobalDisposeBonusHandler RVA 0x1dabec4 =====

/* WARNING: Removing unreachable block (ram,0x032907dc) */
/* WARNING: Removing unreachable block (ram,0x032907ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbbec4(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
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
  
  pcVar12 = (char *)(_UNK_01dbbf6c + 0x1dbbedc);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbbf70 + 0x1dbbef0));
    *pcVar12 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d59,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d59,0);
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
    func_0x01485278(&uStack_38,param_2,0);
    iVar11 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar1 == 0) {
      uVar8 = 2;
    }
    func_0x0245495c(iVar11,uVar13,&uStack_38,uVar8,0,0);
    return;
  }
  piVar10 = *(int **)(param_1 + 0x38);
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar6 = param_2[3];
  iVar1 = *(int *)(*(int *)(*(int *)(**(int **)(_UNK_01dbbf74 + 0x1dbbf60) + 0x10) + 0x60) + 0x48);
  pcVar12 = (char *)(_UNK_032908e8 + 0x3290348);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_032908ec + 0x3290360));
    func_0x01384978(*(undefined4 *)(_UNK_032908f0 + 0x329036c));
    *pcVar12 = '\x01';
  }
  if (piVar10 == (int *)0x0) {
    func_0x04839ccc(6,0);
  }
  if ((uint)param_2[3] < uVar6) {
    func_0x0484c9cc(0);
  }
  iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
  if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
    iVar11 = func_0x014001f0(iVar11);
  }
  piVar2 = (int *)func_0x01384ab8(piVar10,iVar11);
  if (piVar2 == (int *)0x0) {
    if ((int)uVar6 < param_2[3]) {
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x10);
      if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
        iVar11 = func_0x014001f0(iVar11);
      }
      iVar3 = *piVar10;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar11) {
            puVar4 = (undefined4 *)(iVar3 + *piVar2 * 8 + 0xc0);
            goto LAB_03290618;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar10,iVar11,0);
LAB_03290618:
      piVar10 = (int *)(*(code *)*puVar4)(piVar10,puVar4[1]);
      piVar2 = *(int **)(_UNK_032908f4 + 0x3290638);
      do {
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar11 = *piVar10;
        uVar7 = (uint)*(ushort *)(iVar11 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar11 + 0x58) + 4);
          do {
            if (piVar9[-1] == *piVar2) {
              puVar4 = (undefined4 *)(iVar11 + *piVar9 * 8 + 0xc0);
              goto LAB_03290690;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar10,*piVar2,0);
LAB_03290690:
        iVar11 = (*(code *)*puVar4)(piVar10,puVar4[1]);
        if (iVar11 == 0) goto LAB_0329075c;
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x98);
        if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
          iVar11 = func_0x014001f0(iVar11);
        }
        iVar3 = *piVar10;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar9[-1] == iVar11) {
              puVar4 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
              goto LAB_03290724;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar10,iVar11,0);
LAB_03290724:
        uVar13 = (*(code *)*puVar4)(piVar10,puVar4[1]);
        func_0x032900e0(param_2,uVar6,uVar13,
                        *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xa4));
        uVar6 = uVar6 + 1;
      } while( true );
    }
    func_0x032910b0(param_2,piVar10,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x20))
    ;
  }
  else {
    iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
    if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
      iVar11 = func_0x014001f0(iVar11);
    }
    iVar3 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar10[-1] == iVar11) {
          puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
          goto LAB_032904c0;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar11,0);
LAB_032904c0:
    iVar11 = (*(code *)*puVar4)(piVar2,puVar4[1]);
    if (0 < iVar11) {
      func_0x0328f754(param_2,param_2[3] + iVar11,
                      *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x3c));
      if ((int)uVar6 < param_2[3]) {
        uStack_30 = param_2[3] - uVar6;
        uStack_2c = 0;
        func_0x0484e904(param_2[2],uVar6,param_2[2],iVar11 + uVar6);
      }
      if (param_2 == piVar2) {
        uStack_2c = 0;
        uStack_30 = uVar6;
        func_0x0484e904(param_2[2],0,param_2[2],uVar6);
        uStack_30 = param_2[3] - uVar6;
        uStack_2c = 0;
        func_0x0484e904(param_2[2],iVar11 + uVar6,param_2[2],uVar6 << 1);
      }
      else {
        iVar3 = param_2[2];
        iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar5 = *piVar2;
        uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar1) {
              puVar4 = (undefined4 *)(iVar5 + *piVar10 * 8 + 0xe8);
              goto LAB_032905e4;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar1,5);
LAB_032905e4:
        (*(code *)*puVar4)(piVar2,iVar3,uVar6,puVar4[1]);
      }
      param_2[3] = param_2[3] + iVar11;
    }
  }
LAB_0329080c:
  param_2[4] = param_2[4] + 1;
  return;
LAB_0329075c:
  if (piVar10 != (int *)0x0) {
    iVar1 = *piVar10;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_032908f8 + 0x329077c)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_032907c4;
        }
        uVar6 = uVar6 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_032908f8 + 0x329077c),0);
LAB_032907c4:
    (*(code *)*puVar4)(piVar10,puVar4[1]);
  }
  goto LAB_0329080c;
}



// ===== FAT.MergeBoardMan$$FAT.IUserDataHolder.SetData RVA 0x1dabf78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbbf78(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_01dbc054 + 0x1dbbf90);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbc058 + 0x1dbbfa4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d5a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d5a,0);
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
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x10);
  *(int *)(param_1 + 0x2c) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01dbc05c + 0x1dbc03c));
  func_0x0178d354(uVar5,0);
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  return;
}



// ===== FAT.MergeBoardMan$$FAT.IUserDataHolder.FillData RVA 0x1dac060 =====

void FUN_01dbc060(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x9d5b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d5b,0);
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
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x24);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0x10) = uVar4;
  return;
}



// ===== FAT.MergeBoardMan$$UnregisterMergeWorldEntry RVA 0x1dac0ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbc0ec(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
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
  
  pcVar3 = (char *)(_UNK_01dbc290 + 0x1dbc104);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbc294 + 0x1dbc118));
    func_0x01384978(*(undefined4 *)(_UNK_01dbc298 + 0x1dbc124));
    func_0x01384978(*(undefined4 *)(_UNK_01dbc29c + 0x1dbc130));
    func_0x01384978(*(undefined4 *)(_UNK_01dbc2a0 + 0x1dbc13c));
    func_0x01384978(*(undefined4 *)(_UNK_01dbc2a4 + 0x1dbc148));
    func_0x01384978(*(undefined4 *)(_UNK_01dbc2a8 + 0x1dbc154));
    *pcVar3 = '\x01';
  }
  iVar5 = 0;
  iVar1 = func_0x0229f06c(0x5b65,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b65,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar2,0,0);
    return;
  }
  puVar4 = *(undefined4 **)(_UNK_01dbc2ac + 0x1dbc1b4);
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) <= iVar5) goto LAB_01dbc238;
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0328eea8(iVar1,iVar5,*puVar4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) == param_2) break;
    iVar5 = iVar5 + 1;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03290bd4(iVar1,iVar5,**(undefined4 **)(_UNK_01dbc2b0 + 0x1dbc230));
LAB_01dbc238:
  if (*(int *)(**(int **)(_UNK_01dbc2b4 + 0x1dbc244) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01dbc2b8 + 0x1dbc260));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
  return;
}



// ===== FAT.MergeBoardMan$$TryGetWorldEntryType RVA 0x1dac2c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dbc2c0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_01dbc4ac + 0x1dbc2e0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbc4b0 + 0x1dbc2f4));
    func_0x01384978(*(undefined4 *)(_UNK_01dbc4b4 + 0x1dbc300));
    func_0x01384978(*(undefined4 *)(_UNK_01dbc4b8 + 0x1dbc30c));
    func_0x01384978(*(undefined4 *)(_UNK_01dbc4bc + 0x1dbc318));
    *pcVar4 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x1aa7,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_28,iVar1,**(undefined4 **)(_UNK_01dbc4c0 + 0x1dbc3a0));
    puVar5 = *(undefined4 **)(_UNK_01dbc4c4 + 0x1dbc3b4);
    do {
      iVar3 = func_0x0145b12c(&uStack_28,*puVar5);
      iVar1 = iStack_1c;
      if (iVar3 == 0) {
        func_0x0145b14c(&uStack_28,**(undefined4 **)(_UNK_01dbc4d0 + 0x1dbc410));
        *param_3 = 0;
        return 0;
      }
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
    } while (*(int *)(iVar1 + 0xc) != param_2);
    uVar2 = **(undefined4 **)(_UNK_01dbc4c8 + 0x1dbc3ec);
    *param_3 = *(undefined4 *)(iVar1 + 8);
    func_0x0145b14c(&uStack_28,uVar2);
    uVar2 = 1;
  }
  else {
    iVar1 = func_0x0229f13c(0x1aa7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021def10(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.MergeBoardMan$$FillAllMergeWorld RVA 0x1dac4d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbc4d8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar4 = (char *)(_UNK_01dbc70c + 0x1dbc4f4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbc710 + 0x1dbc508));
    func_0x01384978(*(undefined4 *)(_UNK_01dbc714 + 0x1dbc514));
    func_0x01384978(*(undefined4 *)(_UNK_01dbc718 + 0x1dbc520));
    func_0x01384978(*(undefined4 *)(_UNK_01dbc71c + 0x1dbc52c));
    func_0x01384978(*(undefined4 *)(_UNK_01dbc720 + 0x1dbc538));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x9d5c,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      iVar1 = *(int *)(param_1 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_38,iVar1,**(undefined4 **)(_UNK_01dbc724 + 0x1dbc5c0));
      puVar7 = *(undefined4 **)(_UNK_01dbc728 + 0x1dbc5d4);
      piVar6 = *(int **)(_UNK_01dbc72c + 0x1dbc5dc);
      while (iVar2 = func_0x0145b12c(&uStack_38,*puVar7), iVar1 = iStack_2c, iVar2 != 0) {
        if (iStack_2c == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 != 0) {
          iVar3 = *(int *)(param_2 + 8);
          uVar5 = *(uint *)(param_2 + 0xc);
          iVar2 = *piVar6;
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (uVar5 < *(uint *)(iVar3 + 0xc)) {
            *(uint *)(param_2 + 0xc) = uVar5 + 1;
            *(int *)(iVar3 + uVar5 * 4 + 0x10) = iVar1;
          }
          else {
            func_0x0328f170(param_2,iVar1,
                            *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
          }
        }
      }
      func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01dbc730 + 0x1dbc674));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9d5c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MergeBoardMan$$WalkAllWorldItem RVA 0x1dac73c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbc73c(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar3 = (char *)(_UNK_01dbc99c + 0x1dbc75c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbc9a0 + 0x1dbc774));
    func_0x01384978(*(undefined4 *)(_UNK_01dbc9a4 + 0x1dbc780));
    func_0x01384978(*(undefined4 *)(_UNK_01dbc9a8 + 0x1dbc78c));
    func_0x01384978(*(undefined4 *)(_UNK_01dbc9ac + 0x1dbc798));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x4cfa,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4cfa,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02223154(iVar1,param_1,param_2,param_3,param_4,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0328fe1c(&uStack_48,iVar1,**(undefined4 **)(_UNK_01dbc9b0 + 0x1dbc824));
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  iStack_2c = iStack_3c;
  puVar4 = *(undefined4 **)(_UNK_01dbc9b4 + 0x1dbc840);
LAB_01dbc83c:
  do {
    iVar2 = func_0x0145b12c(&uStack_38,*puVar4);
    iVar1 = iStack_2c;
    if (iVar2 == 0) {
      func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01dbc9bc + 0x1dbc8f8));
      return;
    }
    if (iStack_2c == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar1 + 0xc);
  } while (iVar2 == 0);
  if (param_3 != 0) {
    iVar2 = func_0x02139cf4(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar2 + 8) != 1) goto code_r0x01dbc89c;
    goto LAB_01dbc8c0;
  }
  goto LAB_01dbc8d4;
code_r0x01dbc89c:
  iVar2 = *(int *)(iVar1 + 0xc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x02141ef4(iVar2,0);
  if (iVar2 != 0) {
LAB_01dbc8c0:
    iVar2 = *(int *)(iVar1 + 0xc);
    if (iVar2 == 0) {
      iVar2 = 0;
      func_0x01384bf0();
    }
LAB_01dbc8d4:
    func_0x021475dc(iVar2,param_2,param_4,0);
  }
  goto LAB_01dbc83c;
}



// ===== FAT.MergeBoardMan$$SetCurrentActiveWorld RVA 0x1dac9c4 =====

/* WARNING: Removing unreachable block (ram,0x01dbca90) */

void FUN_01dbc9c4(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x5eb2,0);
  if (iVar1 == 0) {
    *(int *)(param_1 + 8) = param_2;
    if (param_2 != 0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x5eb3,0);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      return;
    }
    iVar1 = func_0x0229f13c(0x5eb3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_2 = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x5eb2,0);
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



// ===== FAT.MergeBoardMan$$SetCurrentInteractingItem RVA 0x1daca34 =====

void FUN_01dbca34(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x5eb3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5eb3,0);
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
  *(int *)(param_1 + 0x10) = param_2;
  if (param_2 != 0) {
    *(int *)(param_1 + 0x14) = param_2;
  }
  return;
}



// ===== FAT.MergeBoardMan$$SetCurrentActiveTracer RVA 0x1daca98 =====

void FUN_01dbca98(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5eb4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5eb4,0);
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
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// ===== FAT.MergeBoardMan$$_OnConfigLoaded RVA 0x1dacaf4 =====

/* WARNING: Removing unreachable block (ram,0x01dbd070) */
/* WARNING: Removing unreachable block (ram,0x01dbd07c) */
/* WARNING: Removing unreachable block (ram,0x01dbd084) */
/* WARNING: Removing unreachable block (ram,0x01dbd148) */
/* WARNING: Removing unreachable block (ram,0x01dbd154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbcaf4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  
  pcVar9 = (char *)(_UNK_01dbd3dc + 0x1dbcb0c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbd3e0 + 0x1dbcb20));
    func_0x01384978(*(undefined4 *)(_UNK_01dbd3e4 + 0x1dbcb2c));
    func_0x01384978(*(undefined4 *)(_UNK_01dbd3e8 + 0x1dbcb38));
    func_0x01384978(*(undefined4 *)(_UNK_01dbd3ec + 0x1dbcb44));
    func_0x01384978(*(undefined4 *)(_UNK_01dbd3f0 + 0x1dbcb50));
    func_0x01384978(*(undefined4 *)(_UNK_01dbd3f4 + 0x1dbcb5c));
    func_0x01384978(*(undefined4 *)(_UNK_01dbd3f8 + 0x1dbcb68));
    func_0x01384978(*(undefined4 *)(_UNK_01dbd3fc + 0x1dbcb74));
    func_0x01384978(*(undefined4 *)(_UNK_01dbd400 + 0x1dbcb80));
    func_0x01384978(*(undefined4 *)(_UNK_01dbd404 + 0x1dbcb8c));
    func_0x01384978(*(undefined4 *)(_UNK_01dbd408 + 0x1dbcb98));
    func_0x01384978(*(undefined4 *)(_UNK_01dbd40c + 0x1dbcba4));
    func_0x01384978(*(undefined4 *)(_UNK_01dbd410 + 0x1dbcbb0));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d5d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d5d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    piStack_28 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    piStack_28 = (int *)uStack_40;
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
    uVar8 = 2;
    if (iVar1 == 0) {
      uVar8 = 1;
    }
    func_0x0245495c(iVar11,uVar12,&uStack_30,uVar8,0,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar12 = func_0x01ca6460(iVar1,0);
  *(undefined4 *)(param_1 + 0x20) = uVar12;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar12 = func_0x01ca72fc(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x1c) = uVar12;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_01dbd414 + 0x1dbcc8c));
  piVar10 = *(int **)(param_1 + 0x1c);
  if (piVar10 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar10;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_01dbd418 + 0x1dbccb8)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xd8);
        goto LAB_01dbcd00;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01dbd418 + 0x1dbccb8),3);
LAB_01dbcd00:
  piVar10 = (int *)(*(code *)*puVar2)(piVar10,puVar2[1]);
  if (piVar10 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar10;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_01dbd41c + 0x1dbcd30)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
        goto LAB_01dbcd78;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01dbd41c + 0x1dbcd30),0);
LAB_01dbcd78:
  piStack_28 = (int *)(*(code *)*puVar2)(piVar10,puVar2[1]);
  piVar10 = *(int **)(_UNK_01dbd420 + 0x1dbcd98);
  puVar2 = *(undefined4 **)(_UNK_01dbd424 + 0x1dbcda0);
LAB_01dbcd9c:
  piVar6 = piStack_28;
  if (piStack_28 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar6;
  iVar11 = *piVar10;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar11) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
        goto LAB_01dbcdfc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piStack_28,iVar11,0);
LAB_01dbcdfc:
  iVar1 = (*(code *)*puVar3)(piStack_28,puVar3[1]);
  piVar6 = piStack_28;
  uStack_2c = 0;
  if (iVar1 != 0) {
    if (piStack_28 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar6;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01dbd428 + 0x1dbce3c)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_01dbce84;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piStack_28,**(int **)(_UNK_01dbd428 + 0x1dbce3c),0);
LAB_01dbce84:
    iVar1 = (*(code *)*puVar3)(piStack_28,puVar3[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar1 + 0x14);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x0364c2b4(iVar11,**(undefined4 **)(_UNK_01dbd42c + 0x1dbcec0));
    do {
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar11 = *piVar6;
      iVar4 = *piVar10;
      uVar5 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar4) {
            puVar3 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
            goto LAB_01dbcf28;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar6,iVar4,0);
LAB_01dbcf28:
      iVar11 = (*(code *)*puVar3)(piVar6,puVar3[1]);
      if (iVar11 == 0) goto LAB_01dbcff0;
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar11 = *piVar6;
      uVar5 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_01dbd430 + 0x1dbcf5c)) {
            puVar3 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
            goto LAB_01dbcfa4;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01dbd430 + 0x1dbcf5c),0);
LAB_01dbcfa4:
      uVar12 = (*(code *)*puVar3)(piVar6,puVar3[1]);
      iVar11 = *(int *)(param_1 + 0x24);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar8 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d54(iVar11,uVar12,uVar8,*puVar2);
    } while( true );
  }
  uStack_2c = 0;
  if (piStack_28 == (int *)0x0) goto LAB_01dbd140;
  iVar1 = *piStack_28;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 == 0) {
LAB_01dbd114:
    puVar2 = (undefined4 *)func_0x014002dc(piStack_28,**(int **)(_UNK_01dbd43c + 0x1dbd0e8),0);
  }
  else {
    piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    while (piVar10[-1] != **(int **)(_UNK_01dbd43c + 0x1dbd0e8)) {
      uVar5 = uVar5 - 1;
      piVar10 = piVar10 + 2;
      if (uVar5 == 0) goto LAB_01dbd114;
    }
    puVar2 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
  }
  (*(code *)*puVar2)(piVar6,puVar2[1]);
LAB_01dbd140:
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar12 = func_0x01ca7620(iVar1,0);
  piVar10 = *(int **)(_UNK_01dbd440 + 0x1dbd1a0);
  iVar1 = *piVar10;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4(iVar1);
    iVar1 = *piVar10;
  }
  iVar11 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar11 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4(iVar1);
      iVar1 = *piVar10;
    }
    uVar8 = **(undefined4 **)(iVar1 + 0x5c);
    iVar11 = func_0x01384be4(**(undefined4 **)(_UNK_01dbd444 + 0x1dbd1f0));
    func_0x02450e8c(iVar11,uVar8,**(undefined4 **)(_UNK_01dbd448 + 0x1dbd210),0);
    *(int *)(*(int *)(*piVar10 + 0x5c) + 4) = iVar11;
  }
  uVar12 = func_0x02fc0540(uVar12,iVar11,**(undefined4 **)(_UNK_01dbd44c + 0x1dbd234));
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(param_1 + 0x28) = uVar12;
  return;
LAB_01dbcff0:
  if (piVar6 != (int *)0x0) {
    iVar1 = *piVar6;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01dbd434 + 0x1dbd010)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_01dbd058;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01dbd434 + 0x1dbd010),0);
LAB_01dbd058:
    (*(code *)*puVar3)(piVar6,puVar3[1]);
  }
  goto LAB_01dbcd9c;
}



// ===== FAT.MergeBoardMan$$GetMergeGridConfig RVA 0x1dad454 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dbd454(int param_1,undefined4 param_2)

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
  
  pcVar8 = (char *)(_UNK_01dbd4f0 + 0x1dbd46c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbd4f4 + 0x1dbd480));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d61,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d61,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_0228312c + 0x2283038);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02283130 + 0x228304c),param_1,param_2,0);
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
    uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02283134 + 0x228311c));
    return uVar9;
  }
  iVar1 = **(int **)(_UNK_01dbd4f8 + 0x1dbd4e4);
  piVar2 = *(int **)(param_1 + 0x28);
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
        goto LAB_02f7c1a4;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar1,7);
LAB_02f7c1a4:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,auStack_1c,puVar3[1]);
  uVar9 = 0;
  if (iVar1 != 0) {
    uVar9 = auStack_1c[0];
  }
  return uVar9;
}



// ===== FAT.MergeBoardMan$$GetBoardConfigRaw RVA 0x1dad4fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dbd4fc(int param_1,undefined4 param_2)

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
  
  pcVar8 = (char *)(_UNK_01dbd598 + 0x1dbd514);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbd59c + 0x1dbd528));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5b82,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b82,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_0223344c + 0x2233358);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02233450 + 0x223336c),param_1,param_2,0);
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
    uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02233454 + 0x223343c));
    return uVar9;
  }
  iVar1 = **(int **)(_UNK_01dbd5a0 + 0x1dbd58c);
  piVar2 = *(int **)(param_1 + 0x20);
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
        goto LAB_02f7c1a4;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar1,7);
LAB_02f7c1a4:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,auStack_1c,puVar3[1]);
  uVar9 = 0;
  if (iVar1 != 0) {
    uVar9 = auStack_1c[0];
  }
  return uVar9;
}



// ===== FAT.MergeBoardMan$$GetBoardConfig RVA 0x1dad5a4 =====

undefined4 FUN_01dbd5a4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x5b7f,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if ((*(int *)(iVar1 + 0x54) == 0) ||
       (iVar1 = FUN_01caf2bc(*(int *)(iVar1 + 0x54),param_2,&uStack_14,0), iVar1 == 0)) {
      uStack_14 = FUN_01dbd4fc(param_1,param_2);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5b7f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02233338(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.MergeBoardMan$$GetMergeWorldForRewardByBoardId RVA 0x1dad65c =====

/* WARNING: Removing unreachable block (ram,0x01dbd90c) */
/* WARNING: Removing unreachable block (ram,0x01dbd918) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01dbd65c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01dbda60 + 0x1dbd67c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbda64 + 0x1dbd690));
    func_0x01384978(*(undefined4 *)(_UNK_01dbda68 + 0x1dbd69c));
    func_0x01384978(*(undefined4 *)(_UNK_01dbda6c + 0x1dbd6a8));
    func_0x01384978(*(undefined4 *)(_UNK_01dbda70 + 0x1dbd6b4));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7ed,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01dbda88(param_1,param_2,1);
    if (iVar1 == 0) {
      iVar1 = func_0x01dbdea0(param_1,param_2);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 0x14);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01dbda74 + 0x1dbd758));
        piVar11 = *(int **)(_UNK_01dbda78 + 0x1dbd774);
        piVar12 = *(int **)(_UNK_01dbda7c + 0x1dbd77c);
        do {
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar2;
          uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar11) {
                puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                goto LAB_01dbd7d4;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01dbd7d4:
          iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
          if (iVar1 == 0) {
            iVar1 = 0;
            break;
          }
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar2;
          uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar12) {
                puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                goto LAB_01dbd848;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0);
LAB_01dbd848:
          iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
        } while ((iVar1 == param_2) || (iVar1 = func_0x01dbda88(param_1,iVar1,1), iVar1 == 0));
        if (piVar2 != (int *)0x0) {
          iVar4 = *piVar2;
          uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
          if (uVar5 != 0) {
            piVar11 = (int *)(*(int *)(iVar4 + 0x58) + 4);
            do {
              if (piVar11[-1] == **(int **)(_UNK_01dbda80 + 0x1dbd8a4)) {
                puVar3 = (undefined4 *)(iVar4 + *piVar11 * 8 + 0xc0);
                goto LAB_01dbd8f4;
              }
              uVar5 = uVar5 - 1;
              piVar11 = piVar11 + 2;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dbda80 + 0x1dbd8a4),0);
LAB_01dbd8f4:
          (*(code *)*puVar3)(piVar2,puVar3[1]);
        }
      }
      if (iVar1 == 0 && param_3 == 0) {
        if ((*(int *)(param_1 + 8) == 0) ||
           (iVar1 = func_0x02141e88(*(int *)(param_1 + 8),0), iVar1 == 0)) {
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x5c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar4 = func_0x0229f06c(0x124,0);
          if (iVar4 == 0) {
            return *(int *)(iVar1 + 8);
          }
          iVar4 = func_0x0229f13c(0x124,0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          pcVar8 = (char *)(_UNK_0217a0d4 + 0x2179ff4);
          if (*pcVar8 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_0217a0d8 + 0x217a008),iVar1,0);
            *pcVar8 = '\x01';
          }
          uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_30 = 0;
          func_0x0245494c(&uStack_48,0);
          uStack_30 = uStack_48;
          uStack_2c = uStack_44;
          uStack_28 = uStack_40;
          if (*(int *)(iVar4 + 0x10) != 0) {
            func_0x01485278(&uStack_30,*(int *)(iVar4 + 0x10),0);
          }
          func_0x01485278(&uStack_30,iVar1,0);
          iVar9 = *(int *)(iVar4 + 8);
          uVar10 = *(undefined4 *)(iVar4 + 0xc);
          iVar1 = *(int *)(iVar4 + 0x10);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          uVar7 = 2;
          if (iVar1 == 0) {
            uVar7 = 1;
          }
          func_0x0245495c(iVar9,uVar10,&uStack_30,uVar7,0,0);
          iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0217a0dc + 0x217a0c4));
          return iVar1;
        }
        iVar1 = *(int *)(param_1 + 8);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7ed,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    iVar1 = func_0x02196bd4(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// ===== FAT.MergeBoardMan$$_GetMergeWorldByBoardId RVA 0x1dada88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dbda88(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar4 = (char *)(_UNK_01dbde74 + 0x1dbdaa8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbde78 + 0x1dbdabc));
    func_0x01384978(*(undefined4 *)(_UNK_01dbde7c + 0x1dbdac8));
    func_0x01384978(*(undefined4 *)(_UNK_01dbde80 + 0x1dbdad4));
    func_0x01384978(*(undefined4 *)(_UNK_01dbde84 + 0x1dbdae0));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x7ee,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7ee,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02196bd4(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 < 1) {
    if ((iVar1 != 0) && (iVar1 = func_0x01dbdfa8(param_1,iVar1,param_3), iVar1 != 0)) {
LAB_01dbdd30:
      return *(undefined4 *)(param_1 + 8);
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_01db7b78(iVar1);
    iVar1 = func_0x01dbdfa8(param_1,uVar2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
LAB_01dbdda0:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_01db7b78(iVar1);
  }
  else {
    if (iVar1 != 0) {
      iVar1 = func_0x02139cf4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if ((*(int *)(iVar1 + 8) == param_2) &&
         (iVar1 = func_0x01dbdfa8(param_1,*(undefined4 *)(param_1 + 8),param_3), iVar1 != 0))
      goto LAB_01dbdd30;
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01db7b78(iVar1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02139cf4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 8) == param_2) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = FUN_01db7b78(iVar1);
      iVar1 = func_0x01dbdfa8(param_1,uVar2,param_3);
      if (iVar1 != 0) goto LAB_01dbdda0;
    }
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_48,iVar1,**(undefined4 **)(_UNK_01dbde88 + 0x1dbdc6c));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar5 = *(undefined4 **)(_UNK_01dbde8c + 0x1dbdc88);
    do {
      iVar3 = func_0x0145b12c(&uStack_38,*puVar5);
      iVar1 = iStack_2c;
      if (iVar3 == 0) {
        func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01dbde98 + 0x1dbdd44));
        return 0;
      }
      if (iStack_2c == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar1 + 0xc);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02139cf4(iVar3,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
    } while ((*(int *)(iVar3 + 8) != param_2) ||
            (iVar3 = func_0x01dbdfa8(param_1,*(undefined4 *)(iVar1 + 0xc),param_3), iVar3 == 0));
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
    func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01dbde90 + 0x1dbdd04));
  }
  return uVar2;
}



// ===== FAT.MergeBoardMan$$GetBoardGroupByBoardId RVA 0x1dadea0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dbdea0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_01dbdf94 + 0x1dbdebc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbdf98 + 0x1dbded0));
    func_0x01384978(*(undefined4 *)(_UNK_01dbdf9c + 0x1dbdedc));
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x7f2,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d5bb20(iVar1,param_2,&uStack_14,**(undefined4 **)(_UNK_01dbdfa0 + 0x1dbdf58));
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = func_0x02f7c0f8(*(undefined4 *)(param_1 + 0x1c),uStack_14,0,
                              **(undefined4 **)(_UNK_01dbdfa4 + 0x1dbdf80));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7f2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02196d08(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.MergeBoardMan$$_FilterWorld RVA 0x1dadfa8 =====

uint FUN_01dbdfa8(undefined4 param_1,int param_2,int param_3)

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
  
  iVar1 = func_0x0229f06c(0x7ef,0);
  if (iVar1 == 0) {
    if (param_3 != 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0229f06c(0x7f0,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0x7f0,0);
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
        func_0x01485278(&uStack_30,param_2,0);
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
      iVar1 = *(int *)(param_2 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      return (uint)(*(char *)(iVar1 + 0xa1) == '\0');
    }
    uVar2 = 1;
  }
  else {
    iVar1 = func_0x0229f13c(0x7ef,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar2 = func_0x0218d1f0(iVar1,param_1,param_2,param_3);
  }
  return uVar2;
}



// ===== FAT.MergeBoardMan$$FillMergeAreaForBoard RVA 0x1dae040 =====

/* WARNING: Removing unreachable block (ram,0x01dbe3c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01dbe040(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iStack_2c;
  
  pcVar7 = (char *)(_UNK_01dbe4a4 + 0x1dbe060);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbe4a8 + 0x1dbe074));
    func_0x01384978(*(undefined4 *)(_UNK_01dbe4ac + 0x1dbe080));
    func_0x01384978(*(undefined4 *)(_UNK_01dbe4b0 + 0x1dbe08c));
    func_0x01384978(*(undefined4 *)(_UNK_01dbe4b4 + 0x1dbe098));
    func_0x01384978(*(undefined4 *)(_UNK_01dbe4b8 + 0x1dbe0a4));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5bd4,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x01ca76d0(iVar1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01dbe4bc + 0x1dbe150)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01dbe198;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dbe4bc + 0x1dbe150),0);
LAB_01dbe198:
    piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
    iStack_2c = 0;
    piVar5 = *(int **)(_UNK_01dbe4c0 + 0x1dbe1c0);
    piVar9 = *(int **)(_UNK_01dbe4c4 + 0x1dbe1c8);
LAB_01dbe1c4:
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar5) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_01dbe220;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar5,0);
LAB_01dbe220:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 != 0) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar9) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01dbe294;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar9,0);
LAB_01dbe294:
      iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if ((*(int *)(iVar1 + 0x14) == param_2) && (iStack_2c = iStack_2c + 1, param_3 != 0)) {
        iVar10 = *(int *)(param_3 + 8);
        uVar4 = *(uint *)(param_3 + 0xc);
        piVar6 = *(int **)(_UNK_01dbe4c8 + 0x1dbe2fc);
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
        iVar8 = *piVar6;
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        if (uVar4 < *(uint *)(iVar10 + 0xc)) {
          *(uint *)(param_3 + 0xc) = uVar4 + 1;
          *(int *)(iVar10 + uVar4 * 4 + 0x10) = iVar1;
        }
        else {
          func_0x0328f170(param_3,iVar1,
                          *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
        }
      }
      goto LAB_01dbe1c4;
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01dbe4cc + 0x1dbe364)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01dbe3ac;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dbe4cc + 0x1dbe364),0);
LAB_01dbe3ac:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5bd4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = func_0x021c279c(iVar1,param_1,param_2,param_3,0);
  }
  return iStack_2c;
}



// ===== FAT.MergeBoardMan$$_InitBoardItemColumnFirst RVA 0x1dae4d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbe4d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
                 int param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint unaff_r7;
  
  pcVar5 = (char *)(_UNK_01dbe648 + 0x1dbe4f8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbe64c + 0x1dbe50c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5beb,0);
  if (iVar1 == 0) {
    if (param_6 < param_4) {
      do {
        iVar1 = func_0x03003ef0(param_3,param_6,2,**(undefined4 **)(_UNK_01dbe650 + 0x1dbe59c));
        if (iVar1 != 0) {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar2 = func_0x0244f8e4(iVar1,0x2c,0,0);
          if (uVar2 != 0) {
            uVar3 = param_5;
            if (0 < (int)param_5) {
              uVar3 = *(uint *)(uVar2 + 0xc);
              uVar2 = uVar3;
              unaff_r7 = uVar2;
            }
            if (0 < (int)uVar3) {
              uVar3 = 0;
              do {
                if (uVar2 <= uVar3) {
                  func_0x01384bf4();
                }
                uVar2 = func_0x01dc04b4(param_1,param_2,param_6,uVar3,
                                        *(undefined4 *)(unaff_r7 + 0x10 + uVar3 * 4));
                uVar3 = uVar3 + 1;
                uVar4 = param_5;
                if ((int)uVar3 < (int)param_5) {
                  uVar4 = *(uint *)(unaff_r7 + 0xc);
                  uVar2 = uVar4;
                }
              } while ((int)uVar3 < (int)uVar4);
            }
          }
        }
        param_6 = param_6 + 1;
      } while (param_6 != param_4);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5beb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x022330cc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}



// ===== FAT.MergeBoardMan$$InitializeBoard RVA 0x1dae654 =====

/* WARNING: Possible PIC construction at 0x01dbf2a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01dbf4fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01dbf2a4) */
/* WARNING: Removing unreachable block (ram,0x01dbf500) */
/* WARNING: Removing unreachable block (ram,0x01dbf918) */
/* WARNING: Removing unreachable block (ram,0x01dbeae8) */
/* WARNING: Removing unreachable block (ram,0x01dbeb0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01dbe654(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 extraout_r2;
  int *piVar11;
  uint extraout_r3;
  char *pcVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined1 uVar17;
  undefined8 uVar18;
  char *pcStack_88;
  uint uStack_84;
  undefined4 uStack_78;
  undefined4 uStack_74;
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
  int iStack_2c;
  int iStack_28;
  
  pcVar12 = (char *)(_UNK_01dbf65c + 0x1dbe674);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbf668 + 0x1dbe68c));
    func_0x01384978(*(undefined4 *)(_UNK_01dbf690 + 0x1dbe698));
    func_0x01384978(*(undefined4 *)(_UNK_01dbf694 + 0x1dbe6a4));
    func_0x01384978(*(undefined4 *)(_UNK_01dbf698 + 0x1dbe6b0));
    func_0x01384978(*(undefined4 *)(_UNK_01dbf69c + 0x1dbe6bc));
    func_0x01384978(*(undefined4 *)(_UNK_01dbf6c0 + 0x1dbe6c8));
    func_0x01384978(*(undefined4 *)(_UNK_01dbf6cc + 0x1dbe6d4));
    func_0x01384978(*(undefined4 *)(_UNK_01dbf6d0 + 0x1dbe6e0));
    func_0x01384978(*(undefined4 *)(_UNK_01dbf6d4 + 0x1dbe6ec));
    func_0x01384978(*(undefined4 *)(_UNK_01dbf6d8 + 0x1dbe6f8));
    func_0x01384978(*(undefined4 *)(_UNK_01dbf6dc + 0x1dbe704));
    func_0x01384978(*(undefined4 *)(_UNK_01dbf704 + 0x1dbe710));
    func_0x01384978(*(undefined4 *)(_UNK_01dbf708 + 0x1dbe71c));
    func_0x01384978(*(undefined4 *)(_UNK_01dbf70c + 0x1dbe728));
    *pcVar12 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_28 = 0;
  iStack_2c = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_64 = 0;
  uStack_68 = 0;
  uStack_48 = 0;
  iVar3 = func_0x0229f06c(0x5bbb,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x5bbb,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x022349ac(iVar3,param_1,param_2,param_3);
    goto LAB_01dbf8d8;
  }
  piVar14 = *(int **)(param_1 + 0x20);
  if (piVar14 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *piVar14;
  uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar4 != 0) {
    piVar11 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar11[-1] == **(int **)(_UNK_01dbf7d0 + 0x1dbe7f0)) {
        puVar5 = (undefined4 *)(iVar3 + *piVar11 * 8 + 0xf8);
        goto LAB_01dbe838;
      }
      uVar4 = uVar4 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar14,**(int **)(_UNK_01dbf7d0 + 0x1dbe7f0),7);
LAB_01dbe838:
  iVar3 = (*(code *)*puVar5)(piVar14,param_4,&iStack_28,puVar5[1]);
  if (iVar3 == 0) {
    piVar14 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01dbf9f0 + 0x1dbea14),1);
    uStack_78 = param_4;
    iVar3 = func_0x01384abc(**(undefined4 **)(iRam01dbfa20 + 0x1dbea2c),&uStack_78);
    if (piVar14 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar3 != 0) &&
       (iVar6 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar14 + 0x20)), iVar6 == 0)) {
      uVar13 = func_0x01384c10();
      func_0x01384aa0(uVar13,0);
    }
    if (piVar14[3] == 0) {
      func_0x01384bf4();
    }
    piVar14[4] = iVar3;
    if (*(int *)(**(int **)(iRam01dbfa24 + 0x1dbea90) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar4 = 0;
    func_0x028c23bc(**(undefined4 **)(iRam01dbfa28 + 0x1dbeab8),piVar14,0);
    goto LAB_01dbf8d8;
  }
  if (param_3 == 0) {
    func_0x01384bf0();
  }
  iVar6 = func_0x02139cf4(param_3,0);
  iVar3 = iStack_28;
  if ((iStack_28 == 0) && (func_0x01384bf0(), iVar7 = param_1, iStack_28 == 0)) {
LAB_01dbf8f4:
    func_0x01384bf0();
    func_0x028c98a0(&uStack_38,0);
    uVar17 = 1;
    func_0x01459844(iVar7);
    uVar18 = func_0x01062280();
    iVar6 = (int)((ulonglong)uVar18 >> 0x20);
    param_1 = (int)uVar18;
    uVar13 = extraout_r2;
    uVar16 = extraout_r3;
    if ((bool)uVar17) {
      param_1 = 0x1dbfa20;
      iVar6 = -0xa2405e0;
    }
SUB_01dbfa90:
    pcVar12 = (char *)(_UNK_01dbfc0c + 0x1dbfab4);
    if (*pcVar12 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dbfc10 + 0x1dbfac8));
      *pcVar12 = '\x01';
    }
    iVar3 = func_0x0229f06c(0x5bea,0);
    if (iVar3 == 0) {
      uVar4 = uStack_84;
      if ((int)uStack_84 < (int)uVar16) {
        do {
          iVar3 = func_0x03003ef0(uVar13,uVar4 - uStack_84,2,
                                  **(undefined4 **)(_UNK_01dbfc14 + 0x1dbfb5c));
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            pcVar8 = (char *)func_0x0244f8e4(iVar3,0x2c,0,0);
            if (pcVar8 != (char *)0x0) {
              pcVar9 = pcStack_88;
              if (0 < (int)pcStack_88) {
                pcVar9 = *(char **)(pcVar8 + 0xc);
                pcVar8 = pcVar9;
                pcVar12 = pcVar8;
              }
              if (0 < (int)pcVar9) {
                pcVar9 = (char *)0x0;
                do {
                  if (pcVar8 <= pcVar9) {
                    func_0x01384bf4();
                  }
                  pcVar8 = (char *)func_0x01dc04b4(param_1,iVar6,pcVar9,uVar4,
                                                   *(undefined4 *)(pcVar12 + (int)pcVar9 * 4 + 0x10)
                                                  );
                  pcVar9 = pcVar9 + 1;
                  pcVar10 = pcStack_88;
                  if ((int)pcVar9 < (int)pcStack_88) {
                    pcVar10 = *(char **)(pcVar12 + 0xc);
                    pcVar8 = pcVar10;
                  }
                } while ((int)pcVar9 < (int)pcVar10);
              }
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar16);
      }
    }
    else {
      iVar3 = func_0x0229f13c(0x5bea,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar16 = func_0x022330cc(iVar3,param_1,iVar6,uVar13,uVar16,pcStack_88,uStack_84,0);
    }
    return uVar16;
  }
  uVar13 = *(undefined4 *)(iStack_28 + 0x58);
  uVar15 = *(undefined4 *)(iVar3 + 0x24);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  pcStack_88 = (char *)0x0;
  func_0x020dabc4(iVar6,param_4,uVar15,uVar13);
  iVar3 = iStack_28;
  if (iStack_28 == 0) {
    func_0x01384bf0();
    iVar7 = 0;
    if (iStack_28 == 0) goto LAB_01dbf8f4;
  }
  cVar1 = *(char *)(iStack_28 + 0x34);
  cVar2 = *(char *)(iVar3 + 0x2c);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  func_0x020daea4(iVar6,cVar2 != '\0',cVar1 != '\0',0);
  piVar14 = *(int **)(_UNK_01dbf924 + 0x1dbe92c);
  iVar3 = *piVar14;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar14;
  }
  iVar3 = **(int **)(iVar3 + 0x5c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0359c380(&uStack_78,iVar3,&iStack_2c,**(undefined4 **)(_UNK_01dbf944 + 0x1dbe968));
  uStack_34 = uStack_74;
  uStack_38 = uStack_78;
  FUN_01dbe040(param_1,param_4,iStack_2c);
  iVar3 = iStack_2c;
  if (iStack_2c == 0) {
    func_0x01384bf0();
  }
  func_0x0328fe1c(&uStack_78,iVar3,**(undefined4 **)(_UNK_01dbf974 + 0x1dbe9ac));
  uStack_48 = uStack_78;
  uStack_44 = uStack_74;
  uStack_40 = uStack_70;
  uStack_3c = uStack_6c;
  puVar5 = *(undefined4 **)(_UNK_01dbf978 + 0x1dbe9d0);
  while (iVar3 = func_0x0145b12c(&uStack_48,*puVar5), uVar13 = uStack_3c, iVar3 != 0) {
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x020dbdd4(iVar6,uVar13,0);
  }
  func_0x0145b14c(&uStack_48,**(undefined4 **)(iRam01dbfa2c + 0x1dbead8));
  func_0x028c98a0(&uStack_38,0);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  func_0x020dbfc8(iVar6,0);
  iVar3 = iStack_28;
  uVar4 = 1;
  if (param_5 == 0) goto LAB_01dbf8d8;
  if (iStack_28 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x30);
  if (iVar3 < 0x76) {
    if (iVar3 < 0x4e) {
      if (iVar3 == 0x3c) {
        piVar14 = *(int **)(iRam01dbfa64 + 0x1dbee80);
        iVar3 = *piVar14;
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar14;
        }
        iVar3 = **(int **)(iVar3 + 0x5c);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x0359c380(&uStack_78,iVar3,&uStack_4c,**(undefined4 **)(iRam01dbfa68 + 0x1dbeebc));
        uStack_34 = uStack_74;
        uStack_38 = uStack_78;
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 200);
        if (iStack_28 == 0) {
          func_0x01384bf0();
          uVar15 = uStack_4c;
          uVar13 = uRam00000028;
          if (iStack_28 == 0) {
            func_0x01384bf0();
          }
        }
        else {
          uVar13 = *(undefined4 *)(iStack_28 + 0x28);
          uVar15 = uStack_4c;
        }
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x01a6cb04(iVar3,uVar13,uVar15,0);
        uVar13 = uStack_4c;
        if (iVar3 != 0) {
          if (iStack_28 == 0) {
            func_0x01384bf0();
            uVar16 = uRam00000058;
            iVar3 = iStack_28;
            if (iStack_28 == 0) {
              func_0x01384bf0();
              iVar3 = 0;
            }
          }
          else {
            uVar16 = *(uint *)(iStack_28 + 0x58);
            iVar3 = iStack_28;
          }
          pcStack_88 = *(char **)(iVar3 + 0x24);
          uStack_84 = 0;
          goto SUB_01dbfa90;
        }
      }
      else {
        if (iVar3 != 0x48) {
LAB_01dbf88c:
          if (iStack_28 == 0) {
            func_0x01384bf0();
            iVar3 = iStack_28;
            uVar13 = uRam00000020;
            if (iStack_28 == 0) {
              func_0x01384bf0();
              iVar7 = 0;
              if (iStack_28 == 0) goto LAB_01dbf8f4;
            }
          }
          else {
            uVar13 = *(undefined4 *)(iStack_28 + 0x20);
            iVar3 = iStack_28;
          }
          FUN_01dbe4d4(param_1,iVar6,uVar13,*(undefined4 *)(iVar3 + 0x24));
          goto LAB_01dbf8d8;
        }
        iVar3 = func_0x01384ab8(param_2,**(undefined4 **)(iRam01dbfa34 + 0x1dbeb78));
        if (iVar3 == 0) goto LAB_01dbf8d8;
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iVar7 = func_0x02b3c4a4(param_2,0);
        if (iVar7 != 0x36) goto LAB_01dbf8d8;
        piVar14 = *(int **)(iRam01dbfa38 + 0x1dbebb8);
        iVar7 = *piVar14;
        if (*(int *)(iVar7 + 0x74) == 0) {
          func_0x01384ab4();
          iVar7 = *piVar14;
        }
        iVar7 = **(int **)(iVar7 + 0x5c);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x0359c380(&uStack_78,iVar7,&uStack_50,**(undefined4 **)(iRam01dbfa3c + 0x1dbebf4));
        uStack_34 = uStack_74;
        uStack_38 = uStack_78;
        if (iStack_28 == 0) {
          func_0x01384bf0();
          uVar16 = uRam00000058;
          iVar7 = iStack_28;
          if (iStack_28 == 0) {
            func_0x01384bf0();
            iVar7 = 0;
          }
        }
        else {
          uVar16 = *(uint *)(iStack_28 + 0x58);
          iVar7 = iStack_28;
        }
        iVar3 = func_0x02c04a3c(iVar3,*(undefined4 *)(iVar7 + 0x28),uStack_50,0);
        uVar13 = uStack_50;
        if (iVar3 != 0) {
          if (iStack_28 == 0) {
            func_0x01384bf0();
          }
          func_0x01dbfc18(param_1,iVar6,uVar13,uVar16);
        }
      }
    }
    else if (iVar3 == 0x4e) {
      iVar3 = func_0x01384ab8(param_2,**(undefined4 **)(iRam01dbfa6c + 0x1dbefc8));
      if (iVar3 == 0) goto LAB_01dbf8d8;
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x02b3c4a4(param_2,0);
      if (iVar7 != 0x3c) goto LAB_01dbf8d8;
      piVar14 = *(int **)(iRam01dbfa70 + 0x1dbf008);
      iVar7 = *piVar14;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x01384ab4();
        iVar7 = *piVar14;
      }
      iVar7 = **(int **)(iVar7 + 0x5c);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c380(&uStack_78,iVar7,&uStack_54,**(undefined4 **)(iRam01dbfa74 + 0x1dbf044));
      uStack_34 = uStack_74;
      uStack_38 = uStack_78;
      if (iStack_28 == 0) {
        func_0x01384bf0();
        uVar16 = uRam00000058;
        iVar7 = iStack_28;
        if (iStack_28 == 0) {
          func_0x01384bf0();
          iVar7 = 0;
        }
      }
      else {
        uVar16 = *(uint *)(iStack_28 + 0x58);
        iVar7 = iStack_28;
      }
      iVar3 = func_0x02c04a3c(iVar3,*(undefined4 *)(iVar7 + 0x28),uStack_54,0);
      uVar13 = uStack_54;
      if (iVar3 != 0) {
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        func_0x01dbfc18(param_1,iVar6,uVar13,uVar16);
      }
    }
    else {
      if (iVar3 != 0x5a) goto LAB_01dbf88c;
      iVar3 = func_0x01384ab8(param_2,**(undefined4 **)(iRam01dbfa40 + 0x1dbed08));
      if (iVar3 == 0) goto LAB_01dbf8d8;
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x02b3c4a4(param_2,0);
      if (iVar7 != 0x45) goto LAB_01dbf8d8;
      piVar14 = *(int **)(iRam01dbfa44 + 0x1dbed48);
      iVar7 = *piVar14;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x01384ab4();
        iVar7 = *piVar14;
      }
      iVar7 = **(int **)(iVar7 + 0x5c);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c380(&uStack_78,iVar7,&uStack_58,**(undefined4 **)(iRam01dbfa48 + 0x1dbed84));
      uStack_34 = uStack_74;
      uStack_38 = uStack_78;
      if (iStack_28 == 0) {
        func_0x01384bf0();
        uVar16 = uRam00000058;
        iVar7 = iStack_28;
        if (iStack_28 == 0) {
          func_0x01384bf0();
          iVar7 = 0;
        }
      }
      else {
        uVar16 = *(uint *)(iStack_28 + 0x58);
        iVar7 = iStack_28;
      }
      iVar7 = func_0x02c04a3c(iVar3,*(undefined4 *)(iVar7 + 0x28),uStack_58,0);
      iVar3 = iStack_28;
      uVar13 = uStack_58;
      if (iVar7 != 0) {
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        pcStack_88 = *(char **)(iVar3 + 0x24);
        uStack_84 = 0;
        goto SUB_01dbfa90;
      }
    }
  }
  else if (iVar3 < 0xac) {
    if (iVar3 == 0x76) {
      iVar3 = func_0x01384ab8(param_2,**(undefined4 **)(iRam01dbfa78 + 0x1dbef14));
      if (iVar3 == 0) goto LAB_01dbf8d8;
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x02b3c4a4(param_2,0);
      if (iVar7 != 0x59) goto LAB_01dbf8d8;
      piVar14 = *(int **)(iRam01dbfa7c + 0x1dbef54);
      iVar7 = *piVar14;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x01384ab4();
        iVar7 = *piVar14;
      }
      iVar7 = **(int **)(iVar7 + 0x5c);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c380(&uStack_78,iVar7,&uStack_5c,**(undefined4 **)(iRam01dbfa80 + 0x1dbef90));
      uStack_34 = uStack_74;
      uStack_38 = uStack_78;
      if (iStack_28 == 0) {
        func_0x01384bf0();
        uVar16 = uRam00000058;
        iVar7 = iStack_28;
        if (iStack_28 == 0) {
          func_0x01384bf0();
          iVar7 = 0;
        }
      }
      else {
        uVar16 = *(uint *)(iStack_28 + 0x58);
        iVar7 = iStack_28;
      }
      iVar3 = func_0x02c04a3c(iVar3,*(undefined4 *)(iVar7 + 0x28),uStack_5c,0);
      uVar13 = uStack_5c;
      if (iVar3 != 0) {
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        func_0x01dbfc18(param_1,iVar6,uVar13,uVar16);
      }
    }
    else {
      if (iVar3 != 0x99) goto LAB_01dbf88c;
      iVar3 = func_0x01384ab8(param_2,**(undefined4 **)(iRam01dbfa4c + 0x1dbec44));
      if (iVar3 == 0) goto LAB_01dbf8d8;
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x02b3c4a4(param_2,0);
      if (iVar7 != 0x6e) goto LAB_01dbf8d8;
      piVar14 = *(int **)(iRam01dbfa50 + 0x1dbec84);
      iVar7 = *piVar14;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x01384ab4();
        iVar7 = *piVar14;
      }
      iVar7 = **(int **)(iVar7 + 0x5c);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c380(&uStack_78,iVar7,&uStack_60,**(undefined4 **)(iRam01dbfa54 + 0x1dbecc0));
      uStack_34 = uStack_74;
      uStack_38 = uStack_78;
      if (iStack_28 == 0) {
        func_0x01384bf0();
        uVar16 = uRam00000058;
        iVar7 = iStack_28;
        if (iStack_28 == 0) {
          func_0x01384bf0();
          iVar7 = 0;
        }
      }
      else {
        uVar16 = *(uint *)(iStack_28 + 0x58);
        iVar7 = iStack_28;
      }
      iVar3 = func_0x02c04a3c(iVar3,*(undefined4 *)(iVar7 + 0x28),uStack_60,0);
      uVar13 = uStack_60;
      if (iVar3 != 0) {
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        func_0x01dbfc18(param_1,iVar6,uVar13,uVar16);
      }
    }
  }
  else if (iVar3 == 0xac) {
    iVar3 = func_0x01384ab8(param_2,**(undefined4 **)(iRam01dbfa84 + 0x1dbf07c));
    if (iVar3 == 0) goto LAB_01dbf8d8;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x02b3c4a4(param_2,0);
    if (iVar7 != 0x7e) goto LAB_01dbf8d8;
    piVar14 = *(int **)(iRam01dbfa88 + 0x1dbf0bc);
    iVar7 = *piVar14;
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x01384ab4();
      iVar7 = *piVar14;
    }
    iVar7 = **(int **)(iVar7 + 0x5c);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_78,iVar7,&uStack_64,**(undefined4 **)(iRam01dbfa8c + 0x1dbf0f8));
    uStack_34 = uStack_74;
    uStack_38 = uStack_78;
    if (iStack_28 == 0) {
      func_0x01384bf0();
      uVar16 = uRam00000058;
      iVar7 = iStack_28;
      if (iStack_28 == 0) {
        func_0x01384bf0();
        iVar7 = 0;
      }
    }
    else {
      uVar16 = *(uint *)(iStack_28 + 0x58);
      iVar7 = iStack_28;
    }
    iVar3 = func_0x02c04a3c(iVar3,*(undefined4 *)(iVar7 + 0x28),uStack_64,0);
    uVar13 = uStack_64;
    if (iVar3 != 0) {
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      func_0x01dbfc18(param_1,iVar6,uVar13,uVar16);
    }
  }
  else {
    if (iVar3 != 0xcb) goto LAB_01dbf88c;
    iVar3 = func_0x01384ab8(param_2,**(undefined4 **)(iRam01dbfa58 + 0x1dbedcc));
    if (iVar3 == 0) goto LAB_01dbf8d8;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x02b3c4a4(param_2,0);
    if (iVar7 != 0x8f) goto LAB_01dbf8d8;
    piVar14 = *(int **)(iRam01dbfa5c + 0x1dbee0c);
    iVar7 = *piVar14;
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x01384ab4();
      iVar7 = *piVar14;
    }
    iVar7 = **(int **)(iVar7 + 0x5c);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_78,iVar7,&uStack_68,**(undefined4 **)(iRam01dbfa60 + 0x1dbee48));
    uStack_34 = uStack_74;
    uStack_38 = uStack_78;
    if (iStack_28 == 0) {
      func_0x01384bf0();
      uVar16 = uRam00000058;
      iVar7 = iStack_28;
      if (iStack_28 == 0) {
        func_0x01384bf0();
        iVar7 = 0;
      }
    }
    else {
      uVar16 = *(uint *)(iStack_28 + 0x58);
      iVar7 = iStack_28;
    }
    iVar3 = func_0x02c04a3c(iVar3,*(undefined4 *)(iVar7 + 0x28),uStack_68,0);
    uVar13 = uStack_68;
    if (iVar3 != 0) {
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      func_0x01dbfc18(param_1,iVar6,uVar13,uVar16);
    }
  }
  func_0x028c98a0(&uStack_38,0);
LAB_01dbf8d8:
  return uVar4 & 1;
}



// ===== FAT.MergeBoardMan$$_InitBoardItemRowFirst RVA 0x1dafa90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbfa90(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,char *param_5
                 ,int param_6)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_01dbfc0c + 0x1dbfab4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbfc10 + 0x1dbfac8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5bea,0);
  if (iVar1 == 0) {
    iVar1 = param_6;
    if (param_6 < param_4) {
      do {
        iVar2 = func_0x03003ef0(param_3,iVar1 - param_6,2,
                                **(undefined4 **)(_UNK_01dbfc14 + 0x1dbfb5c));
        if (iVar2 != 0) {
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          pcVar3 = (char *)func_0x0244f8e4(iVar2,0x2c,0,0);
          if (pcVar3 != (char *)0x0) {
            pcVar4 = param_5;
            if (0 < (int)param_5) {
              pcVar4 = *(char **)(pcVar3 + 0xc);
              pcVar3 = pcVar4;
              pcVar6 = pcVar3;
            }
            if (0 < (int)pcVar4) {
              pcVar4 = (char *)0x0;
              do {
                if (pcVar3 <= pcVar4) {
                  func_0x01384bf4();
                }
                pcVar3 = (char *)func_0x01dc04b4(param_1,param_2,pcVar4,iVar1,
                                                 *(undefined4 *)(pcVar6 + (int)pcVar4 * 4 + 0x10));
                pcVar4 = pcVar4 + 1;
                pcVar5 = param_5;
                if ((int)pcVar4 < (int)param_5) {
                  pcVar5 = *(char **)(pcVar6 + 0xc);
                  pcVar3 = pcVar5;
                }
              } while ((int)pcVar4 < (int)pcVar5);
            }
          }
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != param_4);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5bea,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x022330cc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}



// ===== FAT.MergeBoardMan$$_InitBoardItemRowFirstBottom RVA 0x1dafc18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbfc18(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
                 uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  
  pcVar8 = (char *)(_UNK_01dbfda0 + 0x1dbfc3c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbfda4 + 0x1dbfc50));
    *pcVar8 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x5b78,0);
  if (iVar4 == 0) {
    uVar3 = param_6;
    while (uVar2 = uVar3 - 1, (int)(param_6 - param_4) <= (int)uVar2) {
      iVar4 = func_0x03003ef0(param_3,param_6 - uVar3,2,**(undefined4 **)(_UNK_01dbfda8 + 0x1dbfcf0)
                             );
      uVar3 = uVar2;
      if (iVar4 != 0) {
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar5 = func_0x0244f8e4(iVar4,0x2c,0,0);
        if (uVar5 != 0) {
          uVar6 = param_5;
          uVar1 = param_6;
          if (0 < (int)param_5) {
            uVar6 = *(uint *)(uVar5 + 0xc);
            uVar5 = uVar6;
            uVar1 = uVar5;
          }
          if (0 < (int)uVar6) {
            uVar6 = 0;
            do {
              if (uVar5 <= uVar6) {
                func_0x01384bf4();
              }
              uVar5 = func_0x01dc04b4(param_1,param_2,uVar6,uVar2,
                                      *(undefined4 *)(uVar1 + 0x10 + uVar6 * 4));
              uVar6 = uVar6 + 1;
              uVar7 = param_5;
              if ((int)uVar6 < (int)param_5) {
                uVar7 = *(uint *)(uVar1 + 0xc);
                uVar5 = uVar7;
              }
            } while ((int)uVar6 < (int)uVar7);
          }
        }
      }
    }
  }
  else {
    iVar4 = func_0x0229f13c(0x5b78,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x022330cc(iVar4,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}



// ===== FAT.MergeBoardMan$$CollectBoardItemByRow RVA 0x1dafdac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbfdac(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iStack_30;
  int iStack_2c;
  
  pcVar5 = (char *)(_UNK_01dbffb0 + 0x1dbfdd0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbffb4 + 0x1dbfde4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5b72,0);
  if (iVar1 == 0) {
    if ((((param_2 != 0) && (0 < (int)param_3)) && (param_4 != 0)) &&
       (func_0x020da680(&iStack_30,param_2,0), (int)param_3 <= iStack_2c)) {
      iVar1 = iStack_30;
      if (0 < iStack_30) {
        iVar1 = iStack_2c;
      }
      if (0 < iVar1) {
        uVar6 = 0;
        do {
          iVar1 = 0;
          uVar7 = uVar6;
          if (param_5 == 0) {
            uVar7 = ~uVar6 + iStack_2c;
          }
          do {
            iVar2 = func_0x020e81ec(param_2,iVar1,uVar7,0);
            if ((iVar2 != 0) && (iVar3 = func_0x020df438(param_2,iVar2,param_6,0), iVar3 != 0)) {
              iVar3 = *(int *)(param_4 + 8);
              uVar9 = *(uint *)(param_4 + 0xc);
              piVar4 = *(int **)(_UNK_01dbffb8 + 0x1dbff34);
              *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
              iVar8 = *piVar4;
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              if (uVar9 < *(uint *)(iVar3 + 0xc)) {
                *(uint *)(param_4 + 0xc) = uVar9 + 1;
                *(int *)(iVar3 + uVar9 * 4 + 0x10) = iVar2;
              }
              else {
                func_0x0328f170(param_4,iVar2,
                                *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
              }
            }
            iVar1 = iVar1 + 1;
          } while (iStack_30 != iVar1);
          uVar6 = uVar6 + 1;
        } while (uVar6 != param_3);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5b72,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021fa4a8(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}



// ===== FAT.MergeBoardMan$$MoveUpBoardItem RVA 0x1daffbc =====

void FUN_01dbffbc(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uStack_30;
  uint uStack_2c;
  
  iVar1 = func_0x0229f06c(0x7854,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      func_0x020da680(&uStack_30,param_2,0);
      if (param_4 == 0xffffffff) {
        param_4 = uStack_2c;
      }
      if ((((int)param_3 <= (int)param_4) && ((int)param_4 <= (int)uStack_2c)) &&
         (-1 < (int)(param_4 | param_3))) {
        uVar2 = uStack_30;
        if (0 < (int)uStack_30) {
          uVar2 = uStack_2c;
        }
        if (0 < (int)uVar2) {
          for (iVar1 = param_3 - 1; iVar1 <= (int)(param_4 - 1); iVar1 = iVar1 + 1) {
            if (0 < (int)uStack_30) {
              uVar2 = 0;
              do {
                func_0x020df910(param_2,uVar2,iVar1,uVar2,iVar1 - (param_3 - 1),0);
                uVar2 = uVar2 + 1;
              } while (uStack_30 != uVar2);
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7854,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217fd9c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MergeBoardMan$$MoveDownBoardItem RVA 0x1db00d8 =====

void FUN_01dc00d8(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int unaff_r4;
  int iVar2;
  bool bVar3;
  int iStack_30;
  int iStack_2c;
  
  iVar1 = func_0x0229f06c(0x5b74,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      func_0x020da680(&iStack_30,param_2,0);
      iVar1 = param_3;
      if (0 < param_3) {
        iVar1 = iStack_30;
        unaff_r4 = iStack_30;
      }
      if (0 < iVar1) {
        bVar3 = SBORROW4(iStack_2c,1);
        iVar1 = iStack_2c + -1;
        if (0 < iStack_2c) {
          bVar3 = SBORROW4(iStack_2c,param_3);
          iVar1 = iStack_2c - param_3;
        }
        if ((iVar1 < 0 == bVar3) && (iVar1 = iStack_2c - param_3, -1 < iVar1)) {
          do {
            if (0 < unaff_r4) {
              iVar2 = 0;
              do {
                func_0x020df910(param_2,iVar2,iVar1,iVar2,iVar1 + -1 + param_3,0);
                iVar2 = iVar2 + 1;
              } while (unaff_r4 != iVar2);
            }
            bVar3 = 0 < iVar1;
            iVar1 = iVar1 + -1;
          } while (bVar3);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5b74,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b868(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MergeBoardMan$$CreateNewBoardItemByRow RVA 0x1db01cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc01cc(undefined4 param_1,int param_2,int *param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int iStack_28;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_01dc0334 + 0x1dc01ec);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc0338 + 0x1dc0204));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7855,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      func_0x020da680(&iStack_28,param_2,0);
      if (param_3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *param_3;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_01dc033c + 0x1dc0298)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
            goto LAB_01dc02e0;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(param_3,**(int **)(_UNK_01dc033c + 0x1dc0298),0);
LAB_01dc02e0:
      iVar1 = (*(code *)*puVar2)(param_3,puVar2[1]);
      uVar3 = iVar1 + param_4;
      if ((((int)param_4 <= (int)uVar3) && ((int)uVar3 <= iStack_24)) &&
         (-1 < (int)(uVar3 | param_4))) {
        iVar1 = iStack_28;
        if (0 < iStack_28) {
          iVar1 = iStack_24;
        }
        if (0 < iVar1) {
          FUN_01dbfa90(param_1,param_2,param_3,uVar3,iStack_28,param_4);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7855,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0218a160(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MergeBoardMan$$CreateNewBoardItemFromRowToTop RVA 0x1db0340 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc0340(undefined4 param_1,int param_2,int *param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int iStack_28;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_01dc04a8 + 0x1dc0360);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc04ac + 0x1dc0378));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5b77,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      func_0x020da680(&iStack_28,param_2,0);
      if (param_3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *param_3;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_01dc04b0 + 0x1dc040c)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
            goto LAB_01dc0454;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(param_3,**(int **)(_UNK_01dc04b0 + 0x1dc040c),0);
LAB_01dc0454:
      uVar3 = (*(code *)*puVar2)(param_3,puVar2[1]);
      if ((((int)param_4 <= (int)uVar3) && ((int)uVar3 <= iStack_24)) &&
         (-1 < (int)(uVar3 | param_4))) {
        iVar1 = iStack_28;
        if (0 < iStack_28) {
          iVar1 = iStack_24;
        }
        if (0 < iVar1) {
          FUN_01dbfc18(param_1,param_2,param_3,uVar3,iStack_28,param_4);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5b77,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0218a160(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MergeBoardMan$$_SpawnItemByConf RVA 0x1db04b4 =====

void FUN_01dc04b4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x5b79,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x020de7ec(param_2,param_3,param_4,param_5,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x5b79,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021848f4(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.MergeBoardMan$$ClaimAllBonus RVA 0x1db0550 =====

/* WARNING: Removing unreachable block (ram,0x01dc0900) */
/* WARNING: Removing unreachable block (ram,0x01dc09f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc0550(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_01dc0b50 + 0x1dc056c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc0b54 + 0x1dc0580));
    func_0x01384978(*(undefined4 *)(_UNK_01dc0b58 + 0x1dc058c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc0b5c + 0x1dc0598));
    func_0x01384978(*(undefined4 *)(_UNK_01dc0b60 + 0x1dc05a4));
    func_0x01384978(*(undefined4 *)(_UNK_01dc0b64 + 0x1dc05b0));
    func_0x01384978(*(undefined4 *)(_UNK_01dc0b68 + 0x1dc05bc));
    func_0x01384978(*(undefined4 *)(_UNK_01dc0b6c + 0x1dc05c8));
    func_0x01384978(*(undefined4 *)(_UNK_01dc0b70 + 0x1dc05d4));
    func_0x01384978(*(undefined4 *)(_UNK_01dc0b74 + 0x1dc05e0));
    func_0x01384978(*(undefined4 *)(_UNK_01dc0b78 + 0x1dc05ec));
    func_0x01384978(*(undefined4 *)(_UNK_01dc0b7c + 0x1dc05f8));
    func_0x01384978(*(undefined4 *)(_UNK_01dc0b80 + 0x1dc0604));
    func_0x01384978(*(undefined4 *)(_UNK_01dc0b84 + 0x1dc0610));
    func_0x01384978(*(undefined4 *)(_UNK_01dc0b88 + 0x1dc061c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc0b8c + 0x1dc0628));
    func_0x01384978(*(undefined4 *)(_UNK_01dc0b90 + 0x1dc0634));
    func_0x01384978(*(undefined4 *)(_UNK_01dc0b94 + 0x1dc0640));
    *pcVar5 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_3c = uStack_4c;
  uStack_38 = uStack_48;
  iStack_34 = iStack_44;
  iVar1 = func_0x0229f06c(0x9d62,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01dc0b98 + 0x1dc06bc));
    func_0x0244f5a0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = *(int **)(_UNK_01dc0b9c + 0x1dc06e4);
    iVar2 = *piVar6;
    iVar4 = *(int *)(iVar2 + 0x74);
    *(undefined4 *)(iVar1 + 8) = param_2;
    if (iVar4 == 0) {
      func_0x01384ab4();
      iVar2 = *piVar6;
    }
    piVar6 = (int *)(iVar1 + 0xc);
    iVar2 = **(int **)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_30,iVar2,piVar6,**(undefined4 **)(_UNK_01dc0ba0 + 0x1dc0728));
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_60,iVar2,**(undefined4 **)(_UNK_01dc0ba4 + 0x1dc0750));
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    uStack_38 = uStack_58;
    iStack_34 = iStack_54;
    puVar8 = *(undefined4 **)(_UNK_01dc0ba8 + 0x1dc0778);
    while (iVar4 = func_0x0145b12c(&uStack_40,**(undefined4 **)(_UNK_01dc0bcc + 0x1dc0780)),
          iVar2 = iStack_34, iVar4 != 0) {
      if (iStack_34 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar1 + 0x10);
      iVar7 = *(int *)(iVar2 + 0xc);
      if (iVar4 == 0) {
        iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01dc0bac + 0x1dc07bc));
        func_0x03ccb96c(iVar4,iVar1,**(undefined4 **)(_UNK_01dc0bb0 + 0x1dc07d0),0);
        *(int *)(iVar1 + 0x10) = iVar4;
      }
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x021475dc(iVar7,iVar4,0x7fffffff,0);
      iVar4 = *piVar6;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar4 + 0xc)) {
        iVar4 = *(int *)(iVar2 + 0xc);
        uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01dc0bb4 + 0x1dc0830));
        func_0x03ccb96c(uVar3,param_1,**(undefined4 **)(_UNK_01dc0bb8 + 0x1dc0844),0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x02140da0(iVar4,uVar3,0);
        iVar4 = *piVar6;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0328fe1c(&uStack_60,iVar4,**(undefined4 **)(_UNK_01dc0bbc + 0x1dc088c));
        uStack_50 = uStack_60;
        uStack_4c = uStack_5c;
        uStack_48 = uStack_58;
        iStack_44 = iStack_54;
        while (iVar7 = func_0x0145b12c(&uStack_50,*puVar8), iVar4 = iStack_44, iVar7 != 0) {
          iVar7 = *(int *)(iVar2 + 0xc);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          func_0x021463e8(iVar7,iVar4,0);
        }
        func_0x0145b14c(&uStack_50,**(undefined4 **)(_UNK_01dc0bc0 + 0x1dc08f0));
        iVar2 = *(int *)(iVar2 + 0xc);
        uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01dc0bc4 + 0x1dc0918));
        func_0x03ccb96c(uVar3,param_1,**(undefined4 **)(_UNK_01dc0bc8 + 0x1dc092c),0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x02140e50(iVar2,uVar3,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar6;
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar2 + 0xc);
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
        if (0 < iVar4) {
          func_0x0145b1dc(*(undefined4 *)(iVar2 + 8),0,iVar4,0);
        }
      }
    }
    func_0x0145b14c(&uStack_40,**(undefined4 **)(_UNK_01dc0bd4 + 0x1dc09e0));
    func_0x028c98a0(&uStack_30,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x9d62,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MergeBoardMan.<>c__DisplayClass62_0$$.ctor RVA 0x1db0bdc =====

void FUN_01dc0bdc(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MergeBoardMan$$_EnsureClaimRewardCommit RVA 0x1db0be4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc0be4(int param_1,int *param_2)

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
  
  iVar1 = func_0x0229f06c(0x9d65,0);
  if (iVar1 == 0) {
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    param_2 = (int *)func_0x0214cf60(param_2,0);
    if (param_2 == (int *)0x0) {
      return;
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0x40);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_01cdf248 + 0x1cdf0a0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01cdf24c + 0x1cdf0b4),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_01cdf250 + 0x1cdf0c0));
      func_0x01384978(*(undefined4 *)(_UNK_01cdf254 + 0x1cdf0cc));
      func_0x01384978(*(undefined4 *)(_UNK_01cdf258 + 0x1cdf0d8));
      func_0x01384978(*(undefined4 *)(_UNK_01cdf25c + 0x1cdf0e4));
      func_0x01384978(*(undefined4 *)(_UNK_01cdf260 + 0x1cdf0f0));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x335,0);
    if (iVar1 == 0) {
      if (param_2 == (int *)0x0) {
        func_0x01384bf0();
      }
      uVar5 = (**(code **)(*param_2 + 0xd8))(param_2,*(undefined4 *)(*param_2 + 0xdc));
      uVar5 = func_0x0244fb1c(**(undefined4 **)(_UNK_01cdf264 + 0x1cdf174),uVar5,0);
      if (*(int *)(**(int **)(_UNK_01cdf268 + 0x1cdf188) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0199d1cc(uVar5,0);
      if ((char)param_2[0xc] != '\0') {
        func_0x01cdf27c(param_1,param_2,0xffffffff);
        iVar1 = *(int *)(param_1 + 0x18);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03290900(iVar1,param_2,**(undefined4 **)(_UNK_01cdf26c + 0x1cdf1e0));
        *(undefined1 *)(param_2 + 0xc) = 0;
      }
      if (*(int *)(**(int **)(_UNK_01cdf270 + 0x1cdf1fc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01cdf274 + 0x1cdf218));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar1 + 0xc))
                  (*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
        return;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x335,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9d65,0);
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



// ===== FAT.MergeBoardMan$$FAT.IGameModule.Reset RVA 0x1db0c9c =====

/* WARNING: Possible PIC construction at 0x01dc0d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01dc0db0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01dc0df0: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc0c9c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01dc0e3c + 0x1dc0cb0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc0e40 + 0x1dc0cc4));
    func_0x01384978(*(undefined4 *)(_UNK_01dc0e44 + 0x1dc0cd0));
    func_0x01384978(*(undefined4 *)(_UNK_01dc0e48 + 0x1dc0cdc));
    func_0x01384978(*(undefined4 *)(_UNK_01dc0e4c + 0x1dc0ce8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d66,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d66,0);
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
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar4 < 1) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar4 < 1) {
      iVar1 = *(int *)(param_1 + 0x34);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar1 + 0xc);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (iVar4 < 1) {
        iVar1 = *(int *)(param_1 + 0x38);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar1 + 0xc);
        *(undefined4 *)(iVar1 + 0xc) = 0;
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        if (iVar4 < 1) {
          return;
        }
        uVar5 = *(undefined4 *)(iVar1 + 8);
      }
      else {
        uVar5 = *(undefined4 *)(iVar1 + 8);
      }
    }
    else {
      uVar5 = *(undefined4 *)(iVar1 + 8);
    }
  }
  else {
    uVar5 = *(undefined4 *)(iVar1 + 8);
  }
  (*(code *)&SUB_0484e5ec)(uVar5,0,iVar4,0);
  return;
}



// ===== FAT.MergeBoardMan$$FAT.IGameModule.LoadConfig RVA 0x1db0e50 =====

/* WARNING: Removing unreachable block (ram,0x01dbd070) */
/* WARNING: Removing unreachable block (ram,0x01dbd07c) */
/* WARNING: Removing unreachable block (ram,0x01dbd084) */
/* WARNING: Removing unreachable block (ram,0x01dbd148) */
/* WARNING: Removing unreachable block (ram,0x01dbd154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc0e50(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar3 = func_0x0229f06c(0x9d67,0);
  if (iVar3 == 0) {
    pcVar9 = (char *)(_UNK_01dbd3dc + 0x1dbcb0c);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dbd3e0 + 0x1dbcb20));
      func_0x01384978(*(undefined4 *)(_UNK_01dbd3e4 + 0x1dbcb2c));
      func_0x01384978(*(undefined4 *)(_UNK_01dbd3e8 + 0x1dbcb38));
      func_0x01384978(*(undefined4 *)(_UNK_01dbd3ec + 0x1dbcb44));
      func_0x01384978(*(undefined4 *)(_UNK_01dbd3f0 + 0x1dbcb50));
      func_0x01384978(*(undefined4 *)(_UNK_01dbd3f4 + 0x1dbcb5c));
      func_0x01384978(*(undefined4 *)(_UNK_01dbd3f8 + 0x1dbcb68));
      func_0x01384978(*(undefined4 *)(_UNK_01dbd3fc + 0x1dbcb74));
      func_0x01384978(*(undefined4 *)(_UNK_01dbd400 + 0x1dbcb80));
      func_0x01384978(*(undefined4 *)(_UNK_01dbd404 + 0x1dbcb8c));
      func_0x01384978(*(undefined4 *)(_UNK_01dbd408 + 0x1dbcb98));
      func_0x01384978(*(undefined4 *)(_UNK_01dbd40c + 0x1dbcba4));
      func_0x01384978(*(undefined4 *)(_UNK_01dbd410 + 0x1dbcbb0));
      *pcVar9 = '\x01';
    }
    iVar3 = func_0x0229f06c(0x9d5d,0);
    if (iVar3 == 0) {
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar12 = func_0x01ca6460(iVar3,0);
      *(undefined4 *)(param_1 + 0x20) = uVar12;
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar12 = func_0x01ca72fc(iVar3,0);
      iVar3 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x1c) = uVar12;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59f58(iVar3,**(undefined4 **)(_UNK_01dbd414 + 0x1dbcc8c));
      piVar10 = *(int **)(param_1 + 0x1c);
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar10;
      uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_01dbd418 + 0x1dbccb8)) {
            puVar1 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xd8);
            goto LAB_01dbcd00;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01dbd418 + 0x1dbccb8),3);
LAB_01dbcd00:
      piVar10 = (int *)(*(code *)*puVar1)(piVar10,puVar1[1]);
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar10;
      uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_01dbd41c + 0x1dbcd30)) {
            puVar1 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
            goto LAB_01dbcd78;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01dbd41c + 0x1dbcd30),0);
LAB_01dbcd78:
      piStack_28 = (int *)(*(code *)*puVar1)(piVar10,puVar1[1]);
      piVar10 = *(int **)(_UNK_01dbd420 + 0x1dbcd98);
      puVar1 = *(undefined4 **)(_UNK_01dbd424 + 0x1dbcda0);
LAB_01dbcd9c:
      piVar6 = piStack_28;
      if (piStack_28 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar6;
      iVar11 = *piVar10;
      uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar11) {
            puVar2 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
            goto LAB_01dbcdfc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piStack_28,iVar11,0);
LAB_01dbcdfc:
      iVar3 = (*(code *)*puVar2)(piStack_28,puVar2[1]);
      piVar6 = piStack_28;
      uStack_2c = 0;
      if (iVar3 != 0) {
        if (piStack_28 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar6;
        uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(_UNK_01dbd428 + 0x1dbce3c)) {
              puVar2 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
              goto LAB_01dbce84;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piStack_28,**(int **)(_UNK_01dbd428 + 0x1dbce3c),0);
LAB_01dbce84:
        iVar3 = (*(code *)*puVar2)(piStack_28,puVar2[1]);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar11 = *(int *)(iVar3 + 0x14);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        piVar6 = (int *)func_0x0364c2b4(iVar11,**(undefined4 **)(_UNK_01dbd42c + 0x1dbcec0));
        do {
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar11 = *piVar6;
          iVar4 = *piVar10;
          uVar5 = (uint)*(ushort *)(iVar11 + 0xb6);
          if (uVar5 != 0) {
            piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
            do {
              if (piVar7[-1] == iVar4) {
                puVar2 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
                goto LAB_01dbcf28;
              }
              uVar5 = uVar5 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar6,iVar4,0);
LAB_01dbcf28:
          iVar11 = (*(code *)*puVar2)(piVar6,puVar2[1]);
          if (iVar11 == 0) goto LAB_01dbcff0;
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar11 = *piVar6;
          uVar5 = (uint)*(ushort *)(iVar11 + 0xb6);
          if (uVar5 != 0) {
            piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
            do {
              if (piVar7[-1] == **(int **)(_UNK_01dbd430 + 0x1dbcf5c)) {
                puVar2 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
                goto LAB_01dbcfa4;
              }
              uVar5 = uVar5 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01dbd430 + 0x1dbcf5c),0);
LAB_01dbcfa4:
          uVar12 = (*(code *)*puVar2)(piVar6,puVar2[1]);
          iVar11 = *(int *)(param_1 + 0x24);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uVar8 = *(undefined4 *)(iVar3 + 0xc);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          func_0x03d59d54(iVar11,uVar12,uVar8,*puVar1);
        } while( true );
      }
      uStack_2c = 0;
      if (piStack_28 == (int *)0x0) goto LAB_01dbd140;
      iVar3 = *piStack_28;
      uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar5 == 0) {
LAB_01dbd114:
        puVar1 = (undefined4 *)func_0x014002dc(piStack_28,**(int **)(_UNK_01dbd43c + 0x1dbd0e8),0);
      }
      else {
        piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        while (piVar10[-1] != **(int **)(_UNK_01dbd43c + 0x1dbd0e8)) {
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 2;
          if (uVar5 == 0) goto LAB_01dbd114;
        }
        puVar1 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
      }
      (*(code *)*puVar1)(piVar6,puVar1[1]);
LAB_01dbd140:
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar12 = func_0x01ca7620(iVar3,0);
      piVar10 = *(int **)(_UNK_01dbd440 + 0x1dbd1a0);
      iVar3 = *piVar10;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4(iVar3);
        iVar3 = *piVar10;
      }
      iVar11 = *(int *)(*(int *)(iVar3 + 0x5c) + 4);
      if (iVar11 == 0) {
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4(iVar3);
          iVar3 = *piVar10;
        }
        uVar8 = **(undefined4 **)(iVar3 + 0x5c);
        iVar11 = func_0x01384be4(**(undefined4 **)(_UNK_01dbd444 + 0x1dbd1f0));
        func_0x02450e8c(iVar11,uVar8,**(undefined4 **)(_UNK_01dbd448 + 0x1dbd210),0);
        *(int *)(*(int *)(*piVar10 + 0x5c) + 4) = iVar11;
      }
      uVar12 = func_0x02fc0540(uVar12,iVar11,**(undefined4 **)(_UNK_01dbd44c + 0x1dbd234));
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(param_1 + 0x28) = uVar12;
      return;
    }
    iVar3 = func_0x0229f13c(0x9d5d,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x9d67,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  piStack_28 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  piStack_28 = (int *)uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar11 = *(int *)(iVar3 + 8);
  uVar12 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar8 = 2;
  if (iVar3 == 0) {
    uVar8 = 1;
  }
  func_0x0245495c(iVar11,uVar12,&uStack_30,uVar8,0,0);
  return;
LAB_01dbcff0:
  if (piVar6 != (int *)0x0) {
    iVar3 = *piVar6;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01dbd434 + 0x1dbd010)) {
          puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
          goto LAB_01dbd058;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01dbd434 + 0x1dbd010),0);
LAB_01dbd058:
    (*(code *)*puVar2)(piVar6,puVar2[1]);
  }
  goto LAB_01dbcd9c;
}



// ===== FAT.MergeBoardMan$$FAT.IGameModule.Startup RVA 0x1db0ea8 =====

void FUN_01dc0ea8(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x9d68,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x9d68,0);
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



// ===== FAT.MergeBoardMan$$.ctor RVA 0x1db0ef4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc0ef4(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01dc10ec + 0x1dc0f08);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc10f0 + 0x1dc0f1c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc10f4 + 0x1dc0f28));
    func_0x01384978(*(undefined4 *)(_UNK_01dc10f8 + 0x1dc0f34));
    func_0x01384978(*(undefined4 *)(_UNK_01dc10fc + 0x1dc0f40));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1100 + 0x1dc0f4c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1104 + 0x1dc0f58));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1108 + 0x1dc0f64));
    func_0x01384978(*(undefined4 *)(_UNK_01dc110c + 0x1dc0f70));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1110 + 0x1dc0f7c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1114 + 0x1dc0f88));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1118 + 0x1dc0f94));
    func_0x01384978(*(undefined4 *)(_UNK_01dc111c + 0x1dc0fa0));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1120 + 0x1dc0fac));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01dc1124 + 0x1dc0fc0));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01dc1128 + 0x1dc0fd4));
  puVar2 = *(undefined4 **)(_UNK_01dc112c + 0x1dc0fe8);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03d59324(uVar1,**(undefined4 **)(_UNK_01dc1130 + 0x1dc1000));
  puVar2 = *(undefined4 **)(_UNK_01dc1134 + 0x1dc1014);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03d63eec(uVar1,**(undefined4 **)(_UNK_01dc1138 + 0x1dc102c));
  puVar2 = *(undefined4 **)(_UNK_01dc113c + 0x1dc1040);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0178d354(uVar1,0);
  puVar2 = *(undefined4 **)(_UNK_01dc1140 + 0x1dc1060);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01dc1144 + 0x1dc1078));
  puVar2 = *(undefined4 **)(_UNK_01dc1148 + 0x1dc108c);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01dc114c + 0x1dc10a4));
  puVar2 = *(undefined4 **)(_UNK_01dc1150 + 0x1dc10b8);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01dc1154 + 0x1dc10d0));
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MergeBoardMan.<>c$$.cctor RVA 0x1db1158 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc1158(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01dc11b0 + 0x1dc1168);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc11b4 + 0x1dc117c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01dc11b8 + 0x1dc1190);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.MergeBoardMan.<>c$$.ctor RVA 0x1db11bc =====

void FUN_01dc11bc(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MergeBoardMan.<>c$$<_OnConfigLoaded>b__42_0 RVA 0x1db11c4 =====

undefined4 FUN_01dc11c4(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(param_2 + 0xc);
}



// ===== FAT.MergeBoardMan.<>c__DisplayClass62_0$$<ClaimAllBonus>b__0 RVA 0x1db11e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc11e0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_01dc134c + 0x1dc11fc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc1350 + 0x1dc1210));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1354 + 0x1dc121c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1358 + 0x1dc1228));
    *pcVar4 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 8);
  iStack_1c = 0;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0210e2d4(param_2,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x02450564(iVar5,uVar1,**(undefined4 **)(_UNK_01dc135c + 0x1dc1274));
  if (iVar5 != 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02feb690(param_2,&iStack_1c,0,**(undefined4 **)(_UNK_01dc1360 + 0x1dc12a4));
    iVar5 = 0;
    if (iVar2 != 0) {
      iVar5 = iStack_1c;
    }
    if ((iVar2 != 0 && iVar5 != 0) && (iVar5 = func_0x0211dc48(iVar5,0), iVar5 != 0)) {
      iVar5 = *(int *)(param_1 + 0xc);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar5 + 8);
      uVar6 = *(uint *)(iVar5 + 0xc);
      piVar3 = *(int **)(_UNK_01dc1364 + 0x1dc1304);
      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
      iVar7 = *piVar3;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (uVar6 < *(uint *)(iVar2 + 0xc)) {
        *(uint *)(iVar5 + 0xc) = uVar6 + 1;
        *(int *)(iVar2 + uVar6 * 4 + 0x10) = param_2;
      }
      else {
        func_0x0328f170(iVar5,param_2,
                        *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
      }
    }
  }
  return;
}


