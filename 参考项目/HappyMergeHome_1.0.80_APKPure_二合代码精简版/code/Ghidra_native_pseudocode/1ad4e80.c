
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ae4e80(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
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
  
  pcVar5 = (char *)(_UNK_01ae52e0 + 0x1ae4e9c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ae52e4 + 0x1ae4eb0));
    func_0x01438628(*(undefined4 *)(_UNK_01ae52e8 + 0x1ae4ebc));
    func_0x01438628(*(undefined4 *)(_UNK_01ae52ec + 0x1ae4ec8));
    func_0x01438628(*(undefined4 *)(_UNK_01ae52f0 + 0x1ae4ed4));
    func_0x01438628(*(undefined4 *)(_UNK_01ae52f4 + 0x1ae4ee0));
    func_0x01438628(*(undefined4 *)(_UNK_01ae52f8 + 0x1ae4eec));
    func_0x01438628(*(undefined4 *)(_UNK_01ae52fc + 0x1ae4ef8));
    func_0x01438628(*(undefined4 *)(_UNK_01ae5300 + 0x1ae4f04));
    func_0x01438628(*(undefined4 *)(_UNK_01ae5304 + 0x1ae4f10));
    func_0x01438628(*(undefined4 *)(_UNK_01ae5308 + 0x1ae4f1c));
    func_0x01438628(*(undefined4 *)(_UNK_01ae530c + 0x1ae4f28));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xce4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xce4,0);
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
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  if (param_2 != 0) {
    if (*(int *)(**(int **)(_UNK_01ae5310 + 0x1ae4f90) + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar11 = *(undefined4 **)(_UNK_01ae5314 + 0x1ae4fac);
    iVar1 = func_0x014e9518(*puVar11);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) && (*(int *)(param_2 + 0x28) < 1)) {
      iVar1 = func_0x0152983c(iVar1,0,**(undefined4 **)(_UNK_01ae5318 + 0x1ae4ff0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x026befb0(param_2,*(undefined4 *)(iVar1 + 0xc),0);
    }
    iVar1 = func_0x01ae5790(param_1);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_2 + 0x18);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x48);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024f04c8(iVar1,**(undefined4 **)(_UNK_01ae531c + 0x1ae5054));
      iVar1 = func_0x01ae5790(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0x14) != 0) {
        iVar1 = 0;
        puVar12 = *(undefined4 **)(_UNK_01ae5320 + 0x1ae5090);
        puVar10 = *(undefined4 **)(_UNK_01ae5324 + 0x1ae5098);
        while( true ) {
          iVar6 = func_0x01ae5790(param_1);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = *(int *)(iVar6 + 0x14);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar6 + 0xc) <= iVar1) break;
          iVar6 = *(int *)(param_2 + 0x18);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar8 = *(int *)(iVar6 + 0x48);
          iVar6 = func_0x01ae5790(param_1);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = *(int *)(iVar6 + 0x14);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uVar7 = func_0x024f0530(iVar6,iVar1,*puVar12);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar8,uVar7,*puVar10);
          iVar1 = iVar1 + 1;
        }
      }
    }
    iVar1 = *(int *)(param_2 + 0x18);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) < 1) {
      if (*(int *)(**(int **)(_UNK_01ae5328 + 0x1ae5198) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(*puVar11);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x20);
      if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
        iVar6 = 0;
        puVar11 = *(undefined4 **)(_UNK_01ae532c + 0x1ae51e8);
        puVar10 = *(undefined4 **)(_UNK_01ae5330 + 0x1ae51f0);
        puVar12 = *(undefined4 **)(_UNK_01ae5334 + 0x1ae51f8);
        do {
          iVar8 = *(int *)(param_2 + 0x18);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar9 = *(int *)(iVar8 + 0x30);
          iVar8 = func_0x0152983c(iVar1,iVar6,*puVar11);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          uVar7 = *(undefined4 *)(iVar8 + 8);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar8 = func_0x024f0f34(iVar9,uVar7,*puVar10);
          if (iVar8 == 0) {
            iVar8 = *(int *)(param_2 + 0x18);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            iVar9 = *(int *)(iVar8 + 0x30);
            iVar8 = func_0x0152983c(iVar1,iVar6,*puVar11);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            uVar7 = *(undefined4 *)(iVar8 + 8);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            func_0x024f05ac(iVar9,uVar7,*puVar12);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(iVar1 + 0xc));
      }
    }
    iVar1 = *(int *)(param_2 + 0x18);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 8) < 1) {
      iVar1 = *(int *)(param_2 + 0x18);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      pcVar5 = (char *)(_UNK_026bfab8 + 0x26bfa30);
      if (*pcVar5 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_026bfabc + 0x26bfa44),1,0);
        func_0x01438628(*(undefined4 *)(_UNK_026bfac0 + 0x26bfa50));
        *pcVar5 = '\x01';
      }
      if (*(int *)(iVar1 + 8) != 1) {
        piVar2 = *(int **)(_UNK_026bfac4 + 0x26bfa70);
        *(undefined4 *)(iVar1 + 8) = 1;
        if (*(int *)(*piVar2 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_026bfac8 + 0x26bfa90));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar3 = *(uint *)(iVar1 + 0x60);
        *(uint *)(iVar1 + 0x60) = uVar3 + 1;
        *(uint *)(iVar1 + 100) = *(int *)(iVar1 + 100) + (uint)(0xfffffffe < uVar3);
        return;
      }
      return;
    }
  }
  return;
}

