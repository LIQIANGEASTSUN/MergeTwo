
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bfbc64(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(iRam02bfbe68 + 0x2bfbc80);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bfbe6c + 0x2bfbc94));
    func_0x01438628(*(undefined4 *)(_UNK_02bfbe70 + 0x2bfbca0));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5d48,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5d48,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0xc);
  }
  if ((param_2 != 0 && iVar1 != 0) && (1 < *(int *)(iVar1 + 0xc))) {
    piVar8 = *(int **)(iVar1 + 0x10);
    iVar5 = *(int *)(param_1 + 0x10);
    iVar1 = **(int **)(_UNK_02bfbe74 + 0x2bfbd24);
    if (piVar8 == (int *)0x0) {
      func_0x014388e4();
    }
    if (*(int *)(*piVar8 + 0x20) == *(int *)(iVar1 + 0x20)) {
      piVar8 = (int *)func_0x014387b0(piVar8);
      if (*piVar8 != iVar5) {
        return;
      }
      iVar1 = *(int *)(param_2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar1 + 0xc) < 2) {
        func_0x014388e8();
      }
      piVar8 = *(int **)(iVar1 + 0x14);
      iVar1 = **(int **)(_UNK_02bfbe78 + 0x2bfbd8c);
      if (piVar8 == (int *)0x0) {
        func_0x014388e4();
      }
      if (*(int *)(*piVar8 + 0x20) == *(int *)(iVar1 + 0x20)) {
        puVar2 = (uint *)func_0x014387b0(piVar8);
        uVar10 = *puVar2;
        iVar1 = func_0x024eecb8(param_1,0);
        uVar6 = *(undefined4 *)(param_1 + 0x18);
        uVar3 = *(undefined4 *)(param_1 + 0x1c);
        uVar9 = *(undefined4 *)(param_1 + 0x20);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uStack_28 = 0;
        func_0x024ef328(iVar1,uVar6,uVar3,uVar9);
        iVar1 = *(int *)(param_1 + 0x44);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar10) {
          func_0x014388e8();
        }
        iVar1 = *(int *)(iVar1 + uVar10 * 4 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        pcVar7 = (char *)(_UNK_02c31e08 + 0x2c31bac);
        if (*pcVar7 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_02c31e0c + 0x2c31bc0),0);
          func_0x01438628(*(undefined4 *)(_UNK_02c31e10 + 0x2c31bcc));
          func_0x01438628(*(undefined4 *)(_UNK_02c31e14 + 0x2c31bd8));
          func_0x01438628(*(undefined4 *)(_UNK_02c31e18 + 0x2c31be4));
          func_0x01438628(*(undefined4 *)(_UNK_02c31e1c + 0x2c31bf0));
          func_0x01438628(*(undefined4 *)(_UNK_02c31e20 + 0x2c31bfc));
          *pcVar7 = '\x01';
        }
        iVar5 = func_0x02953fd4(0x5d49,0);
        if (iVar5 == 0) {
          func_0x02c230dc(iVar1,**(undefined4 **)(_UNK_02c31e24 + 0x2c31c5c),0);
          if ((*(int *)(iVar1 + 0x1c) != 0) &&
             (iVar5 = *(int *)(*(int *)(iVar1 + 0x1c) + 0x50), 0 < iVar5)) {
            iVar4 = **(int **)(**(int **)(_UNK_02c31e28 + 0x2c31c88) + 0x5c);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uStack_38 = 1;
            uStack_40 = 0;
            uStack_3c = 0;
            uStack_34 = 0;
            uStack_50 = 0;
            uStack_4c = 0;
            uStack_48 = 0;
            uStack_44 = 0;
            func_0x02e64460(iVar4,0x66,iVar5);
            if (*(int *)(**(int **)(_UNK_02c31e2c + 0x2c31cf4) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02c31e30 + 0x2c31d10));
            if (*(int *)(**(int **)(_UNK_02c31e34 + 0x2c31d24) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c31e38 + 0x2c31d40));
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar6 = func_0x029be154(iVar4,0);
            iVar4 = *(int *)(iVar1 + 0x1c);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar3 = *(undefined4 *)(iVar4 + 0x50);
            iVar1 = func_0x024eecb8(iVar1,0);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x024ef228(&uStack_2c,iVar1,0);
            uVar9 = uStack_28;
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uStack_4c = 0x3e19999a;
            uStack_50 = 1;
            uStack_48 = 0;
            uStack_44 = 0;
            func_0x02b7827c(iVar5,uVar6,0x66,uVar3,uStack_2c,uVar9,0x3f4ccccd,1);
          }
          return;
        }
        iVar5 = func_0x029540a4(0x5d49,0);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_30 = 0;
        func_0x024f56c0(&uStack_48,0,0);
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        uStack_24 = uStack_3c;
        if (*(int *)(iVar5 + 0x10) != 0) {
          func_0x01523a6c(&uStack_30,*(int *)(iVar5 + 0x10),0);
        }
        func_0x01523a6c(&uStack_30,iVar1,0);
        iVar4 = *(int *)(iVar5 + 8);
        uVar6 = *(undefined4 *)(iVar5 + 0xc);
        iVar1 = *(int *)(iVar5 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        uVar3 = 2;
        if (iVar1 == 0) {
          uVar3 = 1;
        }
        uStack_50 = 0;
        uStack_4c = 0;
        func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3);
        return;
      }
    }
    func_0x01438ca8(piVar8,iVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

