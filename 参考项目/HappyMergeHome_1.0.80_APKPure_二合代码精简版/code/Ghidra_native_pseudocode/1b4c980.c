
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b5c980(undefined4 param_1)

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
  
  pcVar6 = (char *)(_UNK_01b5ce70 + 0x1b5c998);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b5ce74 + 0x1b5c9ac));
    func_0x01438628(*(undefined4 *)(_UNK_01b5ce78 + 0x1b5c9b8));
    func_0x01438628(*(undefined4 *)(_UNK_01b5ce7c + 0x1b5c9c4));
    func_0x01438628(*(undefined4 *)(_UNK_01b5ce80 + 0x1b5c9d0));
    func_0x01438628(*(undefined4 *)(_UNK_01b5ce84 + 0x1b5c9dc));
    func_0x01438628(*(undefined4 *)(_UNK_01b5ce88 + 0x1b5c9e8));
    func_0x01438628(*(undefined4 *)(_UNK_01b5ce8c + 0x1b5c9f4));
    func_0x01438628(*(undefined4 *)(_UNK_01b5ce90 + 0x1b5ca00));
    func_0x01438628(*(undefined4 *)(_UNK_01b5ce94 + 0x1b5ca0c));
    func_0x01438628(*(undefined4 *)(_UNK_01b5ce98 + 0x1b5ca18));
    func_0x01438628(*(undefined4 *)(_UNK_01b5ce9c + 0x1b5ca24));
    func_0x01438628(*(undefined4 *)(_UNK_01b5cea0 + 0x1b5ca30));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa68b,0);
  if (iVar1 == 0) {
    piVar11 = *(int **)(_UNK_01b5cea4 + 0x1b5ca8c);
    iVar1 = **(int **)(*piVar11 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar10 = 0;
    iVar1 = func_0x02b63a9c(iVar1,0x1a90,0,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_01b5cea8 + 0x1b5cacc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01b5ceac + 0x1b5cae8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar10 = 0;
      iVar1 = func_0x02b0c634(iVar1,0);
      if (iVar1 < 3) {
        if (*(int *)(**(int **)(_UNK_01b5ceb0 + 0x1b5cb20) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01b5ceb4 + 0x1b5cb3c));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar10 = 0;
        iVar1 = func_0x01f59b7c(iVar1,**(undefined4 **)(_UNK_01b5ceb8 + 0x1b5cb64),0);
        piVar13 = *(int **)(_UNK_01b5cebc + 0x1b5cb7c);
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
            iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_01b5cec0 + 0x1b5cbd4));
            func_0x024eed9c(iVar9,**(undefined4 **)(_UNK_01b5cec4 + 0x1b5cbe8));
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar10 = func_0x024ef308(iVar1,0);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar9 + 8);
            uVar5 = *(uint *)(iVar9 + 0xc);
            piVar3 = *(int **)(_UNK_01b5cec8 + 0x1b5cc38);
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
               (piVar8 = piVar3, *piVar3 != **(int **)(_UNK_01b5cecc + 0x1b5ccd0))) {
              piVar8 = (int *)0x0;
            }
            uVar10 = 0;
            uStack_3c = 1;
            uStack_40 = 0;
            uStack_34 = 0;
            iStack_38 = iVar9;
            func_0x02b647b4(iVar7,0x1a90,piVar8,0);
            iVar9 = **(int **)(*piVar11 + 0x5c);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            uStack_40 = 0;
            iVar9 = func_0x02b6127c(iVar9,0x1a90,0,0);
            if (iVar9 != 0) {
              piVar11 = *(int **)(_UNK_01b5ced0 + 0x1b5cd4c);
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
                  func_0x0157e8ec(uVar4,_UNK_01b5ce6c - fStack_30,0,0);
                }
              }
            }
          }
        }
      }
    }
    return uVar10;
  }
  iVar1 = func_0x029540a4(0xa68b,0);
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

