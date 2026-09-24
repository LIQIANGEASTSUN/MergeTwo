
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c026b4(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
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
  
  pcVar4 = (char *)(_UNK_02c02ac4 + 0x2c026d0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c02ac8 + 0x2c026e4));
    func_0x01438628(*(undefined4 *)(_UNK_02c02acc + 0x2c026f0));
    func_0x01438628(*(undefined4 *)(_UNK_02c02ad0 + 0x2c026fc));
    func_0x01438628(*(undefined4 *)(_UNK_02c02ad4 + 0x2c02708));
    func_0x01438628(*(undefined4 *)(_UNK_02c02ad8 + 0x2c02714));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5eea,0);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (param_2 != 0xffffffff) {
      iVar1 = *(int *)(param_1 + 0x50);
    }
    if (param_2 != 0xffffffff && iVar1 != 0) {
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
      piVar9 = *(int **)(_UNK_02c02adc + 0x2c027c0);
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x024eec50(uVar6,0,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x44);
        iVar5 = *(int *)(param_1 + 0x50);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar1 + 0xc) <= param_2) {
          func_0x014388e8();
        }
        uVar6 = *(undefined4 *)(iVar1 + param_2 * 4 + 0x10);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x024f2200(iVar5,uVar6,**(undefined4 **)(_UNK_02c02ae0 + 0x2c02834));
        if (iVar1 != -1) {
          iVar1 = 0;
          puVar8 = *(undefined4 **)(_UNK_02c02ae4 + 0x2c02854);
          while( true ) {
            iVar5 = *(int *)(param_1 + 0x50);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar5 + 0xc) <= iVar1) break;
            iVar5 = *(int *)(param_1 + 0x50);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x0152983c(iVar5,iVar1,*puVar8);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar6 = *(undefined4 *)(iVar5 + 0xc);
            if (*(int *)(*piVar9 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x024eec50(uVar6,0,0);
            if (iVar5 == 0) {
              iVar5 = *(int *)(param_1 + 0x50);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x0152983c(iVar5,iVar1,*puVar8);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = *(int *)(iVar5 + 0xc);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              func_0x02c23a10(iVar5,0);
              iVar5 = *(int *)(param_1 + 0x50);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x0152983c(iVar5,iVar1,*puVar8);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = *(int *)(iVar5 + 0xc);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x024eecb8(iVar5,0);
              if (*(char *)(_UNK_02c02ae8 + 0x2c02974) == '\0') {
                func_0x01438628(*(undefined4 *)(_UNK_02c02aec + 0x2c02988));
                *(undefined1 *)(_UNK_02c02af0 + 0x2c02998) = 1;
              }
              iVar2 = *(int *)(**(int **)(_UNK_02c02af4 + 0x2c029a8) + 0x5c);
              uVar3 = *(undefined4 *)(iVar2 + 0xc);
              uVar6 = *(undefined4 *)(iVar2 + 0x10);
              uVar7 = *(undefined4 *)(iVar2 + 0x14);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uStack_28 = 0;
              func_0x024ef328(iVar5,uVar3,uVar6,uVar7);
              iVar5 = *(int *)(param_1 + 0x50);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x0152983c(iVar5,iVar1,*puVar8);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = *(int *)(iVar5 + 0xc);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x02c19590(iVar5,0);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              func_0x014e94f8(iVar5,1,0);
              iVar5 = *(int *)(param_1 + 0x50);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x0152983c(iVar5,iVar1,*puVar8);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = *(int *)(iVar5 + 0xc);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x02c19590(iVar5,0);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              func_0x024f1048(iVar5,**(undefined4 **)(_UNK_02c02af8 + 0x2c02ab4),0);
            }
            iVar1 = iVar1 + 1;
          }
        }
      }
    }
    return;
  }
  iVar1 = func_0x029540a4(0x5eea,0);
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

