
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b5c2c4(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01b5c774 + 0x1b5c2dc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b5c778 + 0x1b5c2f0));
    func_0x01438628(*(undefined4 *)(_UNK_01b5c77c + 0x1b5c2fc));
    func_0x01438628(*(undefined4 *)(_UNK_01b5c780 + 0x1b5c308));
    func_0x01438628(*(undefined4 *)(_UNK_01b5c784 + 0x1b5c314));
    func_0x01438628(*(undefined4 *)(_UNK_01b5c788 + 0x1b5c320));
    func_0x01438628(*(undefined4 *)(_UNK_01b5c78c + 0x1b5c32c));
    func_0x01438628(*(undefined4 *)(_UNK_01b5c790 + 0x1b5c338));
    func_0x01438628(*(undefined4 *)(_UNK_01b5c794 + 0x1b5c344));
    func_0x01438628(*(undefined4 *)(_UNK_01b5c798 + 0x1b5c350));
    func_0x01438628(*(undefined4 *)(_UNK_01b5c79c + 0x1b5c35c));
    func_0x01438628(*(undefined4 *)(_UNK_01b5c7a0 + 0x1b5c368));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1888,0);
  if (iVar1 == 0) {
    piVar13 = *(int **)(_UNK_01b5c7a4 + 0x1b5c3c4);
    iVar1 = **(int **)(*piVar13 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar9 = 0;
    iVar1 = func_0x02b63a9c(iVar1,0x1a90,0,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_01b5c7a8 + 0x1b5c404) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01b5c7ac + 0x1b5c420));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar9 = 0;
      iVar1 = func_0x02b0c634(iVar1,0);
      if (iVar1 < 3) {
        if (*(int *)(**(int **)(_UNK_01b5c7b0 + 0x1b5c458) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01b5c7b4 + 0x1b5c474));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar9 = 0;
        iVar1 = func_0x01f59b7c(iVar1,**(undefined4 **)(_UNK_01b5c7b8 + 0x1b5c49c),0);
        piVar12 = *(int **)(_UNK_01b5c7bc + 0x1b5c4b4);
        if (*(int *)(*piVar12 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar8 = func_0x024eec50(iVar1,0,0);
        if (iVar8 == 0) {
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar9 = 0;
          iVar8 = func_0x024efc2c(iVar1,0);
          if (iVar8 != 0) {
            iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_01b5c7c0 + 0x1b5c50c));
            func_0x024eed9c(iVar8,**(undefined4 **)(_UNK_01b5c7c4 + 0x1b5c520));
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar9 = func_0x024ef308(iVar1,0);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            iVar6 = *(int *)(iVar8 + 8);
            uVar10 = *(uint *)(iVar8 + 0xc);
            piVar3 = *(int **)(_UNK_01b5c7c8 + 0x1b5c570);
            *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
            iVar11 = *piVar3;
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            if (uVar10 < *(uint *)(iVar6 + 0xc)) {
              *(uint *)(iVar8 + 0xc) = uVar10 + 1;
              puVar2 = (undefined4 *)(iVar6 + uVar10 * 4 + 0x10);
              *puVar2 = uVar9;
              func_0x014385cc(puVar2,uVar9);
            }
            else {
              func_0x0152874c(iVar8,uVar9,
                              *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
            }
            iVar6 = **(int **)(*piVar13 + 0x5c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            piVar3 = (int *)func_0x024ef308(iVar1,0);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            piVar7 = (int *)0x0;
            if ((piVar3 != (int *)0x0) &&
               (piVar7 = piVar3, *piVar3 != **(int **)(_UNK_01b5c7cc + 0x1b5c608))) {
              piVar7 = (int *)0x0;
            }
            uVar9 = 0;
            uStack_3c = 1;
            uStack_40 = 0;
            uStack_34 = 0;
            iStack_38 = iVar8;
            func_0x02b647b4(iVar6,0x1a90,piVar7,0);
            iVar8 = **(int **)(*piVar13 + 0x5c);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            uStack_40 = 0;
            iVar8 = func_0x02b6127c(iVar8,0x1a90,0,0);
            if (iVar8 != 0) {
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar8 = func_0x024ef308(iVar1,0);
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              piVar3 = (int *)func_0x024eff78(iVar8,0);
              piVar13 = (int *)0x0;
              if ((piVar3 != (int *)0x0) &&
                 (piVar13 = piVar3, *piVar3 != **(int **)(_UNK_01b5c7d0 + 0x1b5c6c4))) {
                piVar13 = (int *)0x0;
              }
              if (*(int *)(*piVar12 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar8 = func_0x024ef144(piVar13,0,0);
              uVar9 = 1;
              if (iVar8 != 0) {
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar1 = func_0x024ef308(iVar1,0);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                func_0x024f0474(&uStack_30,iVar1,0);
                uStack_40 = 0;
                func_0x0157ead0(piVar13,fStack_2c + _UNK_01b5c770,0,0);
              }
            }
          }
        }
      }
    }
    return uVar9;
  }
  iVar1 = func_0x029540a4(0x1888,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  fStack_2c = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  fStack_2c = (float)uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar8 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  func_0x024f56d0(iVar8,uVar9,&uStack_30,uVar4,0,0);
  uVar9 = func_0x024f56e0(&uStack_30,0,0);
  return uVar9;
}

