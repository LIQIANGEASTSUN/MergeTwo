
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01aeccc4(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_01aed1b4 + 0x1aeccdc);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01aed1b8 + 0x1aeccf0));
    func_0x01438628(*(undefined4 *)(_UNK_01aed1bc + 0x1aeccfc));
    func_0x01438628(*(undefined4 *)(_UNK_01aed1c0 + 0x1aecd08));
    func_0x01438628(*(undefined4 *)(_UNK_01aed1c4 + 0x1aecd14));
    func_0x01438628(*(undefined4 *)(_UNK_01aed1c8 + 0x1aecd20));
    func_0x01438628(*(undefined4 *)(_UNK_01aed1cc + 0x1aecd2c));
    func_0x01438628(*(undefined4 *)(_UNK_01aed1d0 + 0x1aecd38));
    func_0x01438628(*(undefined4 *)(_UNK_01aed1d4 + 0x1aecd44));
    func_0x01438628(*(undefined4 *)(_UNK_01aed1d8 + 0x1aecd50));
    func_0x01438628(*(undefined4 *)(_UNK_01aed1dc + 0x1aecd5c));
    func_0x01438628(*(undefined4 *)(_UNK_01aed1e0 + 0x1aecd68));
    func_0x01438628(*(undefined4 *)(_UNK_01aed1e4 + 0x1aecd74));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa4b6,0);
  if (iVar1 == 0) {
    piVar11 = *(int **)(_UNK_01aed1e8 + 0x1aecdd0);
    iVar1 = **(int **)(*piVar11 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar10 = 0;
    iVar1 = func_0x02b63a9c(iVar1,0x206c,0,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_01aed1ec + 0x1aece10) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01aed1f0 + 0x1aece2c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar10 = 0;
      iVar1 = func_0x02b0c634(iVar1,0);
      if (iVar1 < 3) {
        if (*(int *)(**(int **)(_UNK_01aed1f4 + 0x1aece64) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01aed1f8 + 0x1aece80));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar10 = 0;
        iVar1 = func_0x01f59b7c(iVar1,**(undefined4 **)(_UNK_01aed1fc + 0x1aecea8),0);
        piVar13 = *(int **)(_UNK_01aed200 + 0x1aecec0);
        if (*(int *)(*piVar13 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x024eec50(iVar1,0,0);
        if (iVar9 == 0) {
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar10 = 0;
          iVar9 = func_0x024efc2c(iVar1,0);
          if (iVar9 != 0) {
            iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_01aed204 + 0x1aecf18));
            func_0x024eed9c(iVar9,**(undefined4 **)(_UNK_01aed208 + 0x1aecf2c));
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar10 = func_0x024ef308(iVar1,0);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar9 + 8);
            uVar5 = *(uint *)(iVar9 + 0xc);
            piVar3 = *(int **)(_UNK_01aed20c + 0x1aecf7c);
            *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
            iVar12 = *piVar3;
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            if (uVar5 < *(uint *)(iVar7 + 0xc)) {
              *(uint *)(iVar9 + 0xc) = uVar5 + 1;
              puVar2 = (undefined4 *)(iVar7 + uVar5 * 4 + 0x10);
              *puVar2 = uVar10;
              func_0x014385cc(puVar2,uVar10);
            }
            else {
              func_0x0152874c(iVar9,uVar10,
                              *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
            }
            iVar7 = **(int **)(*piVar11 + 0x5c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            piVar3 = (int *)func_0x024ef308(iVar1,0);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            piVar8 = (int *)0x0;
            if ((piVar3 != (int *)0x0) &&
               (piVar8 = piVar3, *piVar3 != **(int **)(_UNK_01aed210 + 0x1aed014))) {
              piVar8 = (int *)0x0;
            }
            uVar10 = 0;
            uStack_3c = 1;
            uStack_40 = 0;
            uStack_34 = 0;
            iStack_38 = iVar9;
            func_0x02b647b4(iVar7,0x206c,piVar8,0);
            iVar9 = **(int **)(*piVar11 + 0x5c);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            uStack_40 = 0;
            iVar9 = func_0x02b6127c(iVar9,0x206c,0,0);
            if (iVar9 != 0) {
              piVar11 = *(int **)(_UNK_01aed214 + 0x1aed090);
              uVar10 = **(undefined4 **)(*piVar11 + 0x5c);
              if (*(int *)(*piVar13 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar9 = func_0x024ef144(uVar10,0,0);
              uVar10 = 1;
              if (iVar9 != 0) {
                iVar9 = **(int **)(*piVar11 + 0x5c);
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                uVar4 = func_0x02d06f88(iVar9,0);
                if (*(int *)(*piVar13 + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar9 = func_0x024ef144(uVar4,0,0);
                if (iVar9 != 0) {
                  iVar9 = **(int **)(*piVar11 + 0x5c);
                  if (iVar9 == 0) {
                    func_0x014388e4();
                  }
                  uVar4 = func_0x02d06f88(iVar9,0);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x024ef308(iVar1,0);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  func_0x024f0474(&fStack_30,iVar1,0);
                  uStack_40 = 0;
                  func_0x0157e8ec(uVar4,_UNK_01aed1b0 - fStack_30,0,0);
                }
              }
            }
          }
        }
      }
    }
    return uVar10;
  }
  iVar1 = func_0x029540a4(0xa4b6,0);
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
  iVar9 = *(int *)(iVar1 + 8);
  uVar10 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  func_0x024f56d0(iVar9,uVar10,&fStack_30,uVar4,0,0);
  uVar10 = func_0x024f56e0(&fStack_30,0,0);
  return uVar10;
}

