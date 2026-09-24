
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c251d8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_02c25434 + 0x2c251f0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c25438 + 0x2c25204));
    func_0x01438628(*(undefined4 *)(_UNK_02c2543c + 0x2c25210));
    func_0x01438628(*(undefined4 *)(_UNK_02c25440 + 0x2c2521c));
    *pcVar5 = '\x01';
  }
  uVar6 = 0;
  iVar2 = func_0x02953fd4(0xd75,0);
  if (iVar2 == 0) {
    iVar2 = func_0x02c25d60(param_1);
    if (iVar2 != 0) {
      cVar1 = *(char *)(param_1 + 0x118);
      bVar10 = cVar1 == '\0';
      if (bVar10) {
        cVar1 = *(char *)(param_1 + 0x119);
      }
      if (!bVar10 || cVar1 != '\0') {
        piVar8 = *(int **)(_UNK_02c25444 + 0x2c252a4);
        uStack_24 = 0;
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar9 = *(undefined4 **)(_UNK_02c25448 + 0x2c252c4);
        iVar2 = func_0x014e9518(*puVar9);
        uVar3 = FUN_02c19900(param_1);
        uVar7 = *(undefined4 *)(param_1 + 0x1c);
        uVar4 = FUN_02c0c0ac(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = FUN_02bd8b98(iVar2,uVar3,uVar7,&uStack_24,uVar4,0);
        uVar6 = 1;
        if (iVar2 < 1) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(*puVar9);
          uVar4 = *(undefined4 *)(param_1 + 0x1c);
          uVar3 = *(undefined4 *)(param_1 + 0x11c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = FUN_02bd8188(iVar2,uVar3,uVar4,&uStack_24,0);
          if (iVar2 < 1) {
            if (*(char *)(param_1 + 0x119) != '\0') {
              if (*(int *)(*piVar8 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar2 = func_0x014e9518(*puVar9);
              uVar3 = FUN_02c19900(param_1);
              uVar7 = *(undefined4 *)(param_1 + 0x1c);
              uVar4 = FUN_02c0c0ac(param_1);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar2 = FUN_02bd6ae8(iVar2,uVar3,uVar7,&uStack_24,uVar4,0);
              if (0 < iVar2) {
                iVar2 = *(int *)(param_1 + 0x11c);
                if (iVar2 == 0) {
                  func_0x014388e4();
                }
                iVar2 = *(int *)(iVar2 + 0x38);
                if (iVar2 == 0) {
                  func_0x014388e4();
                }
                return (uint)(*(int *)(iVar2 + 0xc) < 1);
              }
            }
            uVar6 = 0;
          }
        }
      }
    }
  }
  else {
    iVar2 = func_0x029540a4(0xd75,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x02869630(iVar2,param_1,0);
  }
  return uVar6;
}

