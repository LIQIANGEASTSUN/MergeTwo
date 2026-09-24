
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bee744(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_02bee8d4 + 0x2bee764);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bee8d8 + 0x2bee778));
    func_0x01438628(*(undefined4 *)(_UNK_02bee8dc + 0x2bee784));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xe9b,0);
  if (iVar1 == 0) {
    if (param_3 != 0) {
LAB_02bee7e4:
      pcVar7 = (char *)(_UNK_02c02680 + 0x2c02304);
      if (*pcVar7 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02c02684 + 0x2c02318));
        func_0x01438628(*(undefined4 *)(_UNK_02c02688 + 0x2c02324));
        func_0x01438628(*(undefined4 *)(_UNK_02c0268c + 0x2c02330));
        func_0x01438628(*(undefined4 *)(_UNK_02c02690 + 0x2c0233c));
        func_0x01438628(*(undefined4 *)(_UNK_02c02694 + 0x2c02348));
        *pcVar7 = '\x01';
      }
      iVar1 = func_0x02953fd4(0xe9c,0);
      if (iVar1 != 0) {
        iVar1 = func_0x029540a4(0xe9c,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_30 = 0;
        uStack_20 = 0;
        func_0x024f56c0(&uStack_48,0,0);
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        uStack_24 = uStack_3c;
        uStack_20 = uStack_38;
        if (*(int *)(iVar1 + 0x10) != 0) {
          func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
        }
        func_0x01523a6c(&uStack_30,param_1,0);
        iVar4 = *(int *)(iVar1 + 8);
        uVar5 = *(undefined4 *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        uVar3 = 2;
        if (iVar1 == 0) {
          uVar3 = 1;
        }
        func_0x024f56d0(iVar4,uVar5,&uStack_30,uVar3,0,0);
        return;
      }
      iVar1 = *(int *)(param_1 + 0x50);
      if (iVar1 != 0) {
        iVar4 = 0;
        puVar9 = *(undefined4 **)(_UNK_02c02698 + 0x2c023b4);
        piVar8 = *(int **)(_UNK_02c0269c + 0x2c023bc);
        while( true ) {
          if (iVar1 == 0) {
            func_0x014388e4();
            iVar2 = iRam0000000c;
            iVar1 = *(int *)(param_1 + 0x50);
            if (iVar1 == 0) {
              func_0x014388e4();
              iVar1 = 0;
            }
          }
          else {
            iVar2 = *(int *)(iVar1 + 0xc);
          }
          if (iVar2 <= iVar4) break;
          iVar1 = func_0x0152983c(iVar1,iVar4,*puVar9);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar5 = *(undefined4 *)(iVar1 + 0xc);
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x024eec50(uVar5,0,0);
          if (iVar1 == 0) {
            iVar1 = *(int *)(param_1 + 0x50);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x0152983c(iVar1,iVar4,*puVar9);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0xc);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x02c23a10(iVar1,0);
            iVar1 = *(int *)(param_1 + 0x50);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x0152983c(iVar1,iVar4,*puVar9);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0xc);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x024eecb8(iVar1,0);
            if (*(char *)(_UNK_02c026a0 + 0x2c024ec) == '\0') {
              func_0x01438628(*(undefined4 *)(_UNK_02c026a4 + 0x2c02500));
              *(undefined1 *)(_UNK_02c026a8 + 0x2c02510) = 1;
            }
            iVar2 = *(int *)(**(int **)(_UNK_02c026ac + 0x2c02520) + 0x5c);
            uVar3 = *(undefined4 *)(iVar2 + 0xc);
            uVar5 = *(undefined4 *)(iVar2 + 0x10);
            uVar6 = *(undefined4 *)(iVar2 + 0x14);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uStack_28 = 0;
            func_0x024ef328(iVar1,uVar3,uVar5,uVar6);
            iVar1 = *(int *)(param_1 + 0x50);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x0152983c(iVar1,iVar4,*puVar9);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0xc);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x02c19590(iVar1,0);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x014e94f8(iVar1,1,0);
            iVar1 = *(int *)(param_1 + 0x50);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x0152983c(iVar1,iVar4,*puVar9);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0xc);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x02c19590(iVar1,0);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x024f1048(iVar1,**(undefined4 **)(_UNK_02c026b0 + 0x2c0262c),0);
          }
          iVar1 = *(int *)(param_1 + 0x50);
          iVar4 = iVar4 + 1;
        }
        iVar4 = *(int *)(iVar1 + 0xc);
        *(undefined4 *)(iVar1 + 0xc) = 0;
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        if (0 < iVar4) {
          (*(code *)&SUB_051894b8)(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
          return;
        }
      }
      return;
    }
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
      uVar5 = *(undefined4 *)(iVar1 + 0xc);
      if (*(int *)(**(int **)(_UNK_02bee8e0 + 0x2bee84c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x024eec50(uVar5,0,0);
      if (iVar1 == 0) {
        iVar4 = *(int *)(param_1 + 0x44);
        iVar1 = *(int *)(param_1 + 0x50);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar4 + 0xc) <= param_2) {
          func_0x014388e8();
        }
        uVar5 = *(undefined4 *)(iVar4 + param_2 * 4 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x024f2200(iVar1,uVar5,**(undefined4 **)(_UNK_02bee8e4 + 0x2bee8c0));
        if (iVar1 != -1) goto LAB_02bee7e4;
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0xe9b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_20 = 0;
    func_0x028849f0(iVar1,param_1,param_2,param_3);
  }
  return;
}

