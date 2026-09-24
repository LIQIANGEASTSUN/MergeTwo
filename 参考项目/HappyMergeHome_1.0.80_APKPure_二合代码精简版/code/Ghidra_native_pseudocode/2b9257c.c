
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ba257c(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_02ba2acc + 0x2ba2594);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ba2ad0 + 0x2ba25a8));
    func_0x01438628(*(undefined4 *)(_UNK_02ba2ad4 + 0x2ba25b4));
    func_0x01438628(*(undefined4 *)(_UNK_02ba2ad8 + 0x2ba25c0));
    func_0x01438628(*(undefined4 *)(_UNK_02ba2adc + 0x2ba25cc));
    func_0x01438628(*(undefined4 *)(_UNK_02ba2ae0 + 0x2ba25d8));
    func_0x01438628(*(undefined4 *)(_UNK_02ba2ae4 + 0x2ba25e4));
    func_0x01438628(*(undefined4 *)(_UNK_02ba2ae8 + 0x2ba25f0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xfcd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xfcd,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar8,&uStack_30,uVar3,0,0);
    return;
  }
  piVar11 = *(int **)(_UNK_02ba2aec + 0x2ba264c);
  iVar1 = **(int **)(*piVar11 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02b63a9c(iVar1,0x66,0,0);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = 4;
  piVar9 = *(int **)(_UNK_02ba2af0 + 0x2ba2694);
  piVar10 = *(int **)(_UNK_02ba2af4 + 0x2ba269c);
  do {
    iVar4 = **(int **)(*piVar9 + 0x5c);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x02c3d868(iVar4,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x02be9134(iVar4,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar6 = iVar1 - 4;
    if (*(int *)(iVar4 + 0xc) <= (int)uVar6) {
      return;
    }
    iVar4 = **(int **)(*piVar9 + 0x5c);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x02c3d868(iVar4,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x02be9134(iVar4,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar6) {
      func_0x014388e8();
    }
    iVar4 = *(int *)(iVar4 + iVar1 * 4);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x02c3f4b4(iVar4,0);
    if (-1 < iVar4) {
      iVar4 = **(int **)(*piVar9 + 0x5c);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x02c3d868(iVar4,0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x02be9134(iVar4,0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar4 + 0xc) <= uVar6) {
        func_0x014388e8();
      }
      iVar4 = *(int *)(iVar4 + iVar1 * 4);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar4 + 0xc);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x024eec50(uVar8,0,0);
      if (iVar4 == 0) {
        iVar4 = **(int **)(*piVar9 + 0x5c);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x02c3d868(iVar4,0);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x02be9134(iVar4,0);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar4 + 0xc) <= uVar6) {
          func_0x014388e8();
        }
        iVar4 = *(int *)(iVar4 + iVar1 * 4);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0xc);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x02c195e4(iVar4,0);
        if (iVar4 == 2) {
          iVar4 = **(int **)(*piVar9 + 0x5c);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = func_0x02c3d868(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = func_0x02be9134(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar4 + 0xc) <= uVar6) {
            func_0x014388e8();
          }
          iVar1 = *(int *)(iVar4 + iVar1 * 4);
          if (iVar1 == 0) {
            return;
          }
          uVar8 = *(undefined4 *)(iVar1 + 0xc);
          if (*(int *)(*piVar10 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x024eec50(uVar8,0,0);
          if (iVar4 != 0) {
            return;
          }
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02ba2af8 + 0x2ba2960));
          func_0x024eed9c(iVar4,**(undefined4 **)(_UNK_02ba2afc + 0x2ba2974));
          iVar7 = *(int *)(iVar1 + 0xc);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          uVar8 = func_0x024eecb8(iVar7,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar4 + 8);
          uVar6 = *(uint *)(iVar4 + 0xc);
          piVar9 = *(int **)(_UNK_02ba2b00 + 0x2ba29c8);
          *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
          iVar12 = *piVar9;
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          if (uVar6 < *(uint *)(iVar7 + 0xc)) {
            *(uint *)(iVar4 + 0xc) = uVar6 + 1;
            puVar2 = (undefined4 *)(iVar7 + uVar6 * 4 + 0x10);
            *puVar2 = uVar8;
            func_0x014385cc(puVar2,uVar8);
          }
          else {
            func_0x0152874c(iVar4,uVar8,
                            *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
          }
          iVar1 = *(int *)(iVar1 + 0xc);
          iVar7 = **(int **)(*piVar11 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          piVar9 = (int *)func_0x024eecb8(iVar1,0);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          piVar10 = (int *)0x0;
          if ((piVar9 != (int *)0x0) &&
             (piVar10 = piVar9, *piVar9 != **(int **)(_UNK_02ba2b04 + 0x2ba2a64))) {
            piVar10 = (int *)0x0;
          }
          uStack_2c = 1;
          uStack_24 = 0;
          uStack_30 = 0;
          iStack_28 = iVar4;
          func_0x02b647b4(iVar7,0x66,piVar10,0);
          iVar1 = **(int **)(*piVar11 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uStack_30 = 0;
          func_0x02b6127c(iVar1,0x66,0,0);
          return;
        }
      }
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

