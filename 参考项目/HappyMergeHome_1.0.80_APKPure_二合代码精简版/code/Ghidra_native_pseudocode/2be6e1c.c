
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bf6e1c(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uStack_28;
  uint uStack_24;
  
  pcVar6 = (char *)(_UNK_02bf7214 + 0x2bf6e3c);
  uStack_24 = param_2;
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bf7218 + 0x2bf6e50));
    func_0x01438628(*(undefined4 *)(_UNK_02bf721c + 0x2bf6e5c));
    func_0x01438628(*(undefined4 *)(_UNK_02bf7220 + 0x2bf6e68));
    func_0x01438628(*(undefined4 *)(_UNK_02bf7224 + 0x2bf6e74));
    *pcVar6 = '\x01';
  }
  uStack_28 = 0;
  iVar2 = func_0x02953fd4(0x5d6d,0);
  if (iVar2 == 0) {
    piVar9 = *(int **)(_UNK_02bf7228 + 0x2bf6edc);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar10 = *(undefined4 **)(_UNK_02bf722c + 0x2bf6ef8);
    iVar2 = func_0x014e9518(*puVar10);
    uVar8 = *(undefined4 *)(param_1 + 0x10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar3 = 0;
    iVar2 = FUN_02bad204(iVar2,param_2,uVar8,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar2 + 8) != -1) {
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e9518(*puVar10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar3 = 0;
      iVar4 = FUN_02bd11ec(iVar4,iVar2,0);
      if (iVar4 != 0) {
        FUN_026f6bf8(iVar2,*(undefined4 *)(iVar2 + 0x10),0);
        if (*(int *)(*piVar9 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x014e9518(*puVar10);
        uVar8 = *(undefined4 *)(param_1 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        uVar3 = 0;
        FUN_02bd1a34(iVar4,param_2,iVar2,4,uVar8,1,0xffffffff,0);
        iVar4 = *(int *)(param_1 + 0x44);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar4 + 0xc) <= param_2) {
          func_0x014388e8();
        }
        iVar4 = *(int *)(iVar4 + param_2 * 4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        uVar8 = *(undefined4 *)(iVar4 + 0xc);
        if (*(int *)(**(int **)(_UNK_02bf7230 + 0x2bf703c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x024ef144(uVar8,0,0);
        if (iVar4 != 0) {
          iVar4 = *(int *)(param_1 + 0x44);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar4 + 0xc) <= param_2) {
            func_0x014388e8();
          }
          iVar4 = *(int *)(iVar4 + param_2 * 4 + 0x10);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = *(int *)(iVar4 + 0xc);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          func_0x02c28968(iVar4,0);
          iVar4 = *(int *)(param_1 + 0x44);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar4 + 0xc) <= param_2) {
            func_0x014388e8();
          }
          iVar4 = *(int *)(iVar4 + param_2 * 4 + 0x10);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = *(int *)(iVar4 + 0xc);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          func_0x02c1c2ec(iVar4,0);
          if (*(int *)(**(int **)(_UNK_02bf7234 + 0x2bf7114) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x0202346c(0);
          uVar8 = func_0x01524ffc(&uStack_24,0);
          uVar1 = uStack_24;
          iVar7 = *(int *)(param_1 + 0x44);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar7 + 0xc) <= uVar1) {
            func_0x014388e8();
          }
          iVar7 = *(int *)(iVar7 + uVar1 * 4 + 0x10);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar7 + 0xc);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          uStack_28 = func_0x02c1969c(iVar7,0);
          uVar5 = func_0x01524ffc(&uStack_28,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          func_0x020257a4(iVar4,0x218,uVar8,uVar5,0,0,0,uVar3,0,0,0,0,0);
        }
        uVar3 = 1;
        if (*(int *)(iVar2 + 0x10) == 1) {
          FUN_02bf6cf8(param_1,uStack_24);
        }
      }
    }
  }
  else {
    iVar2 = func_0x029540a4(0x5d6d,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x02873a70(iVar2,param_1,param_2,0);
  }
  return uVar3;
}

