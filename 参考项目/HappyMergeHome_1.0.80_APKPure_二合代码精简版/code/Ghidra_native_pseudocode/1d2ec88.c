
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01d3ec88(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  float fStack_30;
  float fStack_2c;
  
  pcVar8 = (char *)(_UNK_01d3f468 + 0x1d3eca8);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01d3f46c + 0x1d3ecbc));
    func_0x01438628(*(undefined4 *)(_UNK_01d3f470 + 0x1d3ecc8));
    func_0x01438628(*(undefined4 *)(_UNK_01d3f474 + 0x1d3ecd4));
    func_0x01438628(*(undefined4 *)(_UNK_01d3f478 + 0x1d3ece0));
    func_0x01438628(*(undefined4 *)(_UNK_01d3f47c + 0x1d3ecec));
    func_0x01438628(*(undefined4 *)(_UNK_01d3f480 + 0x1d3ecf8));
    func_0x01438628(*(undefined4 *)(_UNK_01d3f484 + 0x1d3ed04));
    func_0x01438628(*(undefined4 *)(_UNK_01d3f488 + 0x1d3ed10));
    func_0x01438628(*(undefined4 *)(_UNK_01d3f48c + 0x1d3ed1c));
    func_0x01438628(*(undefined4 *)(_UNK_01d3f490 + 0x1d3ed28));
    func_0x01438628(*(undefined4 *)(_UNK_01d3f494 + 0x1d3ed34));
    func_0x01438628(*(undefined4 *)(_UNK_01d3f498 + 0x1d3ed40));
    func_0x01438628(*(undefined4 *)(_UNK_01d3f49c + 0x1d3ed4c));
    *pcVar8 = '\x01';
  }
  uVar9 = 0;
  iVar1 = func_0x02953fd4(0xb3b1,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01d39bc4(param_1,0);
    if (iVar1 != 0) {
      piVar6 = *(int **)(_UNK_01d3f4a0 + 0x1d3edc8);
      iVar1 = **(int **)(*piVar6 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar9 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        iVar1 = **(int **)(*piVar6 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar9 = 0;
        iVar1 = func_0x02b63a9c(iVar1,param_2,0,0);
        if (iVar1 == 0) {
          piVar6 = *(int **)(_UNK_01d3f4a4 + 0x1d3ee38);
          iVar1 = **(int **)(*piVar6 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x02b2f170(iVar1,0);
          if (iVar1 != 5) {
            iVar1 = **(int **)(*piVar6 + 0x5c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x02b2f170(iVar1,0);
            if (iVar1 != 4) {
              iVar1 = **(int **)(*piVar6 + 0x5c);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x02b2f170(iVar1,0);
              if (iVar1 != 3) {
                return 0;
              }
              if (*(int *)(**(int **)(_UNK_01d3f4cc + 0x1d3f160) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01d3f4d0 + 0x1d3f17c));
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x01f59b7c(iVar1,**(undefined4 **)(_UNK_01d3f4d4 + 0x1d3f1a0),0);
              iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01d3f4d8 + 0x1d3f1b8));
              func_0x024eed9c(iVar2,**(undefined4 **)(_UNK_01d3f4dc + 0x1d3f1cc));
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              uVar9 = func_0x024ef308(iVar1,0);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar10 = *(int *)(iVar2 + 8);
              uVar7 = *(uint *)(iVar2 + 0xc);
              piVar6 = *(int **)(_UNK_01d3f4e0 + 0x1d3f21c);
              *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
              iVar12 = *piVar6;
              if (iVar10 == 0) {
                func_0x014388e4();
              }
              if (uVar7 < *(uint *)(iVar10 + 0xc)) {
                *(uint *)(iVar2 + 0xc) = uVar7 + 1;
                puVar3 = (undefined4 *)(iVar10 + uVar7 * 4 + 0x10);
                *puVar3 = uVar9;
                func_0x014385cc(puVar3,uVar9);
              }
              else {
                func_0x0152874c(iVar2,uVar9,
                                *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
              }
              piVar6 = *(int **)(_UNK_01d3f4e4 + 0x1d3f278);
              iVar10 = **(int **)(*piVar6 + 0x5c);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              piVar4 = (int *)func_0x024ef308(iVar1,0);
              if (iVar10 == 0) {
                func_0x014388e4();
              }
              piVar11 = (int *)0x0;
              if ((piVar4 != (int *)0x0) &&
                 (piVar11 = piVar4, *piVar4 != **(int **)(_UNK_01d3f4e8 + 0x1d3f2bc))) {
                piVar11 = (int *)0x0;
              }
              func_0x02b647b4(iVar10,param_3,piVar11,0,0,1,iVar2,0);
              iVar2 = **(int **)(*piVar6 + 0x5c);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar2 = func_0x02b6127c(iVar2,param_2,0,0,0);
              if (iVar2 == 0) {
                return 0;
              }
              piVar6 = *(int **)(_UNK_01d3f4ec + 0x1d3f338);
              piVar4 = *(int **)(_UNK_01d3f4f0 + 0x1d3f344);
              uVar9 = **(undefined4 **)(*piVar6 + 0x5c);
              if (*(int *)(*piVar4 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar2 = func_0x024ef144(uVar9,0,0);
              if (iVar2 == 0) {
                return 1;
              }
              iVar2 = **(int **)(*piVar6 + 0x5c);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              uVar9 = func_0x02d06f88(iVar2,0);
              if (*(int *)(*piVar4 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar2 = func_0x024ef144(uVar9,0,0);
              if (iVar2 == 0) {
                return 1;
              }
              iVar2 = **(int **)(*piVar6 + 0x5c);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              uVar9 = func_0x02d06f88(iVar2,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x024ef308(iVar1,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              func_0x024f0474(&fStack_30,iVar1,0);
              func_0x0157e8ec(uVar9,_UNK_01d3f460 - fStack_30,0,0,0);
              return 1;
            }
          }
          if (*(int *)(**(int **)(_UNK_01d3f4a8 + 0x1d3ee98) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01d3f4ac + 0x1d3eeb4));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x01f59b7c(iVar1,**(undefined4 **)(_UNK_01d3f4b0 + 0x1d3eed8),0);
          iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01d3f4b4 + 0x1d3eef0));
          func_0x024eed9c(iVar2,**(undefined4 **)(_UNK_01d3f4b8 + 0x1d3ef04));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar9 = func_0x024ef308(iVar1,0);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar2 + 8);
          uVar7 = *(uint *)(iVar2 + 0xc);
          piVar6 = *(int **)(_UNK_01d3f4bc + 0x1d3ef54);
          *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
          iVar12 = *piVar6;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          if (uVar7 < *(uint *)(iVar10 + 0xc)) {
            *(uint *)(iVar2 + 0xc) = uVar7 + 1;
            puVar3 = (undefined4 *)(iVar10 + uVar7 * 4 + 0x10);
            *puVar3 = uVar9;
            func_0x014385cc(puVar3,uVar9);
          }
          else {
            func_0x0152874c(iVar2,uVar9,
                            *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
          }
          piVar6 = *(int **)(_UNK_01d3f4c0 + 0x1d3efb0);
          iVar10 = **(int **)(*piVar6 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          piVar4 = (int *)func_0x024ef308(iVar1,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          piVar11 = (int *)0x0;
          if ((piVar4 != (int *)0x0) &&
             (piVar11 = piVar4, *piVar4 != **(int **)(_UNK_01d3f4c4 + 0x1d3eff4))) {
            piVar11 = (int *)0x0;
          }
          uVar9 = 0;
          func_0x02b647b4(iVar10,param_3,piVar11,0,0,1,iVar2,0);
          iVar2 = **(int **)(*piVar6 + 0x5c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x02b6127c(iVar2,param_2,0,0,0);
          if (iVar2 != 0) {
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x024ef308(iVar1,0);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x024eff78(iVar2,0);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar5 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_01d3f4c8 + 0x1d3f0b4));
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar9 = 0;
            iVar1 = func_0x024ef308(iVar1,0);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x024f0474(&fStack_30,iVar1,0);
            func_0x0157ead0(uVar5,_UNK_01d3f464 - fStack_2c,0,0,0);
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0xb3b1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar9 = func_0x028b04e8(iVar1,param_1,param_2,param_3,0);
  }
  return uVar9;
}

