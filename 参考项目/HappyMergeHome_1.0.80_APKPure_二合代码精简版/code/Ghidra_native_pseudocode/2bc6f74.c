
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bd6f74(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_02bd7278 + 0x2bd6f94);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd727c + 0x2bd6fa8));
    func_0x01438628(*(undefined4 *)(_UNK_02bd7280 + 0x2bd6fb4));
    func_0x01438628(*(undefined4 *)(_UNK_02bd7284 + 0x2bd6fc0));
    func_0x01438628(*(undefined4 *)(_UNK_02bd7288 + 0x2bd6fcc));
    func_0x01438628(*(undefined4 *)(_UNK_02bd728c + 0x2bd6fd8));
    func_0x01438628(*(undefined4 *)(_UNK_02bd7290 + 0x2bd6fe4));
    func_0x01438628(*(undefined4 *)(_UNK_02bd7294 + 0x2bd6ff0));
    *pcVar4 = '\x01';
  }
  uVar6 = 0;
  iVar1 = func_0x02953fd4(0x5cea,0);
  if (iVar1 == 0) {
    if (-1 < param_2) {
      iVar1 = FUN_02bad050(param_1,param_3);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (param_2 < *(int *)(iVar1 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_02bd7298 + 0x2bd709c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bd729c + 0x2bd70b8));
        iVar2 = FUN_02bad050(param_1,param_3);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        puVar7 = *(undefined4 **)(_UNK_02bd72a0 + 0x2bd7100);
        iVar2 = func_0x03b780b0(iVar2,param_2,*puVar7);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar6 = *(undefined4 *)(iVar2 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x029a6fa8(iVar1,uVar6,0);
        if (iVar1 == 0) {
          iVar1 = FUN_02bad050(param_1,param_3);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x03b780b0(iVar1,param_2,*puVar7);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uStack_24 = *(undefined4 *)(iVar1 + 8);
          uVar6 = func_0x01524ffc(&uStack_24,0);
          uVar3 = func_0x014e9568(**(undefined4 **)(_UNK_02bd72a4 + 0x2bd71c8),uVar6,0);
          iVar2 = **(int **)(_UNK_02bd72a8 + 0x2bd71dc);
          iVar1 = *(int *)(iVar2 + 0x1c);
          if (iVar1 == 0) {
            func_0x014909d8(iVar2);
            iVar1 = *(int *)(iVar2 + 0x1c);
          }
          iVar1 = *(int *)(iVar1 + 8);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x0149097c();
          }
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = *(int *)(*(int *)(iVar2 + 0x1c) + 8);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x0149097c();
          }
          uVar5 = **(undefined4 **)(iVar1 + 0x5c);
          if (*(int *)(**(int **)(_UNK_02bd72ac + 0x2bd723c) + 0x74) == 0) {
            func_0x014387a4(**(int **)(_UNK_02bd72ac + 0x2bd723c));
          }
          uVar6 = 0;
          func_0x026794a8(uVar3,uVar5,0);
        }
        else {
          uVar6 = func_0x02bd72b0(param_1,param_2,iVar1,param_3);
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5cea,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x028b7e50(iVar1,param_1,param_2,param_3,0);
  }
  return uVar6;
}

