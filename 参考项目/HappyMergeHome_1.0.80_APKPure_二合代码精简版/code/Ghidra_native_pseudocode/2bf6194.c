
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c06194(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(iRam02c065a8 + 0x2c061b0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c065ac + 0x2c061c4));
    func_0x01438628(*(undefined4 *)(_UNK_02c065b0 + 0x2c061d0));
    func_0x01438628(*(undefined4 *)(_UNK_02c065b4 + 0x2c061dc));
    func_0x01438628(*(undefined4 *)(_UNK_02c065b8 + 0x2c061e8));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x02953fd4(0x5e10,0);
  if (iVar1 == 0) {
    if (*(uint *)(param_1 + 0xb0) == param_2) {
      uVar2 = param_2;
      if (*(char *)(param_1 + 0x84) == '\0') {
        FUN_02c04cf8(param_1,param_2);
        uVar2 = *(uint *)(param_1 + 0xb0);
      }
      uVar4 = 1;
      if (uVar2 == *(uint *)(param_1 + 0x9c)) {
        iVar1 = **(int **)(**(int **)(_UNK_02c065bc + 0x2c06288) + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02b67b34(iVar1,0);
        if (iVar1 != 0) {
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
          piVar8 = *(int **)(_UNK_02c065c0 + 0x2c062f0);
          uVar5 = *(undefined4 *)(iVar1 + 0xc);
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x024ef144(uVar5,0,0);
          if (iVar1 != 0) {
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
            iVar1 = *(int *)(iVar1 + 0xc);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x02c312b8(iVar1,0,0);
          }
          iVar1 = FUN_02bf1810(param_1,param_2,2);
          iVar6 = *(int *)(param_1 + 0x44);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar6 + 0xc) <= param_2) {
            func_0x014388e8();
          }
          iVar6 = *(int *)(iVar6 + param_2 * 4 + 0x10);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uVar5 = *(undefined4 *)(iVar6 + 0xc);
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x024ef144(uVar5,0,0);
          if (iVar6 != 0) {
            if (*(int *)(**(int **)(_UNK_02c065c4 + 0x2c063f4) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_02c065c8 + 0x2c06410));
            iVar7 = *(int *)(param_1 + 0x44);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar7 + 0xc) <= param_2) {
              func_0x014388e8();
            }
            iVar7 = *(int *)(iVar7 + param_2 * 4 + 0x10);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            uVar5 = func_0x02c3f4b4(iVar7,0);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x029a6fa8(iVar6,uVar5,0);
            if (iVar6 == 0) {
              uVar4 = *(undefined4 *)(param_1 + 0x44);
              func_0x010af2ec(uVar4);
              uVar4 = func_0x010b6f08(uVar4,param_2);
              func_0x010af2ec();
              uStack_24 = func_0x02c3f4b4(uVar4,0);
              uVar4 = func_0x01524ffc(&uStack_24,0);
              uVar5 = func_0x01438638(*(undefined4 *)(_UNK_02c065cc + 0x2c0655c));
              uVar4 = func_0x014e9568(uVar5,uVar4,0);
              func_0x01438638(*(undefined4 *)(_UNK_02c065d0 + 0x2c06578));
              uVar5 = func_0x014388d4();
              func_0x014e95c8(uVar5,uVar4,0);
              uVar4 = func_0x01438638(*(undefined4 *)(_UNK_02c065d4 + 0x2c06598));
              func_0x01438790(uVar5,uVar4);
              func_0x014385d0();
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (*(int *)(iVar6 + 0x1c) == 10) {
              uVar5 = FUN_02bfbfb4(param_1,param_2);
              func_0x024ef208(param_1,uVar5,0);
            }
            if (iVar1 == 0) {
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
              iVar1 = *(int *)(iVar1 + 0xc);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              func_0x02c2d8b4(iVar1,param_2,0);
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5e10,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar4 = func_0x02873a70(iVar1,param_1,param_2,0);
  }
  return uVar4;
}

