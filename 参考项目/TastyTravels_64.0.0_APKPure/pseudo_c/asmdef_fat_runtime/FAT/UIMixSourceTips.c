/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.UIMixSourceTips$$OnCreate RVA 0x1fe4848 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ff4848(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_01ff4a5c + 0x1ff4860);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ff4a60 + 0x1ff4874));
    func_0x01384978(*(undefined4 *)(_UNK_01ff4a64 + 0x1ff4880));
    func_0x01384978(*(undefined4 *)(_UNK_01ff4a68 + 0x1ff488c));
    func_0x01384978(*(undefined4 *)(_UNK_01ff4a6c + 0x1ff4898));
    func_0x01384978(*(undefined4 *)(_UNK_01ff4a70 + 0x1ff48a4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xac46,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xac46,0);
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
    return;
  }
  iVar1 = *(int *)(param_1 + 0xb0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar1 + 0xb4);
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ff4a74 + 0x1ff4910));
  iVar1 = 0;
  func_0x0244ffa0(uVar6,param_1,**(undefined4 **)(_UNK_01ff4a78 + 0x1ff4934),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffb0(iVar5,uVar6,0);
  puVar8 = *(undefined4 **)(_UNK_01ff4a7c + 0x1ff4964);
  puVar9 = *(undefined4 **)(_UNK_01ff4a80 + 0x1ff496c);
  puVar7 = *(undefined4 **)(_UNK_01ff4a84 + 0x1ff4974);
  while( true ) {
    iVar5 = *(int *)(param_1 + 0xac);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x02450148(iVar5,0);
    if (iVar5 <= iVar1) break;
    iVar5 = func_0x01384be4(*puVar8);
    func_0x0244f5a0(iVar5,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(param_1 + 0xac);
    *(int *)(iVar5 + 8) = iVar1;
    *(int *)(iVar5 + 0xc) = param_1;
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x02450158(iVar4,iVar1,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x02f67194(iVar4,*puVar9);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0xb4);
    uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ff4a88 + 0x1ff4a14));
    func_0x0244ffa0(uVar6,iVar5,*puVar7,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffb0(iVar4,uVar6,0);
    iVar1 = iVar1 + 1;
  }
  return;
}



// ===== FAT.UIMixSourceTips.<>c__DisplayClass6_0$$.ctor RVA 0x1fe4a8c =====

void FUN_01ff4a8c(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.UIMixSourceTips$$OnParse RVA 0x1fe4a94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ff4a94(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
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
  
  pcVar7 = (char *)(_UNK_01ff4b98 + 0x1ff4aac);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ff4b9c + 0x1ff4ac0));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xac4f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xac4f,0);
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
  FUN_01ecad38(param_1,param_2,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(uint *)(param_2 + 0xc) < 3) {
    func_0x01384bf4();
  }
  piVar2 = *(int **)(param_2 + 0x18);
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0xbc) = 0;
    return;
  }
  uVar4 = (uint)*(byte *)(**(int **)(_UNK_01ff4ba0 + 0x1ff4b58) + 0xb8);
  piVar3 = (int *)0x0;
  if ((uVar4 <= *(byte *)(*piVar2 + 0xb8)) &&
     (piVar3 = piVar2,
     *(int *)(*(int *)(*piVar2 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_01ff4ba0 + 0x1ff4b58))) {
    piVar3 = (int *)0x0;
  }
  *(int **)(param_1 + 0xbc) = piVar3;
  return;
}



// ===== FAT.UIMixSourceTips$$OnPreOpen RVA 0x1fe4ba4 =====

