
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c551f4(undefined4 param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(iRam02c554e8 + 0x2c55210);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c554ec + 0x2c55224));
    func_0x01438628(*(undefined4 *)(_UNK_02c554f0 + 0x2c55230));
    func_0x01438628(*(undefined4 *)(_UNK_02c554f4 + 0x2c5523c));
    func_0x01438628(*(undefined4 *)(_UNK_02c554f8 + 0x2c55248));
    func_0x01438628(*(undefined4 *)(_UNK_02c554fc + 0x2c55254));
    func_0x01438628(*(undefined4 *)(_UNK_02c55500 + 0x2c55260));
    func_0x01438628(*(undefined4 *)(_UNK_02c55504 + 0x2c5526c));
    *pcVar5 = '\x01';
  }
  uStack_1c = 0;
  iVar1 = func_0x02953fd4(0x5f49,0);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = *(int *)(param_2 + 0xc);
    }
    if ((param_2 != 0 && iVar1 != 0) && (2 < *(int *)(iVar1 + 0xc))) {
      if (*(int *)(iVar1 + 0xc) != 3) {
        piVar4 = *(int **)(iVar1 + 0x1c);
        iVar1 = **(int **)(_UNK_02c55508 + 0x2c552f8);
        if (piVar4 == (int *)0x0) {
          func_0x014388e4();
        }
        if (*(int *)(*piVar4 + 0x20) != *(int *)(iVar1 + 0x20)) {
          func_0x01438ca8(piVar4,iVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar2 = (uint *)func_0x014387b0(piVar4);
        if (7 < *puVar2) {
          return;
        }
        if ((1 << (*puVar2 & 0xff) & 0xacU) == 0) {
          return;
        }
      }
      piVar4 = *(int **)(_UNK_02c5550c + 0x2c5534c);
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar6 = *(undefined4 **)(_UNK_02c55510 + 0x2c55368);
      iVar1 = func_0x014e9518(*puVar6);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_02bddd68(iVar1,0,0);
      if (iVar1 != 0) {
        iVar1 = **(int **)(**(int **)(_UNK_02c55514 + 0x2c553a0) + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_02c3d868(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_02c009b8(iVar1,0,1,1,0xffffffff,0);
        if ((iVar1 == 0) || (*(int *)(iVar1 + 0xc) < 2)) {
          if (*(int *)(*piVar4 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(*puVar6);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uStack_1c = FUN_02bdec74(iVar1,0,0);
          if (*(int *)(**(int **)(_UNK_02c55518 + 0x2c55450) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x0202346c(0);
          uVar3 = func_0x01524ffc(&uStack_1c,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x020257a4(iVar1,0x217,uVar3,0,0,0,0);
        }
        FUN_02c53540(param_1,**(undefined4 **)(_UNK_02c5551c + 0x2c554d0));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5f49,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}

