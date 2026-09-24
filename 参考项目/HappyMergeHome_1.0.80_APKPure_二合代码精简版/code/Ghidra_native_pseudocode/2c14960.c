
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c24960(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_02c24db0 + 0x2c24978);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c24db4 + 0x2c2498c));
    func_0x01438628(*(undefined4 *)(_UNK_02c24db8 + 0x2c24998));
    func_0x01438628(*(undefined4 *)(_UNK_02c24dbc + 0x2c249a4));
    func_0x01438628(*(undefined4 *)(_UNK_02c24dc0 + 0x2c249b0));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xd51,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xd51,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
    return;
  }
  iVar1 = func_0x02c25d60(param_1);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x11c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) != 0) {
      piVar6 = *(int **)(_UNK_02c24dc4 + 0x2c24a34);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar7 = *(undefined4 **)(_UNK_02c24dc8 + 0x2c24a50);
      iVar1 = func_0x014e9518(*puVar7);
      uVar3 = *(undefined4 *)(param_1 + 0x11c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_02bd138c(iVar1,uVar3,0);
      if (iVar1 == 0) {
        uStack_24 = 0;
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(*puVar7);
        uVar3 = *(undefined4 *)(param_1 + 0x1c);
        uVar4 = *(undefined4 *)(param_1 + 0x11c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_02bd8188(iVar1,uVar4,uVar3,&uStack_24,0);
        if (iVar1 < 1) {
          if (*(char *)(param_1 + 0x119) != '\0') {
            if (*(int *)(*piVar6 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x014e9518(*puVar7);
            uVar3 = FUN_02c19900(param_1);
            uVar4 = FUN_02c0c0ac(param_1);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = FUN_02bd58b4(iVar1,uVar3,uVar4,0);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar1 + 0xc) < 1) {
              func_0x02c26d1c(param_1,0);
            }
            else {
              iVar1 = *(int *)(param_1 + 0x58);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x014e94d8(iVar1,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              func_0x014e94e8(iVar1,0,0);
              if (*(int *)(param_1 + 0x5c) != 0) {
                iVar1 = func_0x014e94d8(*(int *)(param_1 + 0x5c),0);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                func_0x014e94e8(iVar1,0,0);
              }
              if (*(int *)(param_1 + 0xbc) != 0) {
                iVar1 = func_0x014e94d8(*(int *)(param_1 + 0xbc),0);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                func_0x014e94e8(iVar1,0,0);
              }
              if (*(int *)(param_1 + 0xc0) != 0) {
                iVar1 = func_0x014e94d8(*(int *)(param_1 + 0xc0),0);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                func_0x014e94e8(iVar1,0,0);
              }
              iVar1 = *(int *)(param_1 + 0x20);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x014e94d8(iVar1,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              func_0x014e94e8(iVar1,1,0);
              iVar1 = *(int *)(param_1 + 0x28);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x014e94d8(iVar1,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              func_0x014e94e8(iVar1,0,0);
              iVar1 = *(int *)(param_1 + 0xc4);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              func_0x024f1048(iVar1,**(undefined4 **)(_UNK_02c24dcc + 0x2c24ce4),0);
            }
          }
          if (*(int *)(*piVar6 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(*puVar7);
          uVar3 = FUN_02c19900(param_1);
          uVar5 = *(undefined4 *)(param_1 + 0x1c);
          uVar4 = FUN_02c0c0ac(param_1);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = FUN_02bd72b0(iVar1,uVar3,uVar5,uVar4,0);
          if (0 < iVar1) {
            func_0x02c26d1c(param_1,1);
            iVar1 = *(int *)(param_1 + 0xc4);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x024f1048(iVar1,**(undefined4 **)(_UNK_02c24dd0 + 0x2c24d94),0);
            return;
          }
          if (*(char *)(param_1 + 0x119) != '\0') {
            return;
          }
        }
      }
    }
  }
  func_0x02c26d1c(param_1,0);
  return;
}

