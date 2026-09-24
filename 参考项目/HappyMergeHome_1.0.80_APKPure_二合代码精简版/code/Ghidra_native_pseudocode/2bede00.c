
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bfde00(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  pcVar7 = (char *)(_UNK_02bfe6c8 + 0x2bfde24);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bfe6cc + 0x2bfde38));
    func_0x01438628(*(undefined4 *)(_UNK_02bfe6d0 + 0x2bfde44));
    func_0x01438628(*(undefined4 *)(_UNK_02bfe6d4 + 0x2bfde50));
    func_0x01438628(*(undefined4 *)(_UNK_02bfe6d8 + 0x2bfde5c));
    func_0x01438628(*(undefined4 *)(_UNK_02bfe6dc + 0x2bfde68));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5d4d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5d4d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f56c0(&uStack_50,0,param_2,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&stack0xffffffc8,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&stack0xffffffc8,param_1,0);
    func_0x01523a6c(&stack0xffffffc8,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&stack0xffffffc8,uVar4,0,0);
    return;
  }
  *(undefined1 *)(param_1 + 200) = 1;
  if (*(int *)(param_1 + 0xb0) != -1) {
    iVar1 = FUN_02bfb30c(param_1);
    if (iVar1 == 0) {
      if ((*(int *)(param_1 + 0x9c) != *(int *)(param_1 + 0xb0)) &&
         (iVar1 = FUN_02bfb1f0(param_1), iVar1 == 0)) {
        FUN_02bee8e8(param_1,*(undefined4 *)(param_1 + 0xb0),0,1,0);
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x44);
      uVar8 = *(uint *)(param_1 + 0xb0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar8) {
        func_0x014388e8();
      }
      iVar1 = *(int *)(iVar1 + uVar8 * 4 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar12 = *(int **)(_UNK_02bfe6e0 + 0x2bfdf2c);
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
      if (*(int *)(*piVar12 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x024ef144(uVar6,0,0);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0x44);
        uVar8 = *(uint *)(param_1 + 0xb0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar8) {
          func_0x014388e8();
        }
        iVar1 = *(int *)(iVar1 + uVar8 * 4 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar1 + 0x1c) != 0) {
          iVar1 = *(int *)(param_1 + 0x44);
          uVar8 = *(uint *)(param_1 + 0xb0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar1 + 0xc) <= uVar8) {
            func_0x014388e8();
          }
          iVar1 = *(int *)(iVar1 + uVar8 * 4 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0xc);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0x1c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar1 + 0x20) == 1) {
            piVar2 = (int *)func_0x01ae369c(0);
            if (piVar2 == (int *)0x0) {
              func_0x014388e4();
            }
            iVar1 = (**(code **)(*piVar2 + 0x110))(piVar2,0,*(undefined4 *)(*piVar2 + 0x114));
            if (iVar1 == 0) {
              return;
            }
          }
        }
      }
      iVar1 = *(int *)(param_1 + 0x44);
      uVar8 = *(uint *)(param_1 + 0xb0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar8) {
        func_0x014388e8();
      }
      iVar1 = *(int *)(iVar1 + uVar8 * 4 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
      if (*(int *)(*piVar12 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x024ef144(uVar6,0,0);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0x44);
        uVar8 = *(uint *)(param_1 + 0xb0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar8) {
          func_0x014388e8();
        }
        iVar1 = *(int *)(iVar1 + uVar8 * 4 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar1 + 0x1c) != 0) {
          iVar1 = *(int *)(param_1 + 0x44);
          uVar8 = *(uint *)(param_1 + 0xb0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar1 + 0xc) <= uVar8) {
            func_0x014388e8();
          }
          iVar1 = *(int *)(iVar1 + uVar8 * 4 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0xc);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0x1c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar1 + 0x1c) == 200) {
            return;
          }
        }
      }
      if (param_2 == 0) {
        func_0x014388e4();
      }
      uVar11 = *(undefined4 *)(param_2 + 0x4c);
      uVar4 = *(undefined4 *)(param_2 + 0x50);
      uVar6 = *(undefined4 *)(param_2 + 0x54);
      uVar10 = *(undefined4 *)(param_2 + 200);
      uVar9 = *(undefined4 *)(param_2 + 0xcc);
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024efc6c(&fStack_4c,iVar1,uVar11,uVar4,uVar6,0);
      if (*(char *)(param_1 + 0x84) != '\0') {
        if ((ABS(fStack_4c - *(float *)(param_1 + 0x78)) <
             *(float *)(param_1 + 0x3c) * _UNK_02bfe394) &&
           (ABS(fStack_48 - *(float *)(param_1 + 0x7c)) < *(float *)(param_1 + 0x40) * _UNK_02bfe394
           )) {
          return;
        }
        *(undefined1 *)(param_1 + 0x84) = 0;
      }
      piVar2 = (int *)(param_1 + 0x98);
      if (*piVar2 != 0) {
        func_0x0333a0d0(*piVar2,0,0);
      }
      if ((1.0 <= ABS(fStack_44)) || (1.0 <= ABS(*(float *)(param_1 + 0x90)))) {
        iVar1 = *(int *)(param_1 + 0x44);
        uVar8 = *(uint *)(param_1 + 0xb0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar8) {
          func_0x014388e8();
        }
        iVar1 = *(int *)(iVar1 + uVar8 * 4 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar6 = *(undefined4 *)(iVar1 + 0xc);
        if (*(int *)(*piVar12 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x024ef144(uVar6,0,0);
        if (iVar1 != 0) {
          iVar1 = *(int *)(param_1 + 0x44);
          uVar8 = *(uint *)(param_1 + 0xb0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar1 + 0xc) <= uVar8) {
            func_0x014388e8();
          }
          iVar1 = *(int *)(iVar1 + uVar8 * 4 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0xc);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x024eecb8(iVar1,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x024ef1f8(iVar1,fStack_4c,fStack_48,fStack_44,0);
          piVar12 = *(int **)(_UNK_02bfe6e4 + 0x2bfe498);
        }
      }
      else {
        iVar1 = *(int *)(param_1 + 0x44);
        uVar8 = *(uint *)(param_1 + 0xb0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar8) {
          func_0x014388e8();
        }
        iVar1 = *(int *)(iVar1 + uVar8 * 4 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar6 = *(undefined4 *)(iVar1 + 0xc);
        if (*(int *)(*piVar12 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x024ef144(uVar6,0,0);
        if (iVar1 != 0) {
          iVar1 = *(int *)(param_1 + 0x44);
          uVar8 = *(uint *)(param_1 + 0xb0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar1 + 0xc) <= uVar8) {
            func_0x014388e8();
          }
          iVar1 = *(int *)(iVar1 + uVar8 * 4 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0xc);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar6 = func_0x024eecb8(iVar1,0);
          uStack_50 = 0;
          iVar1 = func_0x03342888(uVar6,fStack_4c,fStack_48,fStack_44,0x3dcccccd,0);
          *piVar2 = iVar1;
          func_0x014385cc(piVar2,iVar1);
        }
      }
      piVar2 = *(int **)(_UNK_02bfe6e8 + 0x2bfe4a0);
      *(float *)(param_1 + 0x88) = fStack_4c;
      *(float *)(param_1 + 0x8c) = fStack_48;
      iVar1 = *piVar2;
      *(float *)(param_1 + 0x90) = fStack_44;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bfe6ec + 0x2bfe4c8));
      piVar2 = *(int **)(_UNK_02bfe6f0 + 0x2bfe4dc);
      iVar5 = *piVar2;
      if (*(int *)(iVar5 + 0x74) == 0) {
        func_0x014387a4();
        iVar5 = *piVar2;
      }
      uVar6 = **(undefined4 **)(iVar5 + 0x5c);
      piVar2 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02bfe6f4 + 0x2bfe500),1);
      iVar5 = FUN_02bfaf34(param_1,uVar10,uVar9);
      if (piVar2 == (int *)0x0) {
        func_0x014388e4();
      }
      if ((iVar5 != 0) &&
         (iVar3 = func_0x014387a8(iVar5,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
        uVar4 = func_0x01438904();
        func_0x01438790(uVar4,0);
      }
      if (piVar2[3] == 0) {
        func_0x014388e8();
      }
      piVar2[4] = iVar5;
      func_0x014385cc(piVar2 + 4,iVar5);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02990414(iVar1,uVar6,piVar2,0);
      uVar6 = FUN_02bed260(param_1,fStack_4c,fStack_48,fStack_44,*(undefined4 *)(param_1 + 0xb0));
      func_0x02bfe6f8(param_1,uVar6);
      FUN_02bee8e8(param_1,0xffffffff,0,1,0);
      iVar1 = *(int *)(param_1 + 0x44);
      uVar8 = *(uint *)(param_1 + 0xb0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar8) {
        func_0x014388e8();
      }
      iVar1 = *(int *)(iVar1 + uVar8 * 4 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
      if (*(int *)(*piVar12 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x024ef144(uVar6,0,0);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0x44);
        uVar8 = *(uint *)(param_1 + 0xb0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar8) {
          func_0x014388e8();
        }
        iVar1 = *(int *)(iVar1 + uVar8 * 4 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x024eecb8(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024f1154(iVar1,0);
      }
    }
  }
  return;
}

