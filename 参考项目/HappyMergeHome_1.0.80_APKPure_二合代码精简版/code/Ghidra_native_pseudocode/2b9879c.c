
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ba879c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02ba918c + 0x2ba87b4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ba9190 + 0x2ba87c8));
    func_0x01438628(*(undefined4 *)(_UNK_02ba9194 + 0x2ba87d4));
    func_0x01438628(*(undefined4 *)(_UNK_02ba9198 + 0x2ba87e0));
    func_0x01438628(*(undefined4 *)(_UNK_02ba919c + 0x2ba87ec));
    func_0x01438628(*(undefined4 *)(_UNK_02ba91a0 + 0x2ba87f8));
    func_0x01438628(*(undefined4 *)(_UNK_02ba91a4 + 0x2ba8804));
    func_0x01438628(*(undefined4 *)(_UNK_02ba91a8 + 0x2ba8810));
    func_0x01438628(*(undefined4 *)(_UNK_02ba91ac + 0x2ba881c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba91b0 + 0x2ba8828));
    func_0x01438628(*(undefined4 *)(_UNK_02ba91b4 + 0x2ba8834));
    func_0x01438628(*(undefined4 *)(_UNK_02ba91b8 + 0x2ba8840));
    func_0x01438628(*(undefined4 *)(_UNK_02ba91bc + 0x2ba884c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba91c0 + 0x2ba8858));
    func_0x01438628(*(undefined4 *)(_UNK_02ba91c4 + 0x2ba8864));
    func_0x01438628(*(undefined4 *)(_UNK_02ba91c8 + 0x2ba8870));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1000,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1000,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar7,&fStack_30,uVar3,0,0);
    return;
  }
  piVar6 = *(int **)(_UNK_02ba91cc + 0x2ba88cc);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x01da3ca8(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x01da858c(iVar1,0,0);
  if (iVar1 == 0) {
    return;
  }
  piVar10 = *(int **)(_UNK_02ba91d0 + 0x2ba8918);
  iVar1 = **(int **)(*piVar10 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar4 = *piVar6;
  if (*(char *)(iVar1 + 0x2d) != '\0') {
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x014387a4();
      iVar4 = *piVar6;
    }
    if (**(char **)(iVar4 + 0x5c) == '\0') {
      return;
    }
    iVar1 = **(int **)(*piVar10 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
      iVar4 = *piVar6;
    }
    iVar2 = *(int *)(iVar4 + 0x74);
    *(undefined1 *)(iVar1 + 0x2d) = 0;
    if (iVar2 == 0) {
      func_0x014387a4();
      iVar4 = *piVar6;
    }
    **(undefined1 **)(iVar4 + 0x5c) = 0;
  }
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x01da3ca8(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x01da3ff8(iVar1,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = **(int **)(*piVar10 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02b63a9c(iVar1,0x903,0,0);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = **(int **)(*piVar10 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02b63a9c(iVar1,0x902,0,0);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = **(int **)(**(int **)(_UNK_02ba91d4 + 0x2ba8a50) + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar8 = 0;
  iVar1 = func_0x02c3d868(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02be9134(iVar1,0);
  piVar6 = *(int **)(_UNK_02ba91d8 + 0x2ba8aa4);
  puVar11 = *(undefined4 **)(_UNK_02ba91dc + 0x2ba8aac);
  do {
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar8) {
      if (*(int *)(**(int **)(_UNK_02ba91e0 + 0x2ba8b5c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02ba91e4 + 0x2ba8b78));
      piVar6 = *(int **)(_UNK_02ba91e8 + 0x2ba8b90);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x03579aec(iVar1,**(undefined4 **)(_UNK_02ba91f0 + 0x2ba8bac),
                              **(undefined4 **)(_UNK_02ba91ec + 0x2ba8ba0));
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02ba91f4 + 0x2ba8bc4));
      func_0x024eed9c(iVar1,**(undefined4 **)(_UNK_02ba91f8 + 0x2ba8bd8));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x024eecb8(iVar4,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar1 + 8);
      uVar8 = *(uint *)(iVar1 + 0xc);
      piVar10 = *(int **)(_UNK_02ba91fc + 0x2ba8c28);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      iVar13 = *piVar10;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (uVar8 < *(uint *)(iVar2 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar8 + 1;
        puVar11 = (undefined4 *)(iVar2 + uVar8 * 4 + 0x10);
        *puVar11 = uVar7;
        func_0x014385cc(puVar11,uVar7);
      }
      else {
        func_0x0152874c(iVar1,uVar7,*(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38)
                       );
      }
      iVar2 = **(int **)(*piVar6 + 0x5c);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      piVar10 = (int *)func_0x024eecb8(iVar4,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      piVar9 = (int *)0x0;
      if ((piVar10 != (int *)0x0) &&
         (piVar9 = piVar10, *piVar10 != **(int **)(_UNK_02ba9240 + 0x2ba8cc0))) {
        piVar9 = (int *)0x0;
      }
      uStack_3c = 1;
      uStack_34 = 0;
      uStack_40 = 0;
      iStack_38 = iVar1;
      func_0x02b647b4(iVar2,0x903,piVar9,0);
      iVar1 = **(int **)(*piVar6 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_40 = 0;
      func_0x02b6127c(iVar1,0x903,0,0);
      iVar1 = **(int **)(_UNK_02ba9244 + 0x2ba8d30);
      goto LAB_02ba8d30;
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar8) {
      func_0x014388e8();
    }
    iVar4 = *(int *)(iVar1 + 0x10 + uVar8 * 4);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    if ((*(char *)(iVar4 + 0x28) != '\0') && (*(int *)(iVar4 + 0x14) == 1)) {
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(*puVar11);
      uVar7 = func_0x02c3f4b4(iVar4,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x02c4ab68(iVar2,uVar7,0);
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar4 + 0xc);
        iVar2 = **(int **)(**(int **)(_UNK_02ba9200 + 0x2ba8dc8) + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        piVar6 = (int *)func_0x024eecb8(iVar1,0);
        iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02ba9204 + 0x2ba8dfc));
        func_0x024eed9c(iVar1,**(undefined4 **)(_UNK_02ba9208 + 0x2ba8e10));
        iVar4 = *(int *)(iVar4 + 0xc);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        uVar7 = func_0x024eecb8(iVar4,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar1 + 8);
        uVar8 = *(uint *)(iVar1 + 0xc);
        piVar10 = *(int **)(_UNK_02ba920c + 0x2ba8e64);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        iVar13 = *piVar10;
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        if (uVar8 < *(uint *)(iVar4 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar8 + 1;
          puVar11 = (undefined4 *)(iVar4 + uVar8 * 4 + 0x10);
          *puVar11 = uVar7;
          func_0x014385cc(puVar11,uVar7);
        }
        else {
          func_0x0152874c(iVar1,uVar7,
                          *(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
        }
        piVar9 = *(int **)(_UNK_02ba9210 + 0x2ba8ec0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        piVar12 = (int *)0x0;
        if ((piVar6 != (int *)0x0) &&
           (piVar12 = piVar6, *piVar6 != **(int **)(_UNK_02ba9214 + 0x2ba8ee0))) {
          piVar12 = (int *)0x0;
        }
        uStack_40 = 0;
        uStack_3c = 1;
        uStack_34 = 0;
        iStack_38 = iVar1;
        func_0x02b647b4(iVar2,0x902,piVar12,0);
        iVar1 = **(int **)(*piVar9 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uStack_40 = 0;
        iVar1 = func_0x02b6127c(iVar1,0x902,0,0);
        if (iVar1 != 0) {
          piVar12 = *(int **)(_UNK_02ba9218 + 0x2ba8f54);
          piVar6 = *(int **)(_UNK_02ba921c + 0x2ba8f60);
          uVar7 = **(undefined4 **)(*piVar12 + 0x5c);
          if (*(int *)(*piVar6 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x024ef144(uVar7,0,0);
          if (iVar1 != 0) {
            iVar1 = **(int **)(*piVar12 + 0x5c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar7 = func_0x02d06f88(iVar1,0);
            if (*(int *)(*piVar6 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x024ef144(uVar7,0,0);
            if (iVar1 != 0) {
              if (*(int *)(**(int **)(_UNK_02ba9220 + 0x2ba8ff0) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02ba9224 + 0x2ba900c));
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar4 = func_0x03579aec(iVar1,**(undefined4 **)(_UNK_02ba922c + 0x2ba9038),
                                      **(undefined4 **)(_UNK_02ba9228 + 0x2ba902c));
              iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02ba9230 + 0x2ba9050));
              func_0x024eed9c(iVar1,**(undefined4 **)(_UNK_02ba9234 + 0x2ba9064));
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              uVar7 = func_0x024eecb8(iVar4,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar2 = *(int *)(iVar1 + 8);
              uVar8 = *(uint *)(iVar1 + 0xc);
              iVar13 = *piVar10;
              *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              if (uVar8 < *(uint *)(iVar2 + 0xc)) {
                *(uint *)(iVar1 + 0xc) = uVar8 + 1;
                puVar11 = (undefined4 *)(iVar2 + uVar8 * 4 + 0x10);
                *puVar11 = uVar7;
                func_0x014385cc(puVar11,uVar7);
              }
              else {
                func_0x0152874c(iVar1,uVar7,
                                *(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
              }
              piVar6 = *(int **)(_UNK_02ba9238 + 0x2ba9108);
              iVar2 = **(int **)(*piVar9 + 0x5c);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              piVar10 = (int *)func_0x024eecb8(iVar4,0);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              piVar9 = (int *)0x0;
              if ((piVar10 != (int *)0x0) &&
                 (piVar9 = piVar10, *piVar10 != **(int **)(_UNK_02ba923c + 0x2ba914c))) {
                piVar9 = (int *)0x0;
              }
              uStack_40 = 0;
              uStack_3c = 1;
              uStack_34 = 0;
              iStack_38 = iVar1;
              func_0x02b647b4(iVar2,0x903,piVar9,0);
              iVar1 = *piVar6;
LAB_02ba8d30:
              iVar1 = **(int **)(iVar1 + 0x5c);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              uVar7 = func_0x02d06f88(iVar1,0);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x024eecb8(iVar4,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              func_0x024f0474(&fStack_30,iVar1,0);
              uStack_40 = 0;
              func_0x0157e8ec(uVar7,_UNK_02ba9188 - fStack_30,0,0);
            }
          }
        }
        return;
      }
    }
    uVar8 = uVar8 + 1;
  } while( true );
}

