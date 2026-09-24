/* Ghidra 12.1.2 native pseudocode; RVA 0x5F15D08; Entities.ExcludeDelegate..ctor; status ok */


void Entities_ExcludeDelegate___ctor(long param_1,long param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  
  uVar4 = *(undefined8 *)(param_3 + 8);
  *(long *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(long *)(param_1 + 0x20) = param_2;
  func_0x032809c4();
  cVar1 = *(char *)(param_3 + 0x52);
  *(long *)(param_1 + 0x40) = param_1;
  uVar2 = func_0x03280b14(param_3);
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\0') {
      if (param_2 == 0) {
        uVar4 = func_0x03280cc8(0,&UNK_017ad5af);
        auVar6 = func_0x03280b7c(uVar4,0);
        lVar3 = auVar6._0_8_;
                    /* WARNING: Could not recover jumptable at 0x06015dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 0x18))
                  (*(undefined8 *)(lVar3 + 0x40),auVar6._8_8_,*(undefined8 *)(lVar3 + 0x28));
        return;
      }
      goto LAB_06015d64;
    }
    puVar5 = &UNK_031fb4b8;
  }
  else {
    if (cVar1 != '\x01') {
LAB_06015d64:
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x20);
      goto LAB_06015d84;
    }
    puVar5 = &UNK_031fb4d8;
  }
  *(undefined **)(param_1 + 0x18) = puVar5;
LAB_06015d84:
  *(undefined **)(param_1 + 0x38) = &UNK_031fb464;
  return;
}

