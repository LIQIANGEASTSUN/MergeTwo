
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ba7770(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_02ba7d3c + 0x2ba7788);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ba7d40 + 0x2ba779c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba7d44 + 0x2ba77a8));
    func_0x01438628(*(undefined4 *)(_UNK_02ba7d48 + 0x2ba77b4));
    func_0x01438628(*(undefined4 *)(_UNK_02ba7d4c + 0x2ba77c0));
    func_0x01438628(*(undefined4 *)(_UNK_02ba7d50 + 0x2ba77cc));
    func_0x01438628(*(undefined4 *)(_UNK_02ba7d54 + 0x2ba77d8));
    func_0x01438628(*(undefined4 *)(_UNK_02ba7d58 + 0x2ba77e4));
    func_0x01438628(*(undefined4 *)(_UNK_02ba7d5c + 0x2ba77f0));
    func_0x01438628(*(undefined4 *)(_UNK_02ba7d60 + 0x2ba77fc));
    func_0x01438628(*(undefined4 *)(_UNK_02ba7d64 + 0x2ba7808));
    func_0x01438628(*(undefined4 *)(_UNK_02ba7d68 + 0x2ba7814));
    func_0x01438628(*(undefined4 *)(_UNK_02ba7d6c + 0x2ba7820));
    func_0x01438628(*(undefined4 *)(_UNK_02ba7d70 + 0x2ba782c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba7d74 + 0x2ba7838));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xff0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xff0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    fStack_30 = 0.0;
    func_0x024f56c0(&fStack_48,0,0);
    fStack_30 = fStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&fStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&fStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar6,uVar8,&fStack_30,uVar4,0,0);
    return;
  }
  piVar12 = *(int **)(_UNK_02ba7d78 + 0x2ba7894);
  iVar1 = **(int **)(*piVar12 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(char *)(iVar1 + 0x2d) != '\0') {
    piVar5 = *(int **)(_UNK_02ba7d7c + 0x2ba78c0);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar5;
    }
    if (*(char *)(*(int *)(iVar1 + 0x5c) + 4) == '\0') {
      return;
    }
    iVar6 = **(int **)(*piVar12 + 0x5c);
    if (iVar6 == 0) {
      func_0x014388e4();
      iVar1 = *piVar5;
    }
    iVar2 = *(int *)(iVar1 + 0x74);
    *(undefined1 *)(iVar6 + 0x2d) = 0;
    if (iVar2 == 0) {
      func_0x014387a4();
      iVar1 = *piVar5;
    }
    *(undefined1 *)(*(int *)(iVar1 + 0x5c) + 4) = 0;
  }
  piVar5 = *(int **)(_UNK_02ba7d80 + 0x2ba7930);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_02ba7d84 + 0x2ba794c);
  iVar1 = func_0x014e9518(*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02eb45d4(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(*puVar9);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02eb46d0(iVar1,0);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_02ba7d88 + 0x2ba79c0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02ba7d8c + 0x2ba79dc));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x03579aec(iVar1,**(undefined4 **)(_UNK_02ba7d94 + 0x2ba7a08),
                              **(undefined4 **)(_UNK_02ba7d90 + 0x2ba79fc));
      iVar6 = **(int **)(*piVar12 + 0x5c);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x02b63a9c(iVar6,0x7d7,0,0);
      if (iVar6 == 0) {
        piVar5 = *(int **)(_UNK_02ba7d98 + 0x2ba7a54);
        if (*(int *)(*piVar5 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = func_0x024efb9c(iVar1,0);
        if (iVar6 != 0) {
          iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_02ba7d9c + 0x2ba7a84));
          func_0x024eed9c(iVar6,**(undefined4 **)(_UNK_02ba7da0 + 0x2ba7a98));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar8 = func_0x024eecb8(iVar1,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar6 + 8);
          uVar10 = *(uint *)(iVar6 + 0xc);
          piVar3 = *(int **)(_UNK_02ba7da4 + 0x2ba7ae8);
          *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
          iVar13 = *piVar3;
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (uVar10 < *(uint *)(iVar2 + 0xc)) {
            *(uint *)(iVar6 + 0xc) = uVar10 + 1;
            puVar9 = (undefined4 *)(iVar2 + uVar10 * 4 + 0x10);
            *puVar9 = uVar8;
            func_0x014385cc(puVar9,uVar8);
          }
          else {
            func_0x0152874c(iVar6,uVar8,
                            *(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
          }
          iVar6 = **(int **)(*piVar12 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
            piVar3 = (int *)func_0x024eecb8(0,0);
            func_0x014388e4();
          }
          else {
            piVar3 = (int *)func_0x024eecb8(iVar1,0);
          }
          uStack_38 = func_0x024eecb8(iVar1,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          piVar11 = (int *)0x0;
          if ((piVar3 != (int *)0x0) &&
             (piVar11 = piVar3, *piVar3 != **(int **)(_UNK_02ba7da8 + 0x2ba7ba8))) {
            piVar11 = (int *)0x0;
          }
          uStack_3c = 1;
          uStack_34 = 0;
          uStack_40 = 0;
          func_0x02b63f30(iVar6,0x7d7,piVar11,0);
          iVar6 = **(int **)(*piVar12 + 0x5c);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uStack_40 = 0;
          iVar6 = func_0x02b6127c(iVar6,0x7d7,0,0);
          if (iVar6 != 0) {
            piVar12 = *(int **)(_UNK_02ba7dac + 0x2ba7c20);
            uVar8 = **(undefined4 **)(*piVar12 + 0x5c);
            if (*(int *)(*piVar5 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar6 = func_0x024ef144(uVar8,0,0);
            if (iVar6 != 0) {
              iVar6 = **(int **)(*piVar12 + 0x5c);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              uVar8 = func_0x02d06f88(iVar6,0);
              if (*(int *)(*piVar5 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x024ef144(uVar8,0,0);
              if (iVar6 != 0) {
                iVar6 = **(int **)(*piVar12 + 0x5c);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                uVar8 = func_0x02d06f88(iVar6,0);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar1 = func_0x024eecb8(iVar1,0);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                func_0x024f0474(&fStack_30,iVar1,0);
                uStack_40 = 0;
                func_0x0157e8ec(uVar8,_UNK_02ba7d38 - fStack_30,0,0);
              }
            }
          }
        }
      }
    }
  }
  return;
}

