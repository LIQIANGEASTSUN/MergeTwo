
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c09134(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
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
  
  pcVar5 = (char *)(_UNK_02c095fc + 0x2c09150);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c09600 + 0x2c09164));
    func_0x01438628(*(undefined4 *)(_UNK_02c09604 + 0x2c09170));
    func_0x01438628(*(undefined4 *)(_UNK_02c09608 + 0x2c0917c));
    func_0x01438628(*(undefined4 *)(_UNK_02c0960c + 0x2c09188));
    func_0x01438628(*(undefined4 *)(_UNK_02c09610 + 0x2c09194));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5ec6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5ec6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar4,&uStack_38,uVar2,0,0);
    uVar4 = func_0x024f56e0(&uStack_38,0,0);
    return uVar4;
  }
  piVar8 = *(int **)(_UNK_02c09614 + 0x2c091f4);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar7 = *(undefined4 **)(_UNK_02c09618 + 0x2c09210);
  iVar1 = func_0x014e9518(*puVar7);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = FUN_02bad204(iVar1,param_2,uVar4,0);
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar1 + 0xc) <= param_2) {
    func_0x014388e8();
  }
  iVar1 = *(int *)(iVar1 + param_2 * 4 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = 0;
  iVar1 = func_0x02c3f4b4(iVar1,0);
  if (iVar1 != -1) {
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(*puVar7);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = 0;
    iVar1 = FUN_02baf28c(iVar1,uVar4,0);
    if (iVar1 == 0) {
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(*puVar7);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = 0;
      iVar1 = FUN_02bad0f4(iVar1,uVar4,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x44);
        uVar6 = *(uint *)(param_1 + 0xb0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar6) {
          func_0x014388e8();
        }
        iVar1 = *(int *)(iVar1 + uVar6 * 4 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = *(undefined4 *)(iVar1 + 0xc);
        if (*(int *)(**(int **)(_UNK_02c0961c + 0x2c09360) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x024ef144(uVar2,0,0);
        if (iVar1 != 0) {
          iVar1 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(param_1 + 0xb0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar1 + 0xc) <= uVar6) {
            func_0x014388e8();
          }
          iVar1 = *(int *)(iVar1 + uVar6 * 4 + 0x10);
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
          if (*(int *)(iVar1 + 0x1c) == 0x10) {
            if (*(int *)(*piVar8 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x014e9518(*puVar7);
            uVar2 = *(undefined4 *)(param_1 + 0x10);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = FUN_02bd158c(iVar1,param_2,uVar2,0);
            if (*(int *)(*piVar8 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar3 = func_0x014e9518(*puVar7);
            if (iVar1 != 0) {
              uVar2 = *(undefined4 *)(param_1 + 0x10);
              uVar4 = *(undefined4 *)(param_1 + 0xb0);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uStack_30 = 1;
              uStack_2c = 0;
              FUN_02bda8ac(iVar3,uVar4,uVar2,**(undefined4 **)(_UNK_02c09620 + 0x2c09488));
              iVar1 = func_0x014e9518(*puVar7);
              iVar3 = *(int *)(param_1 + 0x44);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              if (*(uint *)(iVar3 + 0xc) <= param_2) {
                func_0x014388e8();
              }
              iVar3 = *(int *)(iVar3 + param_2 * 4 + 0x10);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uVar4 = func_0x02c3f4b4(iVar3,0);
              uVar2 = *(undefined4 *)(param_1 + 0x10);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              uStack_30 = 0xf;
              uStack_28 = 0;
              uStack_2c = uVar2;
              FUN_02bd3648(iVar1,param_2,uVar4,1);
              FUN_02bf6cf8(param_1,param_2);
              iVar1 = FUN_02beba7c(param_1,param_2);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = *(int *)(iVar1 + 0xc);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              func_0x02c230dc(iVar1,**(undefined4 **)(_UNK_02c09624 + 0x2c09570),1,0);
              FUN_02bef6b4(param_1,0);
              *(uint *)(param_1 + 0xa0) = param_2;
              return 1;
            }
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar1 = FUN_02baf28c(iVar3,uVar4,0);
            if (iVar1 != 0) {
              *(uint *)(param_1 + 0xa0) = param_2;
              iVar1 = FUN_02bfb30c(param_1);
              if (iVar1 == 0) {
                return 1;
              }
              FUN_02c071a4(param_1,*(undefined4 *)(param_1 + 0xb0),param_2);
              return 1;
            }
          }
        }
        *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0xb0);
        FUN_02c04cf8(param_1);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