/* WARNING: Removing unreachable block (ram,0x01ecb7d8) */
/* WARNING: Removing unreachable block (ram,0x01ecb7e4) */
/* WARNING: Removing unreachable block (ram,0x01ecb7e8) */
/* WARNING: Removing unreachable block (ram,0x01ecb82c) */
/* WARNING: Removing unreachable block (ram,0x01ecb830) */
/* WARNING: Removing unreachable block (ram,0x01ecb83c) */
/* WARNING: Removing unreachable block (ram,0x01ecb840) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ff4ba4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  iVar2 = func_0x0229f06c(0xac50,0);
  if (iVar2 == 0) {
    func_0x01ff4c14(param_1);
    pcVar4 = (char *)(_UNK_01ecbb28 + 0x1ecb52c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01ecbb2c + 0x1ecb540),0x41200000,1,0);
      func_0x01384978(*(undefined4 *)(_UNK_01ecbb30 + 0x1ecb54c));
      *pcVar4 = '\x01';
    }
    uStack_3c = uStack_3c & 0xffffff;
    iVar2 = func_0x0229f06c(0x13b7,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x4c);
      uVar6 = *(undefined4 *)(param_1 + 0x78);
      uVar3 = *(undefined4 *)(param_1 + 0x7c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0244fe3c(iVar2,uVar6,uVar3,0);
      iVar2 = *(int *)(param_1 + 0x4c);
      pcVar4 = (char *)(_UNK_01ecbb34 + 0x1ecb5ec);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01ecbb38 + 0x1ecb600));
        *pcVar4 = '\x01';
      }
      iVar5 = *(int *)(**(int **)(_UNK_01ecbb3c + 0x1ecb618) + 0x5c);
      uVar3 = *(undefined4 *)(iVar5 + 0xc);
      uVar7 = *(undefined4 *)(iVar5 + 0x10);
      uVar6 = *(undefined4 *)(iVar5 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x024503a4(iVar2,uVar3,uVar7,uVar6,0);
      *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x68) + 10.0;
      if (*(float *)(param_1 + 0x6c) <= 0.0) {
        iVar2 = *(int *)(param_1 + 0x4c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd2c(&fStack_4c,iVar2,0);
        *(undefined4 *)(param_1 + 0x6c) = uStack_44;
      }
      if (*(float *)(param_1 + 0x70) <= 0.0) {
        iVar2 = *(int *)(param_1 + 0x4c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd2c(&fStack_4c,iVar2,0);
        *(undefined4 *)(param_1 + 0x70) = uStack_40;
      }
      puVar8 = *(undefined4 **)(_UNK_01ecbb40 + 0x1ecb6d4);
      iVar2 = func_0x034aaa34(*puVar8);
      uVar7 = *(undefined4 *)(param_1 + 0x5c);
      uVar3 = *(undefined4 *)(param_1 + 0x60);
      uVar6 = *(undefined4 *)(param_1 + 100);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01eeb1c4(&fStack_4c,iVar2,uVar7,uVar3,uVar6,0);
      fVar10 = fStack_4c;
      uStack_3c = uStack_3c & 0xffffff;
      fVar9 = fStack_48 + *(float *)(param_1 + 0x68);
      fVar11 = *(float *)(param_1 + 0x6c);
      fVar12 = *(float *)(param_1 + 0x74);
      iVar2 = func_0x034aaa34(*puVar8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01eeb2ec(&fStack_4c,iVar2,fVar10,fVar9,0,fVar11 + fVar12,0);
      uVar6 = uStack_44;
      fVar9 = fStack_48;
      fVar10 = fStack_4c;
      iVar2 = func_0x034aaa34(*puVar8);
      cVar1 = *(char *)(param_1 + 0x91);
      uVar3 = *(undefined4 *)(param_1 + 0x68);
      uVar7 = *(undefined4 *)(param_1 + 0x70);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01eeb400(&fStack_4c,iVar2,fVar10,fVar9,uVar6,uVar7,uVar3,(int)&uStack_3c + 3,
                      cVar1 != '\0',0);
      uVar6 = uStack_44;
      fVar9 = fStack_48;
      fVar10 = fStack_4c;
      iVar2 = *(int *)(param_1 + 0x4c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0245068c(iVar2,fVar10,fVar9,uVar6,0);
      if (uStack_3c._3_1_ == '\0') {
        iVar2 = *(int *)(param_1 + 0x50);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd3c(&fStack_4c,iVar2,0);
        iVar2 = *(int *)(param_1 + 0x50);
        uVar6 = *(undefined4 *)(param_1 + 0x5c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x024503d4(iVar2,uVar6,fStack_48,uStack_44,0);
        iVar2 = *(int *)(param_1 + 0x50);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0244ffd4(iVar2,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar2,1,0);
        uVar6 = *(undefined4 *)(param_1 + 0x54);
        if (*(int *)(**(int **)(_UNK_01ecbb48 + 0x1ecba58) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x0145b1cc(uVar6,0,0);
        if (iVar2 != 0) {
          iVar2 = *(int *)(param_1 + 0x54);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x0244ffd4(iVar2,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar2,0,0);
        }
        iVar2 = *(int *)(param_1 + 0x50);
      }
      else {
        iVar2 = *(int *)(param_1 + 0x54);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd3c(&fStack_4c,iVar2,0);
        iVar2 = *(int *)(param_1 + 0x54);
        uVar6 = *(undefined4 *)(param_1 + 0x5c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x024503d4(iVar2,uVar6,fStack_48,uStack_44,0);
        iVar2 = *(int *)(param_1 + 0x54);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0244ffd4(iVar2,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar2,1,0);
        uVar6 = *(undefined4 *)(param_1 + 0x50);
        if (*(int *)(**(int **)(_UNK_01ecbb44 + 0x1ecb948) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x0145b1cc(uVar6,0,0);
        if (iVar2 != 0) {
          iVar2 = *(int *)(param_1 + 0x50);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x0244ffd4(iVar2,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar2,0,0);
        }
        iVar2 = *(int *)(param_1 + 0x54);
      }
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0244fd6c(&fStack_4c,iVar2,0);
      fVar10 = (_UNK_01ecbb24 - fStack_4c) / *(float *)(param_1 + 0x6c);
      FUN_01ecbb4c(param_1,uStack_3c._3_1_,0.5 - fVar10,fVar10 * *(float *)(param_1 + 0x6c));
    }
    else {
      iVar2 = func_0x0229f13c(0x13b7,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x021c8b38(iVar2,param_1,0x41200000,1,0);
    }
    return;
  }
  iVar2 = func_0x0229f13c(0xac50,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0245494c(&fStack_48,0,0);
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&stack0xffffffd0,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&stack0xffffffd0,param_1,0);
  iVar5 = *(int *)(iVar2 + 8);
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  fStack_4c = 0.0;
  func_0x0245495c(iVar5,uVar6,&stack0xffffffd0,uVar3,0);
  return;
}



// ===== FAT.UIMixSourceTips$$Refresh RVA 0x1fe4c14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ff4c14(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar6 = (char *)(_UNK_01ff4ea4 + 0x1ff4c2c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ff4ea8 + 0x1ff4c40));
    func_0x01384978(*(undefined4 *)(_UNK_01ff4eac + 0x1ff4c4c));
    func_0x01384978(*(undefined4 *)(_UNK_01ff4eb0 + 0x1ff4c58));
    *pcVar6 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0xac4d,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xbc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02feb690(iVar1,&iStack_24,0,**(undefined4 **)(_UNK_01ff4eb4 + 0x1ff4cd4));
    iVar1 = iStack_24;
    if (iStack_24 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar1 + 0x38);
    iVar1 = *(int *)(param_1 + 0xa8);
    if (iVar10 < 3) {
      uVar8 = *(undefined4 *)(param_1 + 0xb4);
    }
    else {
      uVar8 = *(undefined4 *)(param_1 + 0xb8);
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244fe4c(auStack_2c,iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar7 = 0;
    func_0x0244fe5c(iVar1,uVar8,uStack_28,0);
    iVar1 = iStack_24;
    if (iStack_24 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x0212fadc(iVar1,0);
    piVar9 = *(int **)(_UNK_01ff4eb8 + 0x1ff4d70);
    piVar11 = *(int **)(_UNK_01ff4ebc + 0x1ff4d78);
    while( true ) {
      iVar1 = *(int *)(param_1 + 0xac);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02450148(iVar1,0);
      if (iVar1 <= iVar7) break;
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar9) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01ff4df4;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar9,0);
LAB_01ff4df4:
      uVar12 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      uVar8 = 0;
      if (iVar7 < (int)uVar12) {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0);
        }
        iVar1 = *piVar2;
        uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == *piVar11) {
              puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
              goto LAB_01ff4e6c;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01ff4e6c:
        uVar8 = (*(code *)*puVar3)(piVar2,iVar7,puVar3[1]);
      }
      func_0x01ff4ec0(param_1,iVar7,uVar8,iVar7 < iVar10);
      iVar7 = iVar7 + 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xac4d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.UIMixSourceTips$$ShowItem RVA 0x1fe4ec0 =====

/* WARNING: Possible PIC construction at 0x01ff4fcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01ff5034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x028c2820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01ff5038) */
/* WARNING: Removing unreachable block (ram,0x01ff5040) */
/* WARNING: Removing unreachable block (ram,0x01ff5054) */
/* WARNING: Removing unreachable block (ram,0x01ff5058) */
/* WARNING: Removing unreachable block (ram,0x01ff5074) */
/* WARNING: Removing unreachable block (ram,0x01ff507c) */
/* WARNING: Removing unreachable block (ram,0x01ff50b8) */
/* WARNING: Removing unreachable block (ram,0x01ff5088) */
/* WARNING: Removing unreachable block (ram,0x01ff5094) */
/* WARNING: Removing unreachable block (ram,0x01ff50c4) */
/* WARNING: Removing unreachable block (ram,0x01ff50e4) */
/* WARNING: Removing unreachable block (ram,0x01ff50e8) */
/* WARNING: Removing unreachable block (ram,0x01ff50f4) */
/* WARNING: Removing unreachable block (ram,0x01ff50f8) */
/* WARNING: Removing unreachable block (ram,0x0267cc24) */
/* WARNING: Removing unreachable block (ram,0x0267cc44) */
/* WARNING: Removing unreachable block (ram,0x0267cc70) */
/* WARNING: Removing unreachable block (ram,0x0267ccb8) */
/* WARNING: Removing unreachable block (ram,0x0267cd00) */
/* WARNING: Removing unreachable block (ram,0x0267cd18) */
/* WARNING: Removing unreachable block (ram,0x0267cd1c) */
/* WARNING: Removing unreachable block (ram,0x0267cd34) */
/* WARNING: Removing unreachable block (ram,0x0267cd38) */
/* WARNING: Removing unreachable block (ram,0x0267c498) */
/* WARNING: Removing unreachable block (ram,0x0267c500) */
/* WARNING: Removing unreachable block (ram,0x0267bd60) */
/* WARNING: Removing unreachable block (ram,0x0267bd7c) */
/* WARNING: Removing unreachable block (ram,0x0267bd9c) */
/* WARNING: Removing unreachable block (ram,0x0267bde0) */
/* WARNING: Removing unreachable block (ram,0x0267be30) */
/* WARNING: Removing unreachable block (ram,0x0267be50) */
/* WARNING: Removing unreachable block (ram,0x0267be54) */
/* WARNING: Removing unreachable block (ram,0x0267be80) */
/* WARNING: Removing unreachable block (ram,0x0267be84) */
/* WARNING: Removing unreachable block (ram,0x0267be9c) */
/* WARNING: Removing unreachable block (ram,0x0267bdfc) */
/* WARNING: Removing unreachable block (ram,0x0267be08) */
/* WARNING: Removing unreachable block (ram,0x0267be18) */
/* WARNING: Removing unreachable block (ram,0x0267beb4) */
/* WARNING: Removing unreachable block (ram,0x0267be24) */
/* WARNING: Removing unreachable block (ram,0x0267bea8) */
/* WARNING: Removing unreachable block (ram,0x0267cffc) */
/* WARNING: Removing unreachable block (ram,0x0267d048) */
/* WARNING: Removing unreachable block (ram,0x0267d060) */
/* WARNING: Removing unreachable block (ram,0x0267d054) */
/* WARNING: Removing unreachable block (ram,0x0267ce80) */
/* WARNING: Removing unreachable block (ram,0x0267ced4) */
/* WARNING: Removing unreachable block (ram,0x0267cedc) */
/* WARNING: Removing unreachable block (ram,0x0267cee0) */
/* WARNING: Removing unreachable block (ram,0x0267cef0) */
/* WARNING: Removing unreachable block (ram,0x0267ceec) */
/* WARNING: Removing unreachable block (ram,0x0267cea0) */
/* WARNING: Removing unreachable block (ram,0x0267ceb8) */
/* WARNING: Removing unreachable block (ram,0x0267cebc) */
/* WARNING: Removing unreachable block (ram,0x0267d018) */
/* WARNING: Removing unreachable block (ram,0x0267d030) */
/* WARNING: Removing unreachable block (ram,0x0267d034) */
/* WARNING: Removing unreachable block (ram,0x0267bdb0) */
/* WARNING: Removing unreachable block (ram,0x0267bdc8) */
/* WARNING: Removing unreachable block (ram,0x0267bdcc) */
/* WARNING: Removing unreachable block (ram,0x0267c4c0) */
/* WARNING: Removing unreachable block (ram,0x0267c4dc) */
/* WARNING: Removing unreachable block (ram,0x0267c4e0) */
/* WARNING: Removing unreachable block (ram,0x0267cccc) */
/* WARNING: Removing unreachable block (ram,0x0267cce4) */
/* WARNING: Removing unreachable block (ram,0x0267cce8) */
/* WARNING: Removing unreachable block (ram,0x028c2874) */
/* WARNING: Removing unreachable block (ram,0x028c2890) */
/* WARNING: Removing unreachable block (ram,0x028c28a4) */
/* WARNING: Removing unreachable block (ram,0x028c28e8) */
/* WARNING: Removing unreachable block (ram,0x028c2900) */
/* WARNING: Removing unreachable block (ram,0x028c2908) */
/* WARNING: Removing unreachable block (ram,0x028c2918) */
/* WARNING: Removing unreachable block (ram,0x028c2924) */
/* WARNING: Removing unreachable block (ram,0x028c2928) */
/* WARNING: Removing unreachable block (ram,0x028c26d4) */
/* WARNING: Removing unreachable block (ram,0x028c26f4) */
/* WARNING: Removing unreachable block (ram,0x028c2708) */
/* WARNING: Removing unreachable block (ram,0x028c2750) */
/* WARNING: Removing unreachable block (ram,0x028c2768) */
/* WARNING: Removing unreachable block (ram,0x028c2770) */
/* WARNING: Removing unreachable block (ram,0x028c2780) */
/* WARNING: Removing unreachable block (ram,0x028c2788) */
/* WARNING: Removing unreachable block (ram,0x028c2790) */
/* WARNING: Removing unreachable block (ram,0x028c27a0) */
/* WARNING: Removing unreachable block (ram,0x028c27a8) */
/* WARNING: Removing unreachable block (ram,0x028c2848) */
/* WARNING: Removing unreachable block (ram,0x028c2854) */
/* WARNING: Removing unreachable block (ram,0x028c2858) */
/* WARNING: Removing unreachable block (ram,0x028c27b8) */
/* WARNING: Removing unreachable block (ram,0x028c27c4) */
/* WARNING: Removing unreachable block (ram,0x028c27d4) */
/* WARNING: Removing unreachable block (ram,0x028c27e0) */
/* WARNING: Removing unreachable block (ram,0x028c271c) */
/* WARNING: Removing unreachable block (ram,0x028c2734) */
/* WARNING: Removing unreachable block (ram,0x028c2738) */
/* WARNING: Removing unreachable block (ram,0x028c2914) */
/* WARNING: Removing unreachable block (ram,0x028c28b8) */
/* WARNING: Removing unreachable block (ram,0x028c28d0) */
/* WARNING: Removing unreachable block (ram,0x028c28d4) */
/* WARNING: Removing unreachable block (ram,0x02173f80) */
/* WARNING: Removing unreachable block (ram,0x02173fd4) */
/* WARNING: Removing unreachable block (ram,0x02173fe0) */
/* WARNING: Removing unreachable block (ram,0x02174008) */
/* WARNING: Removing unreachable block (ram,0x0217400c) */
/* WARNING: Removing unreachable block (ram,0x02174018) */
/* WARNING: Removing unreachable block (ram,0x0217401c) */
/* WARNING: Removing unreachable block (ram,0x0267cc84) */
/* WARNING: Removing unreachable block (ram,0x0267cc9c) */
/* WARNING: Removing unreachable block (ram,0x0267cca0) */
/* WARNING: Removing unreachable block (ram,0x02174108) */
/* WARNING: Removing unreachable block (ram,0x02174160) */
/* WARNING: Removing unreachable block (ram,0x0217416c) */
/* WARNING: Removing unreachable block (ram,0x021741a8) */
/* WARNING: Removing unreachable block (ram,0x021741ac) */
/* WARNING: Removing unreachable block (ram,0x021741b8) */
/* WARNING: Removing unreachable block (ram,0x021741bc) */
/* WARNING: Removing unreachable block (ram,0x01ff4fd0) */
/* WARNING: Removing unreachable block (ram,0x01ff5000) */
/* WARNING: Removing unreachable block (ram,0x01ff5004) */
/* WARNING: Removing unreachable block (ram,0x01ff501c) */
/* WARNING: Removing unreachable block (ram,0x01ff5020) */
/* WARNING: Removing unreachable block (ram,0x01ff5028) */
/* WARNING: Removing unreachable block (ram,0x01ff502c) */
/* WARNING: Removing unreachable block (ram,0x028c2824) */
/* WARNING: Removing unreachable block (ram,0x028c27e4) */
/* WARNING: Removing unreachable block (ram,0x028c27ec) */
/* WARNING: Removing unreachable block (ram,0x028c27f0) */
/* WARNING: Removing unreachable block (ram,0x028c2814) */
/* WARNING: Removing unreachable block (ram,0x028c2818) */
/* WARNING: Removing unreachable block (ram,0x028c310c) */
/* WARNING: Removing unreachable block (ram,0x028c312c) */
/* WARNING: Removing unreachable block (ram,0x028c3140) */
/* WARNING: Removing unreachable block (ram,0x028c3188) */
/* WARNING: Removing unreachable block (ram,0x028c31dc) */
/* WARNING: Removing unreachable block (ram,0x028c3194) */
/* WARNING: Removing unreachable block (ram,0x028c3154) */
/* WARNING: Removing unreachable block (ram,0x028c316c) */
/* WARNING: Removing unreachable block (ram,0x028c3170) */
/* WARNING: Removing unreachable block (ram,0x02174038) */
/* WARNING: Removing unreachable block (ram,0x02174090) */
/* WARNING: Removing unreachable block (ram,0x0217409c) */
/* WARNING: Removing unreachable block (ram,0x021740d8) */
/* WARNING: Removing unreachable block (ram,0x021740dc) */
/* WARNING: Removing unreachable block (ram,0x021740e8) */
/* WARNING: Removing unreachable block (ram,0x021740ec) */
/* WARNING: Removing unreachable block (ram,0x028c2844) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ff4ec0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01ff5110 + 0x1ff4ee0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ff5114 + 0x1ff4ef8));
    func_0x01384978(*(undefined4 *)(_UNK_01ff5118 + 0x1ff4f04));
    func_0x01384978(*(undefined4 *)(_UNK_01ff511c + 0x1ff4f10));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xac4e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xac4e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0219834c(iVar1,param_1,param_2,param_3);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xac);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450158(iVar1,param_2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&SUB_05189da8)(iVar1,param_4 != 0,0);
  return;
}



// ===== FAT.UIMixSourceTips$$OnClickItem RVA 0x1fe512c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ff512c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar8 = (char *)(_UNK_01ff53a8 + 0x1ff5148);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ff53ac + 0x1ff515c));
    func_0x01384978(*(undefined4 *)(_UNK_01ff53b0 + 0x1ff5168));
    func_0x01384978(*(undefined4 *)(_UNK_01ff53b4 + 0x1ff5174));
    *pcVar8 = '\x01';
  }
  iStack_24 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0xac4a,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xbc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02feb690(iVar1,&iStack_24,0,**(undefined4 **)(_UNK_01ff53b8 + 0x1ff51f4));
    iVar1 = iStack_24;
    if (iStack_24 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x0212fadc(iVar1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01ff53bc + 0x1ff5238)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_01ff5280;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01ff53bc + 0x1ff5238),0);
LAB_01ff5280:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (param_2 < iVar1) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_01dbb000(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02139cf4(iVar1,0);
      uVar9 = *(undefined4 *)(param_1 + 0xbc);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar4 = *piVar2;
      uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_01ff53c0 + 0x1ff530c)) {
            puVar3 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xc0);
            goto LAB_01ff5354;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01ff53c0 + 0x1ff530c),0);
LAB_01ff5354:
      uVar5 = (*(code *)*puVar3)(piVar2,param_2,puVar3[1]);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x020e546c(iVar1,uVar9,uVar5,&uStack_28,0);
      if (iVar1 != 0) {
        FUN_01ff4c14(param_1);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xac4a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.UIMixSourceTips$$OnClickInfo RVA 0x1fe53c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ff53c4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
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
  
  pcVar4 = (char *)(_UNK_01ff54f4 + 0x1ff53d8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ff54f8 + 0x1ff53ec));
    func_0x01384978(*(undefined4 *)(_UNK_01ff54fc + 0x1ff53f8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xac47,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xac47,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3);
    return;
  }
  piVar5 = *(int **)(_UNK_01ff5500 + 0x1ff5450);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  iVar6 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x214);
  piVar5 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01ff5504 + 0x1ff5474),1);
  iVar1 = *(int *)(param_1 + 0xbc);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  if ((iVar1 != 0) && (iVar2 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar5 + 0x20)), iVar2 == 0))
  {
    uVar7 = func_0x01384c10();
    func_0x01384aa0(uVar7,0);
  }
  if (piVar5[3] == 0) {
    func_0x01384bf4();
  }
  piVar5[4] = iVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_01ef598c + 0x1ef58f0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ef5990 + 0x1ef5904),piVar5,0);
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x541,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x541,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,piVar5,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar6,0);
    func_0x01485278(&uStack_38,piVar5,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01ef5994 + 0x1ef5960));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0229f06c(0xd,0,piVar5,0);
  if (iVar2 == 0) {
    func_0x01ee81d4(iVar1,iVar6,0,piVar5);
  }
  else {
    iVar2 = func_0x0229f13c(0xd,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02174858(iVar2,iVar1,iVar6,piVar5);
  }
  return;
}



// ===== FAT.UIMixSourceTips$$.ctor RVA 0x1fe5508 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ff5508(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  char *pcVar6;
  undefined4 unaff_r5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  *(undefined4 *)(param_1 + 0xb8) = 0x44078000;
  *(undefined4 *)(param_1 + 0xb4) = 0x43b70000;
  pcVar6 = (char *)(_UNK_01eccc50 + 0x1eccbd4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01eccc54 + 0x1eccbe8),0);
    *pcVar6 = '\x01';
    param_4 = extraout_r3;
  }
  uVar2 = _UNK_01eccc48;
  uVar1 = _UNK_01eccc40;
  uVar5 = 0x3f000000;
  piVar3 = *(int **)(_UNK_01eccc58 + 0x1eccc0c);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0x3f000000;
  iVar4 = *piVar3;
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x01384ab4();
    uVar5 = extraout_r2;
    param_4 = extraout_r3_00;
  }
  pcVar6 = (char *)(_UNK_01ee5288 + 0x1ee5224);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ee528c + 0x1ee5238),0,uVar5,param_4,unaff_r4,unaff_r5,
                    unaff_r11,unaff_lr);
    func_0x01384978(*(undefined4 *)(_UNK_01ee5290 + 0x1ee5244));
    *pcVar6 = '\x01';
  }
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01ee5294 + 0x1ee5258));
  func_0x0328e950(uVar5,**(undefined4 **)(_UNK_01ee5298 + 0x1ee526c));
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}



// ===== FAT.UIMixSourceTips$$<>iFixBaseProxy_OnCreate RVA 0x1fe5528 =====

void FUN_01ff5528(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x79,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x79,0);
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



// ===== FAT.UIMixSourceTips$$<>iFixBaseProxy_OnParse RVA 0x1fe5530 =====

void FUN_01ff5530(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x41,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x41,0);
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



// ===== FAT.UIMixSourceTips$$<>iFixBaseProxy_OnPreOpen RVA 0x1fe5538 =====

void FUN_01ff5538(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x5369,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5369,0);
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



// ===== FAT.UIMixSourceTips.<>c__DisplayClass6_0$$<OnCreate>b__0 RVA 0x1fe5540 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ff5540(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uStack_28;
  int aiStack_24 [3];
  
  iVar9 = *(int *)(param_1 + 0xc);
  iVar8 = *(int *)(param_1 + 8);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  pcVar10 = (char *)(_UNK_01ff53a8 + 0x1ff5148);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ff53ac + 0x1ff515c));
    func_0x01384978(*(undefined4 *)(_UNK_01ff53b0 + 0x1ff5168));
    func_0x01384978(*(undefined4 *)(_UNK_01ff53b4 + 0x1ff5174));
    *pcVar10 = '\x01';
  }
  aiStack_24[0] = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0xac4a,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar9 + 0xbc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02feb690(iVar1,aiStack_24,0,**(undefined4 **)(_UNK_01ff53b8 + 0x1ff51f4));
    iVar1 = aiStack_24[0];
    if (aiStack_24[0] == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x0212fadc(iVar1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01ff53bc + 0x1ff5238)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_01ff5280;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01ff53bc + 0x1ff5238),0);
LAB_01ff5280:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar8 < iVar1) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_01dbb000(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02139cf4(iVar1,0);
      uVar11 = *(undefined4 *)(iVar9 + 0xbc);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar4 = *piVar2;
      uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_01ff53c0 + 0x1ff530c)) {
            puVar3 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xc0);
            goto LAB_01ff5354;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01ff53c0 + 0x1ff530c),0);
LAB_01ff5354:
      uVar5 = (*(code *)*puVar3)(piVar2,iVar8,puVar3[1]);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar8 = func_0x020e546c(iVar1,uVar11,uVar5,&uStack_28,0);
      if (iVar8 != 0) {
        FUN_01ff4c14(iVar9);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xac4a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar1,iVar9,iVar8,0);
  }
  return;
}


